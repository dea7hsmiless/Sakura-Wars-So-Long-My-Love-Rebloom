#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0048[4096] = {
    1, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 7, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0,
};

void unit_0048(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00240000;
    case 2u: goto L_00240008;
    case 3u: goto L_00240014;
    case 4u: goto L_00240018;
    case 5u: goto L_0024002C;
    case 6u: goto L_0024003C;
    case 7u: goto L_00240040;
    case 8u: goto L_00240050;
    case 9u: goto L_00240054;
    case 10u: goto L_00240070;
    case 11u: goto L_002400B4;
    case 12u: goto L_002400C4;
    case 13u: goto L_002400D8;
    case 14u: goto L_002400E8;
    case 15u: goto L_00240108;
    case 16u: goto L_0024011C;
    case 17u: goto L_00240150;
    case 18u: goto L_002401A8;
    case 19u: goto L_002401B4;
    case 20u: goto L_002401CC;
    case 21u: goto L_002401E8;
    case 22u: goto L_00240200;
    case 23u: goto L_0024021C;
    case 24u: goto L_00240228;
    case 25u: goto L_00240230;
    case 26u: goto L_00240240;
    case 27u: goto L_00240260;
    case 28u: goto L_002402A4;
    case 29u: goto L_002402B4;
    case 30u: goto L_002402C8;
    case 31u: goto L_002402D8;
    case 32u: goto L_002402F8;
    case 33u: goto L_0024030C;
    case 34u: goto L_00240340;
    case 35u: goto L_00240398;
    case 36u: goto L_002403A4;
    case 37u: goto L_002403BC;
    case 38u: goto L_002403D8;
    case 39u: goto L_002403F0;
    case 40u: goto L_0024040C;
    case 41u: goto L_00240418;
    case 42u: goto L_00240420;
    case 43u: goto L_00240430;
    case 44u: goto L_00240450;
    case 45u: goto L_002404AC;
    case 46u: goto L_002404B8;
    case 47u: goto L_002404D0;
    case 48u: goto L_0024052C;
    case 49u: goto L_00240538;
    case 50u: goto L_00240550;
    case 51u: goto L_0024056C;
    case 52u: goto L_00240584;
    case 53u: goto L_00240590;
    case 54u: goto L_002405B0;
    case 55u: goto L_002405D8;
    case 56u: goto L_002405E4;
    case 57u: goto L_002405F0;
    case 58u: goto L_002405FC;
    case 59u: goto L_00240664;
    case 60u: goto L_002406A4;
    case 61u: goto L_002406B8;
    case 62u: goto L_002406F0;
    case 63u: goto L_002407D4;
    case 64u: goto L_00240804;
    case 65u: goto L_0024081C;
    case 66u: goto L_00240844;
    case 67u: goto L_00240854;
    case 68u: goto L_002408A8;
    case 69u: goto L_002408D8;
    case 70u: goto L_002408F8;
    case 71u: goto L_00240918;
    case 72u: goto L_00240940;
    case 73u: goto L_00240968;
    case 74u: goto L_00240974;
    case 75u: goto L_002409CC;
    case 76u: goto L_002409FC;
    case 77u: goto L_00240A1C;
    case 78u: goto L_00240A44;
    case 79u: goto L_00240A80;
    case 80u: goto L_00240A9C;
    case 81u: goto L_00240ACC;
    case 82u: goto L_00240B1C;
    case 83u: goto L_00240BA4;
    case 84u: goto L_00240BD8;
    case 85u: goto L_00240C44;
    case 86u: goto L_00240C68;
    case 87u: goto L_00240C8C;
    case 88u: goto L_00240CB8;
    case 89u: goto L_00240D04;
    case 90u: goto L_00240D28;
    case 91u: goto L_00240D50;
    case 92u: goto L_00240D74;
    case 93u: goto L_00240D80;
    case 94u: goto L_00240DE4;
    case 95u: goto L_00240E24;
    case 96u: goto L_00240FE0;
    case 97u: goto L_00241004;
    case 98u: goto L_00241094;
    case 99u: goto L_00241098;
    case 100u: goto L_00241154;
    case 101u: goto L_0024115C;
    case 102u: goto L_002411BC;
    case 103u: goto L_002411E0;
    case 104u: goto L_00241204;
    case 105u: goto L_00241220;
    case 106u: goto L_00241238;
    case 107u: goto L_00241260;
    case 108u: goto L_002412A8;
    case 109u: goto L_002412CC;
    case 110u: goto L_002412E0;
    case 111u: goto L_002412FC;
    case 112u: goto L_0024137C;
    case 113u: goto L_002413A0;
    case 114u: goto L_002413B8;
    case 115u: goto L_00241440;
    case 116u: goto L_00241464;
    case 117u: goto L_002414AC;
    case 118u: goto L_002414D0;
    case 119u: goto L_002414F0;
    case 120u: goto L_00241508;
    case 121u: goto L_00241538;
    case 122u: goto L_0024155C;
    case 123u: goto L_00241580;
    case 124u: goto L_00241590;
    case 125u: goto L_002415AC;
    case 126u: goto L_00241628;
    case 127u: goto L_00241660;
    case 128u: goto L_00241684;
    case 129u: goto L_002416D8;
    case 130u: goto L_00241764;
    case 131u: goto L_002417A8;
    case 132u: goto L_002417CC;
    case 133u: goto L_002417E0;
    case 134u: goto L_002417F0;
    case 135u: goto L_0024183C;
    case 136u: goto L_00241848;
    case 137u: goto L_00241854;
    case 138u: goto L_00241860;
    case 139u: goto L_002419CC;
    case 140u: goto L_002419D8;
    case 141u: goto L_002419E4;
    case 142u: goto L_00241A04;
    case 143u: goto L_00241A28;
    case 144u: goto L_00241A38;
    case 145u: goto L_00241A84;
    case 146u: goto L_00241AA8;
    case 147u: goto L_00241AC0;
    case 148u: goto L_00241B20;
    case 149u: goto L_00241BD0;
    case 150u: goto L_00241C5C;
    case 151u: goto L_00241D3C;
    case 152u: goto L_00241D48;
    case 153u: goto L_00241D70;
    case 154u: goto L_00241D90;
    case 155u: goto L_00241DBC;
    case 156u: goto L_00241DE0;
    case 157u: goto L_00241E10;
    case 158u: goto L_00241E34;
    case 159u: goto L_00241E40;
    case 160u: goto L_00241E4C;
    case 161u: goto L_00241E78;
    case 162u: goto L_00241E84;
    case 163u: goto L_00241E90;
    case 164u: goto L_00241EB0;
    case 165u: goto L_00241ED4;
    case 166u: goto L_00241EE4;
    case 167u: goto L_00241F30;
    case 168u: goto L_00241F54;
    case 169u: goto L_00241F6C;
    case 170u: goto L_00241FCC;
    case 171u: goto L_00242014;
    case 172u: goto L_00242110;
    case 173u: goto L_0024211C;
    case 174u: goto L_00242140;
    case 175u: goto L_00242164;
    case 176u: goto L_0024216C;
    case 177u: goto L_00242198;
    case 178u: goto L_002421BC;
    case 179u: goto L_002421E0;
    case 180u: goto L_00242204;
    case 181u: goto L_00242210;
    case 182u: goto L_0024221C;
    case 183u: goto L_00242248;
    case 184u: goto L_00242254;
    case 185u: goto L_00242260;
    case 186u: goto L_00242280;
    case 187u: goto L_002422A4;
    case 188u: goto L_002422B4;
    case 189u: goto L_00242300;
    case 190u: goto L_00242324;
    case 191u: goto L_0024233C;
    case 192u: goto L_0024239C;
    case 193u: goto L_00242484;
    case 194u: goto L_00242580;
    case 195u: goto L_0024258C;
    case 196u: goto L_002425B0;
    case 197u: goto L_002425D4;
    case 198u: goto L_002425DC;
    case 199u: goto L_00242608;
    case 200u: goto L_0024262C;
    case 201u: goto L_00242650;
    case 202u: goto L_00242668;
    case 203u: goto L_002426E0;
    case 204u: goto L_00242770;
    case 205u: goto L_00242794;
    case 206u: goto L_002427B8;
    case 207u: goto L_002427D0;
    case 208u: goto L_002427E8;
    case 209u: goto L_00242920;
    case 210u: goto L_00242944;
    case 211u: goto L_00242968;
    case 212u: goto L_00242980;
    case 213u: goto L_002429A4;
    case 214u: goto L_002429B0;
    case 215u: goto L_002429BC;
    case 216u: goto L_002429E8;
    case 217u: goto L_002429F4;
    case 218u: goto L_00242A00;
    case 219u: goto L_00242A20;
    case 220u: goto L_00242A44;
    case 221u: goto L_00242A54;
    case 222u: goto L_00242AA0;
    case 223u: goto L_00242AC4;
    case 224u: goto L_00242ADC;
    case 225u: goto L_00242B3C;
    case 226u: goto L_00242BE4;
    case 227u: goto L_00242C60;
    case 228u: goto L_00242D14;
    case 229u: goto L_00242D20;
    case 230u: goto L_00242D44;
    case 231u: goto L_00242D68;
    case 232u: goto L_00242D94;
    case 233u: goto L_00242DB8;
    case 234u: goto L_00242DE0;
    case 235u: goto L_00242E0C;
    case 236u: goto L_00242E18;
    case 237u: goto L_00242E24;
    case 238u: goto L_00242E50;
    case 239u: goto L_00242E5C;
    case 240u: goto L_00242E68;
    case 241u: goto L_00242E88;
    case 242u: goto L_00242EAC;
    case 243u: goto L_00242EBC;
    case 244u: goto L_00242F08;
    case 245u: goto L_00242F2C;
    case 246u: goto L_00242F44;
    case 247u: goto L_00242FA4;
    case 248u: goto L_00243150;
    case 249u: goto L_0024315C;
    case 250u: goto L_00243180;
    case 251u: goto L_002431A4;
    case 252u: goto L_002431D0;
    case 253u: goto L_002431F4;
    case 254u: goto L_00243204;
    case 255u: goto L_00243210;
    case 256u: goto L_0024321C;
    case 257u: goto L_00243248;
    case 258u: goto L_00243254;
    case 259u: goto L_00243260;
    case 260u: goto L_00243280;
    case 261u: goto L_002432A4;
    case 262u: goto L_002432B4;
    case 263u: goto L_00243300;
    case 264u: goto L_00243324;
    case 265u: goto L_0024333C;
    case 266u: goto L_0024339C;
    case 267u: goto L_00243474;
    case 268u: goto L_00243480;
    case 269u: goto L_002434A4;
    case 270u: goto L_002434C8;
    case 271u: goto L_002434F4;
    case 272u: goto L_00243518;
    case 273u: goto L_00243540;
    case 274u: goto L_0024355C;
    case 275u: goto L_00243594;
    case 276u: goto L_0024359C;
    case 277u: goto L_00243630;
    case 278u: goto L_00243654;
    case 279u: goto L_00243678;
    case 280u: goto L_00243690;
    case 281u: goto L_002436A8;
    case 282u: goto L_002436B0;
    case 283u: goto L_002436EC;
    case 284u: goto L_00243700;
    case 285u: goto L_00243730;
    case 286u: goto L_00243754;
    case 287u: goto L_00243770;
    case 288u: goto L_00243788;
    case 289u: goto L_002437D0;
    case 290u: goto L_002437E0;
    case 291u: goto L_00243804;
    case 292u: goto L_00243828;
    case 293u: goto L_00243840;
    case 294u: goto L_0024385C;
    case 295u: goto L_002438B4;
    case 296u: goto L_002438F4;
    case 297u: goto L_00243A20;
    case 298u: goto L_00243A68;
    case 299u: goto L_00243A8C;
    case 300u: goto L_00243AA0;
    case 301u: goto L_00243AB8;
    case 302u: goto L_00243AC0;
    case 303u: goto L_00243AE4;
    case 304u: goto L_00243B08;
    case 305u: goto L_00243B20;
    case 306u: goto L_00243B38;
    case 307u: goto L_00243BCC;
    case 308u: goto L_00243C08;
    case 309u: goto L_00243C2C;
    case 310u: goto L_00243C50;
    case 311u: goto L_00243C60;
    case 312u: goto L_00243C78;
    case 313u: goto L_00243CFC;
    case 314u: goto L_00243D20;
    case 315u: goto L_00243D30;
    case 316u: goto L_00243D48;
    case 317u: goto L_00243DA0;
    case 318u: goto L_00243DC8;
    case 319u: goto L_00243DEC;
    case 320u: goto L_00243E38;
    case 321u: goto L_00243E5C;
    case 322u: goto L_00243E70;
    case 323u: goto L_00243E88;
    case 324u: goto L_00243EE8;
    case 325u: goto L_00243F0C;
    case 326u: goto L_00243F30;
    case 327u: goto L_00243F40;
    case 328u: goto L_00243F58;
    case 329u: goto L_00243F90;
    case 330u: goto L_00243FB4;
    case 331u: goto L_00243FD8;
    case 332u: goto L_00243FF0;
    default: bad_entry(c, 0x00240000u); return;
    }
L_00240000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240014; } }
L_00240008:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240014u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00240014u) [[unlikely]] return; }
L_00240014:
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 1;
L_00240018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024002Cu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0024002Cu) [[unlikely]] return; }
L_0024002C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00240050; } }
L_0024003C:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_00240040:
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00240050u) [[unlikely]] return; }
L_00240050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00240054:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00240070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47560000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21313ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 16u);
    set32(c.r[16], 0u + 16u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[16].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400B4u); st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x002400B4u) [[unlikely]] return; }
L_002400B4:
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 276u, depth + 1u); else { c.pc = 0x001FB770u; return; } if (c.pc != 0x002400C4u) [[unlikely]] return; }
L_002400C4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  goto L_002400E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400D8u); set32(c.r[4], c.r[4].w[0] - 24206u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002400D8u) [[unlikely]] return; }
L_002400D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00240130; } }
L_002400E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400E8u); set32(c.r[4], 0u + 4109u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002400E8u) [[unlikely]] return; }
L_002400E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240108u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004F(c, 293u, depth + 1u); else { c.pc = 0x0025F040u; return; } if (c.pc != 0x00240108u) [[unlikely]] return; }
L_00240108:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00240124; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024011Cu); set32(c.r[4], c.r[4].w[0] - 24206u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0024011Cu) [[unlikely]] return; }
L_0024011C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00240130; } }
L_00240124:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00240130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00240150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 22087ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 18;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[4].w[0] + 16u);  goto L_002401A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002401EC; } }
L_002401A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401A8u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x002401A8u) [[unlikely]] return; }
L_002401A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 277u, depth + 1u); else { c.pc = 0x001FB790u; return; } if (c.pc != 0x002401B4u) [[unlikely]] return; }
L_002401B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4109u);  goto L_002401C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002401EC; } }
L_002401C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401CCu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002401CCu) [[unlikely]] return; }
L_002401CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401E8u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 302u, depth + 1u); else { c.pc = 0x0025F1E0u; return; } if (c.pc != 0x002401E8u) [[unlikely]] return; }
L_002401E8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002401EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 4109u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024021Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024021Cu) [[unlikely]] return; }
L_0024021C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240228u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x00240228u) [[unlikely]] return; }
L_00240228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240230u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 275u, depth + 1u); else { c.pc = 0x001FB760u; return; } if (c.pc != 0x00240230u) [[unlikely]] return; }
L_00240230:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240240u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004F(c, 307u, depth + 1u); else { c.pc = 0x0025F2F0u; return; } if (c.pc != 0x00240240u) [[unlikely]] return; }
L_00240240:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240260:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53560000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21313ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 16u);
    set32(c.r[16], 0u + 16u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[16].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402A4u); st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x002402A4u) [[unlikely]] return; }
L_002402A4:
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 273u, depth + 1u); else { c.pc = 0x001FB730u; return; } if (c.pc != 0x002402B4u) [[unlikely]] return; }
L_002402B4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  goto L_002402D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402C8u); set32(c.r[4], c.r[4].w[0] - 24206u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002402C8u) [[unlikely]] return; }
L_002402C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00240320; } }
L_002402D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402D8u); set32(c.r[4], 0u + 4109u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002402D8u) [[unlikely]] return; }
L_002402D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004F(c, 293u, depth + 1u); else { c.pc = 0x0025F040u; return; } if (c.pc != 0x002402F8u) [[unlikely]] return; }
L_002402F8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00240314; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024030Cu); set32(c.r[4], c.r[4].w[0] - 24206u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0024030Cu) [[unlikely]] return; }
L_0024030C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00240320; } }
L_00240314:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00240320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00240340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 22099ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 18;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[4].w[0] + 16u);  goto L_00240390; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002403DC; } }
L_00240390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240398u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x00240398u) [[unlikely]] return; }
L_00240398:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 274u, depth + 1u); else { c.pc = 0x001FB750u; return; } if (c.pc != 0x002403A4u) [[unlikely]] return; }
L_002403A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4109u);  goto L_002403B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002403DC; } }
L_002403B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403BCu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002403BCu) [[unlikely]] return; }
L_002403BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403D8u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 302u, depth + 1u); else { c.pc = 0x0025F1E0u; return; } if (c.pc != 0x002403D8u) [[unlikely]] return; }
L_002403D8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002403DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002403F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 4109u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024040Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024040Cu) [[unlikely]] return; }
L_0024040C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240418u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x00240418u) [[unlikely]] return; }
L_00240418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240420u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 272u, depth + 1u); else { c.pc = 0x001FB720u; return; } if (c.pc != 0x00240420u) [[unlikely]] return; }
L_00240420:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240430u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004F(c, 307u, depth + 1u); else { c.pc = 0x0025F2F0u; return; } if (c.pc != 0x00240430u) [[unlikely]] return; }
L_00240430:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 22087ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002404A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002404BC; } }
L_002404A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404ACu);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x002404ACu) [[unlikely]] return; }
L_002404AC:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 278u, depth + 1u); else { c.pc = 0x001FB7A0u; return; } if (c.pc != 0x002404B8u) [[unlikely]] return; }
L_002404B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002404BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002404D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 22099ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024053C; } }
L_00240524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024052Cu);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x0024052Cu) [[unlikely]] return; }
L_0024052C:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240538u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 278u, depth + 1u); else { c.pc = 0x001FB7A0u; return; } if (c.pc != 0x00240538u) [[unlikely]] return; }
L_00240538:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024053C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024056Cu); set32(c.r[16], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x0024056Cu) [[unlikely]] return; }
L_0024056C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53500000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240584u); c.r[5].d[0] = c.r[2].d[0] | 17746ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00240584u) [[unlikely]] return; }
L_00240584:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240590u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 278u, depth + 1u); else { c.pc = 0x001FB7A0u; return; } if (c.pc != 0x00240590u) [[unlikely]] return; }
L_00240590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002405B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4096u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002405D8u) [[unlikely]] return; }
L_002405D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405E4u); set32(c.r[4], 0u + 4107u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002405E4u) [[unlikely]] return; }
L_002405E4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405F0u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002405F0u) [[unlikely]] return; }
L_002405F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405FCu); set32(c.r[4], 0u + 276u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002405FCu) [[unlikely]] return; }
L_002405FC:
    set32(c.r[4], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240CC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_002406C8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_0024062C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00240D2C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0024062C:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_0024066C; }
    st32((c.r[19].w[0] + 40u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 44u), 0u);  goto L_00240668; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240664u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240664u) [[unlikely]] return; }
L_00240664:
    st32((c.r[19].w[0] + 44u), 0u);
    c.budget -= 1;
L_00240668:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0024066C:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x100B0000u);  goto L_002406AC; }
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), 0u);  goto L_002406A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002406A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002406A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002406A4u) [[unlikely]] return; }
L_002406A4:
    st32((c.r[19].w[0] + 64u), 0u);
    c.budget -= 1;
L_002406A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100B0000u);
    c.budget -= 1;
L_002406AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002406B8u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002406B8u) [[unlikely]] return; }
L_002406B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
L_002406C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00240D28; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00240978; }
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0024070C; } }
L_002406F0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002406F0u | kUnwind; return; } goto L_002406F0; } }
L_0024070C:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024072C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));  if (t) { goto L_0024072C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024072C:
    st16((c.r[29].w[0] + 160u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00240748; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_00240768; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00240748:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240768; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_0024076C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240768:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_0024076C:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_0024079C; }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 18344u);  if (t) { goto L_002407B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0024079C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[28].w[0] - 31912u)));  goto L_002407B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 12u);  if (t) { goto L_002407B0; } }
    set32(c.r[20], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_002407B0:
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002407C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002407C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240810; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002407D4u) [[unlikely]] return; }
L_002407D4:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240804; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_002407F4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240804; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002407F4:
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240804u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00240804u) [[unlikely]] return; }
L_00240804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_00240814; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240810:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 1;
L_00240814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024081Cu); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0030(c, 179u, depth + 1u); else { c.pc = 0x001E1680u; return; } if (c.pc != 0x0024081Cu) [[unlikely]] return; }
L_0024081C:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240844; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240844; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240844u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240844u) [[unlikely]] return; }
L_00240844:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024096C; }
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00240854:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_00240870; }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 18344u);  if (t) { goto L_00240884; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_00240870:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[28].w[0] - 31912u)));  goto L_00240884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 12u);  if (t) { goto L_00240884; } }
    set32(c.r[20], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00240884:
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240898; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00240898:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002408E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002408A8u) [[unlikely]] return; }
L_002408A8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002408D8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_002408C8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002408D8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002408C8:
    set32(c.r[4], c.r[29].w[0] + 212u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002408D8u) [[unlikely]] return; }
L_002408D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_002408E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002408E4:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_002408E8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], ld32((c.r[19].w[0] + 660u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408F8u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0030(c, 135u, depth + 1u); else { c.pc = 0x001E10E0u; return; } if (c.pc != 0x002408F8u) [[unlikely]] return; }
L_002408F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00240910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_00240910; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00240910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240918u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 460u, depth + 1u); else { c.pc = 0x001D3F10u; return; } if (c.pc != 0x00240918u) [[unlikely]] return; }
L_00240918:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_00240940; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240940; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240940u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240940u) [[unlikely]] return; }
L_00240940:
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00240968; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240968; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240968u) [[unlikely]] return; }
L_00240968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024096C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240974u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0040(c, 81u, depth + 1u); else { c.pc = 0x00220950u; return; } if (c.pc != 0x00240974u) [[unlikely]] return; }
L_00240974:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00240978:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_00240994; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 18344u);  if (t) { goto L_002409A8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_00240994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_002409A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_002409A8; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_002409A8:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002409BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002409BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240A08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002409CCu) [[unlikely]] return; }
L_002409CC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002409FC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002409EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002409FC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002409EC:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002409FCu) [[unlikely]] return; }
L_002409FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_00240A0C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240A08:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 1;
L_00240A0C:
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[6], ld32((c.r[19].w[0] + 660u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A1Cu); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_0030(c, 68u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x00240A1Cu) [[unlikely]] return; }
L_00240A1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 220u)));  goto L_00240A48; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240A44; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240A44u) [[unlikely]] return; }
L_00240A44:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 1;
L_00240A48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_00240A5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_00240A5C; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00240A5C:
    set32(c.r[4], ld32((c.r[18].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00240A80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240A80u) [[unlikely]] return; }
L_00240A80:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 188u), 0u);  goto L_00240ADC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00240A9Cu) [[unlikely]] return; }
L_00240A9C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240ACC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00240ABC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240ACC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00240ABC:
    set32(c.r[4], c.r[18].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240ACCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00240ACCu) [[unlikely]] return; }
L_00240ACC:
    st32((c.r[18].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_00240AE0; } }
L_00240AD8:
    st32((c.r[18].w[0] + 188u), 0u);
    c.budget -= 1;
L_00240ADC:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_00240AE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 696u)));  if (t) { goto L_00240AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_00240B14; } }
L_00240AF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_00240B14; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240B14; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B1Cu);  if (depth < kMaxDepth) unit_00C1(c, 339u, depth + 1u); else { c.pc = 0x00425DD0u; return; } if (c.pc != 0x00240B1Cu) [[unlikely]] return; }
L_00240B1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 660u)));  goto L_00240B2C; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 660u)));
    c.budget -= 2;
L_00240B2C:
    set32(c.r[6], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_00240B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_00240B70; } }
L_00240B4C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[4].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_00240B70; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00240B74; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240B70:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_00240B74:
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[17].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BA4u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 419u, depth + 1u); else { c.pc = 0x001CFC90u; return; } if (c.pc != 0x00240BA4u) [[unlikely]] return; }
L_00240BA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_00240BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_00240BD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00240BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BD8u);  if (depth < kMaxDepth) unit_0030(c, 190u, depth + 1u); else { c.pc = 0x001E1780u; return; } if (c.pc != 0x00240BD8u) [[unlikely]] return; }
L_00240BD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 220u)));  goto L_00240C98; }
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00240BF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_00240C18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00240BF8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00240C18; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240C18; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240C18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00240C94; } }
    st32((c.r[29].w[0] + 132u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C44u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00240C44u) [[unlikely]] return; }
L_00240C44:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 220u)));  goto L_00240C6C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00240C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240C68u) [[unlikely]] return; }
L_00240C68:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 1;
L_00240C6C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00240D28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00240D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240C8Cu) [[unlikely]] return; }
L_00240C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240D28; } }
L_00240C94:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 1;
L_00240C98:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 704u)));  goto L_00240CBC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00240CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240CB8u) [[unlikely]] return; }
L_00240CB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    c.budget -= 1;
L_00240CBC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_00240D28; } }
L_00240CC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00240D28; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[4], c.r[19].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D04u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00240D04u) [[unlikely]] return; }
L_00240D04:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00240D28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00240D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240D28u) [[unlikely]] return; }
L_00240D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00240D2C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00240D50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4098u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00240D74u) [[unlikely]] return; }
L_00240D74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D80u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00240D80u) [[unlikely]] return; }
L_00240D80:
    set32(c.r[5], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024116C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_00240DAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00241208; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00240DAC:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_00240DEC; }
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 84u), 0u);  goto L_00240DE8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240DE4u) [[unlikely]] return; }
L_00240DE4:
    st32((c.r[19].w[0] + 84u), 0u);
    c.budget -= 1;
L_00240DE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00240DEC:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 176u)));  goto L_00240E2C; }
    st32((c.r[19].w[0] + 100u), 0u);
    st32((c.r[19].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 104u), 0u);  goto L_00240E28; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00240E24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240E24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00240E24u) [[unlikely]] return; }
L_00240E24:
    st32((c.r[19].w[0] + 104u), 0u);
    c.budget -= 1;
L_00240E28:
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_00240E2C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00240E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));  if (t) { goto L_00240E40; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240E40:
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00240E58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_00240E78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00240E58:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240E78; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240E78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240E78:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00241010; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00240E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[6].w[0] + 10u));  if (t) { goto L_00240E94; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240E94:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00240EAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_00240ECC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00240EAC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240ECC; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240ECC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024100C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00240EE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[6].w[0] + 12u));  if (t) { goto L_00240EE8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240EE8:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00240F00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_00240F20; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00240F00:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240F20; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240F20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024100C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00240F3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[6].w[0] + 14u));  if (t) { goto L_00240F3C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240F3C:
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00240F54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 80u)));  if (t) { goto L_00240F74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00240F54:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240F74; }
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240F74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024100C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  if (t) { goto L_00240F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_00240FB4; } }
L_00240F90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240FB4; }
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240FB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024100C; } }
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240FE0u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00240FE0u) [[unlikely]] return; }
L_00240FE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241204; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241004u) [[unlikely]] return; }
L_00241004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241204; } }
L_0024100C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241010:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00241024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_00241044; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00241024:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00241044; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_00241048; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241044:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_00241048:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024105C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_0024107C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0024105C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_0024107C; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 76u)));  if (t) { goto L_00241080; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024107C:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 1;
L_00241080:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00241094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_002410B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00241094:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_002410B4; }
    goto L_0024109C;
L_00241098:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024109C:
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 96u)));  if (t) { goto L_002410B8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002410B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 1;
L_002410B8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002410CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 80u)));  if (t) { goto L_002410EC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002410CC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002410EC; }
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 116u)));  if (t) { goto L_002410F0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002410EC:
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 1;
L_002410F0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00241104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_00241124; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00241104:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[11].d[0] = 0ull + 0ull;  goto L_00241124; }
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00241128; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241124:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_00241128:
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[10].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.budget -= 11;
L_00241154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024115Cu); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 419u, depth + 1u); else { c.pc = 0x001CFC90u; return; } if (c.pc != 0x0024115Cu) [[unlikely]] return; }
L_0024115C:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_00241204; } }
L_0024116C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241204; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241204; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002411BCu) [[unlikely]] return; }
L_002411BC:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411E0u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002411E0u) [[unlikely]] return; }
L_002411E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241204; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241204u) [[unlikely]] return; }
L_00241204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00241208:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00241220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241238u); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241238u) [[unlikely]] return; }
L_00241238:
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00241270; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);  goto L_00241258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002412D0; } }
L_00241258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241260u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00241260u) [[unlikely]] return; }
L_00241260:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_002412CC; } }
L_00241270:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002412CC; } }
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002412A8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002412A8u) [[unlikely]] return; }
L_002412A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002412CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002412CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002412CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002412CCu) [[unlikely]] return; }
L_002412CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002412D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002412E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002412FCu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002412FCu) [[unlikely]] return; }
L_002412FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00241474; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_00241320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002414D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_00241320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_00241350; } }
L_00241330:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00241350; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241350; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_002413AC; }
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024137Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024137Cu) [[unlikely]] return; }
L_0024137C:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002414D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002414D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002413A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002413A0u) [[unlikely]] return; }
L_002413A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002414D0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_002413AC:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002413B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002413B8u) [[unlikely]] return; }
L_002413B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002413D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002413F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002413D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002413F0; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_002413F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002413F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_002413F4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024140C; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00241420; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024140C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024141C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 80u));  if (t) { goto L_00241420; } }
L_0024141C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00241420:
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[6].d[0] = c.r[5].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241440u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00241440u) [[unlikely]] return; }
L_00241440:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 704u)));  goto L_00241468; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241464u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241464u) [[unlikely]] return; }
L_00241464:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 1;
L_00241468:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_002414D0; } }
L_00241474:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002414D0; } }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414ACu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002414ACu) [[unlikely]] return; }
L_002414AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002414D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002414D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002414D0u) [[unlikely]] return; }
L_002414D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002414D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002414F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241508u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241508u) [[unlikely]] return; }
L_00241508:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024151C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00241530; } }
L_0024151C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00241530; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00241530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241538u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 120u, depth + 1u); else { c.pc = 0x00228E50u; return; } if (c.pc != 0x00241538u) [[unlikely]] return; }
L_00241538:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024155Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024155Cu) [[unlikely]] return; }
L_0024155C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00241584; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241580u) [[unlikely]] return; }
L_00241580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00241584:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00241590:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002415ACu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002415ACu) [[unlikely]] return; }
L_002415AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00241770; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_002415D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002417D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002415D0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;  goto L_00241690; }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002415EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0024160C; } }
L_002415EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024160C; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 660u)));  if (t) { goto L_00241610; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024160C:
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    c.budget -= 1;
L_00241610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[2].d[0] | 4099ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00241628u) [[unlikely]] return; }
L_00241628:
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[4], c.r[17].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241660u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00241660u) [[unlikely]] return; }
L_00241660:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002417CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002417CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241684u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241684u) [[unlikely]] return; }
L_00241684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002417CC; } }
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 1;
L_00241690:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_002416DC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002416AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002416CC; } }
L_002416AC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002416CC; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002416D0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002416CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002416D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416D8u);  if (depth < kMaxDepth) unit_0042(c, 120u, depth + 1u); else { c.pc = 0x00228E50u; return; } if (c.pc != 0x002416D8u) [[unlikely]] return; }
L_002416D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_002416DC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002416F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_00241710; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002416F0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00241710; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_00241714; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241710:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_00241714:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024172C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 18344u);  if (t) { goto L_00241744; } }
L_0024172C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 31912u)));  goto L_00241744; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + 12u);  if (t) { goto L_00241744; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00241744:
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241764u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x00241764u) [[unlikely]] return; }
L_00241764:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00241770:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002417CC; } }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417A8u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002417A8u) [[unlikely]] return; }
L_002417A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002417CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002417CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002417CCu) [[unlikely]] return; }
L_002417CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002417D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002417E0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_00241800; }
L_002417F0:
    c.budget -= 2;
    { set32(c.r[5], 0u + 1u);  goto L_00241800; }
L_00241800:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 4098u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024183Cu); st32((c.r[29].w[0] + 16u), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024183Cu) [[unlikely]] return; }
L_0024183C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241848u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241848u) [[unlikely]] return; }
L_00241848:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241854u); set32(c.r[4], 0u + 4100u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241854u) [[unlikely]] return; }
L_00241854:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241860u); set32(c.r[4], 0u + 276u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241860u) [[unlikely]] return; }
L_00241860:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_0024193C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0024187C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 80u)));  if (t) { goto L_00241890; } }
L_0024187C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00241890; }
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_00241890:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002418A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 100u)));  if (t) { goto L_002418B8; } }
L_002418A4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_002418B8; }
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[0]);
    c.budget -= 3;
L_002418B8:
    set32(c.r[4], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002418CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 120u)));  if (t) { goto L_002418E0; } }
L_002418CC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[22].d[0] = 0ull + 0ull;  goto L_002418E0; }
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[0]);
    c.budget -= 3;
L_002418E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002418F8; }
    c.f[0] = ld32((c.r[20].w[0] + 140u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024190C; } }
L_002418F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00241908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[20].w[0] + 140u));  if (t) { goto L_0024190C; } }
L_00241908:
    c.f[20] = 0u;
    c.budget -= 1;
L_0024190C:
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00241920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 160u)));  if (t) { goto L_00241934; } }
L_00241920:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_00241934; }
    c.f[0] = ld32((c.r[20].w[0] + 160u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_00241934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 704u)));  if (t) { goto L_002419A4; } }
L_0024193C:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241958; } }
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00241970; } }
L_00241958:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024196C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[20].w[0] + 80u));  if (t) { goto L_00241970; } }
L_0024196C:
    c.f[20] = 0u;
    c.budget -= 1;
L_00241970:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00241984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 100u)));  if (t) { goto L_002419A0; } }
L_00241984:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002419A0; }
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002419A0; } }
L_002419A0:
    set32(c.r[3], ld32((c.r[20].w[0] + 704u)));
    c.budget -= 1;
L_002419A4:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_00241DE4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 24192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0048[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002419CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002419D8u) [[unlikely]] return; }
L_002419D8:
    set32(c.r[3], ld32((c.r[20].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_002419E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241DE0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00241A04:
    set32(c.r[3], ld32((c.r[20].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241DE0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00241A28:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00241A38u) [[unlikely]] return; }
L_00241A38:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00241A50; } }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00241A64; } }
L_00241A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00241A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 208u));  if (t) { goto L_00241A64; } }
L_00241A60:
    c.f[0] = 0u;
    c.budget -= 1;
L_00241A64:
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A84u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00241A84u) [[unlikely]] return; }
L_00241A84:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_00241AAC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241AA8u) [[unlikely]] return; }
L_00241AA8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00241AAC:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 5;
L_00241AC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241DE0; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241B0C; } }
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00241B0C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241B0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241DE0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00241B20:
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00241B34; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00241B34:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00241B4C; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 2;
L_00241B4C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_00241B60; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_00241B60:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_00241C64; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  goto L_00241BD8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  goto L_00241B88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 704u)));  if (t) { goto L_00241D40; } }
L_00241B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 308u), c.f[20]);  if (t) { goto L_00241B9C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 18344u);  if (t) { goto L_00241BB0; } }
L_00241B9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 31912u)));  goto L_00241BB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + 12u);  if (t) { goto L_00241BB0; } }
L_00241BB0:
    set32(c.r[6], ld32((c.r[29].w[0] + 308u)));
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10040000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BD0u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 411u, depth + 1u); else { c.pc = 0x001CFAF0u; return; } if (c.pc != 0x00241BD0u) [[unlikely]] return; }
L_00241BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241D3C; } }
L_00241BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 292u), c.f[20]);  if (t) { goto L_00241BEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 18344u);  if (t) { goto L_00241C00; } }
L_00241BEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_00241C00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_00241C00; } }
L_00241C00:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_00241C1C; }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 18344u);  if (t) { goto L_00241C2C; } }
L_00241C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[10], ld32((c.r[28].w[0] - 31912u)));  goto L_00241C2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 12u);  if (t) { goto L_00241C2C; } }
L_00241C2C:
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.r[9].d[0] = c.r[16].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10040000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C5Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 419u, depth + 1u); else { c.pc = 0x001CFC90u; return; } if (c.pc != 0x00241C5Cu) [[unlikely]] return; }
L_00241C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241D3C; } }
L_00241C64:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 268u), c.f[20]);  if (t) { goto L_00241C7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_00241C90; } }
L_00241C7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00241C90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_00241C90; } }
L_00241C90:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_00241CAC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 18344u);  if (t) { goto L_00241CBC; } }
L_00241CAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_00241CBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_00241CBC; } }
L_00241CBC:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_00241CD8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 18344u);  if (t) { goto L_00241CE8; } }
L_00241CD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31912u)));  goto L_00241CE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 12u);  if (t) { goto L_00241CE8; } }
L_00241CE8:
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[4].d[0] << 32;
    st32((c.r[29].w[0] + 240u), c.r[22].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.r[7].d[0] = c.r[17].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 268u)));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[16].d[0] << 32;
    c.r[11].d[0] = c.r[21].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10040000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    st32((c.r[29].w[0]), c.f[1]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D3Cu); st32((c.r[29].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 427u, depth + 1u); else { c.pc = 0x001CFE80u; return; } if (c.pc != 0x00241D3Cu) [[unlikely]] return; }
L_00241D3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 704u)));
    c.budget -= 1;
L_00241D40:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 2;
L_00241D48:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241DE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 128u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D70u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00241D70u) [[unlikely]] return; }
L_00241D70:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D90u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00241D90u) [[unlikely]] return; }
L_00241D90:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 180u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241DBCu); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00241DBCu) [[unlikely]] return; }
L_00241DBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241DE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241DE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241DE0u) [[unlikely]] return; }
L_00241DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00241DE4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00241E10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4098u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241E34u) [[unlikely]] return; }
L_00241E34:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E40u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241E40u) [[unlikely]] return; }
L_00241E40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E4Cu); set32(c.r[4], 0u + 4101u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00241E4Cu) [[unlikely]] return; }
L_00241E4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002421BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 24160u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0048[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00241E78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00241E84u) [[unlikely]] return; }
L_00241E84:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00241E90:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002421C0; }
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00241EB0:
    set32(c.r[3], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002421BC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00241ED4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00241EE4u) [[unlikely]] return; }
L_00241EE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00241EFC; } }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00241F10; } }
L_00241EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00241F0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 112u));  if (t) { goto L_00241F10; } }
L_00241F0C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00241F10:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F30u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00241F30u) [[unlikely]] return; }
L_00241F30:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00241F58; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00241F54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00241F54u) [[unlikely]] return; }
L_00241F54:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00241F58:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 5;
L_00241F6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002421BC; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241FB8; } }
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00241FB8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241FB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002421BC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00241FCC:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_00241FE8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_00241FF8; } }
L_00241FE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_00241FF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_00241FF8; } }
L_00241FF8:
    set32(c.r[5], ld32((c.r[19].w[0] + 660u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242014u); c.r[10].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 246u, depth + 1u); else { c.pc = 0x00255DD0u; return; } if (c.pc != 0x00242014u) [[unlikely]] return; }
L_00242014:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024202C; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242040; } }
L_0024202C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024203C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[19].w[0] + 40u));  if (t) { goto L_00242040; } }
L_0024203C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00242040:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 164u), c.f[0]);  if (t) { goto L_00242054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_0024206C; } }
L_00242054:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0024206C; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_0024206C:
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00242080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 80u)));  if (t) { goto L_00242094; } }
L_00242080:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00242094; }
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00242094:
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002420A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_002420BC; } }
L_002420A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002420BC; }
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_002420BC:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002420D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[19].w[0] + 120u)));  if (t) { goto L_002420E4; } }
L_002420D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_002420E4; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 3;
L_002420E4:
    c.r[7].d[0] = c.r[6].d[0] << 32;
    c.r[9].d[0] = c.r[4].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10050000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242110u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 415u, depth + 1u); else { c.pc = 0x001CFBB0u; return; } if (c.pc != 0x00242110u) [[unlikely]] return; }
L_00242110:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_0024211C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002421BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242140u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00242140u) [[unlikely]] return; }
L_00242140:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242164u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00242164u) [[unlikely]] return; }
L_00242164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024216Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 232u, depth + 1u); else { c.pc = 0x00255AE0u; return; } if (c.pc != 0x0024216Cu) [[unlikely]] return; }
L_0024216C:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 84u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242198u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00242198u) [[unlikely]] return; }
L_00242198:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002421BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002421BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002421BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002421BCu) [[unlikely]] return; }
L_002421BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002421C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002421E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4098u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242204u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00242204u) [[unlikely]] return; }
L_00242204:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242210u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00242210u) [[unlikely]] return; }
L_00242210:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024221Cu); set32(c.r[4], 0u + 4101u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024221Cu) [[unlikely]] return; }
L_0024221C:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024262C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 24128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0048[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00242248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242254u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00242254u) [[unlikely]] return; }
L_00242254:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242260:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00242630; }
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242280:
    set32(c.r[3], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024262C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_002422A4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002422B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002422B4u) [[unlikely]] return; }
L_002422B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002422CC; } }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002422E0; } }
L_002422CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002422DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 112u));  if (t) { goto L_002422E0; } }
L_002422DC:
    c.f[0] = 0u;
    c.budget -= 1;
L_002422E0:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242300u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00242300u) [[unlikely]] return; }
L_00242300:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00242328; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00242324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00242324u) [[unlikely]] return; }
L_00242324:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00242328:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 5;
L_0024233C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024262C; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242388; } }
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00242388; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00242388:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024262C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_0024239C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[19].w[0] + 660u)));  if (t) { goto L_002423B8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_002423CC; } }
L_002423B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_002423CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_002423CC; } }
L_002423CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_002423E8; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 18344u);  if (t) { goto L_002423F8; } }
L_002423E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_002423F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 12u);  if (t) { goto L_002423F8; } }
L_002423F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 64u)));  goto L_00242414; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 18344u);  if (t) { goto L_00242424; } }
L_00242414:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 31912u)));  goto L_00242424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + 12u);  if (t) { goto L_00242424; } }
L_00242424:
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 84u)));  goto L_00242440; }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 18344u);  if (t) { goto L_00242450; } }
L_00242440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], ld32((c.r[28].w[0] - 31912u)));  goto L_00242450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[2].w[0] + 12u);  if (t) { goto L_00242450; } }
L_00242450:
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  goto L_0024246C; }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 18344u);  if (t) { goto L_0024247C; } }
L_0024246C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[10], ld32((c.r[28].w[0] - 31912u)));  goto L_0024247C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 12u);  if (t) { goto L_0024247C; } }
L_0024247C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242484u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 246u, depth + 1u); else { c.pc = 0x00255DD0u; return; } if (c.pc != 0x00242484u) [[unlikely]] return; }
L_00242484:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024249C; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002424B0; } }
L_0024249C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002424AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[19].w[0] + 120u));  if (t) { goto L_002424B0; } }
L_002424AC:
    c.f[0] = 0u;
    c.budget -= 1;
L_002424B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 164u), c.f[0]);  if (t) { goto L_002424C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 140u)));  if (t) { goto L_002424DC; } }
L_002424C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002424DC; }
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002424DC:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002424F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 160u)));  if (t) { goto L_00242504; } }
L_002424F0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00242504; }
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00242504:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00242518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 180u)));  if (t) { goto L_0024252C; } }
L_00242518:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0024252C; }
    c.f[0] = ld32((c.r[19].w[0] + 180u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_0024252C:
    set32(c.r[3], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00242540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[19].w[0] + 200u)));  if (t) { goto L_00242554; } }
L_00242540:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_00242554; }
    c.f[0] = ld32((c.r[19].w[0] + 200u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 3;
L_00242554:
    c.r[7].d[0] = c.r[6].d[0] << 32;
    c.r[9].d[0] = c.r[4].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10050000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242580u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 415u, depth + 1u); else { c.pc = 0x001CFBB0u; return; } if (c.pc != 0x00242580u) [[unlikely]] return; }
L_00242580:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_0024258C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024262C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425B0u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002425B0u) [[unlikely]] return; }
L_002425B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425D4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002425D4u) [[unlikely]] return; }
L_002425D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 232u, depth + 1u); else { c.pc = 0x00255AE0u; return; } if (c.pc != 0x002425DCu) [[unlikely]] return; }
L_002425DC:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 84u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242608u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00242608u) [[unlikely]] return; }
L_00242608:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024262C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0024262C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024262Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024262Cu) [[unlikely]] return; }
L_0024262C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00242630:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00242650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242668u); set32(c.r[4], 0u + 4101u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00242668u) [[unlikely]] return; }
L_00242668:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_002426E8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242690; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002426A4; } }
L_00242690:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002426A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_002426A4; } }
L_002426A0:
    c.f[12] = 0u;
    c.budget -= 1;
L_002426A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002426BC; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002426D0; } }
L_002426BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002426CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_002426D0; } }
L_002426CC:
    c.f[13] = 0u;
    c.budget -= 1;
L_002426D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426E0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_004D(c, 231u, depth + 1u); else { c.pc = 0x002559E0u; return; } if (c.pc != 0x002426E0u) [[unlikely]] return; }
L_002426E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_00242774; } }
L_002426E8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002426FC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242710; } }
L_002426FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024270C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_00242710; } }
L_0024270C:
    c.f[12] = 0u;
    c.budget -= 1;
L_00242710:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242728; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024273C; } }
L_00242728:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00242738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_0024273C; } }
L_00242738:
    c.f[13] = 0u;
    c.budget -= 1;
L_0024273C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_00242764; } }
L_00242750:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00242764; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00242764:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242770u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004D(c, 231u, depth + 1u); else { c.pc = 0x002559E0u; return; } if (c.pc != 0x00242770u) [[unlikely]] return; }
L_00242770:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_00242774:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242794u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00242794u) [[unlikely]] return; }
L_00242794:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002427BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002427B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002427B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002427B8u) [[unlikely]] return; }
L_002427B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002427BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002427D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002427E8u); set32(c.r[4], 0u + 4101u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002427E8u) [[unlikely]] return; }
L_002427E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002427FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00242810; } }
L_002427FC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00242810; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00242810:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242828; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024283C; } }
L_00242828:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00242838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_0024283C; } }
L_00242838:
    c.f[12] = 0u;
    c.budget -= 1;
L_0024283C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242854; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242868; } }
L_00242854:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00242864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_00242868; } }
L_00242864:
    c.f[13] = 0u;
    c.budget -= 1;
L_00242868:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242880; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242894; } }
L_00242880:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00242890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[14] = ld32((c.r[16].w[0] + 80u));  if (t) { goto L_00242894; } }
L_00242890:
    c.f[14] = 0u;
    c.budget -= 1;
L_00242894:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002428AC; }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[15] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002428C0; } }
L_002428AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002428BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[15] = ld32((c.r[16].w[0] + 100u));  if (t) { goto L_002428C0; } }
L_002428BC:
    c.f[15] = 0u;
    c.budget -= 1;
L_002428C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002428D8; }
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[16] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002428EC; } }
L_002428D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002428E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[16] = ld32((c.r[16].w[0] + 120u));  if (t) { goto L_002428EC; } }
L_002428E8:
    c.f[16] = 0u;
    c.budget -= 1;
L_002428EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00242904; }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[17] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242918; } }
L_00242904:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00242914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[17] = ld32((c.r[16].w[0] + 140u));  if (t) { goto L_00242918; } }
L_00242914:
    c.f[17] = 0u;
    c.budget -= 1;
L_00242918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242920u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 233u, depth + 1u); else { c.pc = 0x00255B10u; return; } if (c.pc != 0x00242920u) [[unlikely]] return; }
L_00242920:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242944u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00242944u) [[unlikely]] return; }
L_00242944:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024296C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00242968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00242968u) [[unlikely]] return; }
L_00242968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024296C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00242980:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4098u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002429A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002429A4u) [[unlikely]] return; }
L_002429A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002429B0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002429B0u) [[unlikely]] return; }
L_002429B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002429BCu); set32(c.r[4], 0u + 4103u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002429BCu) [[unlikely]] return; }
L_002429BC:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00242DB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 24096u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0048[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002429E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002429F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002429F4u) [[unlikely]] return; }
L_002429F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242A00:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00242DBC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242A20:
    set32(c.r[3], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00242DB8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00242A44:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A54u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00242A54u) [[unlikely]] return; }
L_00242A54:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00242A6C; } }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242A80; } }
L_00242A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00242A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 112u));  if (t) { goto L_00242A80; } }
L_00242A7C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00242A80:
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242AA0u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00242AA0u) [[unlikely]] return; }
L_00242AA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00242AC8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00242AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242AC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00242AC4u) [[unlikely]] return; }
L_00242AC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00242AC8:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 5;
L_00242ADC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00242DB8; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242B28; } }
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00242B28; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00242B28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242DB8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242B3C:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00242B50; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00242B50:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 76u)));  goto L_00242B68; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 2;
L_00242B68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_00242B7C; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_00242B7C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  goto L_00242C68; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00242BEC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00242BA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 704u)));  if (t) { goto L_00242D18; } }
L_00242BA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00242BB8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 18344u);  if (t) { goto L_00242BCC; } }
L_00242BB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_00242BCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 12u);  if (t) { goto L_00242BCC; } }
L_00242BCC:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10070000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BE4u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00242BE4u) [[unlikely]] return; }
L_00242BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242D14; } }
L_00242BEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00242C00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_00242C14; } }
L_00242C00:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00242C14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 12u);  if (t) { goto L_00242C14; } }
L_00242C14:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_00242C30; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 18344u);  if (t) { goto L_00242C40; } }
L_00242C30:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 31912u)));  goto L_00242C40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + 12u);  if (t) { goto L_00242C40; } }
L_00242C40:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10070000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C60u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x00242C60u) [[unlikely]] return; }
L_00242C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242D14; } }
L_00242C68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00242C80; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 18344u);  if (t) { goto L_00242C94; } }
L_00242C80:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_00242C94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 12u);  if (t) { goto L_00242C94; } }
L_00242C94:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_00242CB0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_00242CC0; } }
L_00242CB0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00242CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 12u);  if (t) { goto L_00242CC0; } }
L_00242CC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 64u)));  goto L_00242CDC; }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 18344u);  if (t) { goto L_00242CEC; } }
L_00242CDC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[9], ld32((c.r[28].w[0] - 31912u)));  goto L_00242CEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[3].w[0] + 12u);  if (t) { goto L_00242CEC; } }
L_00242CEC:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10070000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D14u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 411u, depth + 1u); else { c.pc = 0x001CFAF0u; return; } if (c.pc != 0x00242D14u) [[unlikely]] return; }
L_00242D14:
    set32(c.r[3], ld32((c.r[19].w[0] + 704u)));
    c.budget -= 1;
L_00242D18:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 2;
L_00242D20:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00242DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D44u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00242D44u) [[unlikely]] return; }
L_00242D44:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D68u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00242D68u) [[unlikely]] return; }
L_00242D68:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 84u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D94u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00242D94u) [[unlikely]] return; }
L_00242D94:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242DB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00242DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00242DB8u) [[unlikely]] return; }
L_00242DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00242DBC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00242DE0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002431FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E0Cu); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00242E0Cu) [[unlikely]] return; }
L_00242E0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E18u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00242E18u) [[unlikely]] return; }
L_00242E18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E24u); set32(c.r[4], 0u + 4108u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00242E24u) [[unlikely]] return; }
L_00242E24:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00243518; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 24032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0048[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00242E50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00242E5Cu) [[unlikely]] return; }
L_00242E5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242E68:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0024351C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00242E88:
    set32(c.r[3], ld32((c.r[16].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00242EAC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242EBCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00242EBCu) [[unlikely]] return; }
L_00242EBC:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00242ED4; } }
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00242EE8; } }
L_00242ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00242EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 192u));  if (t) { goto L_00242EE8; } }
L_00242EE4:
    c.f[0] = 0u;
    c.budget -= 1;
L_00242EE8:
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 280u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F08u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00242F08u) [[unlikely]] return; }
L_00242F08:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00242F30; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00242F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00242F2Cu) [[unlikely]] return; }
L_00242F2C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00242F30:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 5;
L_00242F44:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242F90; } }
    c.f[2] = ld32((c.r[18].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00242F90; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00242F90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_00242FA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_00242FC0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 18344u);  if (t) { goto L_00242FD0; } }
L_00242FC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_00242FD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_00242FD0; } }
L_00242FD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_00242FEC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_00242FFC; } }
L_00242FEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00242FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_00242FFC; } }
L_00242FFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00243010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_00243024; } }
L_00243010:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00243024; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_00243024:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024303C; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00243050; } }
L_0024303C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024304C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 80u));  if (t) { goto L_00243050; } }
L_0024304C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00243050:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_00243068; } }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00243080; } }
L_00243068:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024307C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 100u));  if (t) { goto L_00243080; } }
L_0024307C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00243080:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 260u), c.f[0]);  if (t) { goto L_00243098; } }
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002430B0; } }
L_00243098:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002430AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 120u));  if (t) { goto L_002430B0; } }
L_002430AC:
    c.f[0] = 0u;
    c.budget -= 1;
L_002430B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 256u), c.f[0]);  if (t) { goto L_002430C8; } }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002430E0; } }
L_002430C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002430DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 140u));  if (t) { goto L_002430E0; } }
L_002430DC:
    c.f[0] = 0u;
    c.budget -= 1;
L_002430E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 252u), c.f[0]);  if (t) { goto L_002430F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00243110; } }
L_002430F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024310C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 160u));  if (t) { goto L_00243110; } }
L_0024310C:
    c.f[1] = 0u;
    c.budget -= 1;
L_00243110:
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[5].d[0] << 32;
    set32(c.r[9], ld32((c.r[29].w[0] + 264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100C0000u);
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 256u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243150u); st32((c.r[29].w[0] + 8u), c.f[1]);  if (depth < kMaxDepth) unit_002B(c, 427u, depth + 1u); else { c.pc = 0x001CFE80u; return; } if (c.pc != 0x00243150u) [[unlikely]] return; }
L_00243150:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_0024315C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243180u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00243180u) [[unlikely]] return; }
L_00243180:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431A4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002431A4u) [[unlikely]] return; }
L_002431A4:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 164u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431D0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002431D0u) [[unlikely]] return; }
L_002431D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002431F4u) [[unlikely]] return; }
L_002431F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243518; } }
L_002431FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243204u); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243204u) [[unlikely]] return; }
L_00243204:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243210u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243210u) [[unlikely]] return; }
L_00243210:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024321Cu); set32(c.r[4], 0u + 4104u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024321Cu) [[unlikely]] return; }
L_0024321C:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00243518; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 24064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0048[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00243248:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243254u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00243254u) [[unlikely]] return; }
L_00243254:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00243260:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00243280:
    set32(c.r[3], ld32((c.r[16].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_002432A4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002432B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002432B4u) [[unlikely]] return; }
L_002432B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002432CC; } }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002432E0; } }
L_002432CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002432DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 128u));  if (t) { goto L_002432E0; } }
L_002432DC:
    c.f[0] = 0u;
    c.budget -= 1;
L_002432E0:
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243300u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00243300u) [[unlikely]] return; }
L_00243300:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00243328; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243324u) [[unlikely]] return; }
L_00243324:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00243328:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 5;
L_0024333C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243388; } }
    c.f[2] = ld32((c.r[18].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00243388; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243388:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_0024339C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002433B4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002433C8; } }
L_002433B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002433C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_002433C8; } }
L_002433C4:
    c.f[0] = 0u;
    c.budget -= 1;
L_002433C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_002433E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_002433F8; } }
L_002433E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_002433F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_002433F8; } }
L_002433F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_00243414; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 18344u);  if (t) { goto L_00243424; } }
L_00243414:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_00243424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_00243424; } }
L_00243424:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_00243440; }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 18344u);  if (t) { goto L_00243450; } }
L_00243440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], ld32((c.r[28].w[0] - 31912u)));  goto L_00243450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[2].w[0] + 12u);  if (t) { goto L_00243450; } }
L_00243450:
    set32(c.r[6], ld32((c.r[29].w[0] + 232u)));
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10080000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243474u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 411u, depth + 1u); else { c.pc = 0x001CFAF0u; return; } if (c.pc != 0x00243474u) [[unlikely]] return; }
L_00243474:
    set32(c.r[3], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_00243480:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434A4u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002434A4u) [[unlikely]] return; }
L_002434A4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002434C8u) [[unlikely]] return; }
L_002434C8:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 100u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434F4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002434F4u) [[unlikely]] return; }
L_002434F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243518; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243518u) [[unlikely]] return; }
L_00243518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0024351C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00243540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024355Cu); set32(c.r[4], 0u + 4102u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024355Cu) [[unlikely]] return; }
L_0024355C:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002435EC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 660u)));  goto L_002435CC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002435AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00243594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0024367C; } }
L_00243594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024359Cu);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0024359Cu) [[unlikely]] return; }
L_0024359C:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_002435AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243678; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    c.budget -= 4;
L_002435CC:
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243678; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 3;
L_002435EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00243604; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00243618; } }
L_00243604:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00243614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 20u));  if (t) { goto L_00243618; } }
L_00243614:
    c.f[0] = 0u;
    c.budget -= 1;
L_00243618:
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10060000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243630u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00243630u) [[unlikely]] return; }
L_00243630:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243654u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243654u) [[unlikely]] return; }
L_00243654:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243678; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243678u) [[unlikely]] return; }
L_00243678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024367C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00243690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436A8u); set32(c.r[4], 0u + 4102u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002436A8u) [[unlikely]] return; }
L_002436A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 126u, depth + 1u); else { c.pc = 0x0024D390u; return; } if (c.pc != 0x002436B0u) [[unlikely]] return; }
L_002436B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_00243710; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 660u)));  if (t) { goto L_002436CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002436E4; } }
L_002436CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002436E4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002436E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436ECu); set32(c.r[4], c.r[4].w[0] + 1584u);  if (depth < kMaxDepth) unit_0037(c, 418u, depth + 1u); else { c.pc = 0x001FF530u; return; } if (c.pc != 0x002436ECu) [[unlikely]] return; }
L_002436EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 660u)));  goto L_00243708; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243700u); set32(c.r[4], c.r[4].w[0] - 22048u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00243700u) [[unlikely]] return; }
L_00243700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024370C; } }
L_00243708:
    st32((c.r[3].w[0] + 1576u), c.r[2].w[0]);
    c.budget -= 1;
L_0024370C:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_00243710:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243730u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243730u) [[unlikely]] return; }
L_00243730:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243758; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243754u) [[unlikely]] return; }
L_00243754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243758:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243788u); set32(c.r[4], 0u + 4102u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243788u) [[unlikely]] return; }
L_00243788:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_002437D8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002437B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002437C8; } }
L_002437B4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002437C8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002437C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002437D0u);  if (depth < kMaxDepth) unit_004B(c, 127u, depth + 1u); else { c.pc = 0x0024D3B0u; return; } if (c.pc != 0x002437D0u) [[unlikely]] return; }
L_002437D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0024382C; } }
L_002437D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002437E0u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002437E0u) [[unlikely]] return; }
L_002437E0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243804u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243804u) [[unlikely]] return; }
L_00243804:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243828; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243828u) [[unlikely]] return; }
L_00243828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024382C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243840:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024385Cu); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024385Cu) [[unlikely]] return; }
L_0024385C:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00243A30; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_0024387C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00243A90; } }
L_0024387C:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_002438BC; }
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_002438B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002438B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002438B4u) [[unlikely]] return; }
L_002438B4:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_002438B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002438BC:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_002438FC; }
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 124u), 0u);  goto L_002438F8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002438F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002438F4u) [[unlikely]] return; }
L_002438F4:
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 1;
L_002438F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_002438FC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024390C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_00243920; } }
L_0024390C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00243920; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00243920:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00243934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_00243948; } }
L_00243934:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00243948; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_00243948:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024395C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_00243970; } }
L_0024395C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00243970; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_00243970:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00243984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_00243998; } }
L_00243984:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_00243998; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 3;
L_00243998:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002439AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_002439C0; } }
L_002439AC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002439C0; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002439C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002439D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[17].w[0] + 120u)));  if (t) { goto L_002439E8; } }
L_002439D4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[11].d[0] = 0ull + 0ull;  goto L_002439E8; }
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    c.budget -= 3;
L_002439E8:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[10].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A20u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 419u, depth + 1u); else { c.pc = 0x001CFC90u; return; } if (c.pc != 0x00243A20u) [[unlikely]] return; }
L_00243A20:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_00243A8C; } }
L_00243A30:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243A8C; } }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A68u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243A68u) [[unlikely]] return; }
L_00243A68:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243A8C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243A8Cu) [[unlikely]] return; }
L_00243A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00243A90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00243AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243AB8u); set32(c.r[4], 0u + 4106u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243AB8u) [[unlikely]] return; }
L_00243AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243AC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 88u, depth + 1u); else { c.pc = 0x00251130u; return; } if (c.pc != 0x00243AC0u) [[unlikely]] return; }
L_00243AC0:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243AE4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243AE4u) [[unlikely]] return; }
L_00243AE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243B0C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243B08u) [[unlikely]] return; }
L_00243B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243B0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B38u); set32(c.r[4], 0u + 4106u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243B38u) [[unlikely]] return; }
L_00243B38:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243B4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_00243B60; } }
L_00243B4C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00243B60; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_00243B60:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_00243BD4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243B7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00243B90; } }
L_00243B7C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00243B90; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_00243B90:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243BA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_00243BB4; } }
L_00243BA0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00243BB4; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_00243BB4:
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 89u, depth + 1u); else { c.pc = 0x00251140u; return; } if (c.pc != 0x00243BCCu) [[unlikely]] return; }
L_00243BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_00243C0C; } }
L_00243BD4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243BE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00243BF8; } }
L_00243BE4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00243BF8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_00243BF8:
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C08u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_004C(c, 92u, depth + 1u); else { c.pc = 0x002511E0u; return; } if (c.pc != 0x00243C08u) [[unlikely]] return; }
L_00243C08:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_00243C0C:
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C2Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243C2Cu) [[unlikely]] return; }
L_00243C2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243C54; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243C50u) [[unlikely]] return; }
L_00243C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243C54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C78u); set32(c.r[4], 0u + 4106u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243C78u) [[unlikely]] return; }
L_00243C78:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243C90; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00243CA4; } }
L_00243C90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00243CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_00243CA4; } }
L_00243CA0:
    c.f[1] = 0u;
    c.budget -= 1;
L_00243CA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243CBC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00243CD0; } }
L_00243CBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00243CCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_00243CD0; } }
L_00243CCC:
    c.f[0] = 0u;
    c.budget -= 1;
L_00243CD0:
    st32((c.r[2].w[0] + 152u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[2].w[0] + 156u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CFCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243CFCu) [[unlikely]] return; }
L_00243CFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243D24; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243D20u) [[unlikely]] return; }
L_00243D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243D24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243D30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D48u); set32(c.r[4], 0u + 4106u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243D48u) [[unlikely]] return; }
L_00243D48:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243D60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00243D80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00243D60:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00243D80; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243D80; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243D80:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00243D94; } }
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[2].w[0] + 160u));  goto L_00243DF8; }
L_00243D94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DA0u); set32(c.r[4], c.r[4].w[0] - 22025u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00243DA0u) [[unlikely]] return; }
L_00243DA0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DC8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243DC8u) [[unlikely]] return; }
L_00243DC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243E60; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243DECu) [[unlikely]] return; }
L_00243DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243E5C; } }
    c.f[1] = ld32((c.r[2].w[0] + 160u));
    c.budget -= 1;
L_00243DF8:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    set32(c.r[6], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 88u));
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E38u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243E38u) [[unlikely]] return; }
L_00243E38:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243E5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243E5Cu) [[unlikely]] return; }
L_00243E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00243E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E88u); set32(c.r[4], 0u + 4106u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243E88u) [[unlikely]] return; }
L_00243E88:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00243EB0; } }
L_00243E9C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00243EB0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00243EB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243EC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_00243ED8; } }
L_00243EC4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00243ED8; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_00243ED8:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EE8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_004C(c, 95u, depth + 1u); else { c.pc = 0x00251270u; return; } if (c.pc != 0x00243EE8u) [[unlikely]] return; }
L_00243EE8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F0Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243F0Cu) [[unlikely]] return; }
L_00243F0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243F34; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243F30u) [[unlikely]] return; }
L_00243F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243F34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243F40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F58u); set32(c.r[4], 0u + 4106u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00243F58u) [[unlikely]] return; }
L_00243F58:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00243F6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00243F80; } }
L_00243F6C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00243F80; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_00243F80:
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F90u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_004C(c, 98u, depth + 1u); else { c.pc = 0x002512D0u; return; } if (c.pc != 0x00243F90u) [[unlikely]] return; }
L_00243F90:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FB4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x00243FB4u) [[unlikely]] return; }
L_00243FB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00243FDC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00243FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00243FD8u) [[unlikely]] return; }
L_00243FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00243FDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_0049(c, 1u, depth);
}

}
