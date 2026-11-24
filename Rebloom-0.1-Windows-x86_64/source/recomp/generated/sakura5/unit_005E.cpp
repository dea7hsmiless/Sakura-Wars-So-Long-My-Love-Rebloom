#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005E[4096] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0,
    0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0,
    0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0,
    335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0,
    354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0,
};

void unit_005E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00298000;
    case 2u: goto L_0029800C;
    case 3u: goto L_00298014;
    case 4u: goto L_0029801C;
    case 5u: goto L_00298054;
    case 6u: goto L_00298064;
    case 7u: goto L_00298080;
    case 8u: goto L_002980AC;
    case 9u: goto L_002980D0;
    case 10u: goto L_0029810C;
    case 11u: goto L_00298160;
    case 12u: goto L_00298180;
    case 13u: goto L_0029819C;
    case 14u: goto L_002981CC;
    case 15u: goto L_002981E0;
    case 16u: goto L_00298200;
    case 17u: goto L_00298220;
    case 18u: goto L_00298254;
    case 19u: goto L_00298270;
    case 20u: goto L_00298290;
    case 21u: goto L_002982BC;
    case 22u: goto L_00298310;
    case 23u: goto L_0029834C;
    case 24u: goto L_0029836C;
    case 25u: goto L_00298380;
    case 26u: goto L_002983B8;
    case 27u: goto L_002983F0;
    case 28u: goto L_00298410;
    case 29u: goto L_0029843C;
    case 30u: goto L_00298450;
    case 31u: goto L_00298460;
    case 32u: goto L_0029847C;
    case 33u: goto L_00298494;
    case 34u: goto L_002984C8;
    case 35u: goto L_002984DC;
    case 36u: goto L_002984EC;
    case 37u: goto L_002984FC;
    case 38u: goto L_00298514;
    case 39u: goto L_0029851C;
    case 40u: goto L_00298588;
    case 41u: goto L_002985B8;
    case 42u: goto L_002985D0;
    case 43u: goto L_002985FC;
    case 44u: goto L_00298610;
    case 45u: goto L_00298620;
    case 46u: goto L_00298630;
    case 47u: goto L_00298644;
    case 48u: goto L_00298658;
    case 49u: goto L_002986B0;
    case 50u: goto L_002986F4;
    case 51u: goto L_00298710;
    case 52u: goto L_00298760;
    case 53u: goto L_00298774;
    case 54u: goto L_00298818;
    case 55u: goto L_00298840;
    case 56u: goto L_00298860;
    case 57u: goto L_00298880;
    case 58u: goto L_002988A0;
    case 59u: goto L_002988C0;
    case 60u: goto L_002988E0;
    case 61u: goto L_00298900;
    case 62u: goto L_00298920;
    case 63u: goto L_0029893C;
    case 64u: goto L_00298950;
    case 65u: goto L_0029895C;
    case 66u: goto L_00298974;
    case 67u: goto L_00298980;
    case 68u: goto L_00298A1C;
    case 69u: goto L_00298A30;
    case 70u: goto L_00298A3C;
    case 71u: goto L_00298A4C;
    case 72u: goto L_00298A58;
    case 73u: goto L_00298A80;
    case 74u: goto L_00298A90;
    case 75u: goto L_00298AE0;
    case 76u: goto L_00298AFC;
    case 77u: goto L_00298B10;
    case 78u: goto L_00298B44;
    case 79u: goto L_00298B80;
    case 80u: goto L_00298BC0;
    case 81u: goto L_00298BD8;
    case 82u: goto L_00298C2C;
    case 83u: goto L_00298C44;
    case 84u: goto L_00298C5C;
    case 85u: goto L_00298C74;
    case 86u: goto L_00298C8C;
    case 87u: goto L_00298CB0;
    case 88u: goto L_00298D08;
    case 89u: goto L_00298D20;
    case 90u: goto L_00298D38;
    case 91u: goto L_00298D50;
    case 92u: goto L_00298D6C;
    case 93u: goto L_00298D80;
    case 94u: goto L_00298D94;
    case 95u: goto L_00298DD0;
    case 96u: goto L_00298DE8;
    case 97u: goto L_00298E20;
    case 98u: goto L_00298E48;
    case 99u: goto L_00298E60;
    case 100u: goto L_00298E88;
    case 101u: goto L_00298EC0;
    case 102u: goto L_00298ED0;
    case 103u: goto L_00298EE0;
    case 104u: goto L_00298EFC;
    case 105u: goto L_00298F70;
    case 106u: goto L_00298FA0;
    case 107u: goto L_00298FB8;
    case 108u: goto L_00298FD0;
    case 109u: goto L_00299014;
    case 110u: goto L_00299038;
    case 111u: goto L_00299050;
    case 112u: goto L_0029905C;
    case 113u: goto L_0029906C;
    case 114u: goto L_00299078;
    case 115u: goto L_002990B0;
    case 116u: goto L_00299118;
    case 117u: goto L_00299168;
    case 118u: goto L_002991A8;
    case 119u: goto L_002991B4;
    case 120u: goto L_002991D0;
    case 121u: goto L_00299200;
    case 122u: goto L_0029922C;
    case 123u: goto L_0029923C;
    case 124u: goto L_0029924C;
    case 125u: goto L_00299264;
    case 126u: goto L_00299278;
    case 127u: goto L_00299290;
    case 128u: goto L_002992C4;
    case 129u: goto L_002992D8;
    case 130u: goto L_002992F0;
    case 131u: goto L_00299320;
    case 132u: goto L_00299350;
    case 133u: goto L_00299380;
    case 134u: goto L_002993E0;
    case 135u: goto L_002993E8;
    case 136u: goto L_00299410;
    case 137u: goto L_0029942C;
    case 138u: goto L_00299560;
    case 139u: goto L_0029958C;
    case 140u: goto L_002995B0;
    case 141u: goto L_002995C0;
    case 142u: goto L_002995D8;
    case 143u: goto L_002995F0;
    case 144u: goto L_002996AC;
    case 145u: goto L_00299704;
    case 146u: goto L_00299724;
    case 147u: goto L_00299774;
    case 148u: goto L_0029978C;
    case 149u: goto L_0029985C;
    case 150u: goto L_002998C8;
    case 151u: goto L_002998D0;
    case 152u: goto L_00299900;
    case 153u: goto L_00299968;
    case 154u: goto L_002999D4;
    case 155u: goto L_00299A00;
    case 156u: goto L_00299A40;
    case 157u: goto L_00299A6C;
    case 158u: goto L_00299AA4;
    case 159u: goto L_00299AD0;
    case 160u: goto L_00299B44;
    case 161u: goto L_00299B50;
    case 162u: goto L_00299B68;
    case 163u: goto L_00299B70;
    case 164u: goto L_00299B8C;
    case 165u: goto L_00299B94;
    case 166u: goto L_00299BB4;
    case 167u: goto L_00299BBC;
    case 168u: goto L_00299C20;
    case 169u: goto L_00299C94;
    case 170u: goto L_00299CE8;
    case 171u: goto L_00299D20;
    case 172u: goto L_00299D48;
    case 173u: goto L_00299D60;
    case 174u: goto L_00299D68;
    case 175u: goto L_00299D70;
    case 176u: goto L_00299D8C;
    case 177u: goto L_00299D94;
    case 178u: goto L_00299DC0;
    case 179u: goto L_00299E00;
    case 180u: goto L_00299E24;
    case 181u: goto L_00299E44;
    case 182u: goto L_00299E60;
    case 183u: goto L_00299E7C;
    case 184u: goto L_00299E98;
    case 185u: goto L_00299EB0;
    case 186u: goto L_00299EE4;
    case 187u: goto L_00299F20;
    case 188u: goto L_00299F68;
    case 189u: goto L_00299F74;
    case 190u: goto L_00299F84;
    case 191u: goto L_00299F94;
    case 192u: goto L_00299FA0;
    case 193u: goto L_0029A0A0;
    case 194u: goto L_0029A110;
    case 195u: goto L_0029A120;
    case 196u: goto L_0029A148;
    case 197u: goto L_0029A15C;
    case 198u: goto L_0029A1C0;
    case 199u: goto L_0029A1F0;
    case 200u: goto L_0029A204;
    case 201u: goto L_0029A270;
    case 202u: goto L_0029A2C4;
    case 203u: goto L_0029A2DC;
    case 204u: goto L_0029A2E8;
    case 205u: goto L_0029A2F8;
    case 206u: goto L_0029A304;
    case 207u: goto L_0029A334;
    case 208u: goto L_0029A34C;
    case 209u: goto L_0029A3C0;
    case 210u: goto L_0029A430;
    case 211u: goto L_0029A480;
    case 212u: goto L_0029A498;
    case 213u: goto L_0029A4B0;
    case 214u: goto L_0029A4D0;
    case 215u: goto L_0029A500;
    case 216u: goto L_0029A538;
    case 217u: goto L_0029A554;
    case 218u: goto L_0029A56C;
    case 219u: goto L_0029A5A0;
    case 220u: goto L_0029A5C4;
    case 221u: goto L_0029A5D8;
    case 222u: goto L_0029A600;
    case 223u: goto L_0029A640;
    case 224u: goto L_0029A65C;
    case 225u: goto L_0029A668;
    case 226u: goto L_0029A69C;
    case 227u: goto L_0029A6AC;
    case 228u: goto L_0029A6E8;
    case 229u: goto L_0029A6F8;
    case 230u: goto L_0029A714;
    case 231u: goto L_0029A730;
    case 232u: goto L_0029A770;
    case 233u: goto L_0029A77C;
    case 234u: goto L_0029A794;
    case 235u: goto L_0029A7B0;
    case 236u: goto L_0029A7C4;
    case 237u: goto L_0029A7D0;
    case 238u: goto L_0029A7F0;
    case 239u: goto L_0029A818;
    case 240u: goto L_0029A830;
    case 241u: goto L_0029A94C;
    case 242u: goto L_0029A95C;
    case 243u: goto L_0029A980;
    case 244u: goto L_0029A9B8;
    case 245u: goto L_0029A9D8;
    case 246u: goto L_0029A9F8;
    case 247u: goto L_0029AA28;
    case 248u: goto L_0029AA38;
    case 249u: goto L_0029AA84;
    case 250u: goto L_0029AA90;
    case 251u: goto L_0029AAE0;
    case 252u: goto L_0029AAEC;
    case 253u: goto L_0029AB20;
    case 254u: goto L_0029AB2C;
    case 255u: goto L_0029AB7C;
    case 256u: goto L_0029AB88;
    case 257u: goto L_0029ABD8;
    case 258u: goto L_0029ABE4;
    case 259u: goto L_0029AC34;
    case 260u: goto L_0029AC60;
    case 261u: goto L_0029AC70;
    case 262u: goto L_0029ACD0;
    case 263u: goto L_0029ACF4;
    case 264u: goto L_0029AD0C;
    case 265u: goto L_0029AD18;
    case 266u: goto L_0029AD34;
    case 267u: goto L_0029AD50;
    case 268u: goto L_0029AD70;
    case 269u: goto L_0029ADA0;
    case 270u: goto L_0029ADBC;
    case 271u: goto L_0029ADD0;
    case 272u: goto L_0029ADF0;
    case 273u: goto L_0029AE10;
    case 274u: goto L_0029AE2C;
    case 275u: goto L_0029AE4C;
    case 276u: goto L_0029AE58;
    case 277u: goto L_0029AE7C;
    case 278u: goto L_0029AEA0;
    case 279u: goto L_0029AEDC;
    case 280u: goto L_0029AEF0;
    case 281u: goto L_0029AF2C;
    case 282u: goto L_0029AF40;
    case 283u: goto L_0029AF6C;
    case 284u: goto L_0029AF80;
    case 285u: goto L_0029AFA0;
    case 286u: goto L_0029B010;
    case 287u: goto L_0029B060;
    case 288u: goto L_0029B1C0;
    case 289u: goto L_0029B208;
    case 290u: goto L_0029B2B4;
    case 291u: goto L_0029B300;
    case 292u: goto L_0029B30C;
    case 293u: goto L_0029B31C;
    case 294u: goto L_0029B328;
    case 295u: goto L_0029B334;
    case 296u: goto L_0029B340;
    case 297u: goto L_0029B3C4;
    case 298u: goto L_0029B45C;
    case 299u: goto L_0029B4E0;
    case 300u: goto L_0029B500;
    case 301u: goto L_0029B590;
    case 302u: goto L_0029B5A0;
    case 303u: goto L_0029B5C4;
    case 304u: goto L_0029B604;
    case 305u: goto L_0029B634;
    case 306u: goto L_0029B664;
    case 307u: goto L_0029B6C4;
    case 308u: goto L_0029B6DC;
    case 309u: goto L_0029B6E8;
    case 310u: goto L_0029B700;
    case 311u: goto L_0029B70C;
    case 312u: goto L_0029B730;
    case 313u: goto L_0029B76C;
    case 314u: goto L_0029B784;
    case 315u: goto L_0029B7A0;
    case 316u: goto L_0029B7BC;
    case 317u: goto L_0029B7D8;
    case 318u: goto L_0029B800;
    case 319u: goto L_0029B86C;
    case 320u: goto L_0029B8A4;
    case 321u: goto L_0029B8B0;
    case 322u: goto L_0029B8B8;
    case 323u: goto L_0029B8C4;
    case 324u: goto L_0029B8D0;
    case 325u: goto L_0029B8DC;
    case 326u: goto L_0029B8E8;
    case 327u: goto L_0029B8F4;
    case 328u: goto L_0029B8F8;
    case 329u: goto L_0029B92C;
    case 330u: goto L_0029B938;
    case 331u: goto L_0029B954;
    case 332u: goto L_0029B960;
    case 333u: goto L_0029B96C;
    case 334u: goto L_0029B978;
    case 335u: goto L_0029B980;
    case 336u: goto L_0029B994;
    case 337u: goto L_0029B99C;
    case 338u: goto L_0029B9A8;
    case 339u: goto L_0029B9B0;
    case 340u: goto L_0029B9C0;
    case 341u: goto L_0029B9C8;
    case 342u: goto L_0029BA0C;
    case 343u: goto L_0029BA14;
    case 344u: goto L_0029BA24;
    case 345u: goto L_0029BA54;
    case 346u: goto L_0029BA5C;
    case 347u: goto L_0029BA70;
    case 348u: goto L_0029BA78;
    case 349u: goto L_0029BA84;
    case 350u: goto L_0029BAB0;
    case 351u: goto L_0029BABC;
    case 352u: goto L_0029BAC8;
    case 353u: goto L_0029BAF4;
    case 354u: goto L_0029BB00;
    case 355u: goto L_0029BB0C;
    case 356u: goto L_0029BB18;
    case 357u: goto L_0029BB44;
    case 358u: goto L_0029BB50;
    case 359u: goto L_0029BB5C;
    case 360u: goto L_0029BB98;
    case 361u: goto L_0029BBAC;
    case 362u: goto L_0029BBC0;
    case 363u: goto L_0029BBD4;
    case 364u: goto L_0029BC28;
    case 365u: goto L_0029BC78;
    case 366u: goto L_0029BCB0;
    case 367u: goto L_0029BCBC;
    case 368u: goto L_0029BCC4;
    case 369u: goto L_0029BCCC;
    case 370u: goto L_0029BD30;
    case 371u: goto L_0029BD98;
    case 372u: goto L_0029BDFC;
    case 373u: goto L_0029BE10;
    case 374u: goto L_0029BE68;
    case 375u: goto L_0029BE80;
    case 376u: goto L_0029BED8;
    case 377u: goto L_0029BEF0;
    case 378u: goto L_0029BF48;
    case 379u: goto L_0029BF60;
    case 380u: goto L_0029BF84;
    case 381u: goto L_0029BF90;
    case 382u: goto L_0029BFF4;
    default: bad_entry(c, 0x00298000u); return;
    }
L_00298000:
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029801C; } }
L_0029800C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298014u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005B(c, 19u, depth + 1u); else { c.pc = 0x0028C3A0u; return; } if (c.pc != 0x00298014u) [[unlikely]] return; }
L_00298014:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_0029801C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0029803C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00298038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002980AC; } }
L_00298038:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0029803C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00298048; }
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_00298048:
    st32((c.r[2].w[0] + 100u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298054u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00298054u) [[unlikely]] return; }
L_00298054:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 944u), c.r[2].w[0]);  goto L_00298068; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x00298064u) [[unlikely]] return; }
L_00298064:
    st32((c.r[19].w[0] + 944u), c.r[2].w[0]);
    c.budget -= 1;
L_00298068:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00298078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002980AC; } }
L_00298078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298080u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x00298080u) [[unlikely]] return; }
L_00298080:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029809C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0029809C:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_002980AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002980D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 944u)));
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_00298114; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029810Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029810Cu) [[unlikely]] return; }
L_0029810C:
    st32((c.r[16].w[0] + 944u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 2;
L_00298114:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00298120; }
    set32(c.r[5], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_00298120:
    set32(c.r[4], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00298140; }
    set32(c.r[5], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 1;
L_00298140:
    set32(c.r[4], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298180u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x00298180u) [[unlikely]] return; }
L_00298180:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029819Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 22u, depth + 1u); else { c.pc = 0x00298310u; return; } if (c.pc != 0x0029819Cu) [[unlikely]] return; }
L_0029819C:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 6411ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  goto L_002981B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002982F4; } }
L_002981B4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_002981F8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002981CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 97u, depth + 1u); else { c.pc = 0x00298E20u; return; } if (c.pc != 0x002981CCu) [[unlikely]] return; }
L_002981CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002982F4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002981E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 99u, depth + 1u); else { c.pc = 0x00298E60u; return; } if (c.pc != 0x002981E0u) [[unlikely]] return; }
L_002981E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002981F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002982F4; } }
L_002981F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_002981F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298200u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00298200u) [[unlikely]] return; }
L_00298200:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 80u);  goto L_00298218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002982F4; } }
L_00298218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298220u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00298220u) [[unlikely]] return; }
L_00298220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 940u), c.r[2].w[0]);  goto L_00298258; }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00298248; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_00298248; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00298248:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298254u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x00298254u) [[unlikely]] return; }
L_00298254:
    st32((c.r[18].w[0] + 940u), c.r[2].w[0]);
    c.budget -= 1;
L_00298258:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 92u);  goto L_00298268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002982F4; } }
L_00298268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298270u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00298270u) [[unlikely]] return; }
L_00298270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 936u), c.r[2].w[0]);  goto L_00298294; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00298284; } }
    set32(c.r[6], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_00298284:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298290u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 244u, depth + 1u); else { c.pc = 0x002CA530u; return; } if (c.pc != 0x00298290u) [[unlikely]] return; }
L_00298290:
    st32((c.r[18].w[0] + 936u), c.r[2].w[0]);
    c.budget -= 1;
L_00298294:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 940u)));  goto L_002982A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002982F4; } }
L_002982A4:
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 936u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002982BCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002982BCu) [[unlikely]] return; }
L_002982BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002982C8; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_002982C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002982DC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002982DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 936u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_002982F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00298310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 936u)));
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 940u)));  goto L_00298354; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029834Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029834Cu) [[unlikely]] return; }
L_0029834C:
    st32((c.r[16].w[0] + 936u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 940u)));
    c.budget -= 2;
L_00298354:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00298374; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029836Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029836Cu) [[unlikely]] return; }
L_0029836C:
    st32((c.r[16].w[0] + 940u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00298374:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298380:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002983B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002983B8u) [[unlikely]] return; }
L_002983B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002983D4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[3].w[0])));  goto L_002983D4; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002983D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 912u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002983F0u); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 49u, depth + 1u); else { c.pc = 0x002986B0u; return; } if (c.pc != 0x002983F0u) [[unlikely]] return; }
L_002983F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 6411ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00298408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298680; } }
L_00298408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298410u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00298410u) [[unlikely]] return; }
L_00298410:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298504; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00298504; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029843Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 99u, depth + 1u); else { c.pc = 0x00298E60u; return; } if (c.pc != 0x0029843Cu) [[unlikely]] return; }
L_0029843C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298504; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298450u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 97u, depth + 1u); else { c.pc = 0x00298E20u; return; } if (c.pc != 0x00298450u) [[unlikely]] return; }
L_00298450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00298504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298460u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00298460u) [[unlikely]] return; }
L_00298460:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], 0u + 30u);  goto L_00298474; }
    set32(c.r[16], 0u + 29u);
    c.budget -= 1;
L_00298474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029847Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0029847Cu) [[unlikely]] return; }
L_0029847C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 948u), c.r[2].w[0]);  goto L_00298498; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298494u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x00298494u) [[unlikely]] return; }
L_00298494:
    st32((c.r[17].w[0] + 948u), c.r[2].w[0]);
    c.budget -= 1;
L_00298498:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002984A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298680; } }
L_002984A8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984C8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002984C8u) [[unlikely]] return; }
L_002984C8:
    set32(c.r[16], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002984E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002984DCu) [[unlikely]] return; }
L_002984DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_002984F0; } }
L_002984E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984ECu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002984ECu) [[unlikely]] return; }
L_002984EC:
    set32(c.r[5], c.r[20].w[0] + 352u);
    c.budget -= 1;
L_002984F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 948u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984FCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002984FCu) [[unlikely]] return; }
L_002984FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_00298664; } }
L_00298504:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_00298650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298680; } }
L_00298514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029851Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x003C5540u; return; } if (c.pc != 0x0029851Cu) [[unlikely]] return; }
L_0029851C:
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[4], c.r[2].w[0] >> 16);
    c.r[30].d[0] = c.r[3].d[0] & 255ull;
    c.r[19].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 148u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0029864C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[23].d[0] = c.r[19].d[0] & 255ull;  goto L_00298570; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[19].d[0] & 255ull;  goto L_00298560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002985A8; } }
L_00298560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002985A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002985A8; } }
L_00298570:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[23].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0029859C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298588u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 97u, depth + 1u); else { c.pc = 0x00298E20u; return; } if (c.pc != 0x00298588u) [[unlikely]] return; }
L_00298588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002985A8; } }
L_00298598:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029859C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_002985A8; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002985A8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00298650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002985B8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002985B8u) [[unlikely]] return; }
L_002985B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 948u), c.r[2].w[0]);  goto L_002985D4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002985D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002985D0u) [[unlikely]] return; }
L_002985D0:
    st32((c.r[17].w[0] + 948u), c.r[2].w[0]);
    c.budget -= 1;
L_002985D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002985E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298680; } }
L_002985E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002985FCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002985FCu) [[unlikely]] return; }
L_002985FC:
    set32(c.r[16], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00298618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00298610u) [[unlikely]] return; }
L_00298610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_00298624; } }
L_00298618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298620u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00298620u) [[unlikely]] return; }
L_00298620:
    set32(c.r[5], c.r[20].w[0] + 352u);
    c.budget -= 1;
L_00298624:
    set32(c.r[2], ld32((c.r[17].w[0] + 948u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298630u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00298630u) [[unlikely]] return; }
L_00298630:
    set32(c.r[5], ld32((c.r[17].w[0] + 948u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 51u, depth + 1u); else { c.pc = 0x00298710u; return; } if (c.pc != 0x00298644u) [[unlikely]] return; }
L_00298644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_00298664; } }
L_0029864C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00298650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x00298658u) [[unlikely]] return; }
L_00298658:
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298514u | kUnwind; return; } goto L_00298514; }
L_00298664:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00298674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298680; } }
L_00298674:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00298680:
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
L_002986B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 948u)));
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002986FC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 948u), 0u);  goto L_002986F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002986F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002986F4u) [[unlikely]] return; }
L_002986F4:
    st32((c.r[16].w[0] + 948u), 0u);
    c.budget -= 1;
L_002986F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002986FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298710:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 516u)));  if (t) { goto L_00298774; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 464u)));  goto L_0029876C; }
    set32(c.r[5], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x00298760u) [[unlikely]] return; }
L_00298760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_00298778; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 1;
L_0029876C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x00298774u) [[unlikely]] return; }
L_00298774:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_00298778:
    set32(c.r[4], 0u + 5005u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));  goto L_0029898C; }
    set32(c.r[4], 0u + 5004u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00298988; } }
    set32(c.r[4], 0u + 4020u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 1320u)));  goto L_0029892C; }
    set32(c.r[4], 0u + 4019u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00298928; } }
    set32(c.r[4], 0u + 4018u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00298928; } }
    set32(c.r[4], 0u + 4017u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00298928; } }
    set32(c.r[4], 0u + 1010u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_0029890C; }
    set32(c.r[4], 0u + 1009u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_002988EC; }
    set32(c.r[4], 0u + 1007u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_002988CC; }
    set32(c.r[4], 0u + 2009u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_002988AC; }
    set32(c.r[4], 0u + 2008u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_0029888C; }
    set32(c.r[4], 0u + 2007u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_0029886C; }
    set32(c.r[4], 0u + 2006u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_0029884C; }
    set32(c.r[4], 0u + 2005u);
    c.budget -= 1;
L_00298818:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_0029882C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00298A5C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0029882C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 33u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298840u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298840u) [[unlikely]] return; }
L_00298840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0029884C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 44u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298860u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298860u) [[unlikely]] return; }
L_00298860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0029886C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 55u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298880u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298880u) [[unlikely]] return; }
L_00298880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0029888C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 66u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002988A0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002988A0u) [[unlikely]] return; }
L_002988A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002988AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 77u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002988C0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002988C0u) [[unlikely]] return; }
L_002988C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002988CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002988E0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002988E0u) [[unlikely]] return; }
L_002988E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002988EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298900u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298900u) [[unlikely]] return; }
L_00298900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0029890C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298920u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298920u) [[unlikely]] return; }
L_00298920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
L_00298928:
    set32(c.r[18], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 1;
L_0029892C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00298948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029893Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0029893Cu) [[unlikely]] return; }
L_0029893C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] + 352u);  if (t) { goto L_00298954; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00298948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298950u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00298950u) [[unlikely]] return; }
L_00298950:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00298954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029895Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0029895Cu) [[unlikely]] return; }
L_0029895C:
    set32(c.r[6], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_00298978; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298974u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00298974u) [[unlikely]] return; }
L_00298974:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_00298978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298980u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00298980u) [[unlikely]] return; }
L_00298980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298A58; } }
L_00298988:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0029898C:
    set32(c.r[4], 0u + 5004u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[5], ld32((c.r[5].w[0] + 576u)));  if (t) { goto L_002989B8; } }
    c.r[4].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00298A58; } }
    c.r[1].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00298A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] - 4u);  if (t) { goto L_002989D0; } }
L_002989B8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00298A58; } }
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00298A58; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_002989D0:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002989E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002989E0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], c.r[2].w[0] + 1u);  goto L_002989F0; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_002989F0:
    set32(c.r[2], 0u + 5461u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 5005u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 1320u)));  goto L_00298A0C; }
    set32(c.r[19], 0u - c.r[19].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 2;
L_00298A0C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00298A28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00298A1Cu) [[unlikely]] return; }
L_00298A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] + 352u);  if (t) { goto L_00298A34; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00298A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A30u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00298A30u) [[unlikely]] return; }
L_00298A30:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00298A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A3Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00298A3Cu) [[unlikely]] return; }
L_00298A3C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A4Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00298A4Cu) [[unlikely]] return; }
L_00298A4C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A58u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00298A58u) [[unlikely]] return; }
L_00298A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00298A5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00298A80:
    set32(c.r[7], ld32((c.r[4].w[0] + 916u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00298AC4; } }
L_00298A90:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 516u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00298AC4; }
    set32(c.r[6], ld32((c.r[6].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00298AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00298AD0; } }
L_00298AC0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00298AC4:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298A90u | kUnwind; return; } goto L_00298A90; }
L_00298AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298AFCu); set32(c.r[5], ld32((c.r[2].w[0] + 516u)));  if (depth < kMaxDepth) unit_005E(c, 95u, depth + 1u); else { c.pc = 0x00298DD0u; return; } if (c.pc != 0x00298AFCu) [[unlikely]] return; }
L_00298AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00298B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 9;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00298B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298B64; } }
L_00298B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298B44u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00298B44u) [[unlikely]] return; }
L_00298B44:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_00298B5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298B64; } }
L_00298B5C:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00298B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[4], 0u + 8u);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298BC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x00298BC0u) [[unlikely]] return; }
L_00298BC0:
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 84u), c.f[20]);
    set32(c.r[5], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 87u, depth + 1u); else { c.pc = 0x00298CB0u; return; } if (c.pc != 0x00298BD8u) [[unlikely]] return; }
L_00298BD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_00298C7C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_00298C64; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_00298C4C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_00298C34; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_00298C1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00298C90; } }
L_00298C1C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C2Cu); set32(c.r[5], 0u + 101u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298C2Cu) [[unlikely]] return; }
L_00298C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298C8C; } }
L_00298C34:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C44u); set32(c.r[5], 0u + 103u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298C44u) [[unlikely]] return; }
L_00298C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298C8C; } }
L_00298C4C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C5Cu); set32(c.r[5], 0u + 105u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298C5Cu) [[unlikely]] return; }
L_00298C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298C8C; } }
L_00298C64:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C74u); set32(c.r[5], 0u + 107u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298C74u) [[unlikely]] return; }
L_00298C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298C8C; } }
L_00298C7C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C8Cu); set32(c.r[5], 0u + 109u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298C8Cu) [[unlikely]] return; }
L_00298C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00298C90:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00298CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00298D58; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[6].w[0] + 52u)));  goto L_00298D40; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[6].w[0] + 52u)));  goto L_00298D28; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[6].w[0] + 52u)));  goto L_00298D10; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[25], ld32((c.r[6].w[0] + 52u)));  goto L_00298CF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00298D70; } }
L_00298CF8:
    set32(c.r[4], c.r[6].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D08u); set32(c.r[5], 0u + 102u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298D08u) [[unlikely]] return; }
L_00298D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298D6C; } }
L_00298D10:
    set32(c.r[4], c.r[6].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D20u); set32(c.r[5], 0u + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298D20u) [[unlikely]] return; }
L_00298D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298D6C; } }
L_00298D28:
    set32(c.r[4], c.r[6].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D38u); set32(c.r[5], 0u + 106u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298D38u) [[unlikely]] return; }
L_00298D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298D6C; } }
L_00298D40:
    set32(c.r[4], c.r[6].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D50u); set32(c.r[5], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298D50u) [[unlikely]] return; }
L_00298D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298D6C; } }
L_00298D58:
    set32(c.r[25], ld32((c.r[6].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D6Cu); set32(c.r[5], 0u + 110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298D6Cu) [[unlikely]] return; }
L_00298D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00298D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00298D80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00298DC0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 916u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00298DB4; } }
L_00298D94:
    set32(c.r[3], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 516u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00298DB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 912u), c.r[8].w[0]);  if (t) { goto L_00298DC0; } }
L_00298DB4:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298D94u | kUnwind; return; } goto L_00298D94; }
L_00298DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298DD0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 920u)));  goto L_00298DE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00298E18; } }
L_00298DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298E08; } }
L_00298DE8:
    set32(c.r[3], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 516u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00298E08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298E18; } }
L_00298E08:
    c.r[3].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298DE8u | kUnwind; return; } goto L_00298DE8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00298E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00298E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298E50; } }
L_00298E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E48u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x00298E48u) [[unlikely]] return; }
L_00298E48:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00298E50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00298E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 52u);  goto L_00298E80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298EB4; } }
L_00298E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E88u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00298E88u) [[unlikely]] return; }
L_00298E88:
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00298EB4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00298EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00298EB4; } }
L_00298EB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00298EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00298EC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002948F0u | kUnwind; return; } [[clang::musttail]] return unit_005D(c, 58u, depth); }
L_00298ED0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295C10u | kUnwind; return; } [[clang::musttail]] return unit_005D(c, 179u, depth); }
L_00298EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298EFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x00298EFCu) [[unlikely]] return; }
L_00298EFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54540000u);
    set32(c.r[3], c.r[3].w[0] + 24336u);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 127u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298FA0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 219u, depth + 1u); else { c.pc = 0x0020E110u; return; } if (c.pc != 0x00298FA0u) [[unlikely]] return; }
L_00298FA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00298FBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298FB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00298FB8u) [[unlikely]] return; }
L_00298FB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00298FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298FD0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0029909C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00299098; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299014u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299014u) [[unlikely]] return; }
L_00299014:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 96u);  if (t) { goto L_00299040; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299038u); set32(c.r[5], ld32((c.r[16].w[0] + 200u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299038u) [[unlikely]] return; }
L_00299038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (t) { goto L_00299048; } }
L_00299040:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 2;
L_00299048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299050u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x00299050u) [[unlikely]] return; }
L_00299050:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029905Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x0029905Cu) [[unlikely]] return; }
L_0029905C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029906Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0029906Cu) [[unlikely]] return; }
L_0029906C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299078u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00299078u) [[unlikely]] return; }
L_00299078:
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 172u));
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_00299098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0029909C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002990B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002991E0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] & 2ull;  goto L_002990F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002991E4; } }
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 1;
L_002990F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00299128; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00299118u) [[unlikely]] return; }
L_00299118:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00299128:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 164u)));  goto L_0029916C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299168u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 239u, depth + 1u); else { c.pc = 0x0020E490u; return; } if (c.pc != 0x00299168u) [[unlikely]] return; }
L_00299168:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 1;
L_0029916C:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002991AC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002991A8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 239u, depth + 1u); else { c.pc = 0x0020E490u; return; } if (c.pc != 0x002991A8u) [[unlikely]] return; }
L_002991A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002991AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002991B4u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x002991B4u) [[unlikely]] return; }
L_002991B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002991E0; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002991D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002991D0u) [[unlikely]] return; }
L_002991D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002991E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002991E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00299200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00299234; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029922Cu); set32(c.r[5], c.r[5].w[0] + 5584u);  if (depth < kMaxDepth) unit_005E(c, 133u, depth + 1u); else { c.pc = 0x00299380u; return; } if (c.pc != 0x0029922Cu) [[unlikely]] return; }
L_0029922C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0029930C; } }
L_00299234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029923Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0029923Cu) [[unlikely]] return; }
L_0029923C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029924Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x0029924Cu) [[unlikely]] return; }
L_0029924C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0029926C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299264u); set32(c.r[5], c.r[5].w[0] + 5632u);  if (depth < kMaxDepth) unit_005E(c, 133u, depth + 1u); else { c.pc = 0x00299380u; return; } if (c.pc != 0x00299264u) [[unlikely]] return; }
L_00299264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299308; } }
L_0029926C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299278u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00299278u) [[unlikely]] return; }
L_00299278:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 204u), c.r[18].w[0]);  goto L_00299298; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299290u); set32(c.r[5], c.r[5].w[0] + 5696u);  if (depth < kMaxDepth) unit_005E(c, 133u, depth + 1u); else { c.pc = 0x00299380u; return; } if (c.pc != 0x00299290u) [[unlikely]] return; }
L_00299290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299308; } }
L_00299298:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 72u);
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002992C4u); st32((c.r[16].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x002992C4u) [[unlikely]] return; }
L_002992C4:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002992D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x002992D8u) [[unlikely]] return; }
L_002992D8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002992F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x002992F0u) [[unlikely]] return; }
L_002992F0:
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 6;
L_00299308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0029930C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00299320:
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0029933C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[5].w[0]);
    c.budget -= 4;
L_0029933C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299350:
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0029936C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[5].w[0]);
    c.budget -= 4;
L_0029936C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299380:
    set32(c.r[29], c.r[29].w[0] - 624u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 576u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 584u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 592u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 600u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[10].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 616u), c.r[11].d[0]);  if (t) { goto L_002993BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002993C8; } }
L_002993BC:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_002993C8:
    set32(c.r[2], c.r[29].w[0] + 624u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002993E0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x002993E0u) [[unlikely]] return; }
L_002993E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002993E8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002993E8u) [[unlikely]] return; }
L_002993E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_00299410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029942Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x0029942Cu) [[unlikely]] return; }
L_0029942C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50530000u);
    set32(c.r[3], c.r[3].w[0] + 24352u);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 384u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[17].w[0] + 388u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    st32((c.r[17].w[0] + 392u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 396u), 0u);
    st32((c.r[17].w[0] + 400u), 0u);
    st32((c.r[17].w[0] + 404u), 0u);
    st32((c.r[17].w[0] + 408u), 0u);
    st32((c.r[17].w[0] + 412u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 416u), 0u);
    st32((c.r[17].w[0] + 420u), 0u);
    st32((c.r[17].w[0] + 424u), 0u);
    st32((c.r[17].w[0] + 428u), 0u);
    st32((c.r[17].w[0] + 432u), 0u);
    st32((c.r[17].w[0] + 436u), 0u);
    st32((c.r[17].w[0] + 440u), 0u);
    st32((c.r[17].w[0] + 444u), 0u);
    st32((c.r[17].w[0] + 448u), 0u);
    st32((c.r[17].w[0] + 452u), 0u);
    st32((c.r[17].w[0] + 456u), 0u);
    st32((c.r[17].w[0] + 460u), 0u);
    st32((c.r[17].w[0] + 464u), 0u);
    st32((c.r[17].w[0] + 468u), 0u);
    st32((c.r[17].w[0] + 472u), 0u);
    st32((c.r[17].w[0] + 476u), 0u);
    st32((c.r[17].w[0] + 480u), 0u);
    st32((c.r[17].w[0] + 484u), 0u);
    st32((c.r[17].w[0] + 488u), 0u);
    st32((c.r[17].w[0] + 492u), 0u);
    st32((c.r[17].w[0] + 496u), 0u);
    st32((c.r[17].w[0] + 500u), 0u);
    st32((c.r[17].w[0] + 504u), 0u);
    st32((c.r[17].w[0] + 508u), 0u);
    st32((c.r[17].w[0] + 512u), 0u);
    st32((c.r[17].w[0] + 516u), 0u);
    st32((c.r[17].w[0] + 520u), 0u);
    st32((c.r[17].w[0] + 524u), 0u);
    st32((c.r[17].w[0] + 528u), 0u);
    st32((c.r[17].w[0] + 528u), 0u);
    st32((c.r[17].w[0] + 536u), 0u);
    st32((c.r[17].w[0] + 540u), 0u);
    st32((c.r[17].w[0] + 544u), 0u);
    st32((c.r[17].w[0] + 548u), 0u);
    st32((c.r[17].w[0] + 552u), 0u);
    st32((c.r[17].w[0] + 556u), 0u);
    st32((c.r[17].w[0] + 560u), 0u);
    st32((c.r[17].w[0] + 568u), 0u);
    st32((c.r[17].w[0] + 572u), 0u);
    st32((c.r[17].w[0] + 576u), 0u);
    st32((c.r[17].w[0] + 580u), 0u);
    st32((c.r[17].w[0] + 584u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 588u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 292u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[17].w[0] + 292u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 404u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 75;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00299560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002995D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029958Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005E(c, 194u, depth + 1u); else { c.pc = 0x0029A110u; return; } if (c.pc != 0x0029958Cu) [[unlikely]] return; }
L_0029958C:
    st32((c.r[17].w[0] + 544u), 0u);
    st32((c.r[17].w[0] + 548u), 0u);
    st32((c.r[17].w[0] + 552u), 0u);
    st32((c.r[17].w[0] + 556u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002995B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002995B0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002995B0u) [[unlikely]] return; }
L_002995B0:
    st32((c.r[17].w[0] + 428u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002995B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002995C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 132u, depth + 1u); else { c.pc = 0x0020D290u; return; } if (c.pc != 0x002995C0u) [[unlikely]] return; }
L_002995C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002995DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002995D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002995D8u) [[unlikely]] return; }
L_002995D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002995DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002995F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 344u));
    c.f[0] = ld32((c.r[4].w[0] + 356u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_00299628; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00299628:
    c.f[0] = ld32((c.r[18].w[0] + 412u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[18].w[0] + 428u)));  goto L_002996B4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_00299664; }
L_00299664:
    c.f[1] = ld32((c.r[18].w[0] + 412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 412u), c.f[1]);  if (t) { goto L_00299728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 412u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 420u));
    set32(c.r[5], ld32((c.r[18].w[0] + 416u)));
    c.f[0] = ld32((c.r[18].w[0] + 424u));
    set32(c.r[7], 0u - 1u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002996ACu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002996ACu) [[unlikely]] return; }
L_002996AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 400u)));  if (t) { goto L_0029972C; } }
L_002996B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00299728; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00299728; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 436u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 436u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 432u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0] + 436u), 0u);  goto L_0029970C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 428u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299704u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x00299704u) [[unlikely]] return; }
L_00299704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299728; } }
L_0029970C:
    st32((c.r[18].w[0] + 432u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00299728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299724u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00299724u) [[unlikely]] return; }
L_00299724:
    st32((c.r[18].w[0] + 428u), 0u);
    c.budget -= 1;
L_00299728:
    set32(c.r[3], ld32((c.r[18].w[0] + 400u)));
    c.budget -= 1;
L_0029972C:
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 392u)));  goto L_00299764; }
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00299760; } }
    c.f[1] = ld32((c.r[18].w[0] + 408u));
    c.f[0] = ld32((c.r[18].w[0] + 344u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[17].d[0] = 0ull + 0ull;  goto L_00299770; }
L_00299760:
    set32(c.r[2], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 1;
L_00299764:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[18].w[0] + 392u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00299770:
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_00299774:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 440u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029978Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x0029978Cu) [[unlikely]] return; }
L_0029978C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00299844; }
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 4u), c.f[1]);  if (t) { goto L_002997D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002997D4; }
L_002997D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002997D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[19].w[0] + 16u));  goto L_002997E8; }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[19].w[0] + 20u));  if (t) { goto L_00299804; } }
L_002997E8:
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 7;
L_00299804:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[18].w[0] + 212u), c.f[0]);  goto L_00299824; }
    st32((c.r[18].w[0] + 208u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00299834; } }
L_00299824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 4;
L_00299834:
    set32(c.r[2], ld32((c.r[18].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[18].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_00299844:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299774u | kUnwind; return; } goto L_00299774; }
    set32(c.r[19], c.r[18].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029985Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x0029985Cu) [[unlikely]] return; }
L_0029985C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[18].w[0] + 512u);  goto L_002998F8; }
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 4u), c.f[1]);  if (t) { goto L_002998A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002998A4; }
L_002998A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002998A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 16u)));  goto L_002998B8; }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_002998D4; } }
L_002998B8:
    c.f[20] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002998C8u); set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002998C8u) [[unlikely]] return; }
L_002998C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002998D0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002998D0u) [[unlikely]] return; }
L_002998D0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002998D4:
    st32((c.r[18].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[18].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[17], c.r[18].w[0] + 512u);
    c.budget -= 9;
L_002998F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299900u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x00299900u) [[unlikely]] return; }
L_00299900:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 392u)));  goto L_00299974; }
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4u), c.f[1]);  if (t) { goto L_00299944; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_00299948; }
L_00299944:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00299948:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_0029995C; }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0029996C; } }
L_0029995C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299968u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x00299968u) [[unlikely]] return; }
L_00299968:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029996C:
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 2;
L_00299974:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 292u)));  goto L_002999B0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002999AC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 392u)));
    set32(c.r[4], 0u - 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 392u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 9;
L_002999AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 1;
L_002999B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 404u)));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 292u)));  goto L_00299AF8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 536u)));  if (t) { goto L_00299A24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002999F0; } }
L_002999D4:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 384u)));  goto L_002999F0; }
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 384u)));
    c.budget -= 4;
L_002999F0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002999D4u | kUnwind; return; } goto L_002999D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 544u)));  if (t) { goto L_00299A30; } }
L_00299A00:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 384u)));  goto L_00299A24; }
    set32(c.r[4], ld32((c.r[6].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 384u)));
    c.budget -= 6;
L_00299A24:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299A00u | kUnwind; return; } goto L_00299A00; }
    set32(c.r[6], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 1;
L_00299A30:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00299A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_00299A5C; } }
L_00299A40:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 160u)));  goto L_00299A5C; }
    set32(c.r[3], ld32((c.r[6].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 160u)));
    c.budget -= 4;
L_00299A5C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299A40u | kUnwind; return; } goto L_00299A40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 552u)));  if (t) { goto L_00299A94; } }
L_00299A6C:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 160u)));  goto L_00299A88; }
    set32(c.r[3], ld32((c.r[6].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 160u)));
    c.budget -= 4;
L_00299A88:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299A6Cu | kUnwind; return; } goto L_00299A6C; }
    set32(c.r[6], ld32((c.r[18].w[0] + 552u)));
    c.budget -= 1;
L_00299A94:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00299AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_00299AC0; } }
L_00299AA4:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 20u)));  goto L_00299AC0; }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 4;
L_00299AC0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299AA4u | kUnwind; return; } goto L_00299AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299AF4; } }
L_00299AD0:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 20u)));  goto L_00299AEC; }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 4;
L_00299AEC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299AD0u | kUnwind; return; } goto L_00299AD0; }
L_00299AF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 1;
L_00299AF8:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 552u)));  goto L_00299BC0; }
    c.f[1] = ld32((c.r[18].w[0] + 344u));
    c.f[0] = ld32((c.r[18].w[0] + 356u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00299B20; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00299B20:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 536u)));  goto L_00299B54; }
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00299BA8; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299B54; } }
L_00299B44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 187u, depth + 1u); else { c.pc = 0x00299F20u; return; } if (c.pc != 0x00299B50u) [[unlikely]] return; }
L_00299B50:
    set32(c.r[16], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 1;
L_00299B54:
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299B44u | kUnwind; return; } goto L_00299B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 552u)));  if (t) { goto L_00299B74; } }
L_00299B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 352u, depth + 1u); else { c.pc = 0x002BFCC0u; return; } if (c.pc != 0x00299B70u) [[unlikely]] return; }
L_00299B70:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00299B74:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299B68u | kUnwind; return; } goto L_00299B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 544u)));  if (t) { goto L_00299B98; } }
L_00299B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 108u, depth + 1u); else { c.pc = 0x00298FD0u; return; } if (c.pc != 0x00299B94u) [[unlikely]] return; }
L_00299B94:
    set32(c.r[16], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_00299B98:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299B8Cu | kUnwind; return; } goto L_00299B8C; } }
L_00299BA8:
    set32(c.r[16], ld32((c.r[18].w[0] + 552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299BC0; } }
L_00299BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 335u, depth + 1u); else { c.pc = 0x002BFA50u; return; } if (c.pc != 0x00299BBCu) [[unlikely]] return; }
L_00299BBC:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00299BC0:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299BB4u | kUnwind; return; } goto L_00299BB4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[3], 0u - 2u);
    st32((c.r[18].w[0] + 400u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st32((c.r[18].w[0] + 404u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 344u));
    st32((c.r[18].w[0] + 408u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 392u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00299C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00299C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00299D0C; } }
L_00299C4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 576u));  goto L_00299C64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00299D0C; } }
L_00299C64:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 580u));  goto L_00299CB8; }
    c.f[20] = ld32((c.r[16].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_00299D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299C94u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x00299C94u) [[unlikely]] return; }
L_00299C94:
    c.f[1] = ld32((c.r[16].w[0] + 576u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00299CB4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299D0C; } }
L_00299CB4:
    c.f[0] = ld32((c.r[16].w[0] + 580u));
    c.budget -= 1;
L_00299CB8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00299D0C; }
    c.f[20] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_00299D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299CE8u);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x00299CE8u) [[unlikely]] return; }
L_00299CE8:
    c.f[1] = ld32((c.r[16].w[0] + 580u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00299D08; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299D0C; } }
L_00299D08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00299D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00299D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D48u); st32((c.r[4].w[0] + 392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005E(c, 168u, depth + 1u); else { c.pc = 0x00299C20u; return; } if (c.pc != 0x00299D48u) [[unlikely]] return; }
L_00299D48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00299D58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00299DAC; } }
L_00299D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D60u);  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x00299D60u) [[unlikely]] return; }
L_00299D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 552u)));  if (t) { goto L_00299D74; } }
L_00299D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 338u, depth + 1u); else { c.pc = 0x002BFAD0u; return; } if (c.pc != 0x00299D70u) [[unlikely]] return; }
L_00299D70:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00299D74:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299D68u | kUnwind; return; } goto L_00299D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 544u)));  if (t) { goto L_00299D98; } }
L_00299D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 115u, depth + 1u); else { c.pc = 0x002990B0u; return; } if (c.pc != 0x00299D94u) [[unlikely]] return; }
L_00299D94:
    set32(c.r[16], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_00299D98:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299D8Cu | kUnwind; return; } goto L_00299D8C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00299DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00299DC0:
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[3], 0u - 8193u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[6].w[0] + 80u));  goto L_00299DF8; }
    c.f[0] = 0u;
    c.budget -= 1;
L_00299DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 348u), c.f[0]);  c.pc = t; return; }
L_00299E00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E24u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 219u, depth + 1u); else { c.pc = 0x0029A5A0u; return; } if (c.pc != 0x00299E24u) [[unlikely]] return; }
L_00299E24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00299E48; }
    st32((c.r[17].w[0] + 560u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E44u); st32((c.r[17].w[0] + 396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005E(c, 222u, depth + 1u); else { c.pc = 0x0029A600u; return; } if (c.pc != 0x00299E44u) [[unlikely]] return; }
L_00299E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00299E48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00299E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 219u, depth + 1u); else { c.pc = 0x0029A5A0u; return; } if (c.pc != 0x00299E7Cu) [[unlikely]] return; }
L_00299E7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00299E9C; }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 396u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 222u, depth + 1u); else { c.pc = 0x0029A600u; return; } if (c.pc != 0x00299E98u) [[unlikely]] return; }
L_00299E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00299E9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00299EB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00299F18; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00299F18; } }
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 384u)));  goto L_00299F10; }
    set32(c.r[3], ld32((c.r[6].w[0] + 384u)));
    st32((c.r[4].w[0] + 536u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 540u), c.r[3].w[0]);  if (t) { goto L_00299F18; } }
L_00299EE4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[3].d[0] + 0ull;  goto L_00299F04; }
    set32(c.r[3], ld32((c.r[3].w[0] + 384u)));
    st32((c.r[6].w[0] + 384u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 540u), c.r[3].w[0]);  if (t) { goto L_00299F18; } }
L_00299F04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00299F18; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 384u)));
    c.budget -= 1;
L_00299F10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299EE4u | kUnwind; return; } goto L_00299EE4; } }
L_00299F18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299F20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029A074; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_00299F5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0029A098; } }
L_00299F5C:
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299F68u) [[unlikely]] return; }
L_00299F68:
    set32(c.r[5], ld32((c.r[18].w[0] + 560u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x00299F74u) [[unlikely]] return; }
L_00299F74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x00299F84u) [[unlikely]] return; }
L_00299F84:
    set32(c.r[5], c.r[17].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F94u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00299F94u) [[unlikely]] return; }
L_00299F94:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299FA0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00299FA0u) [[unlikely]] return; }
L_00299FA0:
    c.f[1] = ld32((c.r[18].w[0] + 584u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[18].w[0] + 588u));  goto L_00299FDC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 240u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 292u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 588u));
    c.budget -= 9;
L_00299FDC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[18].w[0] + 392u)));  goto L_0029A014; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 244u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 9;
L_0029A014:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 392u)));  goto L_0029A058; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[4], 0u - c.r[4].w[0]);
    st32((c.r[18].w[0] + 264u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 14;
L_0029A058:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 568u));  goto L_0029A0AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0029A0A8; } }
L_0029A074:
    c.f[2] = ld32((c.r[17].w[0] + 216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.f[2]);  if (t) { goto L_0029A0A8; } }
L_0029A098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A0A0u); set32(c.r[4], c.r[4].w[0] + 5744u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0029A0A0u) [[unlikely]] return; }
L_0029A0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0029A0F4; } }
L_0029A0A8:
    c.f[1] = ld32((c.r[18].w[0] + 568u));
    c.budget -= 1;
L_0029A0AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 292u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 572u));
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0] + 392u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 18;
L_0029A0F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0029A110:
    st32((c.r[4].w[0] + 536u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 540u), 0u);  c.pc = t; return; }
L_0029A120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029A19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 544u)));  if (t) { goto L_0029A160; } }
L_0029A148:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 160u)));  goto L_0029A160; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A15Cu); set32(c.r[4], c.r[4].w[0] + 5792u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0029A15Cu) [[unlikely]] return; }
L_0029A15C:
    set32(c.r[17], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_0029A160:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A148u | kUnwind; return; } goto L_0029A148; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 544u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 544u), c.r[18].w[0]);  goto L_0029A180; }
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 544u), c.r[18].w[0]);  if (t) { goto L_0029A184; } }
L_0029A180:
    st32((c.r[18].w[0] + 160u), 0u);
    c.budget -= 1;
L_0029A184:
    set32(c.r[3], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 548u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 6;
L_0029A19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029A1C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029A248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 552u)));  if (t) { goto L_0029A208; } }
L_0029A1F0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[19].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 20u)));  goto L_0029A208; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A204u); set32(c.r[4], c.r[4].w[0] + 5856u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0029A204u) [[unlikely]] return; }
L_0029A204:
    set32(c.r[17], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0029A208:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A1F0u | kUnwind; return; } goto L_0029A1F0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; st32((c.r[19].w[0] + 104u), c.r[16].w[0]);  if (t) { goto L_0029A220; } }
    st32((c.r[19].w[0] + 108u), c.r[18].w[0]);
    c.budget -= 1;
L_0029A220:
    set32(c.r[3], ld32((c.r[16].w[0] + 552u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 552u), c.r[19].w[0]);  goto L_0029A238; }
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 552u), c.r[19].w[0]);  if (t) { goto L_0029A23C; } }
L_0029A238:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 1;
L_0029A23C:
    set32(c.r[3], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 556u), c.r[3].w[0]);
    c.budget -= 3;
L_0029A248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029A270:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 17;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.f[20] = c.f[13];  if (t) { goto L_0029A31C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A2C4u) [[unlikely]] return; }
L_0029A2C4:
    set32(c.r[19], c.r[18].w[0] + 96u);
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 292u)));  goto L_0029A320; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x0029A2DCu) [[unlikely]] return; }
L_0029A2DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2E8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x0029A2E8u) [[unlikely]] return; }
L_0029A2E8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2F8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0029A2F8u) [[unlikely]] return; }
L_0029A2F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A304u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x0029A304u) [[unlikely]] return; }
L_0029A304:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 6;
L_0029A31C:
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 1;
L_0029A320:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A334u); st32((c.r[18].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x0029A334u) [[unlikely]] return; }
L_0029A334:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 360u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A34Cu); st16((c.r[18].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x0029A34Cu) [[unlikely]] return; }
L_0029A34C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 392u)));  goto L_0029A368; }
    st32((c.r[18].w[0] + 356u), c.f[20]);
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 2;
L_0029A368:
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 392u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 392u), c.r[3].w[0]);  if (t) { goto L_0029A38C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[18].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 3;
L_0029A38C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[18].w[0] + 412u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0029A3C0:
    c.f[0] = fp::cvt_w_s(c.f[13]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[14]);
    st32((c.r[4].w[0] + 412u), c.f[12]);
    st32((c.r[4].w[0] + 416u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 420u), c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 424u), c.r[3].w[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[4].w[0] + 412u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], ld32((c.r[4].w[0] + 392u)));  goto L_0029A400; }
    st32((c.r[4].w[0] + 412u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 2;
L_0029A400:
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 392u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 392u), c.r[3].w[0]);  if (t) { goto L_0029A424; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 3;
L_0029A424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029A4E8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0029A468; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0029A4EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0029A468:
    st32((c.r[16].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 432u), c.r[17].w[0]);  goto L_0029A488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A480u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0029A480u) [[unlikely]] return; }
L_0029A480:
    st32((c.r[16].w[0] + 428u), 0u);
    st32((c.r[16].w[0] + 432u), c.r[17].w[0]);
    c.budget -= 2;
L_0029A488:
    st32((c.r[16].w[0] + 436u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A498u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0029A498u) [[unlikely]] return; }
L_0029A498:
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A4B0u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0029A4B0u) [[unlikely]] return; }
L_0029A4B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A4D0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x0029A4D0u) [[unlikely]] return; }
L_0029A4D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 392u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 6;
L_0029A4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0029A4EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029A500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 428u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0029A53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A538u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0029A538u) [[unlikely]] return; }
L_0029A538:
    st32((c.r[16].w[0] + 428u), 0u);
    c.budget -= 1;
L_0029A53C:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A554u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x0029A554u) [[unlikely]] return; }
L_0029A554:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 360u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A56Cu); st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x0029A56Cu) [[unlikely]] return; }
L_0029A56C:
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 392u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 392u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029A5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0029A5B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029A5EC; } }
L_0029A5B4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 536u)));  goto L_0029A5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029A5EC; } }
L_0029A5C4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 384u)));  goto L_0029A5E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A5D8u); set32(c.r[4], c.r[4].w[0] + 5920u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0029A5D8u) [[unlikely]] return; }
L_0029A5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029A5EC; } }
L_0029A5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A5C4u | kUnwind; return; } goto L_0029A5C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029A5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029A600:
    set32(c.r[3], ld32((c.r[4].w[0] + 536u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 536u), c.r[5].w[0]);  goto L_0029A618; }
    st32((c.r[5].w[0] + 384u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 536u), c.r[5].w[0]);  if (t) { goto L_0029A61C; } }
L_0029A618:
    st32((c.r[5].w[0] + 384u), 0u);
    c.budget -= 1;
L_0029A61C:
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 540u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 392u), c.r[3].w[0]);  c.pc = t; return; }
L_0029A640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A65Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0029A65Cu) [[unlikely]] return; }
L_0029A65C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A668u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x0029A668u) [[unlikely]] return; }
L_0029A668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24384u);
    set32(c.r[3], c.r[3].w[0] + 24440u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x59530000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A69Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029A69Cu) [[unlikely]] return; }
L_0029A69C:
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A6ACu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0029A6ACu) [[unlikely]] return; }
L_0029A6AC:
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 128u), 0u);
    st32((c.r[17].w[0] + 132u), 0u);
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A6E8u); st32((c.r[17].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0029A6E8u) [[unlikely]] return; }
L_0029A6E8:
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[5], c.r[17].w[0] + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A6F8u); set32(c.r[6], c.r[17].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0015C530u; return; } if (c.pc != 0x0029A6F8u) [[unlikely]] return; }
L_0029A6F8:
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 5984u);
    st32((c.r[17].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 172u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A714u); st32((c.r[17].w[0] + 180u), c.f[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029A714u) [[unlikely]] return; }
L_0029A714:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029A730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029A794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 24384u);
    set32(c.r[2], c.r[2].w[0] + 24440u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A770u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0029A770u) [[unlikely]] return; }
L_0029A770:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A77Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0029A77Cu) [[unlikely]] return; }
L_0029A77C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0029A798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A794u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0029A794u) [[unlikely]] return; }
L_0029A794:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029A798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029A7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A7C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 271u, depth + 1u); else { c.pc = 0x0029ADD0u; return; } if (c.pc != 0x0029A7C4u) [[unlikely]] return; }
L_0029A7C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A7D0u); set32(c.r[4], c.r[4].w[0] + 6032u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029A7D0u) [[unlikely]] return; }
L_0029A7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029A7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 10;
L_0029A818:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x0029A830u) [[unlikely]] return; }
L_0029A830:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0029A930; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 8u));  goto L_0029A8B8; }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_0029A87C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029A880; }
L_0029A87C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0029A880:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 16u));  goto L_0029A894; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_0029A8B0; } }
L_0029A894:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 7;
L_0029A8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 176u), c.f[0]);  if (t) { goto L_0029A928; } }
L_0029A8B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_0029A8F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029A8F4; }
L_0029A8F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0029A8F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 16u));  goto L_0029A908; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_0029A924; } }
L_0029A908:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 7;
L_0029A924:
    st32((c.r[19].w[0] + 180u), c.f[0]);
    c.budget -= 1;
L_0029A928:
    set32(c.r[18], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0029A930:
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A818u | kUnwind; return; } goto L_0029A818; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0029A960; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A94Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0029A94Cu) [[unlikely]] return; }
L_0029A94C:
    c.f[12] = ld32((c.r[19].w[0] + 176u));
    c.f[13] = ld32((c.r[19].w[0] + 180u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A95Cu); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0015C520u; return; } if (c.pc != 0x0029A95Cu) [[unlikely]] return; }
L_0029A95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0029A960:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029A980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 11u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 104u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029A9D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A9B8u); set32(c.r[4], c.r[4].w[0] + 6064u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0029A9B8u) [[unlikely]] return; }
L_0029A9B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0029AC3C; } }
L_0029A9D0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0029A9D8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 72u);  if (t) { goto L_0029A9FC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A9F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A9F8u) [[unlikely]] return; }
L_0029A9F8:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0029A9FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A9D8u | kUnwind; return; } goto L_0029A9D8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 92u);  goto L_0029AA30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AA28u) [[unlikely]] return; }
L_0029AA28:
    st32((c.r[18].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 92u);
    c.budget -= 2;
L_0029AA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA38u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029AA38u) [[unlikely]] return; }
L_0029AA38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  goto L_0029AA88; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0029AA5C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0])));  goto L_0029AA5C; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AA5C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0029AA78; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 4u)));  goto L_0029AA78; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AA78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 2u, depth + 1u); else { c.pc = 0x002A0010u; return; } if (c.pc != 0x0029AA84u) [[unlikely]] return; }
L_0029AA84:
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_0029AA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA90u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029AA90u) [[unlikely]] return; }
L_0029AA90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  goto L_0029AAE4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0029AAB8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  goto L_0029AAB8; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AAB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0029AAD4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 12u)));  goto L_0029AAD4; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AAD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AAE0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 2u, depth + 1u); else { c.pc = 0x002A0010u; return; } if (c.pc != 0x0029AAE0u) [[unlikely]] return; }
L_0029AAE0:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0029AAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AAECu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0029AAECu) [[unlikely]] return; }
L_0029AAEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 116u), c.r[2].w[0]);  goto L_0029AB24; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029AB14; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 16u)));  goto L_0029AB14; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AB14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x0029AB20u) [[unlikely]] return; }
L_0029AB20:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_0029AB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB2Cu); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029AB2Cu) [[unlikely]] return; }
L_0029AB2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  goto L_0029AB80; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0029AB54; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 20u)));  goto L_0029AB54; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AB54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0029AB70; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 24u)));  goto L_0029AB70; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AB70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 2u, depth + 1u); else { c.pc = 0x002A0010u; return; } if (c.pc != 0x0029AB7Cu) [[unlikely]] return; }
L_0029AB7C:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_0029AB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB88u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029AB88u) [[unlikely]] return; }
L_0029AB88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  goto L_0029ABDC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0029ABB0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  goto L_0029ABB0; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029ABB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0029ABCC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 32u)));  goto L_0029ABCC; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029ABCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ABD8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 2u, depth + 1u); else { c.pc = 0x002A0010u; return; } if (c.pc != 0x0029ABD8u) [[unlikely]] return; }
L_0029ABD8:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_0029ABDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ABE4u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029ABE4u) [[unlikely]] return; }
L_0029ABE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  goto L_0029AC38; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0029AC0C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 36u)));  goto L_0029AC0C; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AC0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0029AC28; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 40u)));  goto L_0029AC28; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AC28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AC34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 2u, depth + 1u); else { c.pc = 0x002A0010u; return; } if (c.pc != 0x0029AC34u) [[unlikely]] return; }
L_0029AC34:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0029AC38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029AC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029AC60:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0029ACAC; } }
L_0029AC70:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[2].w[0] + 4u)));  goto L_0029AC88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029ACBC; } }
L_0029AC88:
    c.r[2].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];  goto L_0029AC9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029ACBC; } }
L_0029AC9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0029ACAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029ACBC; } }
L_0029ACAC:
    c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AC70u | kUnwind; return; } goto L_0029AC70; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029ACBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029ACD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ACF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 268u, depth + 1u); else { c.pc = 0x0029AD70u; return; } if (c.pc != 0x0029ACF4u) [[unlikely]] return; }
L_0029ACF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD0Cu); set32(c.r[18], c.r[18].w[0] + 6168u);  if (depth < kMaxDepth) unit_005C(c, 52u, depth + 1u); else { c.pc = 0x00290940u; return; } if (c.pc != 0x0029AD0Cu) [[unlikely]] return; }
L_0029AD0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD18u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029AD18u) [[unlikely]] return; }
L_0029AD18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  goto L_0029AD38; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD34u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 374u, depth + 1u); else { c.pc = 0x0029FF60u; return; } if (c.pc != 0x0029AD34u) [[unlikely]] return; }
L_0029AD34:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0029AD38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD50u); st32((c.r[3].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029AD50u) [[unlikely]] return; }
L_0029AD50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029AD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + 92u);
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0029ADA4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ADA0u); set32(c.r[4], c.r[4].w[0] + 6256u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029ADA0u) [[unlikely]] return; }
L_0029ADA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0029ADA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0029ADC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ADBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029ADBCu) [[unlikely]] return; }
L_0029ADBC:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0029ADC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029ADD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 8;
L_0029ADF0:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 72u);  if (t) { goto L_0029AE14; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AE10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AE10u) [[unlikely]] return; }
L_0029AE10:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0029AE14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029ADF0u | kUnwind; return; } goto L_0029ADF0; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0029AE2C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 92u);  if (t) { goto L_0029AE50; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AE4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AE4Cu) [[unlikely]] return; }
L_0029AE4C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0029AE50:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 2;
L_0029AE58:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AE2Cu | kUnwind; return; } goto L_0029AE2C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0029AE84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AE7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AE7Cu) [[unlikely]] return; }
L_0029AE7C:
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0029AE84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029AEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029AEBC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 1;
L_0029AEBC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029AEE0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029AED4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 2;
L_0029AED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AEDCu);  if (depth < kMaxDepth) unit_005E(c, 262u, depth + 1u); else { c.pc = 0x0029ACD0u; return; } if (c.pc != 0x0029AEDCu) [[unlikely]] return; }
L_0029AEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029AEE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029AEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029AF0C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 1;
L_0029AF0C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029AF30; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029AF24; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 2;
L_0029AF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF2Cu);  if (depth < kMaxDepth) unit_005E(c, 268u, depth + 1u); else { c.pc = 0x0029AD70u; return; } if (c.pc != 0x0029AF2Cu) [[unlikely]] return; }
L_0029AF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029AF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029AF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029AF5C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 1;
L_0029AF5C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0029AF94; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 2;
L_0029AF6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0029AF78; }
    set32(c.r[4], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 1;
L_0029AF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 268u, depth + 1u); else { c.pc = 0x0029AD70u; return; } if (c.pc != 0x0029AF80u) [[unlikely]] return; }
L_0029AF80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AF6Cu | kUnwind; return; } goto L_0029AF6C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0029AF94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029AFA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029AFB0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 1;
L_0029AFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029AFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029B008; } }
L_0029AFC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029AFD0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 2;
L_0029AFD0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_0029AFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029B008; } }
L_0029AFEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0029B004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029B008; } }
L_0029B004:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0029B008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B010:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029B020; }
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 1;
L_0029B020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029B030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029B04C; } }
L_0029B030:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029B040; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 2;
L_0029B040:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
L_0029B04C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B060:
    set32(c.r[7], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029B070; }
    set32(c.r[3], ld32((c.r[7].w[0] + 140u)));
    c.budget -= 1;
L_0029B070:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029B1B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 2408u);  if (t) { goto L_0029B0B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0029B0B4; } }
L_0029B0B0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B0B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029B0C0; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0029B0C0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[6].w[0] + 12u));  goto L_0029B140; }
    c.f[2] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.f[1] = ld32((c.r[6].w[0] + 4u));  if (t) { goto L_0029B0E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 140u)));  if (t) { goto L_0029B0E4; } }
L_0029B0E0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B0E4:
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[5].w[0] + 120u), 0u);
    st32((c.r[5].w[0] + 124u), 0u);
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 136u), c.f[0]);
    st32((c.r[5].w[0] + 140u), c.f[2]);
    st32((c.r[5].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 132u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 156u), 0u);
    st32((c.r[5].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    st32((c.r[5].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 156u), 0u);  if (t) { goto L_0029B1B0; } }
L_0029B140:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.f[2] = ld32((c.r[6].w[0] + 8u));  if (t) { goto L_0029B154; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 140u)));  if (t) { goto L_0029B158; } }
L_0029B154:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B158:
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[5].w[0] + 120u), 0u);
    st32((c.r[5].w[0] + 124u), 0u);
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 136u), c.f[0]);
    st32((c.r[5].w[0] + 140u), c.f[2]);
    st32((c.r[5].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 132u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 156u), 0u);
    st32((c.r[5].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    st32((c.r[5].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 156u), 0u);
    c.budget -= 22;
L_0029B1B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B1C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029B1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 140u)));  if (t) { goto L_0029B1EC; } }
L_0029B1E8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B1EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0029B4E4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B208u); set32(c.r[16], c.r[2].w[0] + 2408u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0029B208u) [[unlikely]] return; }
L_0029B208:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0029B2AC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029B2A8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0029B234; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B4E0; } }
L_0029B234:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_0029B248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 140u)));  if (t) { goto L_0029B24C; } }
L_0029B248:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B24C:
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[5].w[0] + 120u), 0u);
    st32((c.r[5].w[0] + 124u), 0u);
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 136u), c.f[0]);
    st32((c.r[5].w[0] + 140u), c.f[2]);
    st32((c.r[5].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 132u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 156u), 0u);
    st32((c.r[5].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    st32((c.r[5].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 156u), 0u);  if (t) { goto L_0029B4E0; } }
L_0029B2A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029B2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B2B4u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0029B2B4u) [[unlikely]] return; }
L_0029B2B4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0029B3BC; }
    c.f[0] = ld32((c.r[17].w[0] + 1272u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1264u));
    c.f[1] = ld32((c.r[17].w[0] + 1268u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1276u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B300u); st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0029B300u) [[unlikely]] return; }
L_0029B300:
    set32(c.r[5], c.r[2].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B30Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x0029B30Cu) [[unlikely]] return; }
L_0029B30C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B31Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0029B31Cu) [[unlikely]] return; }
L_0029B31C:
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B328u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x0029B328u) [[unlikely]] return; }
L_0029B328:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B334u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0029B334u) [[unlikely]] return; }
L_0029B334:
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B340u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0029B340u) [[unlikely]] return; }
L_0029B340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], 0u - c.r[18].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;  goto L_0029B390; }
    c.r[2].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029B3D4; }
    c.r[1].d[0] = c.r[3].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029B384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0029B3D4; } }
L_0029B384:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B3D4; } }
L_0029B390:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -89ll ? 1ull : 0ull;  goto L_0029B3A8; }
    c.r[2].d[0] = c.r[3].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029B3D4; }
    c.r[1].d[0] = c.r[3].sd[0] < -89ll ? 1ull : 0ull;
    c.budget -= 1;
L_0029B3A8:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029B3D4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B3D4; } }
L_0029B3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B3C4u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0029B3C4u) [[unlikely]] return; }
L_0029B3C4:
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029B3D4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B3D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0029B464; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[16].w[0] + 36u));  if (t) { goto L_0029B3F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 140u)));  if (t) { goto L_0029B3F8; } }
L_0029B3F4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B3F8:
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 6320u);
    st32((c.r[5].w[0] + 120u), 0u);
    st32((c.r[5].w[0] + 124u), 0u);
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 136u), c.f[0]);
    st32((c.r[5].w[0] + 140u), c.f[2]);
    st32((c.r[5].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 132u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 156u), 0u);
    st32((c.r[5].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    st32((c.r[5].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B45Cu); st32((c.r[5].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B45Cu) [[unlikely]] return; }
L_0029B45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B4E0; } }
L_0029B464:
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[16].w[0] + 28u));  if (t) { goto L_0029B478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 140u)));  if (t) { goto L_0029B47C; } }
L_0029B478:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B47C:
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 6384u);
    st32((c.r[5].w[0] + 120u), 0u);
    st32((c.r[5].w[0] + 124u), 0u);
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 136u), c.f[0]);
    st32((c.r[5].w[0] + 140u), c.f[2]);
    st32((c.r[5].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 132u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 156u), 0u);
    st32((c.r[5].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    st32((c.r[5].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4E0u); st32((c.r[5].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B4E0u) [[unlikely]] return; }
L_0029B4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0029B4E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0029B500:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029B510; }
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 1;
L_0029B510:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029B588; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0029B528; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 2;
L_0029B528:
    c.f[1] = ld32((c.r[5].w[0] + 168u));
    set32(c.r[4], 0u + 1u);
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[5].w[0] + 120u), 0u);
    st32((c.r[5].w[0] + 124u), 0u);
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 136u), c.f[0]);
    st32((c.r[5].w[0] + 140u), c.f[1]);
    st32((c.r[5].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 132u), 0u);
    c.f[1] = ld32((c.r[5].w[0] + 172u));
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 156u), 0u);
    st32((c.r[5].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    st32((c.r[5].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 156u), 0u);
    c.budget -= 24;
L_0029B588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B590:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A730u | kUnwind; return; } goto L_0029A730; }
L_0029B5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B5C4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x0029B5C4u) [[unlikely]] return; }
L_0029B5C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24464u);
    set32(c.r[3], c.r[3].w[0] + 24520u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16864u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0029B618; } }
L_0029B604:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 5;
L_0029B618:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B604u | kUnwind; return; } goto L_0029B604; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17024u);  if (t) { goto L_0029B648; } }
L_0029B634:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0029B648:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B634u | kUnwind; return; } goto L_0029B634; }
    st32((c.r[18].w[0] + 480u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 484u), 0u);
    st32((c.r[18].w[0] + 488u), 0u);
    c.budget -= 4;
L_0029B664:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 492u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B664u | kUnwind; return; } goto L_0029B664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[18].w[0] + 600u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6448u);
    st32((c.r[18].w[0] + 608u), 0u);
    set32(c.r[4], 0u + 496u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[18].w[0] + 604u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 616u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B6C4u); st32((c.r[18].w[0] + 620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0029B6C4u) [[unlikely]] return; }
L_0029B6C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 624u), c.r[2].w[0]);  goto L_0029B6E0; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B6DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 21u, depth + 1u); else { c.pc = 0x002C04C0u; return; } if (c.pc != 0x0029B6DCu) [[unlikely]] return; }
L_0029B6DC:
    st32((c.r[18].w[0] + 624u), c.r[2].w[0]);
    c.budget -= 1;
L_0029B6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B6E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 443u, depth + 1u); else { c.pc = 0x00293FB0u; return; } if (c.pc != 0x0029B6E8u) [[unlikely]] return; }
L_0029B6E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B700u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 119u, depth + 1u); else { c.pc = 0x002ED6A0u; return; } if (c.pc != 0x0029B700u) [[unlikely]] return; }
L_0029B700:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B70Cu); set32(c.r[4], c.r[4].w[0] + 7440u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B70Cu) [[unlikely]] return; }
L_0029B70C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029B730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029B784; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 24464u);
    set32(c.r[2], c.r[2].w[0] + 24520u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B76Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x0029B76Cu) [[unlikely]] return; }
L_0029B76C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0029B788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0029B784u) [[unlikely]] return; }
L_0029B784:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029B788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029B7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B7BCu); set32(c.r[4], c.r[4].w[0] + 7488u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B7BCu) [[unlikely]] return; }
L_0029B7BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0029B7E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B7D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B7D8u) [[unlikely]] return; }
L_0029B7D8:
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_0029B7E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029B800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0029BE00; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0029B848; } }
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_0029B84C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0029B848:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0029B84C:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BDFC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B86Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0029B86Cu) [[unlikely]] return; }
L_0029B86C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0029BC2C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029BC28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00298000u < 16384u) { entry = entries_005E[(t - 0x00298000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029B8A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8B0u); set32(c.r[4], c.r[4].w[0] + 7536u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B8B0u) [[unlikely]] return; }
L_0029B8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 134u, depth + 1u); else { c.pc = 0x002E9A00u; return; } if (c.pc != 0x0029B8B8u) [[unlikely]] return; }
L_0029B8B8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 119u, depth + 1u); else { c.pc = 0x002ED6A0u; return; } if (c.pc != 0x0029B8C4u) [[unlikely]] return; }
L_0029B8C4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029BC28; } }
L_0029B8D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8DCu); set32(c.r[4], c.r[4].w[0] + 7584u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B8DCu) [[unlikely]] return; }
L_0029B8DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002EA450u; return; } if (c.pc != 0x0029B8E8u) [[unlikely]] return; }
L_0029B8E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002EA450u; return; } if (c.pc != 0x0029B8F4u) [[unlikely]] return; }
L_0029B8F4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B8F8:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 27ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 212u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 492u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B8F8u | kUnwind; return; } goto L_0029B8F8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029BC28; } }
L_0029B92C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B938u); set32(c.r[4], c.r[4].w[0] + 7632u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B938u) [[unlikely]] return; }
L_0029B938:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B954u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002EA450u; return; } if (c.pc != 0x0029B954u) [[unlikely]] return; }
L_0029B954:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B960u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002EA450u; return; } if (c.pc != 0x0029B960u) [[unlikely]] return; }
L_0029B960:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029BC28; } }
L_0029B96C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B978u); set32(c.r[4], c.r[4].w[0] + 7680u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B978u) [[unlikely]] return; }
L_0029B978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 149u, depth + 1u); else { c.pc = 0x002E9BC0u; return; } if (c.pc != 0x0029B980u) [[unlikely]] return; }
L_0029B980:
    set32(c.r[2], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 7728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B994u); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B994u) [[unlikely]] return; }
L_0029B994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BC28; } }
L_0029B99C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B9A8u); set32(c.r[4], c.r[4].w[0] + 7776u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029B9A8u) [[unlikely]] return; }
L_0029B9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B9B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 154u, depth + 1u); else { c.pc = 0x002E9C80u; return; } if (c.pc != 0x0029B9B0u) [[unlikely]] return; }
L_0029B9B0:
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_0029BC28; } }
L_0029B9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B9C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x0029B9C8u) [[unlikely]] return; }
L_0029B9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029BC28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029B9EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0029B9EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BC28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BC28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BA0Cu); set32(c.r[4], c.r[4].w[0] + 7824u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029BA0Cu) [[unlikely]] return; }
L_0029BA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BA14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 163u, depth + 1u); else { c.pc = 0x002E9DF0u; return; } if (c.pc != 0x0029BA14u) [[unlikely]] return; }
L_0029BA14:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BA24u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0029BA24u) [[unlikely]] return; }
L_0029BA24:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 9u);  goto L_0029BA48; }
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0029BC28; } }
L_0029BA48:
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_0029BC28; } }
L_0029BA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BA5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x0029BA5Cu) [[unlikely]] return; }
L_0029BA5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029BC28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BA70u); set32(c.r[4], c.r[4].w[0] + 7872u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0029BA70u) [[unlikely]] return; }
L_0029BA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BA78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 172u, depth + 1u); else { c.pc = 0x002E9EC0u; return; } if (c.pc != 0x0029BA78u) [[unlikely]] return; }
L_0029BA78:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0029BC28; } }
L_0029BA84:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_0029BAD0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BAB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 268u, depth + 1u); else { c.pc = 0x002EB600u; return; } if (c.pc != 0x0029BAB0u) [[unlikely]] return; }
L_0029BAB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BABCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x0029BABCu) [[unlikely]] return; }
L_0029BABC:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BAC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x0029BAC8u) [[unlikely]] return; }
L_0029BAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029BB54; } }
L_0029BAD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 4ull;  goto L_0029BB20; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BAF4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 268u, depth + 1u); else { c.pc = 0x002EB600u; return; } if (c.pc != 0x0029BAF4u) [[unlikely]] return; }
L_0029BAF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 47u, depth + 1u); else { c.pc = 0x002EC950u; return; } if (c.pc != 0x0029BB00u) [[unlikely]] return; }
L_0029BB00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x0029BB0Cu) [[unlikely]] return; }
L_0029BB0C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x0029BB18u) [[unlikely]] return; }
L_0029BB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BB50; } }
L_0029BB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029BB50; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB44u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 268u, depth + 1u); else { c.pc = 0x002EB600u; return; } if (c.pc != 0x0029BB44u) [[unlikely]] return; }
L_0029BB44:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x0029BB50u) [[unlikely]] return; }
L_0029BB50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029BB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB5Cu);  if (depth < kMaxDepth) unit_0072(c, 196u, depth + 1u); else { c.pc = 0x002EA340u; return; } if (c.pc != 0x0029BB5Cu) [[unlikely]] return; }
L_0029BB5C:
    c.f[1] = ld32((c.r[17].w[0] + 600u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0029BBE0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029BBDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x0029BB98u) [[unlikely]] return; }
L_0029BB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BBACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x0029BBACu) [[unlikely]] return; }
L_0029BBAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BBC0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x0029BBC0u) [[unlikely]] return; }
L_0029BBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BBD4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x0029BBD4u) [[unlikely]] return; }
L_0029BBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BC28; } }
L_0029BBDC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0029BBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_0029BC04; }
    c.f[2] = 0u;
    c.budget -= 1;
L_0029BC04:
    c.f[1] = ld32((c.r[17].w[0] + 600u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 600u), c.f[1]);  if (t) { goto L_0029BC28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 600u), c.r[3].w[0]);
    c.budget -= 2;
L_0029BC28:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0029BC2C:
    c.r[3].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BCD0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029BCD0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 480u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0029BC84; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0029BC64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BCD0; } }
L_0029BC64:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 76u, depth + 1u); else { c.pc = 0x002ECFC0u; return; } if (c.pc != 0x0029BC78u) [[unlikely]] return; }
L_0029BC78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 480u), c.r[3].w[0]);  if (t) { goto L_0029BCD0; } }
L_0029BC84:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BCD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 236u)));  goto L_0029BCA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029BCB0; } }
L_0029BCA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BCB0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0029BCB0u) [[unlikely]] return; }
L_0029BCB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BCBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 88u, depth + 1u); else { c.pc = 0x002ED190u; return; } if (c.pc != 0x0029BCBCu) [[unlikely]] return; }
L_0029BCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BCC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 118u, depth + 1u); else { c.pc = 0x002ED680u; return; } if (c.pc != 0x0029BCC4u) [[unlikely]] return; }
L_0029BCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BCCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 80u, depth + 1u); else { c.pc = 0x002ED080u; return; } if (c.pc != 0x0029BCCCu) [[unlikely]] return; }
L_0029BCCC:
    st32((c.r[17].w[0] + 480u), 0u);
    c.budget -= 1;
L_0029BCD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029BDEC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 608u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_0029BDA4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_0029BD3C; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 616u)));  goto L_0029BD20; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 616u)));  goto L_0029BD10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BDEC; } }
L_0029BD10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BDEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 608u), c.r[6].w[0]);  if (t) { goto L_0029BDEC; } }
L_0029BD20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BD30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 16u, depth + 1u); else { c.pc = 0x002EC250u; return; } if (c.pc != 0x0029BD30u) [[unlikely]] return; }
L_0029BD30:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 608u), c.r[3].w[0]);  if (t) { goto L_0029BDEC; } }
L_0029BD3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.f[1] = ld32((c.r[3].w[0] + 492u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_0029BD74; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029BD74; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0029BD74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BDEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 616u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BD98u); set32(c.r[5], 0u - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0073(c, 16u, depth + 1u); else { c.pc = 0x002EC250u; return; } if (c.pc != 0x0029BD98u) [[unlikely]] return; }
L_0029BD98:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 608u), c.r[3].w[0]);  if (t) { goto L_0029BDEC; } }
L_0029BDA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.f[1] = ld32((c.r[3].w[0] + 492u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_0029BDDC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029BDDC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0029BDDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BDEC; } }
    st32((c.r[17].w[0] + 616u), 0u);
    st32((c.r[17].w[0] + 608u), 0u);
    c.budget -= 2;
L_0029BDEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029BDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BDFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 33u, depth + 1u); else { c.pc = 0x002EC700u; return; } if (c.pc != 0x0029BDFCu) [[unlikely]] return; }
L_0029BDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0029BE00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029BE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029BE6C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0029BE4C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  goto L_0029BE50; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0029BE4C:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0029BE50:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BE68u);  if (depth < kMaxDepth) unit_005C(c, 387u, depth + 1u); else { c.pc = 0x002936F0u; return; } if (c.pc != 0x0029BE68u) [[unlikely]] return; }
L_0029BE68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029BE6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029BE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029BEDC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0029BEBC; } }
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  goto L_0029BEC0; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0029BEBC:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0029BEC0:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BED8u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x0029BED8u) [[unlikely]] return; }
L_0029BED8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029BEDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029BEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0029BF4C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0029BF2C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  goto L_0029BF30; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0029BF2C:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0029BF30:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF48u);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x0029BF48u) [[unlikely]] return; }
L_0029BF48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029BF4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029BF60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 27u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF84u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x0029BF84u) [[unlikely]] return; }
L_0029BF84:
    set32(c.r[6], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0029BFD8; } }
L_0029BF90:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 284u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 18;
L_0029BFD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BF90u | kUnwind; return; } goto L_0029BF90; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BFF4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 445u, depth + 1u); else { c.pc = 0x00293FF0u; return; } if (c.pc != 0x0029BFF4u) [[unlikely]] return; }
L_0029BFF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C000u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005D(c, 7u, depth + 1u); else { c.pc = 0x00294080u; return; } if (c.pc != 0x0029C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_005F(c, 1u, depth);
}

}
