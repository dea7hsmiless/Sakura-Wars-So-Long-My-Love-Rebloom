#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0072[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0072(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E801C;
    case 3u: goto L_002E80AC;
    case 4u: goto L_002E80B8;
    case 5u: goto L_002E80DC;
    case 6u: goto L_002E80E8;
    case 7u: goto L_002E8114;
    case 8u: goto L_002E8120;
    case 9u: goto L_002E8138;
    case 10u: goto L_002E8150;
    case 11u: goto L_002E8174;
    case 12u: goto L_002E818C;
    case 13u: goto L_002E81B0;
    case 14u: goto L_002E8204;
    case 15u: goto L_002E8214;
    case 16u: goto L_002E8250;
    case 17u: goto L_002E8284;
    case 18u: goto L_002E82A4;
    case 19u: goto L_002E82CC;
    case 20u: goto L_002E82F0;
    case 21u: goto L_002E82FC;
    case 22u: goto L_002E8328;
    case 23u: goto L_002E8368;
    case 24u: goto L_002E83D0;
    case 25u: goto L_002E83EC;
    case 26u: goto L_002E841C;
    case 27u: goto L_002E8450;
    case 28u: goto L_002E850C;
    case 29u: goto L_002E8554;
    case 30u: goto L_002E8560;
    case 31u: goto L_002E8568;
    case 32u: goto L_002E858C;
    case 33u: goto L_002E85C0;
    case 34u: goto L_002E85E8;
    case 35u: goto L_002E8604;
    case 36u: goto L_002E8638;
    case 37u: goto L_002E865C;
    case 38u: goto L_002E866C;
    case 39u: goto L_002E8690;
    case 40u: goto L_002E86AC;
    case 41u: goto L_002E86FC;
    case 42u: goto L_002E870C;
    case 43u: goto L_002E8740;
    case 44u: goto L_002E87E0;
    case 45u: goto L_002E8810;
    case 46u: goto L_002E8898;
    case 47u: goto L_002E88BC;
    case 48u: goto L_002E8944;
    case 49u: goto L_002E8974;
    case 50u: goto L_002E89B4;
    case 51u: goto L_002E89F4;
    case 52u: goto L_002E8A2C;
    case 53u: goto L_002E8A6C;
    case 54u: goto L_002E8AAC;
    case 55u: goto L_002E8C30;
    case 56u: goto L_002E8C90;
    case 57u: goto L_002E8D30;
    case 58u: goto L_002E8D84;
    case 59u: goto L_002E8DD0;
    case 60u: goto L_002E8E2C;
    case 61u: goto L_002E8E44;
    case 62u: goto L_002E8E50;
    case 63u: goto L_002E8EB0;
    case 64u: goto L_002E8F30;
    case 65u: goto L_002E8F9C;
    case 66u: goto L_002E8FB0;
    case 67u: goto L_002E8FC0;
    case 68u: goto L_002E906C;
    case 69u: goto L_002E9090;
    case 70u: goto L_002E9110;
    case 71u: goto L_002E912C;
    case 72u: goto L_002E9138;
    case 73u: goto L_002E9194;
    case 74u: goto L_002E91A4;
    case 75u: goto L_002E91CC;
    case 76u: goto L_002E9208;
    case 77u: goto L_002E9220;
    case 78u: goto L_002E927C;
    case 79u: goto L_002E9288;
    case 80u: goto L_002E92A0;
    case 81u: goto L_002E92C0;
    case 82u: goto L_002E931C;
    case 83u: goto L_002E9328;
    case 84u: goto L_002E9334;
    case 85u: goto L_002E934C;
    case 86u: goto L_002E9370;
    case 87u: goto L_002E9380;
    case 88u: goto L_002E9390;
    case 89u: goto L_002E93A0;
    case 90u: goto L_002E93B0;
    case 91u: goto L_002E93C0;
    case 92u: goto L_002E93D0;
    case 93u: goto L_002E93E0;
    case 94u: goto L_002E93F4;
    case 95u: goto L_002E9430;
    case 96u: goto L_002E9440;
    case 97u: goto L_002E9450;
    case 98u: goto L_002E94AC;
    case 99u: goto L_002E94B8;
    case 100u: goto L_002E94D0;
    case 101u: goto L_002E94F0;
    case 102u: goto L_002E9500;
    case 103u: goto L_002E9600;
    case 104u: goto L_002E9640;
    case 105u: goto L_002E9650;
    case 106u: goto L_002E9660;
    case 107u: goto L_002E9670;
    case 108u: goto L_002E9680;
    case 109u: goto L_002E96A8;
    case 110u: goto L_002E96C8;
    case 111u: goto L_002E96E0;
    case 112u: goto L_002E9718;
    case 113u: goto L_002E9728;
    case 114u: goto L_002E9738;
    case 115u: goto L_002E9748;
    case 116u: goto L_002E9758;
    case 117u: goto L_002E9780;
    case 118u: goto L_002E9790;
    case 119u: goto L_002E979C;
    case 120u: goto L_002E9810;
    case 121u: goto L_002E9828;
    case 122u: goto L_002E9834;
    case 123u: goto L_002E983C;
    case 124u: goto L_002E9844;
    case 125u: goto L_002E9860;
    case 126u: goto L_002E98C0;
    case 127u: goto L_002E9904;
    case 128u: goto L_002E9914;
    case 129u: goto L_002E9940;
    case 130u: goto L_002E9964;
    case 131u: goto L_002E99A0;
    case 132u: goto L_002E99B8;
    case 133u: goto L_002E99E8;
    case 134u: goto L_002E9A00;
    case 135u: goto L_002E9A18;
    case 136u: goto L_002E9A28;
    case 137u: goto L_002E9A44;
    case 138u: goto L_002E9A5C;
    case 139u: goto L_002E9A78;
    case 140u: goto L_002E9A88;
    case 141u: goto L_002E9AA4;
    case 142u: goto L_002E9AC0;
    case 143u: goto L_002E9AD8;
    case 144u: goto L_002E9B0C;
    case 145u: goto L_002E9B64;
    case 146u: goto L_002E9B6C;
    case 147u: goto L_002E9B8C;
    case 148u: goto L_002E9BA0;
    case 149u: goto L_002E9BC0;
    case 150u: goto L_002E9C0C;
    case 151u: goto L_002E9C2C;
    case 152u: goto L_002E9C5C;
    case 153u: goto L_002E9C6C;
    case 154u: goto L_002E9C80;
    case 155u: goto L_002E9C9C;
    case 156u: goto L_002E9CA4;
    case 157u: goto L_002E9CB8;
    case 158u: goto L_002E9CC8;
    case 159u: goto L_002E9CD8;
    case 160u: goto L_002E9D30;
    case 161u: goto L_002E9DC4;
    case 162u: goto L_002E9DD4;
    case 163u: goto L_002E9DF0;
    case 164u: goto L_002E9E34;
    case 165u: goto L_002E9E40;
    case 166u: goto L_002E9E48;
    case 167u: goto L_002E9E5C;
    case 168u: goto L_002E9E64;
    case 169u: goto L_002E9E74;
    case 170u: goto L_002E9E98;
    case 171u: goto L_002E9EA0;
    case 172u: goto L_002E9EC0;
    case 173u: goto L_002E9EEC;
    case 174u: goto L_002E9F40;
    case 175u: goto L_002E9F94;
    case 176u: goto L_002E9FA0;
    case 177u: goto L_002E9FAC;
    case 178u: goto L_002E9FCC;
    case 179u: goto L_002E9FD8;
    case 180u: goto L_002E9FE8;
    case 181u: goto L_002EA024;
    case 182u: goto L_002EA044;
    case 183u: goto L_002EA058;
    case 184u: goto L_002EA080;
    case 185u: goto L_002EA0B8;
    case 186u: goto L_002EA10C;
    case 187u: goto L_002EA154;
    case 188u: goto L_002EA160;
    case 189u: goto L_002EA16C;
    case 190u: goto L_002EA260;
    case 191u: goto L_002EA280;
    case 192u: goto L_002EA2A4;
    case 193u: goto L_002EA2E0;
    case 194u: goto L_002EA300;
    case 195u: goto L_002EA328;
    case 196u: goto L_002EA340;
    case 197u: goto L_002EA370;
    case 198u: goto L_002EA3A4;
    case 199u: goto L_002EA3B8;
    case 200u: goto L_002EA3E8;
    case 201u: goto L_002EA420;
    case 202u: goto L_002EA450;
    case 203u: goto L_002EA510;
    case 204u: goto L_002EA53C;
    case 205u: goto L_002EA568;
    case 206u: goto L_002EA58C;
    case 207u: goto L_002EA5C8;
    case 208u: goto L_002EA61C;
    case 209u: goto L_002EA68C;
    case 210u: goto L_002EA70C;
    case 211u: goto L_002EA734;
    case 212u: goto L_002EA760;
    case 213u: goto L_002EA7E0;
    case 214u: goto L_002EA838;
    case 215u: goto L_002EA85C;
    case 216u: goto L_002EA89C;
    case 217u: goto L_002EA8F0;
    case 218u: goto L_002EA928;
    case 219u: goto L_002EA968;
    case 220u: goto L_002EA984;
    case 221u: goto L_002EA9B0;
    case 222u: goto L_002EAAD8;
    case 223u: goto L_002EAB38;
    case 224u: goto L_002EAB5C;
    case 225u: goto L_002EAB98;
    case 226u: goto L_002EABD0;
    case 227u: goto L_002EABEC;
    case 228u: goto L_002EAC10;
    case 229u: goto L_002EAC94;
    case 230u: goto L_002EAD34;
    case 231u: goto L_002EAD60;
    case 232u: goto L_002EADA8;
    case 233u: goto L_002EAE24;
    case 234u: goto L_002EAE50;
    case 235u: goto L_002EAE78;
    case 236u: goto L_002EAE8C;
    case 237u: goto L_002EAED0;
    case 238u: goto L_002EAEFC;
    case 239u: goto L_002EAF30;
    case 240u: goto L_002EAF5C;
    case 241u: goto L_002EAF74;
    case 242u: goto L_002EAF90;
    case 243u: goto L_002EAFC0;
    case 244u: goto L_002EAFD4;
    case 245u: goto L_002EAFF0;
    case 246u: goto L_002EB0BC;
    case 247u: goto L_002EB124;
    case 248u: goto L_002EB13C;
    case 249u: goto L_002EB158;
    case 250u: goto L_002EB180;
    case 251u: goto L_002EB1B0;
    case 252u: goto L_002EB1C4;
    case 253u: goto L_002EB1E0;
    case 254u: goto L_002EB238;
    case 255u: goto L_002EB2A8;
    case 256u: goto L_002EB31C;
    case 257u: goto L_002EB334;
    case 258u: goto L_002EB350;
    case 259u: goto L_002EB370;
    case 260u: goto L_002EB45C;
    case 261u: goto L_002EB498;
    case 262u: goto L_002EB4D8;
    case 263u: goto L_002EB508;
    case 264u: goto L_002EB530;
    case 265u: goto L_002EB558;
    case 266u: goto L_002EB578;
    case 267u: goto L_002EB584;
    case 268u: goto L_002EB600;
    case 269u: goto L_002EB674;
    case 270u: goto L_002EB690;
    case 271u: goto L_002EB6EC;
    case 272u: goto L_002EB708;
    case 273u: goto L_002EB740;
    case 274u: goto L_002EB790;
    case 275u: goto L_002EB7DC;
    case 276u: goto L_002EB834;
    case 277u: goto L_002EB87C;
    case 278u: goto L_002EB8D4;
    case 279u: goto L_002EB91C;
    case 280u: goto L_002EBA1C;
    case 281u: goto L_002EBA80;
    case 282u: goto L_002EBA8C;
    case 283u: goto L_002EBAAC;
    case 284u: goto L_002EBABC;
    case 285u: goto L_002EBB1C;
    case 286u: goto L_002EBB40;
    case 287u: goto L_002EBB7C;
    case 288u: goto L_002EBBCC;
    case 289u: goto L_002EBC00;
    case 290u: goto L_002EBC90;
    case 291u: goto L_002EBD08;
    case 292u: goto L_002EBD44;
    case 293u: goto L_002EBD50;
    case 294u: goto L_002EBD58;
    case 295u: goto L_002EBDE0;
    case 296u: goto L_002EBE24;
    case 297u: goto L_002EBE38;
    case 298u: goto L_002EBE64;
    case 299u: goto L_002EBE7C;
    case 300u: goto L_002EBEA0;
    case 301u: goto L_002EBEDC;
    case 302u: goto L_002EBF38;
    case 303u: goto L_002EBF74;
    case 304u: goto L_002EBF90;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E806C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E801Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006C(c, 170u, depth + 1u); else { c.pc = 0x002D1C10u; return; } if (c.pc != 0x002E801Cu) [[unlikely]] return; }
L_002E801C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E806C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[16], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 140u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1440u), c.r[16].w[0]);
    c.budget -= 18;
L_002E806C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 1120u);  goto L_002E8118; }
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 200u));
    set32(c.r[5], c.r[17].w[0] + 1120u);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 1120u), c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 1124u), 0u);
    st32((c.r[17].w[0] + 1128u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80ACu); st32((c.r[17].w[0] + 1132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 128u, depth + 1u); else { c.pc = 0x002D1520u; return; } if (c.pc != 0x002E80ACu) [[unlikely]] return; }
L_002E80AC:
    c.f[13] = ld32((c.r[17].w[0] + 1128u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80B8u); c.f[12] = ld32((c.r[17].w[0] + 1120u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002E80B8u) [[unlikely]] return; }
L_002E80B8:
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002E8114; } }
L_002E80DC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80E8u); set32(c.r[6], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002E80E8u) [[unlikely]] return; }
L_002E80E8:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[5], c.r[17].w[0] + 1120u);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0] + 1120u), c.f[0]);
    st32((c.r[17].w[0] + 1124u), c.f[3]);
    st32((c.r[17].w[0] + 1128u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8114u); st32((c.r[17].w[0] + 1132u), c.f[1]);  if (depth < kMaxDepth) unit_006C(c, 128u, depth + 1u); else { c.pc = 0x002D1520u; return; } if (c.pc != 0x002E8114u) [[unlikely]] return; }
L_002E8114:
    set32(c.r[4], c.r[17].w[0] + 1120u);
    c.budget -= 1;
L_002E8118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8120u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002E8120u) [[unlikely]] return; }
L_002E8120:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E813C; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 1444u), c.r[3].w[0]);
    c.budget -= 2;
L_002E8138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E813C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E8150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1436u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E819C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8174u); set32(c.r[4], c.r[2].w[0] + 2088u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002E8174u) [[unlikely]] return; }
L_002E8174:
    c.f[1] = ld32((c.r[16].w[0] + 1428u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002E81A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E818Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 16u, depth + 1u); else { c.pc = 0x002E8250u; return; } if (c.pc != 0x002E818Cu) [[unlikely]] return; }
L_002E818C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E819C; } }
    st32((c.r[16].w[0] + 1428u), 0u);
    st32((c.r[16].w[0] + 1424u), 0u);
    c.budget -= 2;
L_002E819C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E81A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E81B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[16], c.r[2].w[0] + 13744u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 17;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[5].w[0] + 80u));  goto L_002E81F8; }
    c.f[20] = 0u;
    c.budget -= 1;
L_002E81F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8204u); set32(c.r[4], c.r[2].w[0] + 2080u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002E8204u) [[unlikely]] return; }
L_002E8204:
    c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8214u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002E8214u) [[unlikely]] return; }
L_002E8214:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E8250:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8284u); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002E8284u) [[unlikely]] return; }
L_002E8284:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00980000u);
    st32((c.r[18].w[0] + 1432u), 0u);
    c.f[22] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.f[0] = c.r[2].w[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002E8384; } }
L_002E82A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3324u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_002E82C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002E82C4; } }
L_002E82C0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E82C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002E82CCu) [[unlikely]] return; }
L_002E82CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 112u);
    set32(c.r[9], c.r[29].w[0] + 96u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82F0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 300u, depth + 1u); else { c.pc = 0x0028F020u; return; } if (c.pc != 0x002E82F0u) [[unlikely]] return; }
L_002E82F0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002E82FCu) [[unlikely]] return; }
L_002E82FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8314; } }
    c.f[0] = ld32((c.r[16].w[0] + 720u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 2;
L_002E8314:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E8384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8328u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002E8328u) [[unlikely]] return; }
L_002E8328:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E836C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002E8348; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002E8348:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 112u);
    set32(c.r[9], c.r[29].w[0] + 96u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8368u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 300u, depth + 1u); else { c.pc = 0x0028F020u; return; } if (c.pc != 0x002E8368u) [[unlikely]] return; }
L_002E8368:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002E836C:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8380; } }
    st32((c.r[18].w[0] + 1432u), c.r[16].w[0]);
    c.f[21] = c.f[20];
    c.budget -= 2;
L_002E8380:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E8384:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3320u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E82A4u | kUnwind; return; } goto L_002E82A4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1432u)));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E83D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 345u, depth + 1u); else { c.pc = 0x002E3530u; return; } if (c.pc != 0x002E83ECu) [[unlikely]] return; }
L_002E83EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 29744u);
    set32(c.r[2], c.r[2].w[0] + 29800u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 256u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 30248u), c.r[17].w[0]);
    set32(c.r[6], 0u + 112u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E841Cu); st32((c.r[17].w[0] + 384u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002E841Cu) [[unlikely]] return; }
L_002E841C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], c.r[17].w[0] + 256u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 34464ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 112u)));
    st32((c.r[17].w[0] + 256u), 0u);
    c.r[4].d[0] = c.r[2].d[0] | 34465ull;
    st32((c.r[17].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 264u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 268u), c.r[3].w[0]);  if (t) { goto L_002E849C; } }
L_002E8450:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E8478; }
    c.r[2].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 2);  goto L_002E8470; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8478; } }
L_002E8470:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002E8478:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002E848C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.r[9].w[0]);  if (t) { goto L_002E8498; } }
L_002E848C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002E849C; }
    st32((c.r[7].w[0] + 12u), c.r[9].w[0]);
    c.budget -= 1;
L_002E8498:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002E849C:
    set32(c.r[3], ld32((c.r[8].w[0] + 60u)));
    c.r[2].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8450u | kUnwind; return; } goto L_002E8450; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[7].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[7].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[7].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    st32((c.r[7].w[0] + 44u), c.f[0]);
    st32((c.r[7].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 368u), 0u);
    st32((c.r[17].w[0] + 372u), 0u);
    st32((c.r[17].w[0] + 376u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3168u)));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002E8528; } }
L_002E850C:
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002E8528; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8538; } }
L_002E8528:
    c.r[2].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E850Cu | kUnwind; return; } goto L_002E850C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E8538:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E8544; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002E8544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 380u), c.r[2].w[0]);  if (t) { goto L_002E85A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8554u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002E8554u) [[unlikely]] return; }
L_002E8554:
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E8590; } }
L_002E8560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8568u); set32(c.r[18], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002E8568u) [[unlikely]] return; }
L_002E8568:
    set32(c.r[3], ld32((c.r[17].w[0] + 376u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 376u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E858Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002E858Cu) [[unlikely]] return; }
L_002E858C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E8590:
    set32(c.r[2], ld32((c.r[17].w[0] + 380u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8560u | kUnwind; return; } goto L_002E8560; }
L_002E85A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E85C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 376u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E8640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E8614; } }
L_002E85E8:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E8614; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8604u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002E8604u) [[unlikely]] return; }
L_002E8604:
    set32(c.r[2], ld32((c.r[18].w[0] + 376u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_002E8614:
    set32(c.r[2], ld32((c.r[18].w[0] + 380u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 376u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E85E8u | kUnwind; return; } goto L_002E85E8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 376u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 380u), 0u);  goto L_002E8640; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8638u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002E8638u) [[unlikely]] return; }
L_002E8638:
    st32((c.r[18].w[0] + 376u), 0u);
    st32((c.r[18].w[0] + 380u), 0u);
    c.budget -= 2;
L_002E8640:
    set32(c.r[4], ld32((c.r[18].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002E8664; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E865Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E865Cu) [[unlikely]] return; }
L_002E865C:
    st32((c.r[18].w[0] + 368u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002E8664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E866Cu); st32((c.r[28].w[0] - 30248u), 0u);  if (depth < kMaxDepth) unit_0070(c, 360u, depth + 1u); else { c.pc = 0x002E3710u; return; } if (c.pc != 0x002E866Cu) [[unlikely]] return; }
L_002E866C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E8690:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 391u, depth + 1u); else { c.pc = 0x002E3BB0u; return; } if (c.pc != 0x002E86ACu) [[unlikely]] return; }
L_002E86AC:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 368u)));  goto L_002E8C54; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 368u)));  goto L_002E894C; }
    set32(c.r[3], 0u + 121u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 368u)));  goto L_002E88A4; }
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002E88A0; } }
    set32(c.r[3], 0u + 119u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E86F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E8C74; } }
L_002E86F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86FCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E86FCu) [[unlikely]] return; }
L_002E86FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 384u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E870Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002E870Cu) [[unlikely]] return; }
L_002E870C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[2].w[0] + 144u));  goto L_002E87D0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 80u));  goto L_002E87B0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002E8738; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002E8834; } }
L_002E8738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8740u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E8740u) [[unlikely]] return; }
L_002E8740:
    c.f[4] = ld32((c.r[17].w[0] + 696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[17].w[0] + 712u));
    set32(c.r[3], c.r[17].w[0] + 688u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 708u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_002E8774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 32u));  if (t) { goto L_002E877C; } }
L_002E8774:
    c.f[3] = c.f[0];
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 2;
L_002E877C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 288u), c.f[0]);
    st32((c.r[16].w[0] + 292u), c.f[3]);
    st32((c.r[16].w[0] + 296u), c.f[4]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_002E8830; } }
L_002E87B0:
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.f[0]);  if (t) { goto L_002E8830; } }
L_002E87D0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 1264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87E0u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002E87E0u) [[unlikely]] return; }
L_002E87E0:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[17].w[0] + 1280u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8810u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002E8810u) [[unlikely]] return; }
L_002E8810:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    st32((c.r[16].w[0] + 292u), c.f[3]);
    st32((c.r[16].w[0] + 296u), c.f[2]);
    st32((c.r[16].w[0] + 300u), c.f[1]);
    c.budget -= 8;
L_002E8830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E8834:
    set32(c.r[2], 0u + 20057u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 308u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_002E8888; }
    set32(c.r[2], 0u + 2001u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 296u));  goto L_002E8868; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E8890; } }
L_002E8868:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E888C; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 296u), c.f[0]);  if (t) { goto L_002E888C; } }
L_002E8888:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 1;
L_002E888C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E8890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8898u);  if (depth < kMaxDepth) unit_0072(c, 69u, depth + 1u); else { c.pc = 0x002E9090u; return; } if (c.pc != 0x002E8898u) [[unlikely]] return; }
L_002E8898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C70; } }
L_002E88A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 1;
L_002E88A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E88C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E88BCu) [[unlikely]] return; }
L_002E88BC:
    st32((c.r[16].w[0] + 368u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_002E88C4:
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E88F8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E88F8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002E8908; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E8908:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 264u)));  if (t) { goto L_002E892C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_002E8934; }
L_002E892C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E893C; } }
L_002E8934:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002E893C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8944u); set32(c.r[4], c.r[2].w[0] + 2096u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002E8944u) [[unlikely]] return; }
L_002E8944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002E8C70; } }
L_002E894C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8C70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 3168u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002E8990; } }
L_002E8974:
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002E8990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E89A0; } }
L_002E8990:
    c.r[4].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8974u | kUnwind; return; } goto L_002E8974; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E89A0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_002E89AC; }
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_002E89AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002E89D0; } }
L_002E89B4:
    set32(c.r[5], c.r[10].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002E89D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E89E0; } }
L_002E89D0:
    c.r[4].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E89B4u | kUnwind; return; } goto L_002E89B4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E89E0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002E89EC; }
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_002E89EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002E8A0C; } }
L_002E89F4:
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[9].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002E8A0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[8].w[0] + 8u)));  if (t) { goto L_002E8A20; } }
L_002E8A0C:
    c.r[4].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E89F4u | kUnwind; return; } goto L_002E89F4; }
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 2;
L_002E8A20:
    set32(c.r[9], ld32((c.r[2].w[0] + 3168u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002E8A48; } }
L_002E8A2C:
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002E8A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8A58; } }
L_002E8A48:
    c.r[6].d[0] = c.r[8].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[2].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8A2Cu | kUnwind; return; } goto L_002E8A2C; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E8A58:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002E8A64; }
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 1;
L_002E8A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002E8A88; } }
L_002E8A6C:
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002E8A88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8A98; } }
L_002E8A88:
    c.r[6].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[2].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8A6Cu | kUnwind; return; } goto L_002E8A6C; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E8A98:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002E8AA4; }
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
L_002E8AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E8AC4; } }
L_002E8AAC:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002E8AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8AD4; } }
L_002E8AC4:
    c.r[3].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8AACu | kUnwind; return; } goto L_002E8AAC; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002E8AD4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E8B4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 380u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E8B4C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 376u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 252u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 24;
L_002E8B4C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002E8C24; }
    set32(c.r[3], ld32((c.r[16].w[0] + 380u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E8C20; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 376u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E8BC4; }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[16].w[0] + 300u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  if (t) { goto L_002E8C20; } }
L_002E8BC4:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E8BF4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E8BF4:
    c.f[0] = ld32((c.r[2].w[0] + 448u));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 452u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 456u));
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 460u));
    st32((c.r[16].w[0] + 300u), c.f[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 308u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.budget -= 11;
L_002E8C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E8C24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C30u); st32((c.r[16].w[0] + 352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 69u, depth + 1u); else { c.pc = 0x002E9090u; return; } if (c.pc != 0x002E8C30u) [[unlikely]] return; }
L_002E8C30:
    set32(c.r[5], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E8C70; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002E8C70; } }
L_002E8C54:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E8C70; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_002E8C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E8C74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E8C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E8FA0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 368u)));  goto L_002E8CD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8F9C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 1;
L_002E8CD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E8E38; }
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1432u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E8D1C; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_002E8DDC; } }
L_002E8D1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E8D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D30u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002E8D30u) [[unlikely]] return; }
L_002E8D30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_002E8D48; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8D54; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002E8D48:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002E8D54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_002E8D74; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_002E8DDC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002E8D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E8DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D84u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002E8D84u) [[unlikely]] return; }
L_002E8D84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 256u);  goto L_002E8D9C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8DB8; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_002E8D9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 1036u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld64((c.r[4].w[0] + 152u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_002E8DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 368u)));  goto L_002E8DE0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DD0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E8DD0u) [[unlikely]] return; }
L_002E8DD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 3;
L_002E8DDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 1;
L_002E8DE0:
    set32(c.r[2], ld32((c.r[2].w[0] + 1440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8DF8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 232u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[17].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 3;
L_002E8DF8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_002E8F34; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 368u)));  goto L_002E8E14; }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 3;
L_002E8E14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8F30; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8E2Cu) [[unlikely]] return; }
L_002E8E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 368u), 0u);  if (t) { goto L_002E8F30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002E8E38:
    set32(c.r[5], ld32((c.r[17].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E44u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E8E44u) [[unlikely]] return; }
L_002E8E44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002E8E50u) [[unlikely]] return; }
L_002E8E50:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_002E8F24; }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E8EA8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[3].w[0] + 11040u));
    c.f[1] = ld32((c.r[2].w[0] + 11044u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[3].w[0] + 11048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 96u), c.f[2]);
    st32((c.r[17].w[0] + 100u), c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 11052u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.f[0]);  if (t) { goto L_002E8F30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E8EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EB0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E8EB0u) [[unlikely]] return; }
L_002E8EB0:
    c.f[4] = ld32((c.r[16].w[0] + 696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    set32(c.r[3], c.r[16].w[0] + 688u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 708u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_002E8EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 32u));  if (t) { goto L_002E8EEC; } }
L_002E8EE4:
    c.f[3] = c.f[0];
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 2;
L_002E8EEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[3]);
    st32((c.r[17].w[0] + 104u), c.f[4]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_002E8F30; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E8F24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F30u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_0071(c, 65u, depth + 1u); else { c.pc = 0x002E4720u; return; } if (c.pc != 0x002E8F30u) [[unlikely]] return; }
L_002E8F30:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_002E8F34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_002E8F64; }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 372u));  if (t) { goto L_002E8F68; } }
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.budget -= 1;
L_002E8F64:
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.budget -= 1;
L_002E8F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 372u), c.f[1]);  if (t) { goto L_002E8F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 372u), c.f[1]);  if (t) { goto L_002E8F94; } }
L_002E8F8C:
    c.f[1] = c.f[0];
    st32((c.r[17].w[0] + 372u), c.f[1]);
    c.budget -= 2;
L_002E8F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 364u, depth + 1u); else { c.pc = 0x002E37B0u; return; } if (c.pc != 0x002E8F9Cu) [[unlikely]] return; }
L_002E8F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E8FA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8FB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3B30u | kUnwind; return; } [[clang::musttail]] return unit_0070(c, 385u, depth); }
L_002E8FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 372u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E8FE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E907C; } }
L_002E8FE8:
    c.f[20] = ld32((c.r[2].w[0] + 13728u));
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E9020; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E9020:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002E9030; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E9030:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 264u)));  if (t) { goto L_002E9054; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_002E905C; }
L_002E9054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E9064; } }
L_002E905C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002E9064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E906Cu); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002E906Cu) [[unlikely]] return; }
L_002E906C:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_002E907C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E907C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 276u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E90DC; } }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E90E0; } }
L_002E90DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E90E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E90EC; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E90EC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] + 264u);
    set32(c.r[2], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002E9118; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9110u); set32(c.r[4], c.r[4].w[0] + 28912u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002E9110u) [[unlikely]] return; }
L_002E9110:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_002E9118:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[4], c.r[2].w[0] + 452u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
L_002E912C:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002E9160; } }
L_002E9138:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002E9160; }
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002E915C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002E916C; } }
L_002E915C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002E9160:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9138u | kUnwind; return; } goto L_002E9138; }
L_002E916C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 368u)));  goto L_002E917C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E912Cu | kUnwind; return; } goto L_002E912C; } }
L_002E917C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 1456u);  goto L_002E919C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9194u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9194u) [[unlikely]] return; }
L_002E9194:
    st32((c.r[17].w[0] + 368u), 0u);
    set32(c.r[4], 0u + 1456u);
    c.budget -= 2;
L_002E919C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91A4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002E91A4u) [[unlikely]] return; }
L_002E91A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 368u), c.r[4].w[0]);  goto L_002E91D4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E91BC; } }
    set32(c.r[6], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002E91BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91CCu); set32(c.r[8], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0071(c, 438u, depth + 1u); else { c.pc = 0x002E7BA0u; return; } if (c.pc != 0x002E91CCu) [[unlikely]] return; }
L_002E91CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 368u), c.r[4].w[0]);
    c.budget -= 2;
L_002E91D4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 232u)));  goto L_002E91F0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E9208; } }
L_002E91F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28992u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9208u); st32((c.r[17].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002E9208u) [[unlikely]] return; }
L_002E9208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E92A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 29744u);
    set32(c.r[2], c.r[2].w[0] + 29800u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002E9288; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28864u);
    set32(c.r[2], c.r[2].w[0] + 28920u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E927Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002E927Cu) [[unlikely]] return; }
L_002E927C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002E9288u) [[unlikely]] return; }
L_002E9288:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002E92A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002E92A0u) [[unlikely]] return; }
L_002E92A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E92A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E92C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E934C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 29824u);
    set32(c.r[2], c.r[2].w[0] + 29880u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002E9334; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E931Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002E931Cu) [[unlikely]] return; }
L_002E931C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002E9328u) [[unlikely]] return; }
L_002E9328:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9334u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002E9334u) [[unlikely]] return; }
L_002E9334:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002E9350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E934Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002E934Cu) [[unlikely]] return; }
L_002E934C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E9350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E93A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E92C0u | kUnwind; return; } goto L_002E92C0; }
L_002E93B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7CA0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 443u, depth); }
L_002E93C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9220u | kUnwind; return; } goto L_002E9220; }
L_002E93D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8690u | kUnwind; return; } goto L_002E8690; }
L_002E93E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002E93F4u) [[unlikely]] return; }
L_002E93F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30064u);
    set32(c.r[3], c.r[3].w[0] + 30120u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16707ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9430:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289A00u | kUnwind; return; } [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_002E9440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E94D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30064u);
    set32(c.r[2], c.r[2].w[0] + 30120u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002E94B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002E94ACu) [[unlikely]] return; }
L_002E94AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002E94B8u) [[unlikely]] return; }
L_002E94B8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002E94D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002E94D0u) [[unlikely]] return; }
L_002E94D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E94D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E94F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9450u | kUnwind; return; } goto L_002E9450; }
L_002E9500:
    set32(c.r[6], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E95EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E95EC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 148u)));  goto L_002E9538; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95EC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 148u)));
    c.budget -= 1;
L_002E9538:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 4u);  goto L_002E95C0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 3u);  goto L_002E95C0; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 2u);  goto L_002E95C0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_002E95C0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002E95C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95C0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95C0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95C0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95C0; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95C0; } }
L_002E95B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E95EC; } }
L_002E95C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E95EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E95EC; } }
    set32(c.r[3], c.r[4].w[0] + 144u);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_002E95EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E96C8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E96CC; }
    st32((c.r[16].w[0] + 1320u), c.r[17].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 69u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9640u); st32((c.r[16].w[0] + 1324u), 0u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9640u) [[unlikely]] return; }
L_002E9640:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9650u); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9650u) [[unlikely]] return; }
L_002E9650:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9660u); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9660u) [[unlikely]] return; }
L_002E9660:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9670u); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9670u) [[unlikely]] return; }
L_002E9670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9680u); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9680u) [[unlikely]] return; }
L_002E9680:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E96A8u) [[unlikely]] return; }
L_002E96A8:
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96C8u); st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 102u, depth + 1u); else { c.pc = 0x002E9500u; return; } if (c.pc != 0x002E96C8u) [[unlikely]] return; }
L_002E96C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E96CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E96E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E9844; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E9848; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9718u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9718u) [[unlikely]] return; }
L_002E9718:
    set32(c.r[5], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9728u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9728u) [[unlikely]] return; }
L_002E9728:
    set32(c.r[5], 0u + 7u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9738u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9738u) [[unlikely]] return; }
L_002E9738:
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9748u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9748u) [[unlikely]] return; }
L_002E9748:
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9758u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E9758u) [[unlikely]] return; }
L_002E9758:
    set32(c.r[4], ld32((c.r[16].w[0] + 1320u)));
    set32(c.r[2], 0u - 5u);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 8;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E9788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9780u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E9780u) [[unlikely]] return; }
L_002E9780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_002E9794; } }
L_002E9788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9790u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E9790u) [[unlikely]] return; }
L_002E9790:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_002E9794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E979Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x002E979Cu) [[unlikely]] return; }
L_002E979C:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], 0u - 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 164u)));
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st32((c.r[16].w[0] + 164u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 176u)));
    c.r[7].d[0] = c.r[7].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 1320u), 0u);
    st32((c.r[16].w[0] + 1324u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9810u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002E9810u) [[unlikely]] return; }
L_002E9810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E982C; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9828u) [[unlikely]] return; }
L_002E9828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E982C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 102u, depth + 1u); else { c.pc = 0x002E9500u; return; } if (c.pc != 0x002E9834u) [[unlikely]] return; }
L_002E9834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E983Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002E983Cu) [[unlikely]] return; }
L_002E983C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E9844u) [[unlikely]] return; }
L_002E9844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E9848:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9860:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 172u)));  goto L_002E9870; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E98AC; } }
L_002E9870:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E98AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E98A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E98A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E98AC; } }
L_002E98A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E98AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E98C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E9928; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9904u); set32(c.r[5], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0028CB70u; return; } if (c.pc != 0x002E9904u) [[unlikely]] return; }
L_002E9904:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9914u) [[unlikely]] return; }
L_002E9914:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
L_002E9928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E99E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9964u); set32(c.r[5], ld32((c.r[16].w[0] + 1300u)));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0028CB70u; return; } if (c.pc != 0x002E9964u) [[unlikely]] return; }
L_002E9964:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[6], 0u - 257u);
    set32(c.r[7], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[3], 0u - 33u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 172u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99A0u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002E99A0u) [[unlikely]] return; }
L_002E99A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));  goto L_002E99BC; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E99B8u) [[unlikely]] return; }
L_002E99B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_002E99BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 114u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99E8u); st32((c.r[16].w[0] + 1152u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x002E99E8u) [[unlikely]] return; }
L_002E99E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 13u, depth + 1u); else { c.pc = 0x00294110u; return; } if (c.pc != 0x002E9A18u) [[unlikely]] return; }
L_002E9A18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A28u); set32(c.r[5], c.r[5].w[0] + 6576u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x002E9A28u) [[unlikely]] return; }
L_002E9A28:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41470000u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A44u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9A44u) [[unlikely]] return; }
L_002E9A44:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A5Cu); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002E9A5Cu) [[unlikely]] return; }
L_002E9A5C:
    set32(c.r[17], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41470000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A78u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9A78u) [[unlikely]] return; }
L_002E9A78:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A88u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002E9A88u) [[unlikely]] return; }
L_002E9A88:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41470000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AA4u); c.r[5].d[0] = c.r[2].d[0] | 21587ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9AA4u) [[unlikely]] return; }
L_002E9AA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AC0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002E9AC0u) [[unlikely]] return; }
L_002E9AC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AD8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002E9AD8u) [[unlikely]] return; }
L_002E9AD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 13u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[7], c.r[7].w[0] + 6448u);
    set32(c.r[6], 0u + 360u);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 13;
L_002E9B0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[8], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[8].w[0] + 264u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[8].w[0] + 292u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9B0Cu | kUnwind; return; } goto L_002E9B0C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B64u); set32(c.r[4], ld32((c.r[16].w[0] + 624u)));  if (depth < kMaxDepth) unit_0068(c, 41u, depth + 1u); else { c.pc = 0x002C07B0u; return; } if (c.pc != 0x002E9B64u) [[unlikely]] return; }
L_002E9B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 624u)));  if (depth < kMaxDepth) unit_0068(c, 45u, depth + 1u); else { c.pc = 0x002C0820u; return; } if (c.pc != 0x002E9B6Cu) [[unlikely]] return; }
L_002E9B6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41470000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B8Cu); c.r[5].d[0] = c.r[2].d[0] | 21323ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9B8Cu) [[unlikely]] return; }
L_002E9B8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BA0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002E9BA0u) [[unlikely]] return; }
L_002E9BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 381u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C50000u);
    st32((c.r[4].w[0] + 508u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 500u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 512u), c.f[0]);
    st32((c.r[4].w[0] + 504u), c.f[0]);
    st32((c.r[4].w[0] + 520u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C0Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9C0Cu) [[unlikely]] return; }
L_002E9C0C:
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002E9C44; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C2Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9C2Cu) [[unlikely]] return; }
L_002E9C2C:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002E9C70; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002E9C44:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E9C64; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 76u, depth + 1u); else { c.pc = 0x002ECFC0u; return; } if (c.pc != 0x002E9C5Cu) [[unlikely]] return; }
L_002E9C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9C6C; } }
L_002E9C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C6Cu);  if (depth < kMaxDepth) unit_0073(c, 74u, depth + 1u); else { c.pc = 0x002ECF60u; return; } if (c.pc != 0x002E9C6Cu) [[unlikely]] return; }
L_002E9C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E9C70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002E9C9Cu) [[unlikely]] return; }
L_002E9C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002ECEB0u; return; } if (c.pc != 0x002E9CA4u) [[unlikely]] return; }
L_002E9CA4:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] + 16924u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 264u, depth + 1u); else { c.pc = 0x002EB530u; return; } if (c.pc != 0x002E9CB8u) [[unlikely]] return; }
L_002E9CB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CC8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9CC8u) [[unlikely]] return; }
L_002E9CC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CD8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9CD8u) [[unlikely]] return; }
L_002E9CD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 122u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002E9CF8; }
L_002E9CF8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002E9D30u) [[unlikely]] return; }
L_002E9D30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[2].w[0] + 16916u), c.r[16].w[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] + 16920u), c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 104u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 96u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 28u), c.f[0]);
    st32((c.r[7].w[0] + 16948u), c.r[16].w[0]);
    c.f[12] = 0u;
    st32((c.r[6].w[0] + 16952u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    st32((c.r[3].w[0] + 16980u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 16984u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DC4u); st32((c.r[2].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x002E9DC4u) [[unlikely]] return; }
L_002E9DC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DD4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x002E9DD4u) [[unlikely]] return; }
L_002E9DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 513u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E34u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9E34u) [[unlikely]] return; }
L_002E9E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E40u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 46u, depth + 1u); else { c.pc = 0x002C0830u; return; } if (c.pc != 0x002E9E40u) [[unlikely]] return; }
L_002E9E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 116u, depth + 1u); else { c.pc = 0x002ED600u; return; } if (c.pc != 0x002E9E48u) [[unlikely]] return; }
L_002E9E48:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002EC0A0u; return; } if (c.pc != 0x002E9E5Cu) [[unlikely]] return; }
L_002E9E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 42u, depth + 1u); else { c.pc = 0x002EC890u; return; } if (c.pc != 0x002E9E64u) [[unlikely]] return; }
L_002E9E64:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E74u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9E74u) [[unlikely]] return; }
L_002E9E74:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E9E90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E9EA4; } }
L_002E9E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E98u);  if (depth < kMaxDepth) unit_0073(c, 80u, depth + 1u); else { c.pc = 0x002ED080u; return; } if (c.pc != 0x002E9E98u) [[unlikely]] return; }
L_002E9E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 118u, depth + 1u); else { c.pc = 0x002ED680u; return; } if (c.pc != 0x002E9EA0u) [[unlikely]] return; }
L_002E9EA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E9EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EA064; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EECu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9EECu) [[unlikely]] return; }
L_002E9EEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002E9F0C; }
L_002E9F0C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F40u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002E9F40u) [[unlikely]] return; }
L_002E9F40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[3].w[0] + 440u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 208u));
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F94u); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002E9F94u) [[unlikely]] return; }
L_002E9F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 213u, depth + 1u); else { c.pc = 0x002EA7E0u; return; } if (c.pc != 0x002E9FA0u) [[unlikely]] return; }
L_002E9FA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 213u, depth + 1u); else { c.pc = 0x002EA7E0u; return; } if (c.pc != 0x002E9FACu) [[unlikely]] return; }
L_002E9FAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FCCu); st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 47u, depth + 1u); else { c.pc = 0x002EC950u; return; } if (c.pc != 0x002E9FCCu) [[unlikely]] return; }
L_002E9FCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x002E9FD8u) [[unlikely]] return; }
L_002E9FD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FE8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E9FE8u) [[unlikely]] return; }
L_002E9FE8:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_002EA048; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA044; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA024u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x002EA024u) [[unlikely]] return; }
L_002EA024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA044; } }
    c.f[12] = 0u;
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA044u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002EA044u) [[unlikely]] return; }
L_002EA044:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002EA048:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA058u); set32(c.r[5], 0u + 114u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA058u) [[unlikely]] return; }
L_002EA058:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002EA064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EA328; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0B8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA0B8u) [[unlikely]] return; }
L_002EA0B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002EA0D8; }
L_002EA0D8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA10Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EA10Cu) [[unlikely]] return; }
L_002EA10C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], c.r[3].w[0] + 440u);
    c.f[0] = ld32((c.r[3].w[0] + 208u));
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA154u); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002EA154u) [[unlikely]] return; }
L_002EA154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 221u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x002EA160u) [[unlikely]] return; }
L_002EA160:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA16Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 221u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x002EA16Cu) [[unlikely]] return; }
L_002EA16C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], 0u - 2u);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    st32((c.r[3].w[0] + 88u), 0u);
    st32((c.r[3].w[0] + 92u), 0u);
    st32((c.r[3].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 88u), c.f[0]);
    st32((c.r[3].w[0] + 92u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[3].w[0] + 104u), 0u);
    st32((c.r[3].w[0] + 108u), 0u);
    st32((c.r[3].w[0] + 112u), 0u);
    st32((c.r[3].w[0] + 116u), 0u);
    st32((c.r[3].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    st32((c.r[3].w[0] + 88u), 0u);
    st32((c.r[3].w[0] + 92u), 0u);
    st32((c.r[3].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 88u), c.f[0]);
    st32((c.r[3].w[0] + 92u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[3].w[0] + 104u), 0u);
    st32((c.r[3].w[0] + 108u), 0u);
    st32((c.r[3].w[0] + 112u), 0u);
    st32((c.r[3].w[0] + 116u), 0u);
    st32((c.r[3].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 112u), c.f[0]);
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA260u); st32((c.r[3].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0073(c, 67u, depth + 1u); else { c.pc = 0x002ECE70u; return; } if (c.pc != 0x002EA260u) [[unlikely]] return; }
L_002EA260:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 54u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA280u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EA280u) [[unlikely]] return; }
L_002EA280:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] & 49151ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2A4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA2A4u) [[unlikely]] return; }
L_002EA2A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002EA304; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA300; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2E0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x002EA2E0u) [[unlikely]] return; }
L_002EA2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA300; } }
    c.f[12] = 0u;
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA300u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002EA300u) [[unlikely]] return; }
L_002EA300:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002EA304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 29040u);
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA328u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002EA328u) [[unlikely]] return; }
L_002EA328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA370u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA370u) [[unlikely]] return; }
L_002EA370:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002EA3F8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 340u)));  goto L_002EA3FC; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 484u)));  goto L_002EA39C; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 2;
L_002EA39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3A4u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA3A4u) [[unlikely]] return; }
L_002EA3A4:
    set32(c.r[25], ld32((c.r[2].w[0] + 16u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA3B8u) [[unlikely]] return; }
L_002EA3B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA3F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 340u)));
    set32(c.r[5], 0u + 55u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002EA430; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3E8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EA3E8u) [[unlikely]] return; }
L_002EA3E8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002EA42C; } }
L_002EA3F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 1;
L_002EA3FC:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA42C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA420u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EA420u) [[unlikely]] return; }
L_002EA420:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EA42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002EA430:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[18].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 17024u);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 412u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 412u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 44;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[2].w[0] + 412u), c.r[5].w[0]);  if (t) { goto L_002EA520; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA510u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA510u) [[unlikely]] return; }
L_002EA510:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002EA7B8; }
L_002EA520:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EA55C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA53Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA53Cu) [[unlikely]] return; }
L_002EA53C:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA558; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA7B8; } }
L_002EA558:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EA55C:
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA568u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA568u) [[unlikely]] return; }
L_002EA568:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EA57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EA5F0; } }
L_002EA57C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002EA5B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA58Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EA58Cu) [[unlikely]] return; }
L_002EA58C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 544u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002EA5F0; } }
L_002EA5B8:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002EA5F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EA5C8u) [[unlikely]] return; }
L_002EA5C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 546u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 10;
L_002EA5F0:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { st32((c.r[16].w[0]), 0u);  goto L_002EA7B8; }
    c.r[1].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EA610; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA7B8; } }
L_002EA610:
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA61Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA61Cu) [[unlikely]] return; }
L_002EA61C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] + 0ull;  goto L_002EA63C; }
L_002EA63C:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EA680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_002EA7B8; } }
L_002EA680:
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA68Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA68Cu) [[unlikely]] return; }
L_002EA68C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002EA6AC; }
L_002EA6AC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EA6F4; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002EA758; } }
L_002EA6F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002EA71C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA70Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA70Cu) [[unlikely]] return; }
L_002EA70C:
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_002EA748; }
L_002EA71C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EA754; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA734u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA734u) [[unlikely]] return; }
L_002EA734:
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA750; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002EA748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002EA758; } }
L_002EA750:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EA754:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002EA758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA760u); set32(c.r[4], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EA760u) [[unlikely]] return; }
L_002EA760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43020000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.f[2] = c.r[6].w[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = 0u;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    st32((c.r[6].w[0] + 208u), c.f[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 22;
L_002EA7B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EA7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 18;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002EA988; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA838u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EA838u) [[unlikely]] return; }
L_002EA838:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002EA84C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EA8CC; } }
L_002EA84C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002EA88C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA85Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EA85Cu) [[unlikely]] return; }
L_002EA85C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 544u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_002EA8CC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002EA88C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EA8CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA89Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EA89Cu) [[unlikely]] return; }
L_002EA89C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 546u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_002EA8CC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EA8CC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002EA984; } }
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EA8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA984; } }
L_002EA8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA8F0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EA8F0u) [[unlikely]] return; }
L_002EA8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA928u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002EA928u) [[unlikely]] return; }
L_002EA928:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0] + 212u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[6].w[0] + 292u), c.r[4].w[0]);  if (t) { goto L_002EA970; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA968u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x002EA968u) [[unlikely]] return; }
L_002EA968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA984; } }
L_002EA970:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EA984; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA984u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 242u, depth + 1u); else { c.pc = 0x002EAF90u; return; } if (c.pc != 0x002EA984u) [[unlikely]] return; }
L_002EA984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002EA988:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EA9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[19].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] + c.r[19].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[18], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0] + 412u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0] + 412u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 412u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 39;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  goto L_002EAA64; }
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EAACC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 1;
L_002EAA64:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[6].d[0] = c.r[4].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002EABEC; } }
L_002EAACC:
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAD8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAAD8u) [[unlikely]] return; }
L_002EAAD8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_002EAAF8; }
L_002EAAF8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB38u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAB38u) [[unlikely]] return; }
L_002EAB38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EAB4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002EABC0; } }
L_002EAB4C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EAB88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EAB5Cu) [[unlikely]] return; }
L_002EAB5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 544u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002EABC0; } }
L_002EAB88:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002EABC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EAB98u) [[unlikely]] return; }
L_002EAB98:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 546u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
L_002EABC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABD0u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EABD0u) [[unlikely]] return; }
L_002EABD0:
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[0];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABECu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002EABECu) [[unlikely]] return; }
L_002EABEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EAC10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 16;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002EAC5C; } }
    c.r[1].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EAC88; }
L_002EAC5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002EAF74; } }
L_002EAC88:
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC94u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAC94u) [[unlikely]] return; }
L_002EAC94:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] + 0ull;  goto L_002EACB4; }
L_002EACB4:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EAD1C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002EAF74; } }
L_002EAD1C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EAD48; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD34u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAD34u) [[unlikely]] return; }
L_002EAD34:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_002EAD74; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EAD48:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[17].w[0] - 1u);  goto L_002EADA0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD60u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAD60u) [[unlikely]] return; }
L_002EAD60:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EAD9C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002EAD74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002EAF74; } }
L_002EAD9C:
    set32(c.r[4], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_002EADA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADA8u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EADA8u) [[unlikely]] return; }
L_002EADA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[3] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[6].w[0] + 208u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002EAE24u) [[unlikely]] return; }
L_002EAE24:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = ld32((c.r[17].w[0] + 356u));
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.f[13] = 0u;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE50u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EAE50u) [[unlikely]] return; }
L_002EAE50:
    set32(c.r[3], ld32((c.r[19].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0])));  goto L_002EAF64; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002EAF08; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE78u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAE78u) [[unlikely]] return; }
L_002EAE78:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE8Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAE8Cu) [[unlikely]] return; }
L_002EAE8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EAF04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAED0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EAED0u) [[unlikely]] return; }
L_002EAED0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEFCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EAEFCu) [[unlikely]] return; }
L_002EAEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002EAF78; } }
L_002EAF04:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002EAF08:
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF30u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EAF30u) [[unlikely]] return; }
L_002EAF30:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF5Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EAF5Cu) [[unlikely]] return; }
L_002EAF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAF74; } }
L_002EAF64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF74u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EAF74u) [[unlikely]] return; }
L_002EAF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002EAF78:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EAF90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFC0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAFC0u) [[unlikely]] return; }
L_002EAFC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFD4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EAFD4u) [[unlikely]] return; }
L_002EAFD4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EAFE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB018; } }
L_002EAFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFF0u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EAFF0u) [[unlikely]] return; }
L_002EAFF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 544u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
L_002EB018:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EB148; }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EB144; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 114u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EB144; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[6].d[0] + 0ull;  goto L_002EB06C; }
L_002EB06C:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));  goto L_002EB0C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB0BCu) [[unlikely]] return; }
L_002EB0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002EB15C; } }
L_002EB0C4:
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[6].d[0] + 0ull;  goto L_002EB0DC; }
L_002EB0DC:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EB12C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB124u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB124u) [[unlikely]] return; }
L_002EB124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB158; } }
L_002EB12C:
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB13Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB13Cu) [[unlikely]] return; }
L_002EB13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB158; } }
L_002EB144:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EB148:
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB158u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB158u) [[unlikely]] return; }
L_002EB158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002EB15C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EB180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1B0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EB1B0u) [[unlikely]] return; }
L_002EB1B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1C4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EB1C4u) [[unlikely]] return; }
L_002EB1C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EB1D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EB208; } }
L_002EB1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1E0u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EB1E0u) [[unlikely]] return; }
L_002EB1E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 546u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 10;
L_002EB208:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB340; }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB33C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB238u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EB238u) [[unlikely]] return; }
L_002EB238:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002EB258; }
L_002EB258:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));  goto L_002EB2B0; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2A8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB2A8u) [[unlikely]] return; }
L_002EB2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002EB354; } }
L_002EB2B0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002EB2CC; }
L_002EB2CC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB324; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB31Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB31Cu) [[unlikely]] return; }
L_002EB31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB350; } }
L_002EB324:
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB334u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB334u) [[unlikely]] return; }
L_002EB334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB350; } }
L_002EB33C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002EB340:
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB350u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EB350u) [[unlikely]] return; }
L_002EB350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002EB354:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EB370:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002EB50C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_002EB418; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_002EB410; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_002EB408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB420; } }
L_002EB408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_002EB428; } }
L_002EB410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_002EB428; } }
L_002EB418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_002EB428; } }
L_002EB420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002EB510; } }
L_002EB428:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 292u)));  goto L_002EB4B0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 292u)));  goto L_002EB460; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB45Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EB45Cu) [[unlikely]] return; }
L_002EB45C:
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 1;
L_002EB460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[18].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 412u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 7;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 292u)));  goto L_002EB49C; }
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB498u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EB498u) [[unlikely]] return; }
L_002EB498:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 1;
L_002EB49C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[17].w[0] + 292u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 412u), c.r[3].w[0]);  if (t) { goto L_002EB508; } }
L_002EB4B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[12] = c.f[20];
    st32((c.r[18].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4D8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002EB4D8u) [[unlikely]] return; }
L_002EB4D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB508u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002EB508u) [[unlikely]] return; }
L_002EB508:
    st32((c.r[16].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_002EB50C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002EB510:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EB530:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
L_002EB558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 16864u);
    set32(c.r[5], ld32((c.r[19].w[0] + 484u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB578u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EB578u) [[unlikely]] return; }
L_002EB578:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB584u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 19u, depth + 1u); else { c.pc = 0x002C0460u; return; } if (c.pc != 0x002EB584u) [[unlikely]] return; }
L_002EB584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_002EB5B0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_002EB5CC; } }
L_002EB5B0:
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 7;
L_002EB5CC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB558u | kUnwind; return; } goto L_002EB558; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EB600:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[21], c.r[21].w[0] + 16896u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], c.r[17].w[0] + 16928u);
    set32(c.r[22], c.r[22].w[0] + 16960u);
    set32(c.r[23], c.r[23].w[0] + 16992u);
    c.budget -= 25;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EB6C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB674u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EB674u) [[unlikely]] return; }
L_002EB674:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002EB688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB6B8; } }
L_002EB688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB690u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EB690u) [[unlikely]] return; }
L_002EB690:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 544u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 10;
L_002EB6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB730; } }
L_002EB6C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_002EB6D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EB730; } }
L_002EB6D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_002EB730; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6ECu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EB6ECu) [[unlikely]] return; }
L_002EB6EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002EB700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB730; } }
L_002EB700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB708u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EB708u) [[unlikely]] return; }
L_002EB708:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 546u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 10;
L_002EB730:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002EBBD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB740u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB740u) [[unlikely]] return; }
L_002EB740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[3], c.f[20]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 600u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB790u); set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB790u) [[unlikely]] return; }
L_002EB790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[21].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_002EB7C4; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_002EB7C4:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { st32((c.r[21].w[0] + 20u), c.r[4].w[0]);  goto L_002EB7D4; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 2;
L_002EB7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7DCu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB7DCu) [[unlikely]] return; }
L_002EB7DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB834u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB834u) [[unlikely]] return; }
L_002EB834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_002EB864; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_002EB864:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { st32((c.r[17].w[0] + 20u), c.r[4].w[0]);  goto L_002EB874; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 2;
L_002EB874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB87Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB87Cu) [[unlikely]] return; }
L_002EB87C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8D4u); set32(c.r[4], ld32((c.r[22].w[0] + 20u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB8D4u) [[unlikely]] return; }
L_002EB8D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[22].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_002EB904; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_002EB904:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { st32((c.r[22].w[0] + 20u), c.r[4].w[0]);  goto L_002EB914; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 2;
L_002EB914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB91Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EB91Cu) [[unlikely]] return; }
L_002EB91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 22;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002EB980; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE40000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] | 28792ull;  if (t) { goto L_002EB9A8; } }
L_002EB980:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_002EB998; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF940000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] | 53835ull;  if (t) { goto L_002EB9A8; } }
L_002EB998:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002EB9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF5D0000u);
    c.r[5].d[0] = c.r[2].d[0] | 17125ull;
    c.budget -= 2;
L_002EB9A8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_002EB9BC; }
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 3;
L_002EB9BC:
    st32((c.r[23].w[0] + 24u), c.r[18].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[23].w[0] + 20u), 0u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    st32((c.r[3].w[0] + 32u), 0u);
    c.f[12] = 0u;
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 40u), c.f[20]);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA1Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EBA1Cu) [[unlikely]] return; }
L_002EBA1C:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[16], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 240u), c.f[21]);
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; st32((c.r[6].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002EBA54; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EBA8C; } }
L_002EBA54:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002EBA6C; }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EBA8C; } }
L_002EBA6C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_002EBA90; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 242u, depth + 1u); else { c.pc = 0x002EAF90u; return; } if (c.pc != 0x002EBA80u) [[unlikely]] return; }
L_002EBA80:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x002EBA8Cu) [[unlikely]] return; }
L_002EBA8C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002EBA90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EBBCC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAACu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EBAACu) [[unlikely]] return; }
L_002EBAAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBABCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EBABCu) [[unlikely]] return; }
L_002EBABC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002EBADC; }
L_002EBADC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[5], ld32((c.r[20].w[0] + 484u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB1Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EBB1Cu) [[unlikely]] return; }
L_002EBB1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002EBB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EBBA4; } }
L_002EBB30:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002EBB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EBB40u) [[unlikely]] return; }
L_002EBB40:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 544u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_002EBBA4; } }
L_002EBB6C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EBBA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EBB7Cu) [[unlikely]] return; }
L_002EBB7C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 546u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 10;
L_002EBBA4:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EBBCC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBCCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EBBCCu) [[unlikely]] return; }
L_002EBBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002EBBD0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002EBC00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 16864u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[4], c.r[17].w[0] << 5);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull; c.f[22] = c.f[12];  if (t) { [[clang::musttail]] return unit_0073(c, 1u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  [[clang::musttail]] return unit_0073(c, 2u, depth); }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EBC84; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002EBC80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002EBC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_002EBCE8; } }
L_002EBC80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EBC84:
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC90u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EBC90u) [[unlikely]] return; }
L_002EBC90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] + 0ull;  goto L_002EBCB0; }
L_002EBCB0:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 14;
L_002EBCE8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002EBCFC; } }
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_002EBD30; }
L_002EBCFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD08u); set32(c.r[4], c.r[4].w[0] + 29072u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002EBD08u) [[unlikely]] return; }
L_002EBD08:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EBD1C; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_002EBD1C:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  goto L_002EBD2C; }
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_002EBD2C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_002EBD30:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD44u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EBD44u) [[unlikely]] return; }
L_002EBD44:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD50u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EBD50u) [[unlikely]] return; }
L_002EBD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD58u); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EBD58u) [[unlikely]] return; }
L_002EBD58:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002EBD84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[21] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBD88; } }
L_002EBD84:
    c.f[21] = 0u;
    c.budget -= 1;
L_002EBD88:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002EBDA8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002EBDBC; } }
L_002EBDA8:
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[22]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
L_002EBDBC:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002EBDDC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002EBDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBFA0; } }
L_002EBDD8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EBDDC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.budget -= 1;
L_002EBDE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002EBF94; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EBF90; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EBE70; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE24u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EBE24u) [[unlikely]] return; }
L_002EBE24:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE38u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EBE38u) [[unlikely]] return; }
L_002EBE38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBE6C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE64u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EBE64u) [[unlikely]] return; }
L_002EBE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBF90; } }
L_002EBE6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EBE70:
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE7Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EBE7Cu) [[unlikely]] return; }
L_002EBE7C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002EBE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EBF04; } }
L_002EBE90:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002EBECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBEA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EBEA0u) [[unlikely]] return; }
L_002EBEA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 544u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_002EBF04; } }
L_002EBECC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EBF04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBEDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EBEDCu) [[unlikely]] return; }
L_002EBEDC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 126u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 546u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 10;
L_002EBF04:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 24u)));  goto L_002EBF40; }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EBF90; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EBF38u) [[unlikely]] return; }
L_002EBF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBF90; } }
L_002EBF40:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EBF90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBF7C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF74u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EBF74u) [[unlikely]] return; }
L_002EBF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBF90; } }
L_002EBF7C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF90u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 259u, depth + 1u); else { c.pc = 0x002EB370u; return; } if (c.pc != 0x002EBF90u) [[unlikely]] return; }
L_002EBF90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EBF94:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBDE0u | kUnwind; return; } goto L_002EBDE0; }
L_002EBFA0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_002EBFFC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[21]);
    st32((c.r[4].w[0] + 40u), c.f[20]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 18;
L_002EBFFC:
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_0073(c, 1u, depth);
}

}
