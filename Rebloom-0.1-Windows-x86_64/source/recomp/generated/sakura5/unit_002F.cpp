#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001DC000;
    case 2u: goto L_001DC02C;
    case 3u: goto L_001DC060;
    case 4u: goto L_001DC068;
    case 5u: goto L_001DC070;
    case 6u: goto L_001DC088;
    case 7u: goto L_001DC0FC;
    case 8u: goto L_001DC10C;
    case 9u: goto L_001DC14C;
    case 10u: goto L_001DC17C;
    case 11u: goto L_001DC1A0;
    case 12u: goto L_001DC1D0;
    case 13u: goto L_001DC1EC;
    case 14u: goto L_001DC244;
    case 15u: goto L_001DC284;
    case 16u: goto L_001DC2C8;
    case 17u: goto L_001DC3D8;
    case 18u: goto L_001DC420;
    case 19u: goto L_001DC444;
    case 20u: goto L_001DC460;
    case 21u: goto L_001DC47C;
    case 22u: goto L_001DC4D4;
    case 23u: goto L_001DC514;
    case 24u: goto L_001DC558;
    case 25u: goto L_001DC654;
    case 26u: goto L_001DC69C;
    case 27u: goto L_001DC6C0;
    case 28u: goto L_001DC6E0;
    case 29u: goto L_001DC6F8;
    case 30u: goto L_001DC72C;
    case 31u: goto L_001DC754;
    case 32u: goto L_001DC760;
    case 33u: goto L_001DC780;
    case 34u: goto L_001DC7A8;
    case 35u: goto L_001DC7CC;
    case 36u: goto L_001DC7E0;
    case 37u: goto L_001DC7FC;
    case 38u: goto L_001DC824;
    case 39u: goto L_001DC844;
    case 40u: goto L_001DC8A4;
    case 41u: goto L_001DC8B0;
    case 42u: goto L_001DC910;
    case 43u: goto L_001DC938;
    case 44u: goto L_001DC95C;
    case 45u: goto L_001DC970;
    case 46u: goto L_001DCA28;
    case 47u: goto L_001DCA38;
    case 48u: goto L_001DCA48;
    case 49u: goto L_001DCA58;
    case 50u: goto L_001DCA6C;
    case 51u: goto L_001DCA90;
    case 52u: goto L_001DCAB4;
    case 53u: goto L_001DCAE4;
    case 54u: goto L_001DCB08;
    case 55u: goto L_001DCB20;
    case 56u: goto L_001DCB38;
    case 57u: goto L_001DCB88;
    case 58u: goto L_001DCBD0;
    case 59u: goto L_001DCBF4;
    case 60u: goto L_001DCC10;
    case 61u: goto L_001DCC78;
    case 62u: goto L_001DCCA0;
    case 63u: goto L_001DCCD8;
    case 64u: goto L_001DCCFC;
    case 65u: goto L_001DCD20;
    case 66u: goto L_001DCD38;
    case 67u: goto L_001DCD88;
    case 68u: goto L_001DCDD0;
    case 69u: goto L_001DCDF4;
    case 70u: goto L_001DCE10;
    case 71u: goto L_001DCE28;
    case 72u: goto L_001DCE5C;
    case 73u: goto L_001DCEA0;
    case 74u: goto L_001DCEE8;
    case 75u: goto L_001DCF0C;
    case 76u: goto L_001DCF20;
    case 77u: goto L_001DCF38;
    case 78u: goto L_001DCF70;
    case 79u: goto L_001DCF94;
    case 80u: goto L_001DCFB8;
    case 81u: goto L_001DCFD0;
    case 82u: goto L_001DCFE8;
    case 83u: goto L_001DD010;
    case 84u: goto L_001DD058;
    case 85u: goto L_001DD07C;
    case 86u: goto L_001DD090;
    case 87u: goto L_001DD0A8;
    case 88u: goto L_001DD148;
    case 89u: goto L_001DD1A0;
    case 90u: goto L_001DD1C4;
    case 91u: goto L_001DD1E8;
    case 92u: goto L_001DD200;
    case 93u: goto L_001DD218;
    case 94u: goto L_001DD220;
    case 95u: goto L_001DD244;
    case 96u: goto L_001DD268;
    case 97u: goto L_001DD280;
    case 98u: goto L_001DD2C0;
    case 99u: goto L_001DD2E4;
    case 100u: goto L_001DD308;
    case 101u: goto L_001DD320;
    case 102u: goto L_001DD334;
    case 103u: goto L_001DD358;
    case 104u: goto L_001DD37C;
    case 105u: goto L_001DD390;
    case 106u: goto L_001DD3A8;
    case 107u: goto L_001DD3B4;
    case 108u: goto L_001DD3D8;
    case 109u: goto L_001DD3FC;
    case 110u: goto L_001DD410;
    case 111u: goto L_001DD434;
    case 112u: goto L_001DD440;
    case 113u: goto L_001DD450;
    case 114u: goto L_001DD490;
    case 115u: goto L_001DD49C;
    case 116u: goto L_001DD558;
    case 117u: goto L_001DD568;
    case 118u: goto L_001DD598;
    case 119u: goto L_001DD5BC;
    case 120u: goto L_001DD5E0;
    case 121u: goto L_001DD5FC;
    case 122u: goto L_001DD640;
    case 123u: goto L_001DD658;
    case 124u: goto L_001DD67C;
    case 125u: goto L_001DD6A0;
    case 126u: goto L_001DD724;
    case 127u: goto L_001DD734;
    case 128u: goto L_001DD7A8;
    case 129u: goto L_001DD7CC;
    case 130u: goto L_001DD7F0;
    case 131u: goto L_001DD810;
    case 132u: goto L_001DD828;
    case 133u: goto L_001DD86C;
    case 134u: goto L_001DD880;
    case 135u: goto L_001DD8A4;
    case 136u: goto L_001DD8C8;
    case 137u: goto L_001DD914;
    case 138u: goto L_001DD928;
    case 139u: goto L_001DD94C;
    case 140u: goto L_001DD970;
    case 141u: goto L_001DDA70;
    case 142u: goto L_001DDA94;
    case 143u: goto L_001DDAB8;
    case 144u: goto L_001DDAD0;
    case 145u: goto L_001DDAE8;
    case 146u: goto L_001DDB2C;
    case 147u: goto L_001DDB40;
    case 148u: goto L_001DDB64;
    case 149u: goto L_001DDB88;
    case 150u: goto L_001DDC10;
    case 151u: goto L_001DDC34;
    case 152u: goto L_001DDC58;
    case 153u: goto L_001DDC70;
    case 154u: goto L_001DDC88;
    case 155u: goto L_001DDCC4;
    case 156u: goto L_001DDD04;
    case 157u: goto L_001DDD28;
    case 158u: goto L_001DDD40;
    case 159u: goto L_001DDD5C;
    case 160u: goto L_001DDD90;
    case 161u: goto L_001DDDC8;
    case 162u: goto L_001DDDEC;
    case 163u: goto L_001DDE10;
    case 164u: goto L_001DDE5C;
    case 165u: goto L_001DDE80;
    case 166u: goto L_001DDEA4;
    case 167u: goto L_001DDEC0;
    case 168u: goto L_001DDED8;
    case 169u: goto L_001DDF44;
    case 170u: goto L_001DDF9C;
    case 171u: goto L_001DDFC0;
    case 172u: goto L_001DDFE4;
    case 173u: goto L_001DE000;
    case 174u: goto L_001DE018;
    case 175u: goto L_001DE078;
    case 176u: goto L_001DE09C;
    case 177u: goto L_001DE0C0;
    case 178u: goto L_001DE0D0;
    case 179u: goto L_001DE0EC;
    case 180u: goto L_001DE12C;
    case 181u: goto L_001DE190;
    case 182u: goto L_001DE1B4;
    case 183u: goto L_001DE1D8;
    case 184u: goto L_001DE1F0;
    case 185u: goto L_001DE208;
    case 186u: goto L_001DE354;
    case 187u: goto L_001DE3CC;
    case 188u: goto L_001DE3F0;
    case 189u: goto L_001DE410;
    case 190u: goto L_001DE43C;
    case 191u: goto L_001DE460;
    case 192u: goto L_001DE470;
    case 193u: goto L_001DE4A0;
    case 194u: goto L_001DE538;
    case 195u: goto L_001DE548;
    case 196u: goto L_001DE610;
    case 197u: goto L_001DE620;
    case 198u: goto L_001DE668;
    case 199u: goto L_001DE67C;
    case 200u: goto L_001DE694;
    case 201u: goto L_001DE6A8;
    case 202u: goto L_001DE6CC;
    case 203u: goto L_001DE6F0;
    case 204u: goto L_001DE714;
    case 205u: goto L_001DE728;
    case 206u: goto L_001DE7C8;
    case 207u: goto L_001DE7D8;
    case 208u: goto L_001DE878;
    case 209u: goto L_001DE918;
    case 210u: goto L_001DE964;
    case 211u: goto L_001DE9B8;
    case 212u: goto L_001DEA14;
    case 213u: goto L_001DEA3C;
    case 214u: goto L_001DEA60;
    case 215u: goto L_001DEA90;
    case 216u: goto L_001DEAC0;
    case 217u: goto L_001DEAD0;
    case 218u: goto L_001DEADC;
    case 219u: goto L_001DEB48;
    case 220u: goto L_001DEBA0;
    case 221u: goto L_001DEBC8;
    case 222u: goto L_001DEBEC;
    case 223u: goto L_001DEC04;
    case 224u: goto L_001DEC18;
    case 225u: goto L_001DECB8;
    case 226u: goto L_001DECC8;
    case 227u: goto L_001DED68;
    case 228u: goto L_001DEDBC;
    case 229u: goto L_001DEDE4;
    case 230u: goto L_001DEE08;
    case 231u: goto L_001DEE30;
    case 232u: goto L_001DEE68;
    case 233u: goto L_001DEE74;
    case 234u: goto L_001DEEA0;
    case 235u: goto L_001DEEAC;
    case 236u: goto L_001DEF18;
    case 237u: goto L_001DEF6C;
    case 238u: goto L_001DEF94;
    case 239u: goto L_001DEFB8;
    case 240u: goto L_001DF044;
    case 241u: goto L_001DF054;
    case 242u: goto L_001DF11C;
    case 243u: goto L_001DF12C;
    case 244u: goto L_001DF174;
    case 245u: goto L_001DF188;
    case 246u: goto L_001DF1A0;
    case 247u: goto L_001DF1B8;
    case 248u: goto L_001DF1DC;
    case 249u: goto L_001DF200;
    case 250u: goto L_001DF224;
    case 251u: goto L_001DF23C;
    case 252u: goto L_001DF260;
    case 253u: goto L_001DF284;
    case 254u: goto L_001DF338;
    case 255u: goto L_001DF384;
    case 256u: goto L_001DF3D8;
    case 257u: goto L_001DF438;
    case 258u: goto L_001DF48C;
    case 259u: goto L_001DF4B0;
    case 260u: goto L_001DF4D4;
    case 261u: goto L_001DF510;
    case 262u: goto L_001DF530;
    case 263u: goto L_001DF53C;
    case 264u: goto L_001DF56C;
    case 265u: goto L_001DF5BC;
    case 266u: goto L_001DF60C;
    case 267u: goto L_001DF630;
    case 268u: goto L_001DF654;
    case 269u: goto L_001DF678;
    case 270u: goto L_001DF690;
    case 271u: goto L_001DF6A0;
    case 272u: goto L_001DF6B4;
    case 273u: goto L_001DF6E8;
    case 274u: goto L_001DF720;
    case 275u: goto L_001DF774;
    case 276u: goto L_001DF7B0;
    case 277u: goto L_001DF7C8;
    case 278u: goto L_001DF7E0;
    case 279u: goto L_001DF800;
    case 280u: goto L_001DF820;
    case 281u: goto L_001DF884;
    case 282u: goto L_001DF8C0;
    case 283u: goto L_001DF8D8;
    case 284u: goto L_001DF8F0;
    case 285u: goto L_001DF910;
    case 286u: goto L_001DF920;
    case 287u: goto L_001DF930;
    case 288u: goto L_001DF97C;
    case 289u: goto L_001DF990;
    case 290u: goto L_001DF9A8;
    case 291u: goto L_001DF9BC;
    case 292u: goto L_001DF9CC;
    case 293u: goto L_001DF9E0;
    case 294u: goto L_001DFA0C;
    case 295u: goto L_001DFA18;
    case 296u: goto L_001DFA30;
    case 297u: goto L_001DFA50;
    case 298u: goto L_001DFA60;
    case 299u: goto L_001DFA84;
    case 300u: goto L_001DFA90;
    case 301u: goto L_001DFA98;
    case 302u: goto L_001DFAC0;
    case 303u: goto L_001DFAF4;
    case 304u: goto L_001DFB10;
    case 305u: goto L_001DFB34;
    case 306u: goto L_001DFB50;
    case 307u: goto L_001DFB64;
    case 308u: goto L_001DFBA0;
    case 309u: goto L_001DFBD4;
    case 310u: goto L_001DFBE0;
    case 311u: goto L_001DFC18;
    case 312u: goto L_001DFC2C;
    case 313u: goto L_001DFC40;
    case 314u: goto L_001DFC60;
    case 315u: goto L_001DFC98;
    case 316u: goto L_001DFCC0;
    case 317u: goto L_001DFCD0;
    case 318u: goto L_001DFCF0;
    case 319u: goto L_001DFCF8;
    case 320u: goto L_001DFD30;
    case 321u: goto L_001DFD4C;
    case 322u: goto L_001DFD74;
    case 323u: goto L_001DFD90;
    case 324u: goto L_001DFDA8;
    case 325u: goto L_001DFDD0;
    case 326u: goto L_001DFDD8;
    case 327u: goto L_001DFE00;
    case 328u: goto L_001DFE14;
    case 329u: goto L_001DFE24;
    case 330u: goto L_001DFE50;
    case 331u: goto L_001DFE88;
    case 332u: goto L_001DFEBC;
    case 333u: goto L_001DFED8;
    case 334u: goto L_001DFF04;
    case 335u: goto L_001DFF20;
    case 336u: goto L_001DFF50;
    case 337u: goto L_001DFF5C;
    case 338u: goto L_001DFF64;
    case 339u: goto L_001DFF98;
    case 340u: goto L_001DFFB4;
    case 341u: goto L_001DFFE4;
    case 342u: goto L_001DFFF4;
    default: bad_entry(c, 0x001DC000u); return;
    }
L_001DC000:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC02Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DC02Cu) [[unlikely]] return; }
L_001DC02C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DC040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DC058; } }
L_001DC040:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DC058; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DC058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC060u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DC060u) [[unlikely]] return; }
L_001DC060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DC150; } }
L_001DC068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC070u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001DC070u) [[unlikely]] return; }
L_001DC070:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_001DC11C; }
    set32(c.r[20], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 4u);  if (t) { goto L_001DC110; } }
L_001DC088:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC098; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DC0AC; } }
L_001DC098:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DC0AC; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001DC0AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC0C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_001DC0D4; } }
L_001DC0C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_001DC0D4; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 3;
L_001DC0D4:
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[7].d[0] = c.r[21].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC0FCu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_002B(c, 411u, depth + 1u); else { c.pc = 0x001CFAF0u; return; } if (c.pc != 0x001DC0FCu) [[unlikely]] return; }
L_001DC0FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC10Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001DC10Cu) [[unlikely]] return; }
L_001DC10C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DC110:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC088u | kUnwind; return; } goto L_001DC088; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_001DC11C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DC140; } }
L_001DC12C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DC140; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DC140:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC14Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DC14Cu) [[unlikely]] return; }
L_001DC14C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DC150:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC068u | kUnwind; return; } goto L_001DC068; }
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC17Cu); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DC17Cu) [[unlikely]] return; }
L_001DC17C:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001DC1A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DC1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC1A0u) [[unlikely]] return; }
L_001DC1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DC1A4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DC1D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1ECu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DC1ECu) [[unlikely]] return; }
L_001DC1EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DC3E8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DC20C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DC448; } }
L_001DC20C:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DC24C; }
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_001DC248; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DC244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC244u) [[unlikely]] return; }
L_001DC244:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_001DC248:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001DC24C:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DC28C; }
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), 0u);  goto L_001DC288; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DC284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC284u) [[unlikely]] return; }
L_001DC284:
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 1;
L_001DC288:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001DC28C:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001DC2D0; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_001DC2CC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DC2C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC2C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC2C8u) [[unlikely]] return; }
L_001DC2C8:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_001DC2CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001DC2D0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC2E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DC2F4; } }
L_001DC2E0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DC2F4; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DC2F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001DC31C; } }
L_001DC308:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001DC31C; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001DC31C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001DC344; } }
L_001DC330:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DC344; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001DC344:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_001DC36C; } }
L_001DC358:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DC36C; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DC36C:
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_001DC388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001DC3A0; } }
L_001DC388:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[11].d[0] = 0ull + 0ull;  goto L_001DC3A0; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    c.budget -= 3;
L_001DC3A0:
    c.r[10].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3D8u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 419u, depth + 1u); else { c.pc = 0x001CFC90u; return; } if (c.pc != 0x001DC3D8u) [[unlikely]] return; }
L_001DC3D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DC444; } }
L_001DC3E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC444; } }
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC420u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DC420u) [[unlikely]] return; }
L_001DC420:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DC444; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DC444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC444u) [[unlikely]] return; }
L_001DC444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DC448:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DC460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC47Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DC47Cu) [[unlikely]] return; }
L_001DC47C:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DC664; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DC49C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DC6C4; } }
L_001DC49C:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DC4DC; }
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_001DC4D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DC4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC4D4u) [[unlikely]] return; }
L_001DC4D4:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_001DC4D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001DC4DC:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DC51C; }
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), 0u);  goto L_001DC518; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DC514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC514u) [[unlikely]] return; }
L_001DC514:
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 1;
L_001DC518:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001DC51C:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001DC560; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_001DC55C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DC558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC558u) [[unlikely]] return; }
L_001DC558:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_001DC55C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001DC560:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DC584; } }
L_001DC570:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DC584; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DC584:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001DC5AC; } }
L_001DC598:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001DC5AC; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001DC5AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC5C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001DC5D4; } }
L_001DC5C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DC5D4; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001DC5D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC5E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001DC5FC; } }
L_001DC5E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DC5FC; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DC5FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DC610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_001DC624; } }
L_001DC610:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_001DC624; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 3;
L_001DC624:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC654u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 415u, depth + 1u); else { c.pc = 0x001CFBB0u; return; } if (c.pc != 0x001DC654u) [[unlikely]] return; }
L_001DC654:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DC6C0; } }
L_001DC664:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC6C0; } }
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC69Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DC69Cu) [[unlikely]] return; }
L_001DC69C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DC6C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DC6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC6C0u) [[unlikely]] return; }
L_001DC6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DC6C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DC6E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6F8u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DC6F8u) [[unlikely]] return; }
L_001DC6F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DC770; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_001DC73C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);  goto L_001DC724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DC7D0; } }
L_001DC724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC72Cu); c.r[5].d[0] = c.r[2].d[0] | 4102ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DC72Cu) [[unlikely]] return; }
L_001DC72C:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DC7CC; } }
L_001DC73C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC754u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x001DC754u) [[unlikely]] return; }
L_001DC754:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC760u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x001DC760u) [[unlikely]] return; }
L_001DC760:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DC7CC; } }
L_001DC770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC780u); c.r[5].d[0] = c.r[2].d[0] | 4102ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DC780u) [[unlikely]] return; }
L_001DC780:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7A8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DC7A8u) [[unlikely]] return; }
L_001DC7A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DC7CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DC7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC7CCu) [[unlikely]] return; }
L_001DC7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DC7D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DC7E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7FCu); set32(c.r[4], 0u + 282u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DC7FCu) [[unlikely]] return; }
L_001DC7FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DC8C0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001DC81C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DC960; } }
L_001DC81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC824u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001DC824u) [[unlikely]] return; }
L_001DC824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001DC888; } }
L_001DC844:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_001DC878; } }
L_001DC864:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DC878; }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001DC878:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 88u), c.r[4].w[0]);
    c.budget -= 4;
L_001DC888:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC844u | kUnwind; return; } goto L_001DC844; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8A4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001DC8A4u) [[unlikely]] return; }
L_001DC8A4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001DC8B0u) [[unlikely]] return; }
L_001DC8B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DC95C; } }
L_001DC8C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC95C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC95C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011A0000u);
    c.r[5].d[0] = c.r[2].d[0] | 4097ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DC910u) [[unlikely]] return; }
L_001DC910:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC938u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DC938u) [[unlikely]] return; }
L_001DC938:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DC95C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DC95C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC95Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DC95Cu) [[unlikely]] return; }
L_001DC95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DC960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DC970:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001DC9B4; } }
L_001DC990:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DC9B4; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_001DC9B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DC9B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_001DC9B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] << (c.r[4].w[0] & 63u);  if (t) { goto L_001DC9CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DC9EC; } }
L_001DC9CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001DC9EC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001DC9F0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DC9EC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001DC9F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DCA50; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DCA40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DCA30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DCA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCA60; } }
L_001DCA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA28u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x001DCA28u) [[unlikely]] return; }
L_001DCA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_001DCAC0; } }
L_001DCA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA38u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x001DCA38u) [[unlikely]] return; }
L_001DCA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCABC; } }
L_001DCA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA48u);  if (depth < kMaxDepth) unit_002B(c, 332u, depth + 1u); else { c.pc = 0x001CEE00u; return; } if (c.pc != 0x001DCA48u) [[unlikely]] return; }
L_001DCA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCABC; } }
L_001DCA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA58u);  if (depth < kMaxDepth) unit_002B(c, 333u, depth + 1u); else { c.pc = 0x001CEE30u; return; } if (c.pc != 0x001DCA58u) [[unlikely]] return; }
L_001DCA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCABC; } }
L_001DCA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA6Cu); set32(c.r[4], c.r[4].w[0] + 20622u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DCA6Cu) [[unlikely]] return; }
L_001DCA6C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA90u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCA90u) [[unlikely]] return; }
L_001DCA90:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DCB0C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCAB4u) [[unlikely]] return; }
L_001DCAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCB08; } }
L_001DCABC:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_001DCAC0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAE4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCAE4u) [[unlikely]] return; }
L_001DCAE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DCB08; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCB08u) [[unlikely]] return; }
L_001DCB08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DCB0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DCB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB38u); set32(c.r[4], 0u + 279u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DCB38u) [[unlikely]] return; }
L_001DCB38:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DCB98; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001DCB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DCBF8; } }
L_001DCB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DCB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DCB7C; } }
L_001DCB68:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DCB7C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DCB7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB88u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DCB88u) [[unlikely]] return; }
L_001DCB88:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DCBF4; } }
L_001DCB98:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DCBF4; } }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBD0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCBD0u) [[unlikely]] return; }
L_001DCBD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DCBF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCBF4u) [[unlikely]] return; }
L_001DCBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DCBF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DCC10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DCC3C; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DCC54; } }
L_001DCC3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DCC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_001DCC54; } }
L_001DCC50:
    c.f[20] = 0u;
    c.budget -= 1;
L_001DCC54:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001DCC70; } }
    set32(c.r[17], 0u + 1u);
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 2;
L_001DCC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC78u); set32(c.r[4], 0u + 290u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DCC78u) [[unlikely]] return; }
L_001DCC78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 660u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01220000u);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 1616u)));
    st32((c.r[29].w[0] + 92u), c.f[20]);
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCA0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001DCCA0u) [[unlikely]] return; }
L_001DCCA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 660u)));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[3], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCD8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCCD8u) [[unlikely]] return; }
L_001DCCD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001DCD00; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCCFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCCFCu) [[unlikely]] return; }
L_001DCCFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001DCD00:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DCD20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD38u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DCD38u) [[unlikely]] return; }
L_001DCD38:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DCD98; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001DCD58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DCDF8; } }
L_001DCD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DCD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DCD7C; } }
L_001DCD68:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DCD7C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DCD7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD88u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DCD88u) [[unlikely]] return; }
L_001DCD88:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DCDF4; } }
L_001DCD98:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DCDF4; } }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDD0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCDD0u) [[unlikely]] return; }
L_001DCDD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DCDF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCDF4u) [[unlikely]] return; }
L_001DCDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DCDF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DCE10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE28u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DCE28u) [[unlikely]] return; }
L_001DCE28:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DCEB0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_001DCE48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DCF10; } }
L_001DCE48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001DCE64; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE5Cu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x001DCE5Cu) [[unlikely]] return; }
L_001DCE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 704u)));  if (t) { goto L_001DCEA4; } }
L_001DCE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DCE78; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DCE8C; } }
L_001DCE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DCE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_001DCE8C; } }
L_001DCE88:
    c.f[0] = 0u;
    c.budget -= 1;
L_001DCE8C:
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCEA0u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DCEA0u) [[unlikely]] return; }
L_001DCEA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    c.budget -= 1;
L_001DCEA4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DCF0C; } }
L_001DCEB0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DCF0C; } }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCEE8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCEE8u) [[unlikely]] return; }
L_001DCEE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DCF0C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCF0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCF0Cu) [[unlikely]] return; }
L_001DCF0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DCF10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DCF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF38u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DCF38u) [[unlikely]] return; }
L_001DCF38:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DCF4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DCF60; } }
L_001DCF4C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DCF60; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DCF60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF70u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DCF70u) [[unlikely]] return; }
L_001DCF70:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF94u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DCF94u) [[unlikely]] return; }
L_001DCF94:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DCFBC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DCFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DCFB8u) [[unlikely]] return; }
L_001DCFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DCFBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DCFD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFE8u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DCFE8u) [[unlikely]] return; }
L_001DCFE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DD020; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);  goto L_001DD008; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DD080; } }
L_001DD008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD010u); c.r[5].d[0] = c.r[2].d[0] | 4100ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x001DD010u) [[unlikely]] return; }
L_001DD010:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DD07C; } }
L_001DD020:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD07C; } }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD058u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD058u) [[unlikely]] return; }
L_001DD058:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DD07C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD07Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD07Cu) [[unlikely]] return; }
L_001DD07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DD080:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD0A8u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD0A8u) [[unlikely]] return; }
L_001DD0A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_001DD150; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD0D0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DD0E4; } }
L_001DD0D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_001DD0E4; } }
L_001DD0E0:
    c.f[1] = 0u;
    c.budget -= 1;
L_001DD0E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 60u), c.f[0]);  if (t) { goto L_001DD114; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DD12C; } }
L_001DD114:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_001DD12C; } }
L_001DD128:
    c.f[0] = 0u;
    c.budget -= 1;
L_001DD12C:
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD148u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001DD148u) [[unlikely]] return; }
L_001DD148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_001DD1A4; } }
L_001DD150:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD164; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DD178; } }
L_001DD164:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_001DD178; } }
L_001DD174:
    c.f[1] = 0u;
    c.budget -= 1;
L_001DD178:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1A0u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DD1A0u) [[unlikely]] return; }
L_001DD1A0:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_001DD1A4:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1C4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD1C4u) [[unlikely]] return; }
L_001DD1C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DD1EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD1E8u) [[unlikely]] return; }
L_001DD1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DD1EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD218u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD218u) [[unlikely]] return; }
L_001DD218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD220u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001ECBC0u; return; } if (c.pc != 0x001DD220u) [[unlikely]] return; }
L_001DD220:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD244u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD244u) [[unlikely]] return; }
L_001DD244:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DD26C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD268u) [[unlikely]] return; }
L_001DD268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DD26C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DD2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DD2B8; } }
L_001DD2A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DD2B8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001DD2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD2C0u);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x001DD2C0u) [[unlikely]] return; }
L_001DD2C0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD2E4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD2E4u) [[unlikely]] return; }
L_001DD2E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DD30C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD308u) [[unlikely]] return; }
L_001DD308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DD30C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 38u, depth + 1u); else { c.pc = 0x00214590u; return; } if (c.pc != 0x001DD334u) [[unlikely]] return; }
L_001DD334:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD358u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD358u) [[unlikely]] return; }
L_001DD358:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DD380; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD37C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD37Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD37Cu) [[unlikely]] return; }
L_001DD37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DD380:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3A8u); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD3A8u) [[unlikely]] return; }
L_001DD3A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 304u, depth + 1u); else { c.pc = 0x001DFB10u; return; } if (c.pc != 0x001DD3B4u) [[unlikely]] return; }
L_001DD3B4:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3D8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD3D8u) [[unlikely]] return; }
L_001DD3D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DD400; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD3FCu) [[unlikely]] return; }
L_001DD3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DD400:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 264u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD434u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD434u) [[unlikely]] return; }
L_001DD434:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD440u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD440u) [[unlikely]] return; }
L_001DD440:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DD450u) [[unlikely]] return; }
L_001DD450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DD56C; } }
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), 0u);  goto L_001DD56C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DD490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD490u) [[unlikely]] return; }
L_001DD490:
    st32((c.r[19].w[0] + 64u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD56C; } }
L_001DD49C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DD4AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DD4C0; } }
L_001DD4AC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001DD4C0; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001DD4C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_001DD500; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 160u)));  if (t) { goto L_001DD4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DD4F4; } }
L_001DD4DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DD4F4; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_001DD4F4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001DD55C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_001DD500:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 160u)));  if (t) { goto L_001DD510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DD528; } }
L_001DD510:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DD528; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DD528:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DD53C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_001DD550; } }
L_001DD53C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001DD550; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001DD550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD558u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 308u, depth + 1u); else { c.pc = 0x001DFBA0u; return; } if (c.pc != 0x001DD558u) [[unlikely]] return; }
L_001DD558:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DD55C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD568u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DD568u) [[unlikely]] return; }
L_001DD568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DD56C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD49Cu | kUnwind; return; } goto L_001DD49C; }
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD598u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD598u) [[unlikely]] return; }
L_001DD598:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001DD5C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD5BCu) [[unlikely]] return; }
L_001DD5BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DD5C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DD5E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5FCu); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD5FCu) [[unlikely]] return; }
L_001DD5FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DD634; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD614:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DD634; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DD638; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD634:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DD638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD640u);  if (depth < kMaxDepth) unit_002F(c, 316u, depth + 1u); else { c.pc = 0x001DFCC0u; return; } if (c.pc != 0x001DD640u) [[unlikely]] return; }
L_001DD640:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001DD6AC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD658u); set32(c.r[4], c.r[4].w[0] + 20646u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DD658u) [[unlikely]] return; }
L_001DD658:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD67Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD67Cu) [[unlikely]] return; }
L_001DD67C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001DD7F4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD6A0u) [[unlikely]] return; }
L_001DD6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD7F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001DD6AC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DD6C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001DD6E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DD6C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DD6E0; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_001DD6E4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD6E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_001DD6E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DD6F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_001DD718; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DD6F8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DD718; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DD71C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD718:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DD71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD724u);  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x00212D50u; return; } if (c.pc != 0x001DD724u) [[unlikely]] return; }
L_001DD724:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD734u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x001DD734u) [[unlikely]] return; }
L_001DD734:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD750; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DD764; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD750:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 80u));  if (t) { goto L_001DD764; } }
L_001DD760:
    c.f[12] = 0u;
    c.budget -= 1;
L_001DD764:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD77C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 100u)));  if (t) { goto L_001DD79C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD77C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DD79C; }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DD7A0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD79C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DD7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7A8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003C(c, 203u, depth + 1u); else { c.pc = 0x002125C0u; return; } if (c.pc != 0x001DD7A8u) [[unlikely]] return; }
L_001DD7A8:
    st32((c.r[29].w[0] + 48u), c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7CCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD7CCu) [[unlikely]] return; }
L_001DD7CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DD7F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DD7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD7F0u) [[unlikely]] return; }
L_001DD7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DD7F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DD810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD828u); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DD828u) [[unlikely]] return; }
L_001DD828:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DD860; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD840:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DD860; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DD864; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD860:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DD864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD86Cu);  if (depth < kMaxDepth) unit_002F(c, 316u, depth + 1u); else { c.pc = 0x001DFCC0u; return; } if (c.pc != 0x001DD86Cu) [[unlikely]] return; }
L_001DD86C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_001DD8D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD880u); set32(c.r[4], c.r[4].w[0] + 20646u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DD880u) [[unlikely]] return; }
L_001DD880:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD8A4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD8A4u) [[unlikely]] return; }
L_001DD8A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DDABC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD8C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD8C8u) [[unlikely]] return; }
L_001DD8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDAB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001DD8D4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD8E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001DD908; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD8E8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DD908; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DD90C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD908:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DD90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD914u);  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x001DD914u) [[unlikely]] return; }
L_001DD914:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_001DD97C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD928u); set32(c.r[4], c.r[4].w[0] + 20663u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DD928u) [[unlikely]] return; }
L_001DD928:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD94Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DD94Cu) [[unlikely]] return; }
L_001DD94C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DDAB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DD970u) [[unlikely]] return; }
L_001DD970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDAB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_001DD97C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD994; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DD9A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD994:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_001DD9A8; } }
L_001DD9A4:
    c.f[12] = 0u;
    c.budget -= 1;
L_001DD9A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD9C4; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DD9D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD9C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 80u));  if (t) { goto L_001DD9D8; } }
L_001DD9D4:
    c.f[13] = 0u;
    c.budget -= 1;
L_001DD9D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DD9F4; }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDA08; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DD9F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DDA04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[14] = ld32((c.r[16].w[0] + 100u));  if (t) { goto L_001DDA08; } }
L_001DDA04:
    c.f[14] = 0u;
    c.budget -= 1;
L_001DDA08:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDA24; }
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[15] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDA38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DDA24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DDA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[15] = ld32((c.r[16].w[0] + 120u));  if (t) { goto L_001DDA38; } }
L_001DDA34:
    c.f[15] = 0u;
    c.budget -= 1;
L_001DDA38:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDA54; }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[16] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDA68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DDA54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DDA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[16] = ld32((c.r[16].w[0] + 140u));  if (t) { goto L_001DDA68; } }
L_001DDA64:
    c.f[16] = 0u;
    c.budget -= 1;
L_001DDA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001DDA70u) [[unlikely]] return; }
L_001DDA70:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA94u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDA94u) [[unlikely]] return; }
L_001DDA94:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DDAB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDAB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDAB8u) [[unlikely]] return; }
L_001DDAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DDABC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001DDAD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDAE8u); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DDAE8u) [[unlikely]] return; }
L_001DDAE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDB00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DDB20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DDB00:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DDB20; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DDB24; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DDB20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DDB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB2Cu);  if (depth < kMaxDepth) unit_002F(c, 316u, depth + 1u); else { c.pc = 0x001DFCC0u; return; } if (c.pc != 0x001DDB2Cu) [[unlikely]] return; }
L_001DDB2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_001DDB94; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB40u); set32(c.r[4], c.r[4].w[0] + 20646u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DDB40u) [[unlikely]] return; }
L_001DDB40:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB64u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDB64u) [[unlikely]] return; }
L_001DDB64:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DDC5C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDB88u) [[unlikely]] return; }
L_001DDB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDC58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001DDB94:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDBAC; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDBC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DDBAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DDBBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_001DDBC0; } }
L_001DDBBC:
    c.f[13] = 0u;
    c.budget -= 1;
L_001DDBC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDBD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_001DDBF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DDBD8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DDBF8; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DDBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DDBF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DDBFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC10u);  if (depth < kMaxDepth) unit_003C(c, 233u, depth + 1u); else { c.pc = 0x00212C00u; return; } if (c.pc != 0x001DDC10u) [[unlikely]] return; }
L_001DDC10:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC34u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDC34u) [[unlikely]] return; }
L_001DDC34:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DDC58; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDC58u) [[unlikely]] return; }
L_001DDC58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DDC5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DDC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC88u); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DDC88u) [[unlikely]] return; }
L_001DDC88:
    set32(c.r[3], ld32((c.r[16].w[0] + 660u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 20u)));  if (t) { goto L_001DDCA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DDCBC; } }
L_001DDCA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DDCBC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DDCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDCC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 16u, depth + 1u); else { c.pc = 0x001E01F0u; return; } if (c.pc != 0x001DDCC4u) [[unlikely]] return; }
L_001DDCC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_001DDCE4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
L_001DDCE4:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD04u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDD04u) [[unlikely]] return; }
L_001DDD04:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DDD2C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDD28u) [[unlikely]] return; }
L_001DDD28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DDD2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DDD40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD5Cu); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DDD5Cu) [[unlikely]] return; }
L_001DDD5C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DDD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DDD88; } }
L_001DDD70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DDD88; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DDD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001E0270u; return; } if (c.pc != 0x001DDD90u) [[unlikely]] return; }
L_001DDD90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 660u)));  goto L_001DDE18; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DDDAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DDDC0; } }
L_001DDDAC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DDDC0; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DDDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 320u, depth + 1u); else { c.pc = 0x001DFD30u; return; } if (c.pc != 0x001DDDC8u) [[unlikely]] return; }
L_001DDDC8:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDECu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDDECu) [[unlikely]] return; }
L_001DDDEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001DDEA8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDE10u) [[unlikely]] return; }
L_001DDE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDEA4; } }
L_001DDE18:
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDEA4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DDE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DDE54; } }
L_001DDE40:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DDE54; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DDE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 320u, depth + 1u); else { c.pc = 0x001DFD30u; return; } if (c.pc != 0x001DDE5Cu) [[unlikely]] return; }
L_001DDE5C:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE80u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDE80u) [[unlikely]] return; }
L_001DDE80:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DDEA4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDEA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDEA4u) [[unlikely]] return; }
L_001DDEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DDEA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DDEC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDED8u); set32(c.r[4], 0u + 280u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DDED8u) [[unlikely]] return; }
L_001DDED8:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDEF0; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDF04; } }
L_001DDEF0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DDF00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_001DDF04; } }
L_001DDF00:
    c.f[0] = 0u;
    c.budget -= 1;
L_001DDF04:
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_001DDF4C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDF30; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDF3C; } }
L_001DDF30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DDF3C; } }
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_001DDF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 268u, depth + 1u); else { c.pc = 0x001E6C00u; return; } if (c.pc != 0x001DDF44u) [[unlikely]] return; }
L_001DDF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_001DDFA0; } }
L_001DDF4C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDF60; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDF6C; } }
L_001DDF60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DDF6C; } }
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_001DDF6C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DDF80; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DDF94; } }
L_001DDF80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DDF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_001DDF94; } }
L_001DDF90:
    c.f[13] = 0u;
    c.budget -= 1;
L_001DDF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 269u, depth + 1u); else { c.pc = 0x001E6C50u; return; } if (c.pc != 0x001DDF9Cu) [[unlikely]] return; }
L_001DDF9C:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_001DDFA0:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFC0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DDFC0u) [[unlikely]] return; }
L_001DDFC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DDFE8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DDFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DDFE4u) [[unlikely]] return; }
L_001DDFE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DDFE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DE000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE018u); set32(c.r[4], 0u + 285u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DE018u) [[unlikely]] return; }
L_001DE018:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DE030; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE044; } }
L_001DE030:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DE040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_001DE044; } }
L_001DE040:
    c.f[12] = 0u;
    c.budget -= 1;
L_001DE044:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DE05C; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE070; } }
L_001DE05C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DE06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_001DE070; } }
L_001DE06C:
    c.f[13] = 0u;
    c.budget -= 1;
L_001DE070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE078u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 288u, depth + 1u); else { c.pc = 0x001EA950u; return; } if (c.pc != 0x001DE078u) [[unlikely]] return; }
L_001DE078:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE09Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DE09Cu) [[unlikely]] return; }
L_001DE09C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DE0C4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DE0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE0C0u) [[unlikely]] return; }
L_001DE0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DE0C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DE0D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0ECu); set32(c.r[4], 0u + 292u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DE0ECu) [[unlikely]] return; }
L_001DE0EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001DE134; }
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), 0u);  goto L_001DE130; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DE12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE12Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE12Cu) [[unlikely]] return; }
L_001DE12C:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_001DE130:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001DE134:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE148; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE15C; } }
L_001DE148:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0] + 20u));  if (t) { goto L_001DE15C; } }
L_001DE158:
    c.f[12] = 0u;
    c.budget -= 1;
L_001DE15C:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE174; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE188; } }
L_001DE174:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[17].w[0] + 40u));  if (t) { goto L_001DE188; } }
L_001DE184:
    c.f[13] = 0u;
    c.budget -= 1;
L_001DE188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 221u, depth + 1u); else { c.pc = 0x001EDE90u; return; } if (c.pc != 0x001DE190u) [[unlikely]] return; }
L_001DE190:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1B4u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DE1B4u) [[unlikely]] return; }
L_001DE1B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001DE1DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DE1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE1D8u) [[unlikely]] return; }
L_001DE1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DE1DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DE1F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE208u); set32(c.r[4], 0u + 286u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DE208u) [[unlikely]] return; }
L_001DE208:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DE408; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001DE22C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DE464; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_001DE22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE23C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DE25C; } }
L_001DE23C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DE25C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_001DE260; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE25C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001DE260:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE278; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE28C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE278:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_001DE28C; } }
L_001DE288:
    c.f[12] = 0u;
    c.budget -= 1;
L_001DE28C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE2A8; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE2BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE2A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_001DE2BC; } }
L_001DE2B8:
    c.f[13] = 0u;
    c.budget -= 1;
L_001DE2BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE2D8; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE2EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE2D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[14] = ld32((c.r[16].w[0] + 80u));  if (t) { goto L_001DE2EC; } }
L_001DE2E8:
    c.f[14] = 0u;
    c.budget -= 1;
L_001DE2EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE308; }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[15] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE31C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE308:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[15] = ld32((c.r[16].w[0] + 100u));  if (t) { goto L_001DE31C; } }
L_001DE318:
    c.f[15] = 0u;
    c.budget -= 1;
L_001DE31C:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE338; }
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[16] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE34C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE338:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[16] = ld32((c.r[16].w[0] + 120u));  if (t) { goto L_001DE34C; } }
L_001DE348:
    c.f[16] = 0u;
    c.budget -= 1;
L_001DE34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE354u);  if (depth < kMaxDepth) unit_0032(c, 359u, depth + 1u); else { c.pc = 0x001EB340u; return; } if (c.pc != 0x001DE354u) [[unlikely]] return; }
L_001DE354:
    st32((c.r[16].w[0] + 716u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { st32((c.r[29].w[0] + 68u), 0u);  goto L_001DE3AC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DE380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 140u)));  if (t) { goto L_001DE3A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DE380:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001DE3A0; }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE3A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE3A0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 704u)));  goto L_001DE3FC; }
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_001DE3AC:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3CCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DE3CCu) [[unlikely]] return; }
L_001DE3CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE460; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DE460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE3F0u) [[unlikely]] return; }
L_001DE3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE460; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    c.budget -= 1;
L_001DE3FC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001DE460; } }
L_001DE408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE410u); set32(c.r[5], ld32((c.r[16].w[0] + 716u)));  if (depth < kMaxDepth) unit_0032(c, 362u, depth + 1u); else { c.pc = 0x001EB400u; return; } if (c.pc != 0x001DE410u) [[unlikely]] return; }
L_001DE410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE460; } }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE43Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DE43Cu) [[unlikely]] return; }
L_001DE43C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE460; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DE460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE460u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE460u) [[unlikely]] return; }
L_001DE460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DE464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DE470:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4A0u); st32((c.r[29].w[0] + 16u), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DE4A0u) [[unlikely]] return; }
L_001DE4A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DE688; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  goto L_001DE4C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001DEA64; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_001DE4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE4D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DE4F4; } }
L_001DE4D4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DE4F4; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_001DE4F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE4F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_001DE4F8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE50C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DE52C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE50C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DE52C; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DE530; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE52C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DE530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE538u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 320u, depth + 1u); else { c.pc = 0x001CAA60u; return; } if (c.pc != 0x001DE538u) [[unlikely]] return; }
L_001DE538:
    st32((c.r[19].w[0] + 716u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE548u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DE548u) [[unlikely]] return; }
L_001DE548:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DE55C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DE580; } }
L_001DE55C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DE580; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 76u)));  if (t) { goto L_001DE584; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE580:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 1;
L_001DE584:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_001DE5B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE598:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DE5B8; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 96u)));  if (t) { goto L_001DE5BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE5B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 1;
L_001DE5BC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE5D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[19].w[0] + 80u)));  if (t) { goto L_001DE5F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE5D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DE5F0; }
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_001DE5F4; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE5F0:
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_001DE5F4:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE610u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001DE610u) [[unlikely]] return; }
L_001DE610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE620u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x001DE620u) [[unlikely]] return; }
L_001DE620:
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_001DE658; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE638:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE658; }
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE658; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE658:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DE674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 106u, depth + 1u); else { c.pc = 0x001C8E40u; return; } if (c.pc != 0x001DE668u) [[unlikely]] return; }
L_001DE668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 704u)));  if (t) { goto L_001DE680; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DE674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE67Cu);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001C8EB0u; return; } if (c.pc != 0x001DE67Cu) [[unlikely]] return; }
L_001DE67C:
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    c.budget -= 1;
L_001DE680:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 2;
L_001DE688:
    set32(c.r[5], ld32((c.r[19].w[0] + 716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE694u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DE694u) [[unlikely]] return; }
L_001DE694:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_001DE6FC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6A8u); set32(c.r[4], c.r[4].w[0] + 20684u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DE6A8u) [[unlikely]] return; }
L_001DE6A8:
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 240u), 0u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 256u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6CCu); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DE6CCu) [[unlikely]] return; }
L_001DE6CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DEA60; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DEA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE6F0u) [[unlikely]] return; }
L_001DE6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEA60; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001DE6FC:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DEA60; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE714u); set32(c.r[4], 0u + 281u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DE714u) [[unlikely]] return; }
L_001DE714:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE728u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DE728u) [[unlikely]] return; }
L_001DE728:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE744; }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE758; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE744:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 208u));  if (t) { goto L_001DE758; } }
L_001DE754:
    c.f[1] = 0u;
    c.budget -= 1;
L_001DE758:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE770; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 140u)));  if (t) { goto L_001DE790; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE770:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE790; }
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_001DE794; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE790:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DE794:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 18944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_001DE7C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DE7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE7C8u) [[unlikely]] return; }
L_001DE7C8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7D8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DE7D8u) [[unlikely]] return; }
L_001DE7D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE7F4; }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE808; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE7F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 176u));  if (t) { goto L_001DE808; } }
L_001DE804:
    c.f[1] = 0u;
    c.budget -= 1;
L_001DE808:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 140u)));  if (t) { goto L_001DE840; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE820:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE840; }
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_001DE844; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE840:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DE844:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 18948u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_001DE878; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DE878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE878u) [[unlikely]] return; }
L_001DE878:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001DE88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 120u)));  if (t) { goto L_001DE8B0; } }
L_001DE88C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE8B0; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE8B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE8B0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 136u)));  goto L_001DE920; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001DE8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 120u)));  if (t) { goto L_001DE8E8; } }
L_001DE8C8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE8E8; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_001DE8EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE8E8:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_001DE8EC:
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 124u), 0u);  goto L_001DE91C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DE918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE918u) [[unlikely]] return; }
L_001DE918:
    st32((c.r[19].w[0] + 124u), 0u);
    c.budget -= 1;
L_001DE91C:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 1;
L_001DE920:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 120u)));  if (t) { goto L_001DE954; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE934:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE954; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 20u);  if (t) { goto L_001DE958; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE954:
    set32(c.r[6], c.r[2].w[0] + 20u);
    c.budget -= 1;
L_001DE958:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE964u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DE964u) [[unlikely]] return; }
L_001DE964:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DE980; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[22] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DE994; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 144u));  if (t) { goto L_001DE994; } }
L_001DE990:
    c.f[22] = 0u;
    c.budget -= 1;
L_001DE994:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE9B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DE9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE9B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DE9B8u) [[unlikely]] return; }
L_001DE9B8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[21]);  goto L_001DE9C8; }
    c.f[22] = c.f[22] ^ fp::kSign;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[21]);
    c.budget -= 2;
L_001DE9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01190000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 716u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    set32(c.r[8], ld32((c.r[29].w[0] + 280u)));
    c.f[2] = ld32((c.r[16].w[0] + 240u));
    st32((c.r[29].w[0] + 268u), c.f[22]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    set32(c.r[11], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0]), c.f[1]);
    set32(c.r[9], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA14u); st32((c.r[29].w[0] + 8u), c.f[2]);  if (depth < kMaxDepth) unit_002B(c, 427u, depth + 1u); else { c.pc = 0x001CFE80u; return; } if (c.pc != 0x001DEA14u) [[unlikely]] return; }
L_001DEA14:
    set32(c.r[2], ld32((c.r[19].w[0] + 716u)));
    set32(c.r[4], c.r[19].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA3Cu); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DEA3Cu) [[unlikely]] return; }
L_001DEA3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DEA60; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DEA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DEA60u) [[unlikely]] return; }
L_001DEA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DEA64:
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001DEA90:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAC0u); st32((c.r[29].w[0] + 16u), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DEAC0u) [[unlikely]] return; }
L_001DEAC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DEAD0u) [[unlikely]] return; }
L_001DEAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DEB4C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_001DEADC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (t) { goto L_001DEAEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_001DEB10; } }
L_001DEAEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DEB10; }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEB10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEB10:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001DEB3C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DEB38; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEB54; } }
L_001DEB38:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DEB3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB48u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DEB48u) [[unlikely]] return; }
L_001DEB48:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DEB4C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DEADCu | kUnwind; return; } goto L_001DEADC; }
L_001DEB54:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 184u)));  goto L_001DEBF8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DEB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_001DEB94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DEB74:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DEB94; }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEB94; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEB94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBA0u); set32(c.r[4], c.r[4].w[0] + 20715u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DEBA0u) [[unlikely]] return; }
L_001DEBA0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 668u);
    st32((c.r[29].w[0] + 240u), 0u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBC8u); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DEBC8u) [[unlikely]] return; }
L_001DEBC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_001DEE0C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DEE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DEBECu) [[unlikely]] return; }
L_001DEBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE08; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 1;
L_001DEBF8:
    set32(c.r[16], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC04u); set32(c.r[4], 0u + 281u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DEC04u) [[unlikely]] return; }
L_001DEC04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC18u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DEC18u) [[unlikely]] return; }
L_001DEC18:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DEC34; }
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DEC48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DEC34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DEC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 192u));  if (t) { goto L_001DEC48; } }
L_001DEC44:
    c.f[1] = 0u;
    c.budget -= 1;
L_001DEC48:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DEC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 40u)));  if (t) { goto L_001DEC80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DEC60:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DEC80; }
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_001DEC84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEC80:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DEC84:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 18944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_001DECB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DECB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DECB8u) [[unlikely]] return; }
L_001DECB8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECC8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DECC8u) [[unlikely]] return; }
L_001DECC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DECE4; }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DECF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DECE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DECF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 160u));  if (t) { goto L_001DECF8; } }
L_001DECF4:
    c.f[1] = 0u;
    c.budget -= 1;
L_001DECF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DED10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 40u)));  if (t) { goto L_001DED30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DED10:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DED30; }
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_001DED34; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DED30:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DED34:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 18948u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_001DED68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DED68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DED68u) [[unlikely]] return; }
L_001DED68:
    c.f[1] = ld32((c.r[17].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01190000u);
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    set32(c.r[6], ld32((c.r[19].w[0] + 160u)));
    c.f[3] = ld32((c.r[16].w[0] + 240u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[1]);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    set32(c.r[8], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 268u), c.f[3]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    set32(c.r[10], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[29].w[0] + 264u), c.f[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0]), c.f[1]);
    set32(c.r[11], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDBCu); st32((c.r[29].w[0] + 8u), c.f[3]);  if (depth < kMaxDepth) unit_002B(c, 427u, depth + 1u); else { c.pc = 0x001CFE80u; return; } if (c.pc != 0x001DEDBCu) [[unlikely]] return; }
L_001DEDBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[4], c.r[20].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDE4u); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DEDE4u) [[unlikely]] return; }
L_001DEDE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DEE08; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DEE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DEE08u) [[unlikely]] return; }
L_001DEE08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001DEE0C:
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001DEE30:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE68u); st32((c.r[29].w[0] + 16u), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DEE68u) [[unlikely]] return; }
L_001DEE68:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE74u); set32(c.r[4], 0u + 281u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DEE74u) [[unlikely]] return; }
L_001DEE74:
    set32(c.r[4], ld32((c.r[21].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DF194; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DEE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_001DF4D8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DEEA0u) [[unlikely]] return; }
L_001DEEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEF18; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 1;
L_001DEEAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_001DEEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 20u)));  if (t) { goto L_001DEEE0; } }
L_001DEEBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001DEEE0; }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEEE0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEEE0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DEF0C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DEF08; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DEF20; } }
L_001DEF08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DEF0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF18u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DEF18u) [[unlikely]] return; }
L_001DEF18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DEEACu | kUnwind; return; } goto L_001DEEAC; }
L_001DEF20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 160u)));  goto L_001DEFC4; }
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DEF40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 20u)));  if (t) { goto L_001DEF60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DEF40:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DEF60; }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEF60; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEF60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF6Cu); set32(c.r[4], c.r[4].w[0] + 20715u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DEF6Cu) [[unlikely]] return; }
L_001DEF6C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 668u);
    st32((c.r[29].w[0] + 320u), 0u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF94u); st16((c.r[21].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DEF94u) [[unlikely]] return; }
L_001DEF94:
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DF4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DEFB8u) [[unlikely]] return; }
L_001DEFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 1;
L_001DEFC4:
    st32((c.r[21].w[0] + 716u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DEFE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 20u)));  if (t) { goto L_001DF000; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DEFE0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DF000; }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 56u)));  if (t) { goto L_001DF004; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF000:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 1;
L_001DF004:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[21].w[0] + 40u)));  if (t) { goto L_001DF038; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF018:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DF038; }
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DF03C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF044u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 320u, depth + 1u); else { c.pc = 0x001CAA60u; return; } if (c.pc != 0x001DF044u) [[unlikely]] return; }
L_001DF044:
    st32((c.r[21].w[0] + 720u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF054u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DF054u) [[unlikely]] return; }
L_001DF054:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DF068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 20u)));  if (t) { goto L_001DF08C; } }
L_001DF068:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DF08C; }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 76u)));  if (t) { goto L_001DF090; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF08C:
    set32(c.r[3], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 1;
L_001DF090:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF0A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 60u)));  if (t) { goto L_001DF0C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF0A4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DF0C4; }
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 96u)));  if (t) { goto L_001DF0C8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF0C4:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 1;
L_001DF0C8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF0DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[21].w[0] + 80u)));  if (t) { goto L_001DF0FC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF0DC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DF0FC; }
    c.f[0] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_001DF100; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF0FC:
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_001DF100:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF11Cu); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001DF11Cu) [[unlikely]] return; }
L_001DF11C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF12Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x001DF12Cu) [[unlikely]] return; }
L_001DF12C:
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 100u)));  if (t) { goto L_001DF164; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF144:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DF164; }
    c.f[0] = ld32((c.r[21].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF164; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF164:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DF180; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 106u, depth + 1u); else { c.pc = 0x001C8E40u; return; } if (c.pc != 0x001DF174u) [[unlikely]] return; }
L_001DF174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 704u)));  if (t) { goto L_001DF18C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DF180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF188u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001C8EB0u; return; } if (c.pc != 0x001DF188u) [[unlikely]] return; }
L_001DF188:
    set32(c.r[2], ld32((c.r[21].w[0] + 704u)));
    c.budget -= 1;
L_001DF18C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 2;
L_001DF194:
    set32(c.r[5], ld32((c.r[21].w[0] + 720u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DF1A0u) [[unlikely]] return; }
L_001DF1A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001DF20C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1B8u); set32(c.r[4], c.r[4].w[0] + 20741u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DF1B8u) [[unlikely]] return; }
L_001DF1B8:
    st32((c.r[29].w[0] + 276u), 0u);
    set32(c.r[4], c.r[21].w[0] + 668u);
    st32((c.r[29].w[0] + 272u), 0u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 288u), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1DCu); st16((c.r[21].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DF1DCu) [[unlikely]] return; }
L_001DF1DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DF4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF200u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF200u) [[unlikely]] return; }
L_001DF200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001DF20C:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF224u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DF224u) [[unlikely]] return; }
L_001DF224:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 136u)));  goto L_001DF290; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF23Cu); set32(c.r[4], c.r[4].w[0] + 20774u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DF23Cu) [[unlikely]] return; }
L_001DF23C:
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[4], c.r[21].w[0] + 668u);
    st32((c.r[29].w[0] + 240u), 0u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 256u), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF260u); st16((c.r[21].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DF260u) [[unlikely]] return; }
L_001DF260:
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DF4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF284u) [[unlikely]] return; }
L_001DF284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 136u)));
    c.budget -= 1;
L_001DF290:
    set32(c.r[23], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001DF2AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 120u)));  if (t) { goto L_001DF2D0; } }
L_001DF2AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DF2D0; }
    c.f[0] = ld32((c.r[21].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF2D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF2D0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[21].w[0] + 136u)));  goto L_001DF340; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_001DF2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 120u)));  if (t) { goto L_001DF308; } }
L_001DF2E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[20].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DF308; }
    c.f[0] = ld32((c.r[21].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_001DF30C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF308:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_001DF30C:
    st32((c.r[21].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 124u), 0u);  goto L_001DF33C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF338u) [[unlikely]] return; }
L_001DF338:
    st32((c.r[21].w[0] + 124u), 0u);
    c.budget -= 1;
L_001DF33C:
    set32(c.r[3], ld32((c.r[21].w[0] + 136u)));
    c.budget -= 1;
L_001DF340:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 120u)));  if (t) { goto L_001DF374; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF354:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DF374; }
    c.f[0] = ld32((c.r[21].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 20u);  if (t) { goto L_001DF378; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF374:
    set32(c.r[6], c.r[2].w[0] + 20u);
    c.budget -= 1;
L_001DF378:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF384u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DF384u) [[unlikely]] return; }
L_001DF384:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF3A0; }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DF3B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF3A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 208u));  if (t) { goto L_001DF3B4; } }
L_001DF3B0:
    c.f[20] = 0u;
    c.budget -= 1;
L_001DF3B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF3D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF3D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF3D8u) [[unlikely]] return; }
L_001DF3D8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 240u));  goto L_001DF3E8; }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.f[0] = ld32((c.r[17].w[0] + 240u));
    c.budget -= 2;
L_001DF3E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01190000u);
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    set32(c.r[6], ld32((c.r[18].w[0] + 160u)));
    st32((c.r[29].w[0] + 364u), c.f[20]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 368u), c.f[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 364u)));
    c.f[0] = ld32((c.r[23].w[0] + 208u));
    set32(c.r[10], ld32((c.r[29].w[0] + 368u)));
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.f[3] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[9], ld32((c.r[29].w[0] + 372u)));
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 376u), c.f[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 376u)));
    st32((c.r[29].w[0]), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF438u); st32((c.r[29].w[0] + 8u), c.f[3]);  if (depth < kMaxDepth) unit_002B(c, 427u, depth + 1u); else { c.pc = 0x001CFE80u; return; } if (c.pc != 0x001DF438u) [[unlikely]] return; }
L_001DF438:
    c.f[0] = ld32((c.r[23].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01190000u);
    c.f[1] = ld32((c.r[17].w[0] + 240u));
    set32(c.r[6], ld32((c.r[19].w[0] + 160u)));
    st32((c.r[29].w[0] + 332u), c.f[20]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 344u), c.f[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 332u)));
    c.f[0] = ld32((c.r[17].w[0] + 212u));
    set32(c.r[8], ld32((c.r[29].w[0] + 344u)));
    st32((c.r[29].w[0] + 336u), c.f[1]);
    set32(c.r[7], 0u + 1u);
    c.f[3] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[10], ld32((c.r[29].w[0] + 336u)));
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[29].w[0] + 340u), c.f[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[29].w[0]), c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF48Cu); st32((c.r[29].w[0] + 8u), c.f[3]);  if (depth < kMaxDepth) unit_002B(c, 427u, depth + 1u); else { c.pc = 0x001CFE80u; return; } if (c.pc != 0x001DF48Cu) [[unlikely]] return; }
L_001DF48C:
    st32((c.r[29].w[0] + 180u), 0u);
    set32(c.r[4], c.r[21].w[0] + 668u);
    st32((c.r[29].w[0] + 176u), 0u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4B0u); st16((c.r[21].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DF4B0u) [[unlikely]] return; }
L_001DF4B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF4D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DF4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF4D4u) [[unlikely]] return; }
L_001DF4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_001DF4D8:
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_001DF510:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF530u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DF530u) [[unlikely]] return; }
L_001DF530:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF53Cu); set32(c.r[4], 0u + 281u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DF53Cu) [[unlikely]] return; }
L_001DF53C:
    set32(c.r[4], ld32((c.r[18].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DF578; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);  goto L_001DF55C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001DF67C; } }
L_001DF55C:
    set32(c.r[6], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF56Cu); c.r[5].d[0] = c.r[2].d[0] | 4100ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DF56Cu) [[unlikely]] return; }
L_001DF56C:
    set32(c.r[3], ld32((c.r[18].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_001DF578:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF678; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF678; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[6], 0u + 25u);
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001DF5BCu) [[unlikely]] return; }
L_001DF5BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DF5D4; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DF5E8; } }
L_001DF5D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 96u));  if (t) { goto L_001DF5E8; } }
L_001DF5E4:
    c.f[0] = 0u;
    c.budget -= 1;
L_001DF5E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 660u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01190000u);
    c.r[5].d[0] = c.r[2].d[0] | 4097ull;
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF60Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001DF60Cu) [[unlikely]] return; }
L_001DF60C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 68u), 0u);  goto L_001DF634; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF630u) [[unlikely]] return; }
L_001DF630:
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_001DF634:
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF654u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DF654u) [[unlikely]] return; }
L_001DF654:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF678; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DF678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF678u) [[unlikely]] return; }
L_001DF678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001DF67C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001DF690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 18992u);  c.pc = t; return; }
L_001DF6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 728u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001DF6B4u) [[unlikely]] return; }
L_001DF6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DF704; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 16128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6E8u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x001DF6E8u) [[unlikely]] return; }
L_001DF6E8:
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 668u), 0u);
    set32(c.r[2], c.r[2].w[0] + 14320u);
    st32((c.r[16].w[0] + 684u), 0u);
    st32((c.r[16].w[0] + 688u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_001DF704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DF720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DF7E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] + 688u);
    set32(c.r[3], c.r[3].w[0] + 16128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001DF774; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 668u);  goto L_001DF778; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF774u) [[unlikely]] return; }
L_001DF774:
    set32(c.r[2], c.r[17].w[0] + 668u);
    c.budget -= 1;
L_001DF778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF7B0; } }
    set32(c.r[2], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF7B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF7B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF7B0u) [[unlikely]] return; }
L_001DF7B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7C8u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001DF7C8u) [[unlikely]] return; }
L_001DF7C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001DF7E0u) [[unlikely]] return; }
L_001DF7E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DF800:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_001DF820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DF8F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14320u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001DF8D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] + 688u);
    set32(c.r[3], c.r[3].w[0] + 16128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001DF884; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 668u);  goto L_001DF888; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF884u) [[unlikely]] return; }
L_001DF884:
    set32(c.r[2], c.r[17].w[0] + 668u);
    c.budget -= 1;
L_001DF888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF8C0; } }
    set32(c.r[2], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF8C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF8C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DF8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DF8C0u) [[unlikely]] return; }
L_001DF8C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8D8u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001DF8D8u) [[unlikely]] return; }
L_001DF8D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF8F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001DF8F0u) [[unlikely]] return; }
L_001DF8F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DF910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 704u), 0u);  c.pc = t; return; }
L_001DF920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DF930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001DF980; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14352u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001DF964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001DF964:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DF97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001DF97Cu) [[unlikely]] return; }
L_001DF97C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DF980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DF990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 264u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001DF9A8u) [[unlikely]] return; }
L_001DF9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9BCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 297u, depth + 1u); else { c.pc = 0x001DFA50u; return; } if (c.pc != 0x001DF9BCu) [[unlikely]] return; }
L_001DF9BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9CCu); set32(c.r[5], c.r[5].w[0] + 21456u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001DF9CCu) [[unlikely]] return; }
L_001DF9CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DF9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DFA30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA0Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 298u, depth + 1u); else { c.pc = 0x001DFA60u; return; } if (c.pc != 0x001DFA0Cu) [[unlikely]] return; }
L_001DFA0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001DFA18u) [[unlikely]] return; }
L_001DFA18:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001DFA34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001DFA30u) [[unlikely]] return; }
L_001DFA30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DFA34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DFA50:
    st32((c.r[4].w[0] + 148u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 152u), c.r[3].w[0]);  c.pc = t; return; }
L_001DFA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 148u), 0u);  if (t) { goto L_001DFA9C; } }
L_001DFA84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 302u, depth + 1u); else { c.pc = 0x001DFAC0u; return; } if (c.pc != 0x001DFA90u) [[unlikely]] return; }
L_001DFA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001DFA98u) [[unlikely]] return; }
L_001DFA98:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DFA9C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFA84u | kUnwind; return; } goto L_001DFA84; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DFAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DFAFC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DFAF8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DFAF4u) [[unlikely]] return; }
L_001DFAF4:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001DFAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DFAFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 92u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001DFB34u) [[unlikely]] return; }
L_001DFB34:
    set32(c.r[5], ld32((c.r[18].w[0] + 152u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 84u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB50u); st32((c.r[2].w[0]), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001DFB50u) [[unlikely]] return; }
L_001DFB50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  goto L_001DFB68; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 217u, depth + 1u); else { c.pc = 0x00212A20u; return; } if (c.pc != 0x001DFB64u) [[unlikely]] return; }
L_001DFB64:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001DFB68:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 148u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DFBA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBD4u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DFBD4u) [[unlikely]] return; }
L_001DFBD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DFBE0u) [[unlikely]] return; }
L_001DFBE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DFC9C; } }
L_001DFBF0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DFC00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 184u)));  if (t) { goto L_001DFC20; } }
L_001DFC00:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001DFC10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 188u)));  if (t) { goto L_001DFC20; } }
L_001DFC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC18u); set32(c.r[4], c.r[4].w[0] + 21531u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DFC18u) [[unlikely]] return; }
L_001DFC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DFC9C; } }
L_001DFC20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC2Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 318u, depth + 1u); else { c.pc = 0x001DFCF0u; return; } if (c.pc != 0x001DFC2Cu) [[unlikely]] return; }
L_001DFC2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 24u)));  goto L_001DFC48; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC40u); set32(c.r[4], c.r[4].w[0] + 21551u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DFC40u) [[unlikely]] return; }
L_001DFC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DFC9C; } }
L_001DFC48:
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_001DFC68; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC60u); set32(c.r[4], c.r[4].w[0] + 21573u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DFC60u) [[unlikely]] return; }
L_001DFC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DFC9C; } }
L_001DFC68:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC98u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x00212BB0u; return; } if (c.pc != 0x001DFC98u) [[unlikely]] return; }
L_001DFC98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DFC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DFCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCD0u);  if (depth < kMaxDepth) unit_002F(c, 318u, depth + 1u); else { c.pc = 0x001DFCF0u; return; } if (c.pc != 0x001DFCD0u) [[unlikely]] return; }
L_001DFCD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_001DFCDC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DFCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DFCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_001DFD08; } }
L_001DFCF8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001DFD18; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_001DFD08:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFCF8u | kUnwind; return; } goto L_001DFCF8; } }
L_001DFD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFD24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DFD24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DFD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 318u, depth + 1u); else { c.pc = 0x001DFCF0u; return; } if (c.pc != 0x001DFD4Cu) [[unlikely]] return; }
L_001DFD4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001DFD78; }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DFD6C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001DFD74; } }
L_001DFD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 323u, depth + 1u); else { c.pc = 0x001DFD90u; return; } if (c.pc != 0x001DFD74u) [[unlikely]] return; }
L_001DFD74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DFD78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DFD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001DFDE4; } }
L_001DFDA8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001DFDE0; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_001DFDC4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_001DFDC8; } }
L_001DFDC4:
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_001DFDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDD0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 302u, depth + 1u); else { c.pc = 0x001DFAC0u; return; } if (c.pc != 0x001DFDD0u) [[unlikely]] return; }
L_001DFDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001DFDD8u) [[unlikely]] return; }
L_001DFDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DFDF0; } }
L_001DFDE0:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001DFDE4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFDA8u | kUnwind; return; } goto L_001DFDA8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DFDF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_001DFE30; } }
L_001DFE14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  goto L_001DFE30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE24u);  if (depth < kMaxDepth) unit_0030(c, 332u, depth + 1u); else { c.pc = 0x001E2C20u; return; } if (c.pc != 0x001DFE24u) [[unlikely]] return; }
L_001DFE24:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_001DFE30:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFE14u | kUnwind; return; } goto L_001DFE14; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFE50:
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
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE88u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001DFE88u) [[unlikely]] return; }
L_001DFE88:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DFEBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DFEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DFEBCu) [[unlikely]] return; }
L_001DFEBC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[21].w[0] + 8u), 0u);  goto L_001DFF14; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001DFED8u) [[unlikely]] return; }
L_001DFED8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DFF04; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001DFEF4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFF04; } }
L_001DFEF4:
    set32(c.r[4], c.r[21].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001DFF04u) [[unlikely]] return; }
L_001DFF04:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 152u)));  if (t) { goto L_001DFF18; } }
L_001DFF10:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_001DFF14:
    set32(c.r[18], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_001DFF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF20u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001DFF20u) [[unlikely]] return; }
L_001DFF20:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DFF50; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DFF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DFF50u) [[unlikely]] return; }
L_001DFF50:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 148u)));  if (t) { [[clang::musttail]] return unit_0030(c, 15u, depth); } }
L_001DFF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF64u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001DFF64u) [[unlikely]] return; }
L_001DFF64:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DFF98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DFF98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DFF98u) [[unlikely]] return; }
L_001DFF98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21591u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_001DFFE8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFB4u); set32(c.r[4], c.r[4].w[0] + 21591u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001DFFB4u) [[unlikely]] return; }
L_001DFFB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 21591u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DFFE4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[19].w[0] + 8u);  goto L_001DFFD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFFE4; } }
L_001DFFD8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001DFFE4u) [[unlikely]] return; }
L_001DFFE4:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001DFFE8:
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001DFFF4u) [[unlikely]] return; }
L_001DFFF4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_0030(c, 1u, depth);
}

}
