#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AB[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 178,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 294, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
};

void unit_00AB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003CC000;
    case 2u: goto L_003CC044;
    case 3u: goto L_003CC06C;
    case 4u: goto L_003CC080;
    case 5u: goto L_003CC0CC;
    case 6u: goto L_003CC0D4;
    case 7u: goto L_003CC0F0;
    case 8u: goto L_003CC10C;
    case 9u: goto L_003CC138;
    case 10u: goto L_003CC154;
    case 11u: goto L_003CC170;
    case 12u: goto L_003CC18C;
    case 13u: goto L_003CC1B4;
    case 14u: goto L_003CC1D0;
    case 15u: goto L_003CC1EC;
    case 16u: goto L_003CC208;
    case 17u: goto L_003CC26C;
    case 18u: goto L_003CC290;
    case 19u: goto L_003CC2EC;
    case 20u: goto L_003CC30C;
    case 21u: goto L_003CC330;
    case 22u: goto L_003CC34C;
    case 23u: goto L_003CC37C;
    case 24u: goto L_003CC384;
    case 25u: goto L_003CC400;
    case 26u: goto L_003CC414;
    case 27u: goto L_003CC450;
    case 28u: goto L_003CC480;
    case 29u: goto L_003CC498;
    case 30u: goto L_003CC4B0;
    case 31u: goto L_003CC4D8;
    case 32u: goto L_003CC4F4;
    case 33u: goto L_003CC510;
    case 34u: goto L_003CC520;
    case 35u: goto L_003CC5B0;
    case 36u: goto L_003CC5CC;
    case 37u: goto L_003CC5F8;
    case 38u: goto L_003CC600;
    case 39u: goto L_003CC680;
    case 40u: goto L_003CC694;
    case 41u: goto L_003CC6C0;
    case 42u: goto L_003CC704;
    case 43u: goto L_003CC72C;
    case 44u: goto L_003CC740;
    case 45u: goto L_003CC754;
    case 46u: goto L_003CC7F0;
    case 47u: goto L_003CC81C;
    case 48u: goto L_003CC828;
    case 49u: goto L_003CC840;
    case 50u: goto L_003CC860;
    case 51u: goto L_003CC888;
    case 52u: goto L_003CC8A4;
    case 53u: goto L_003CC8C0;
    case 54u: goto L_003CC8D0;
    case 55u: goto L_003CC900;
    case 56u: goto L_003CC910;
    case 57u: goto L_003CC9A4;
    case 58u: goto L_003CC9B4;
    case 59u: goto L_003CC9C4;
    case 60u: goto L_003CC9D4;
    case 61u: goto L_003CC9E4;
    case 62u: goto L_003CC9F4;
    case 63u: goto L_003CCABC;
    case 64u: goto L_003CCAD8;
    case 65u: goto L_003CCAE8;
    case 66u: goto L_003CCB70;
    case 67u: goto L_003CCB8C;
    case 68u: goto L_003CCB9C;
    case 69u: goto L_003CCC4C;
    case 70u: goto L_003CCC68;
    case 71u: goto L_003CCC74;
    case 72u: goto L_003CCCE0;
    case 73u: goto L_003CCCFC;
    case 74u: goto L_003CCD08;
    case 75u: goto L_003CCD30;
    case 76u: goto L_003CCD6C;
    case 77u: goto L_003CCDA0;
    case 78u: goto L_003CCDE0;
    case 79u: goto L_003CCDF0;
    case 80u: goto L_003CCE10;
    case 81u: goto L_003CCE58;
    case 82u: goto L_003CCE60;
    case 83u: goto L_003CCE68;
    case 84u: goto L_003CCE90;
    case 85u: goto L_003CCE98;
    case 86u: goto L_003CCEB8;
    case 87u: goto L_003CCED0;
    case 88u: goto L_003CCF00;
    case 89u: goto L_003CCF10;
    case 90u: goto L_003CCF20;
    case 91u: goto L_003CCF50;
    case 92u: goto L_003CCF60;
    case 93u: goto L_003CCF70;
    case 94u: goto L_003CCFC4;
    case 95u: goto L_003CCFE4;
    case 96u: goto L_003CD020;
    case 97u: goto L_003CD048;
    case 98u: goto L_003CD090;
    case 99u: goto L_003CD0AC;
    case 100u: goto L_003CD0C0;
    case 101u: goto L_003CD108;
    case 102u: goto L_003CD118;
    case 103u: goto L_003CD13C;
    case 104u: goto L_003CD14C;
    case 105u: goto L_003CD158;
    case 106u: goto L_003CD164;
    case 107u: goto L_003CD180;
    case 108u: goto L_003CD1A8;
    case 109u: goto L_003CD1D4;
    case 110u: goto L_003CD258;
    case 111u: goto L_003CD274;
    case 112u: goto L_003CD284;
    case 113u: goto L_003CD294;
    case 114u: goto L_003CD2A8;
    case 115u: goto L_003CD2D8;
    case 116u: goto L_003CD2E8;
    case 117u: goto L_003CD2F4;
    case 118u: goto L_003CD310;
    case 119u: goto L_003CD374;
    case 120u: goto L_003CD390;
    case 121u: goto L_003CD3A4;
    case 122u: goto L_003CD3F4;
    case 123u: goto L_003CD410;
    case 124u: goto L_003CD494;
    case 125u: goto L_003CD4D0;
    case 126u: goto L_003CD4E0;
    case 127u: goto L_003CD504;
    case 128u: goto L_003CD548;
    case 129u: goto L_003CD580;
    case 130u: goto L_003CD658;
    case 131u: goto L_003CD668;
    case 132u: goto L_003CD760;
    case 133u: goto L_003CD76C;
    case 134u: goto L_003CD778;
    case 135u: goto L_003CD7C8;
    case 136u: goto L_003CD7D4;
    case 137u: goto L_003CD828;
    case 138u: goto L_003CD834;
    case 139u: goto L_003CD888;
    case 140u: goto L_003CD894;
    case 141u: goto L_003CD8E8;
    case 142u: goto L_003CD8F4;
    case 143u: goto L_003CD948;
    case 144u: goto L_003CD954;
    case 145u: goto L_003CDA94;
    case 146u: goto L_003CDAB0;
    case 147u: goto L_003CDAC4;
    case 148u: goto L_003CDB0C;
    case 149u: goto L_003CDB20;
    case 150u: goto L_003CDB28;
    case 151u: goto L_003CDB4C;
    case 152u: goto L_003CDB70;
    case 153u: goto L_003CDB78;
    case 154u: goto L_003CDB9C;
    case 155u: goto L_003CDBC0;
    case 156u: goto L_003CDBC8;
    case 157u: goto L_003CDC10;
    case 158u: goto L_003CDC38;
    case 159u: goto L_003CDC90;
    case 160u: goto L_003CDCC8;
    case 161u: goto L_003CDCF0;
    case 162u: goto L_003CDD04;
    case 163u: goto L_003CDDC8;
    case 164u: goto L_003CDDE0;
    case 165u: goto L_003CDE0C;
    case 166u: goto L_003CDE18;
    case 167u: goto L_003CDE30;
    case 168u: goto L_003CDE50;
    case 169u: goto L_003CDE78;
    case 170u: goto L_003CDE94;
    case 171u: goto L_003CDEB0;
    case 172u: goto L_003CDEC0;
    case 173u: goto L_003CDF24;
    case 174u: goto L_003CE104;
    case 175u: goto L_003CE114;
    case 176u: goto L_003CE13C;
    case 177u: goto L_003CE178;
    case 178u: goto L_003CE17C;
    case 179u: goto L_003CE18C;
    case 180u: goto L_003CE1B0;
    case 181u: goto L_003CE1C8;
    case 182u: goto L_003CE1D8;
    case 183u: goto L_003CE1F8;
    case 184u: goto L_003CE250;
    case 185u: goto L_003CE268;
    case 186u: goto L_003CE284;
    case 187u: goto L_003CE2A0;
    case 188u: goto L_003CE2B8;
    case 189u: goto L_003CE310;
    case 190u: goto L_003CE33C;
    case 191u: goto L_003CE380;
    case 192u: goto L_003CE3C0;
    case 193u: goto L_003CE3DC;
    case 194u: goto L_003CE414;
    case 195u: goto L_003CE42C;
    case 196u: goto L_003CE43C;
    case 197u: goto L_003CE458;
    case 198u: goto L_003CE468;
    case 199u: goto L_003CE478;
    case 200u: goto L_003CE4A0;
    case 201u: goto L_003CE4BC;
    case 202u: goto L_003CE4E0;
    case 203u: goto L_003CE4F0;
    case 204u: goto L_003CE514;
    case 205u: goto L_003CE530;
    case 206u: goto L_003CE550;
    case 207u: goto L_003CE594;
    case 208u: goto L_003CE5A4;
    case 209u: goto L_003CE5CC;
    case 210u: goto L_003CE5DC;
    case 211u: goto L_003CE5F4;
    case 212u: goto L_003CE610;
    case 213u: goto L_003CE62C;
    case 214u: goto L_003CE644;
    case 215u: goto L_003CE654;
    case 216u: goto L_003CE65C;
    case 217u: goto L_003CE684;
    case 218u: goto L_003CE694;
    case 219u: goto L_003CE69C;
    case 220u: goto L_003CE6B8;
    case 221u: goto L_003CE6C4;
    case 222u: goto L_003CE700;
    case 223u: goto L_003CE75C;
    case 224u: goto L_003CE794;
    case 225u: goto L_003CE7F4;
    case 226u: goto L_003CE898;
    case 227u: goto L_003CE8AC;
    case 228u: goto L_003CE8EC;
    case 229u: goto L_003CE940;
    case 230u: goto L_003CEA74;
    case 231u: goto L_003CEA7C;
    case 232u: goto L_003CEA98;
    case 233u: goto L_003CEABC;
    case 234u: goto L_003CEADC;
    case 235u: goto L_003CEAF8;
    case 236u: goto L_003CEB14;
    case 237u: goto L_003CEB40;
    case 238u: goto L_003CEBA0;
    case 239u: goto L_003CEBFC;
    case 240u: goto L_003CEC1C;
    case 241u: goto L_003CEC40;
    case 242u: goto L_003CEC54;
    case 243u: goto L_003CED00;
    case 244u: goto L_003CED2C;
    case 245u: goto L_003CED38;
    case 246u: goto L_003CED50;
    case 247u: goto L_003CED70;
    case 248u: goto L_003CED94;
    case 249u: goto L_003CEDB0;
    case 250u: goto L_003CEDD8;
    case 251u: goto L_003CEDF0;
    case 252u: goto L_003CEE18;
    case 253u: goto L_003CEE34;
    case 254u: goto L_003CEE50;
    case 255u: goto L_003CEE60;
    case 256u: goto L_003CEF8C;
    case 257u: goto L_003CEFC0;
    case 258u: goto L_003CEFF4;
    case 259u: goto L_003CF020;
    case 260u: goto L_003CF034;
    case 261u: goto L_003CF058;
    case 262u: goto L_003CF084;
    case 263u: goto L_003CF0F0;
    case 264u: goto L_003CF10C;
    case 265u: goto L_003CF12C;
    case 266u: goto L_003CF14C;
    case 267u: goto L_003CF18C;
    case 268u: goto L_003CF1AC;
    case 269u: goto L_003CF210;
    case 270u: goto L_003CF218;
    case 271u: goto L_003CF248;
    case 272u: goto L_003CF258;
    case 273u: goto L_003CF280;
    case 274u: goto L_003CF294;
    case 275u: goto L_003CF2A8;
    case 276u: goto L_003CF300;
    case 277u: goto L_003CF37C;
    case 278u: goto L_003CF3B8;
    case 279u: goto L_003CF3D0;
    case 280u: goto L_003CF3E0;
    case 281u: goto L_003CF41C;
    case 282u: goto L_003CF424;
    case 283u: goto L_003CF430;
    case 284u: goto L_003CF45C;
    case 285u: goto L_003CF480;
    case 286u: goto L_003CF490;
    case 287u: goto L_003CF49C;
    case 288u: goto L_003CF4A8;
    case 289u: goto L_003CF4B4;
    case 290u: goto L_003CF4E0;
    case 291u: goto L_003CF4F0;
    case 292u: goto L_003CF53C;
    case 293u: goto L_003CF580;
    case 294u: goto L_003CF588;
    case 295u: goto L_003CF590;
    case 296u: goto L_003CF59C;
    case 297u: goto L_003CF5A8;
    case 298u: goto L_003CF5B0;
    case 299u: goto L_003CF5B8;
    case 300u: goto L_003CF5C4;
    case 301u: goto L_003CF5D4;
    case 302u: goto L_003CF5E8;
    case 303u: goto L_003CF5F0;
    case 304u: goto L_003CF61C;
    case 305u: goto L_003CF640;
    case 306u: goto L_003CF6A4;
    case 307u: goto L_003CF6BC;
    case 308u: goto L_003CF6D4;
    case 309u: goto L_003CF6F4;
    case 310u: goto L_003CF70C;
    case 311u: goto L_003CF724;
    case 312u: goto L_003CF74C;
    case 313u: goto L_003CF758;
    case 314u: goto L_003CF76C;
    case 315u: goto L_003CF778;
    case 316u: goto L_003CF78C;
    case 317u: goto L_003CF7A4;
    case 318u: goto L_003CF7B4;
    case 319u: goto L_003CF884;
    case 320u: goto L_003CF89C;
    case 321u: goto L_003CF8B4;
    case 322u: goto L_003CF8CC;
    case 323u: goto L_003CF8F4;
    case 324u: goto L_003CF904;
    case 325u: goto L_003CF914;
    case 326u: goto L_003CF930;
    case 327u: goto L_003CF948;
    case 328u: goto L_003CF960;
    case 329u: goto L_003CF988;
    case 330u: goto L_003CF99C;
    case 331u: goto L_003CF9AC;
    case 332u: goto L_003CF9BC;
    case 333u: goto L_003CF9E8;
    case 334u: goto L_003CFA10;
    case 335u: goto L_003CFA54;
    case 336u: goto L_003CFA7C;
    case 337u: goto L_003CFA88;
    case 338u: goto L_003CFAB4;
    case 339u: goto L_003CFAFC;
    case 340u: goto L_003CFB08;
    case 341u: goto L_003CFB34;
    case 342u: goto L_003CFB7C;
    case 343u: goto L_003CFB88;
    case 344u: goto L_003CFBC0;
    case 345u: goto L_003CFBFC;
    case 346u: goto L_003CFC08;
    case 347u: goto L_003CFC40;
    case 348u: goto L_003CFC7C;
    case 349u: goto L_003CFCA8;
    case 350u: goto L_003CFCD0;
    case 351u: goto L_003CFD0C;
    case 352u: goto L_003CFD38;
    case 353u: goto L_003CFD60;
    case 354u: goto L_003CFDCC;
    case 355u: goto L_003CFDDC;
    case 356u: goto L_003CFE00;
    case 357u: goto L_003CFE0C;
    case 358u: goto L_003CFE20;
    case 359u: goto L_003CFE34;
    case 360u: goto L_003CFE60;
    case 361u: goto L_003CFE78;
    case 362u: goto L_003CFE90;
    case 363u: goto L_003CFEB8;
    case 364u: goto L_003CFEC8;
    case 365u: goto L_003CFED8;
    case 366u: goto L_003CFEF8;
    case 367u: goto L_003CFF10;
    case 368u: goto L_003CFF28;
    case 369u: goto L_003CFF4C;
    case 370u: goto L_003CFF64;
    case 371u: goto L_003CFF7C;
    case 372u: goto L_003CFFA0;
    case 373u: goto L_003CFFC0;
    case 374u: goto L_003CFFF0;
    default: bad_entry(c, 0x003CC000u); return;
    }
L_003CC000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CC06C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CC058; }
    set32(c.r[6], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC044u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CC044u) [[unlikely]] return; }
L_003CC044:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003CC06C; } }
L_003CC058:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 92u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC06Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CC06Cu) [[unlikely]] return; }
L_003CC06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CC0DC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003CC0C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003CC0F8; } }
L_003CC0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC0CCu); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CC0CCu) [[unlikely]] return; }
L_003CC0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC0D4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CC0D4u) [[unlikely]] return; }
L_003CC0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003CC0F4; } }
L_003CC0DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC0F0u); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CC0F0u) [[unlikely]] return; }
L_003CC0F0:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003CC0F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003CC0F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC10Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC10Cu) [[unlikely]] return; }
L_003CC10C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC138u) [[unlikely]] return; }
L_003CC138:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[22] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.f[12] = ld32((c.r[2].w[0] + 48u));
    c.f[13] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC154u) [[unlikely]] return; }
L_003CC154:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC170u) [[unlikely]] return; }
L_003CC170:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC18Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC18Cu) [[unlikely]] return; }
L_003CC18C:
    st32((c.r[17].w[0] + 92u), c.f[22]);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[20]);
    st32((c.r[17].w[0] + 88u), c.f[21]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 56u));
    c.f[13] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC1B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC1B4u) [[unlikely]] return; }
L_003CC1B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 7u);
    c.f[12] = ld32((c.r[2].w[0] + 40u));
    c.f[13] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC1D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC1D0u) [[unlikely]] return; }
L_003CC1D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[22] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 6u);
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC1ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC1ECu) [[unlikely]] return; }
L_003CC1EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 5u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC208u) [[unlikely]] return; }
L_003CC208:
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[5], c.r[16].w[0] + 9u);
    c.f[3] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[21], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[22], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[17].w[0] + 96u), c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[17].w[0] + 100u), c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 72u));
    c.f[13] = ld32((c.r[2].w[0] + 76u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC26Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 18u, depth + 1u); else { c.pc = 0x003CC290u; return; } if (c.pc != 0x003CC26Cu) [[unlikely]] return; }
L_003CC26C:
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003CC300; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003CC304; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003CC2E4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CC2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CC314; } }
L_003CC2E0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003CC2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC2ECu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003CC2ECu) [[unlikely]] return; }
L_003CC2EC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003CC310; } }
L_003CC300:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003CC304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC30Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CC30Cu) [[unlikely]] return; }
L_003CC30C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003CC310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CC314:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC34Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003CC34Cu) [[unlikely]] return; }
L_003CC34C:
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC37Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CC37Cu) [[unlikely]] return; }
L_003CC37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC384u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003CC384u) [[unlikely]] return; }
L_003CC384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[4] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.f[3] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[5]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC414u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CC414u) [[unlikely]] return; }
L_003CC414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 6048u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CC498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC480u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CC480u) [[unlikely]] return; }
L_003CC480:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CC49C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CC498u) [[unlikely]] return; }
L_003CC498:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CC49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC4B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC4D8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CC4D8u) [[unlikely]] return; }
L_003CC4D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CC4F8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC4F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 25u, depth + 1u); else { c.pc = 0x003CC400u; return; } if (c.pc != 0x003CC4F4u) [[unlikely]] return; }
L_003CC4F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CC4F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 201u);  c.pc = t; return; }
L_003CC520:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[6] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    st32((c.r[4].w[0] + 80u), c.f[1]);
    st32((c.r[4].w[0] + 84u), c.f[4]);
    st32((c.r[4].w[0] + 88u), c.f[5]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CC5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC5CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003CC5CCu) [[unlikely]] return; }
L_003CC5CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC5F8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CC5F8u) [[unlikely]] return; }
L_003CC5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC600u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003CC600u) [[unlikely]] return; }
L_003CC600:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[4].w[0];
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[4] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[5]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CC694u) [[unlikely]] return; }
L_003CC694:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CC6B4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003CC6B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CC72C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CC718; }
    set32(c.r[6], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC704u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CC704u) [[unlikely]] return; }
L_003CC704:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003CC72C; } }
L_003CC718:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 48u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC72Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CC72Cu) [[unlikely]] return; }
L_003CC72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CC754u) [[unlikely]] return; }
L_003CC754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 6112u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 28;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003CC7CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CC7DC; } }
L_003CC7CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CC7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CC840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 6112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC81Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 123u, depth + 1u); else { c.pc = 0x003CD410u; return; } if (c.pc != 0x003CC81Cu) [[unlikely]] return; }
L_003CC81C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CC828u) [[unlikely]] return; }
L_003CC828:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CC844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CC840u) [[unlikely]] return; }
L_003CC840:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CC844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC888u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CC888u) [[unlikely]] return; }
L_003CC888:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CC8A8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 44u, depth + 1u); else { c.pc = 0x003CC740u; return; } if (c.pc != 0x003CC8A4u) [[unlikely]] return; }
L_003CC8A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CC8A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 500u);  c.pc = t; return; }
L_003CC8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003CC904; }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC900u); st32((c.r[4].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 129u, depth + 1u); else { c.pc = 0x003CD580u; return; } if (c.pc != 0x003CC900u) [[unlikely]] return; }
L_003CC900:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CC904:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CC910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003CCD7C; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 6u);
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[17].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003CC9EC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003CC9DC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003CC9CC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003CC9BC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  goto L_003CC990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0])));  if (t) { goto L_003CC9F8; } }
L_003CC990:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CC9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9A4u);  if (depth < kMaxDepth) unit_00AB(c, 87u, depth + 1u); else { c.pc = 0x003CCED0u; return; } if (c.pc != 0x003CC9A4u) [[unlikely]] return; }
L_003CC9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC9F4; } }
L_003CC9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9B4u);  if (depth < kMaxDepth) unit_00AB(c, 90u, depth + 1u); else { c.pc = 0x003CCF20u; return; } if (c.pc != 0x003CC9B4u) [[unlikely]] return; }
L_003CC9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC9F4; } }
L_003CC9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9C4u);  if (depth < kMaxDepth) unit_00AB(c, 93u, depth + 1u); else { c.pc = 0x003CCF70u; return; } if (c.pc != 0x003CC9C4u) [[unlikely]] return; }
L_003CC9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC9F4; } }
L_003CC9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9D4u);  if (depth < kMaxDepth) unit_00AB(c, 96u, depth + 1u); else { c.pc = 0x003CD020u; return; } if (c.pc != 0x003CC9D4u) [[unlikely]] return; }
L_003CC9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC9F4; } }
L_003CC9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9E4u);  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003CD180u; return; } if (c.pc != 0x003CC9E4u) [[unlikely]] return; }
L_003CC9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC9F4; } }
L_003CC9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9F4u);  if (depth < kMaxDepth) unit_00AB(c, 118u, depth + 1u); else { c.pc = 0x003CD310u; return; } if (c.pc != 0x003CC9F4u) [[unlikely]] return; }
L_003CC9F4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003CC9F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CCD80; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  goto L_003CCD0C; }
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[3] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003CCBCC; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 64u));  goto L_003CCB18; }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CCD08; } }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], ld32((c.r[17].w[0] + 44u)));  goto L_003CCA98; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.f[0]);  if (t) { goto L_003CCD08; } }
L_003CCA98:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 72u));  goto L_003CCADC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CCAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCABCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CCABCu) [[unlikely]] return; }
L_003CCABC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCAD8u); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CCAD8u) [[unlikely]] return; }
L_003CCAD8:
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 1;
L_003CCADC:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCAE8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003CCAE8u) [[unlikely]] return; }
L_003CCAE8:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_003CCB0C; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
L_003CCB0C:
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.f[0]);  if (t) { goto L_003CCD08; } }
L_003CCB18:
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CCD08; } }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], ld32((c.r[17].w[0] + 44u)));  goto L_003CCB4C; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.f[0]);  if (t) { goto L_003CCD08; } }
L_003CCB4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 72u));  goto L_003CCB90; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CCB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CCB70u) [[unlikely]] return; }
L_003CCB70:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB8Cu); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CCB8Cu) [[unlikely]] return; }
L_003CCB8C:
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 1;
L_003CCB90:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB9Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003CCB9Cu) [[unlikely]] return; }
L_003CCB9C:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_003CCBC0; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
L_003CCBC0:
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.f[0]);  if (t) { goto L_003CCD08; } }
L_003CCBCC:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 72u));  goto L_003CCC7C; }
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CCD08; } }
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], ld32((c.r[17].w[0] + 44u)));  goto L_003CCC18; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003CCD08; } }
L_003CCC18:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CCD08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CCC6C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CCC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCC4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CCC4Cu) [[unlikely]] return; }
L_003CCC4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCC68u); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CCC68u) [[unlikely]] return; }
L_003CCC68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CCC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCC74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AB(c, 129u, depth + 1u); else { c.pc = 0x003CD580u; return; } if (c.pc != 0x003CCC74u) [[unlikely]] return; }
L_003CCC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CCD08; } }
L_003CCC7C:
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CCD08; } }
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], ld32((c.r[17].w[0] + 44u)));  goto L_003CCCAC; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003CCD08; } }
L_003CCCAC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CCD08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CCD00; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CCCFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCCE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CCCE0u) [[unlikely]] return; }
L_003CCCE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCCFCu); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CCCFCu) [[unlikely]] return; }
L_003CCCFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CCD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AB(c, 129u, depth + 1u); else { c.pc = 0x003CD580u; return; } if (c.pc != 0x003CCD08u) [[unlikely]] return; }
L_003CCD08:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003CCD0C:
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CCD7C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CCD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD30u); c.f[12] = ld32((c.r[17].w[0] + 92u));  if (depth < kMaxDepth) unit_000E(c, 188u, depth + 1u); else { c.pc = 0x00159500u; return; } if (c.pc != 0x003CCD30u) [[unlikely]] return; }
L_003CCD30:
    c.f[2] = ld32((c.r[17].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[17].w[0] + 96u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 92u), c.f[1]);  if (t) { goto L_003CCD7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD6Cu); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x003CCD6Cu) [[unlikely]] return; }
L_003CCD6C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CCD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CCD80:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CCE00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CCDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CCE04; } }
L_003CCDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDE0u);  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CCDE0u) [[unlikely]] return; }
L_003CCDE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CCE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 123u, depth + 1u); else { c.pc = 0x003CD410u; return; } if (c.pc != 0x003CCDF0u) [[unlikely]] return; }
L_003CCDF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CCE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CCE04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CCE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CCEB0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_003CCE80; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CCE50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003CCEC0; } }
L_003CCE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE58u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CCE58u) [[unlikely]] return; }
L_003CCE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE60u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CCE60u) [[unlikely]] return; }
L_003CCE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE68u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003CCE68u) [[unlikely]] return; }
L_003CCE68:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003CCEBC; } }
L_003CCE80:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE90u); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CCE90u) [[unlikely]] return; }
L_003CCE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE98u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003CCE98u) [[unlikely]] return; }
L_003CCE98:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003CCEBC; } }
L_003CCEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCEB8u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003CCEB8u) [[unlikely]] return; }
L_003CCEB8:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_003CCEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003CCEC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CCED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CCF04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF00u);  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x003CCF00u) [[unlikely]] return; }
L_003CCF00:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003CCF04:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF10u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x003CCF10u) [[unlikely]] return; }
L_003CCF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CCF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 10;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CCF54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF50u);  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00158EA0u; return; } if (c.pc != 0x003CCF50u) [[unlikely]] return; }
L_003CCF50:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003CCF54:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF60u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 151u, depth + 1u); else { c.pc = 0x00158EE0u; return; } if (c.pc != 0x003CCF60u) [[unlikely]] return; }
L_003CCF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CCF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CCF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[6].w[0]);  if (t) { goto L_003CCFB4; } }
L_003CCF94:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 8;
L_003CCFB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCFC4u); set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00A8(c, 273u, depth + 1u); else { c.pc = 0x003C3300u; return; } if (c.pc != 0x003CCFC4u) [[unlikely]] return; }
L_003CCFC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCFE4u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 391u, depth + 1u); else { c.pc = 0x0016FF50u; return; } if (c.pc != 0x003CCFE4u) [[unlikely]] return; }
L_003CCFE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CD008; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
L_003CD008:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CD020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.f[12] = ld32((c.r[18].w[0] + 64u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD048u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 338u, depth + 1u); else { c.pc = 0x00166DB0u; return; } if (c.pc != 0x003CD048u) [[unlikely]] return; }
L_003CD048:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 60u)));  goto L_003CD0EC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 288u);  goto L_003CD0A4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD090u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD090u) [[unlikely]] return; }
L_003CD090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003CD164; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003CD0DC; } }
L_003CD0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0ACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003CD0ACu) [[unlikely]] return; }
L_003CD0AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 108u), c.r[4].w[0]);  goto L_003CD0C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0C0u);  if (depth < kMaxDepth) unit_000D(c, 297u, depth + 1u); else { c.pc = 0x00156E50u; return; } if (c.pc != 0x003CD0C0u) [[unlikely]] return; }
L_003CD0C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 2;
L_003CD0C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CD168; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003CD0DC:
    set32(c.r[16], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[2].w[0] + 36u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
L_003CD0EC:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 112u)));  goto L_003CD110; }
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 373u, depth + 1u); else { c.pc = 0x001576E0u; return; } if (c.pc != 0x003CD108u) [[unlikely]] return; }
L_003CD108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_003CD11C; } }
L_003CD110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 366u, depth + 1u); else { c.pc = 0x00157610u; return; } if (c.pc != 0x003CD118u) [[unlikely]] return; }
L_003CD118:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_003CD11C:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CD164; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD13Cu); set32(c.r[6], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003CD13Cu) [[unlikely]] return; }
L_003CD13C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD14Cu); set32(c.r[6], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003CD14Cu) [[unlikely]] return; }
L_003CD14C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD158u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 327u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x003CD158u) [[unlikely]] return; }
L_003CD158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD164u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 329u, depth + 1u); else { c.pc = 0x00157280u; return; } if (c.pc != 0x003CD164u) [[unlikely]] return; }
L_003CD164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CD168:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CD180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD1A8u); set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (depth < kMaxDepth) unit_0011(c, 377u, depth + 1u); else { c.pc = 0x001673A0u; return; } if (c.pc != 0x003CD1A8u) [[unlikely]] return; }
L_003CD1A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003CD200; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));  goto L_003CD1CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_003CD200; } }
L_003CD1CC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 2;
L_003CD1D4:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_003CD1F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[4].w[0]);  if (t) { goto L_003CD200; } }
L_003CD1F0:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD1D4u | kUnwind; return; } goto L_003CD1D4; } }
    c.budget -= 1;
L_003CD200:
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  goto L_003CD2EC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 176u);  goto L_003CD28C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD258u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD258u) [[unlikely]] return; }
L_003CD258:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003CD2F4; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003CD274u) [[unlikely]] return; }
L_003CD274:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD284u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x003CD284u) [[unlikely]] return; }
L_003CD284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_003CD2C8; } }
L_003CD28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD294u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003CD294u) [[unlikely]] return; }
L_003CD294:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), c.r[4].w[0]);  goto L_003CD2B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2A8u);  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x003CD2A8u) [[unlikely]] return; }
L_003CD2A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 2;
L_003CD2B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003CD2F8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
L_003CD2C8:
    set32(c.r[19], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003CD2D8u) [[unlikely]] return; }
L_003CD2D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2E8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x003CD2E8u) [[unlikely]] return; }
L_003CD2E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_003CD2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 436u, depth + 1u); else { c.pc = 0x0015BAE0u; return; } if (c.pc != 0x003CD2F4u) [[unlikely]] return; }
L_003CD2F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003CD2F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CD310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 11;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_003CD3D0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 144u);  goto L_003CD388; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD374u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD374u) [[unlikely]] return; }
L_003CD374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003CD3F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003CD3C0; } }
L_003CD388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD390u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003CD390u) [[unlikely]] return; }
L_003CD390:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), c.r[4].w[0]);  goto L_003CD3AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD3A4u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0015C180u; return; } if (c.pc != 0x003CD3A4u) [[unlikely]] return; }
L_003CD3A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 2;
L_003CD3AC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CD3F8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003CD3C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
L_003CD3D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD3F4u); set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000F(c, 81u, depth + 1u); else { c.pc = 0x0015CBA0u; return; } if (c.pc != 0x003CD3F4u) [[unlikely]] return; }
L_003CD3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CD3F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CD410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 31436u)));  goto L_003CD510; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 88u)));  goto L_003CD4A0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 31436u)));  goto L_003CD45C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_003CD550; } }
L_003CD45C:
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003CD474; }
    st32((c.r[5].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003CD474:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 108u), 0u);  goto L_003CD54C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD494u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD494u) [[unlikely]] return; }
L_003CD494:
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CD54C; } }
L_003CD4A0:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003CD4E4; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CD4E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD4D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003CD4D0u) [[unlikely]] return; }
L_003CD4D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD4E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x003CD4E0u) [[unlikely]] return; }
L_003CD4E0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003CD4E4:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 108u), 0u);  goto L_003CD54C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD504u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD504u) [[unlikely]] return; }
L_003CD504:
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CD54C; } }
L_003CD510:
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003CD528; }
    st32((c.r[5].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003CD528:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 108u), 0u);  goto L_003CD54C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD548u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD548u) [[unlikely]] return; }
L_003CD548:
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 1;
L_003CD54C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003CD550:
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CD580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003CD668; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003CD660; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003CD644; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003CD5D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003CD66C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CD5D8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CD668; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[4].w[0] + 1u);  goto L_003CD638; }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CD618; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
L_003CD618:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003CD668; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CD668; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003CD638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003CD668; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CD644:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CD668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD658u);  if (depth < kMaxDepth) unit_00AB(c, 80u, depth + 1u); else { c.pc = 0x003CCE10u; return; } if (c.pc != 0x003CD658u) [[unlikely]] return; }
L_003CD658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CD668; } }
L_003CD660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD668u);  if (depth < kMaxDepth) unit_00AB(c, 80u, depth + 1u); else { c.pc = 0x003CCE10u; return; } if (c.pc != 0x003CD668u) [[unlikely]] return; }
L_003CD668:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003CD66C:
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 76u), c.f[1]);  if (t) { goto L_003CD6B4; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CD6C0; } }
L_003CD6B4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003CD6C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_003CD900; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_003CD8A0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_003CD840; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_003CD7E0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_003CD70C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_003CD960; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003CD70C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_003CD784; }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_003CD748; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 1;
L_003CD748:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD760u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD760u) [[unlikely]] return; }
L_003CD760:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD76Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x003CD76Cu) [[unlikely]] return; }
L_003CD76C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 157u, depth + 1u); else { c.pc = 0x003CDC10u; return; } if (c.pc != 0x003CD778u) [[unlikely]] return; }
L_003CD778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_003CD974; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003CD784:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  goto L_003CD7B0; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_003CD7B0:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7C8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD7C8u) [[unlikely]] return; }
L_003CD7C8:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 296u, depth + 1u); else { c.pc = 0x0016F350u; return; } if (c.pc != 0x003CD7D4u) [[unlikely]] return; }
L_003CD7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003CD970; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003CD7E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  goto L_003CD810; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003CD810:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD828u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD828u) [[unlikely]] return; }
L_003CD828:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD834u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 3u, depth + 1u); else { c.pc = 0x00170040u; return; } if (c.pc != 0x003CD834u) [[unlikely]] return; }
L_003CD834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003CD970; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003CD840:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_003CD870; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 1;
L_003CD870:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD888u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD888u) [[unlikely]] return; }
L_003CD888:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD894u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x003CD894u) [[unlikely]] return; }
L_003CD894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003CD970; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003CD8A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_003CD8D0; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 1;
L_003CD8D0:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD8E8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD8E8u) [[unlikely]] return; }
L_003CD8E8:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD8F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x003CD8F4u) [[unlikely]] return; }
L_003CD8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003CD970; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003CD900:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_003CD930; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 1;
L_003CD930:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD948u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CD948u) [[unlikely]] return; }
L_003CD948:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD954u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 284u, depth + 1u); else { c.pc = 0x0016F190u; return; } if (c.pc != 0x003CD954u) [[unlikely]] return; }
L_003CD954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003CD970; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CD960:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDBF0; } }
L_003CD970:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CD974:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003CD9F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_003CD99C; } }
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_003CD99C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 64u));  goto L_003CD9BC; }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0] + 12u));  if (t) { goto L_003CD9C0; } }
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_003CD9BC:
    c.f[20] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 1;
L_003CD9C0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 72u), c.f[20]);  if (t) { goto L_003CDA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[21]);  if (t) { goto L_003CDA5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003CD9F0:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_003CDA18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 5;
L_003CDA18:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 64u));  goto L_003CDA3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_003CDA3C; } }
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_003CDA3C:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 72u), c.f[1]);  if (t) { goto L_003CDA58; } }
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 1;
L_003CDA58:
    c.f[20] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 1;
L_003CDA5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA94u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003CDA94u) [[unlikely]] return; }
L_003CDA94:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[22] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.f[23] = c.f[0];  if (t) { goto L_003CDAD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDAB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003CDAB0u) [[unlikely]] return; }
L_003CDAB0:
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[13] = c.f[23];
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDAC4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003CDAC4u) [[unlikely]] return; }
L_003CDAC4:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 3;
L_003CDAD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003CDBF4; }
    c.f[21] = fp::ee::div(c.fcr31, c.f[22], c.f[23]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[21];  goto L_003CDB18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB0Cu); c.f[12] = c.f[21] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003CDB0Cu) [[unlikely]] return; }
L_003CDB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003CDB20; } }
    c.f[12] = c.f[21];
    c.budget -= 1;
L_003CDB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB20u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003CDB20u) [[unlikely]] return; }
L_003CDB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB28u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CDB28u) [[unlikely]] return; }
L_003CDB28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003CDB80; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CDB54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB4Cu); c.f[12] = c.f[21] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003CDB4Cu) [[unlikely]] return; }
L_003CDB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003CDB70; } }
L_003CDB54:
    c.f[12] = fp::ee::div(c.fcr31, c.f[22], c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB70u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003CDB70u) [[unlikely]] return; }
L_003CDB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB78u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CDB78u) [[unlikely]] return; }
L_003CDB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CDBCC; } }
L_003CDB80:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CDBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB9Cu); c.f[12] = c.f[21] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003CDB9Cu) [[unlikely]] return; }
L_003CDB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003CDBC0; } }
L_003CDBA4:
    c.f[12] = fp::ee::div(c.fcr31, c.f[22], c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDBC0u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003CDBC0u) [[unlikely]] return; }
L_003CDBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDBC8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CDBC8u) [[unlikely]] return; }
L_003CDBC8:
    set32(c.r[4], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_003CDBCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);  goto L_003CDBEC; }
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[20]);  if (t) { goto L_003CDBF0; } }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_003CDBEC:
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003CDBF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003CDBF4:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CDC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CDC48; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC38u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x003CDC38u) [[unlikely]] return; }
L_003CDC38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CDC48:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CDC7C; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CDC78; } }
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CDC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CDC7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CDC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 28u), c.r[6].w[0]);  if (t) { goto L_003CDCD8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 28u));  goto L_003CDCD0; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 48u), c.r[6].w[0]);  goto L_003CDCC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CDCE4; } }
L_003CDCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 129u, depth + 1u); else { c.pc = 0x003CD580u; return; } if (c.pc != 0x003CDCC8u) [[unlikely]] return; }
L_003CDCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CDCE0; } }
L_003CDCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[0]);  if (t) { goto L_003CDCE0; } }
L_003CDCD8:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.budget -= 2;
L_003CDCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CDCE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CDCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CDD04u) [[unlikely]] return; }
L_003CDD04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 6176u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = 0u;
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 268u)));
    c.budget -= 31;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CDDCC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_003CDDA8; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CDDCC; } }
L_003CDDA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDDC8u); st32((c.r[16].w[0] + 156u), c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 229u, depth + 1u); else { c.pc = 0x003CE940u; return; } if (c.pc != 0x003CDDC8u) [[unlikely]] return; }
L_003CDDC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CDDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CDDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CDE30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 6176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE0Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 203u, depth + 1u); else { c.pc = 0x003CE4F0u; return; } if (c.pc != 0x003CDE0Cu) [[unlikely]] return; }
L_003CDE0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CDE18u) [[unlikely]] return; }
L_003CDE18:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CDE34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CDE30u) [[unlikely]] return; }
L_003CDE30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CDE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CDE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE78u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CDE78u) [[unlikely]] return; }
L_003CDE78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CDE98; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 161u, depth + 1u); else { c.pc = 0x003CDCF0u; return; } if (c.pc != 0x003CDE94u) [[unlikely]] return; }
L_003CDE94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CDE98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CDEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 100u);  c.pc = t; return; }
L_003CDEC0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
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
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003CE350; }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 280u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[23].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE334; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[23].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003CDF24u) [[unlikely]] return; }
L_003CDF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003CE330; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 60u));
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 232u), c.f[2]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 76u));
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[2]);
    c.f[2] = ld32((c.r[5].w[0] + 88u));
    c.f[1] = ld32((c.r[5].w[0] + 84u));
    c.f[0] = ld32((c.r[5].w[0] + 80u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    st32((c.r[29].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 92u));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 96u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 100u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 104u));
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 116u));
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    c.f[0] = ld32((c.r[5].w[0] + 108u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 312u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 124u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 132u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 136u));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 140u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 148u)));
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 152u)));
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 156u));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 160u));
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 164u));
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 168u));
    st32((c.r[29].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 176u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 180u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 200u));
    c.f[2] = ld32((c.r[5].w[0] + 196u));
    c.f[1] = ld32((c.r[5].w[0] + 192u));
    c.f[0] = ld32((c.r[5].w[0] + 204u));
    st32((c.r[29].w[0] + 396u), c.f[0]);
    st32((c.r[29].w[0] + 384u), c.f[1]);
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[3]);
    c.f[3] = ld32((c.r[5].w[0] + 216u));
    c.f[2] = ld32((c.r[5].w[0] + 212u));
    c.f[1] = ld32((c.r[5].w[0] + 208u));
    c.f[0] = ld32((c.r[5].w[0] + 220u));
    st32((c.r[29].w[0] + 412u), c.f[0]);
    st32((c.r[29].w[0] + 400u), c.f[1]);
    st32((c.r[29].w[0] + 404u), c.f[2]);
    st32((c.r[29].w[0] + 408u), c.f[3]);
    c.f[3] = ld32((c.r[5].w[0] + 252u));
    c.f[2] = ld32((c.r[5].w[0] + 248u));
    c.f[1] = ld32((c.r[5].w[0] + 244u));
    c.f[0] = ld32((c.r[5].w[0] + 256u));
    st32((c.r[29].w[0] + 428u), c.f[0]);
    st32((c.r[29].w[0] + 416u), c.f[1]);
    st32((c.r[29].w[0] + 420u), c.f[2]);
    st32((c.r[29].w[0] + 424u), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 260u));
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 264u));
    c.budget -= 118;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE104u); st32((c.r[29].w[0] + 436u), c.f[0]);  if (depth < kMaxDepth) unit_001E(c, 258u, depth + 1u); else { c.pc = 0x0019B7F0u; return; } if (c.pc != 0x003CE104u) [[unlikely]] return; }
L_003CE104:
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE114u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003CE114u) [[unlikely]] return; }
L_003CE114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003CE330; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CE130; } }
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    c.budget -= 1;
L_003CE130:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE13Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001E(c, 259u, depth + 1u); else { c.pc = 0x0019B820u; return; } if (c.pc != 0x003CE13Cu) [[unlikely]] return; }
L_003CE13C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_003CE17C; }
    c.f[3] = ld32((c.r[3].w[0] + 236u));
    c.f[2] = ld32((c.r[3].w[0] + 232u));
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    c.f[0] = ld32((c.r[3].w[0] + 240u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[29].w[0] + 180u), c.f[2]);
    st32((c.r[29].w[0] + 184u), c.f[3]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE178u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001F(c, 84u, depth + 1u); else { c.pc = 0x0019D1D0u; return; } if (c.pc != 0x003CE178u) [[unlikely]] return; }
L_003CE178:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003CE17C:
    set32(c.r[5], ld32((c.r[2].w[0] + 184u)));
    c.f[12] = ld32((c.r[2].w[0] + 188u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE18Cu); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_001F(c, 82u, depth + 1u); else { c.pc = 0x0019D150u; return; } if (c.pc != 0x003CE18Cu) [[unlikely]] return; }
L_003CE18C:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = ld32((c.r[4].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003CE1B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1B0u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_001F(c, 83u, depth + 1u); else { c.pc = 0x0019D1B0u; return; } if (c.pc != 0x003CE1B0u) [[unlikely]] return; }
L_003CE1B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003CE1B4:
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 60u)));  goto L_003CE1CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1C8u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_001F(c, 80u, depth + 1u); else { c.pc = 0x0019D110u; return; } if (c.pc != 0x003CE1C8u) [[unlikely]] return; }
L_003CE1C8:
    set32(c.r[16], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003CE1CC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003CE328; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CE1D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003CE1F8u) [[unlikely]] return; }
L_003CE1F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 15824u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[6] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15828u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15832u));
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15836u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[4]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE250u); st32((c.r[29].w[0] + 168u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003CE250u) [[unlikely]] return; }
L_003CE250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE268u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CE268u) [[unlikely]] return; }
L_003CE268:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE284u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CE284u) [[unlikely]] return; }
L_003CE284:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE2A0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CE2A0u) [[unlikely]] return; }
L_003CE2A0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE2B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003CE2B8u) [[unlikely]] return; }
L_003CE2B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 15808u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[6] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.f[5] = ld32((c.r[18].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15812u));
    c.f[4] = ld32((c.r[18].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15816u));
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15820u));
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE310u); st32((c.r[29].w[0] + 152u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003CE310u) [[unlikely]] return; }
L_003CE310:
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[3].d[0] = c.r[22].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE1D8u | kUnwind; return; } goto L_003CE1D8; } }
    c.budget -= 1;
L_003CE328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CE34C; } }
L_003CE330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CE334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE33Cu);  if (depth < kMaxDepth) unit_00AB(c, 203u, depth + 1u); else { c.pc = 0x003CE4F0u; return; } if (c.pc != 0x003CE33Cu) [[unlikely]] return; }
L_003CE33C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CE34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003CE350:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_003CE380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003CE4BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE3C0u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_001F(c, 81u, depth + 1u); else { c.pc = 0x0019D130u; return; } if (c.pc != 0x003CE3C0u) [[unlikely]] return; }
L_003CE3C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_003CE3E0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE3DCu); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_001F(c, 79u, depth + 1u); else { c.pc = 0x0019D0D0u; return; } if (c.pc != 0x003CE3DCu) [[unlikely]] return; }
L_003CE3DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003CE3E0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 268u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE460; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE434; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003CE4C0; } }
L_003CE40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE414u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CE414u) [[unlikely]] return; }
L_003CE414:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE42Cu); c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001E(c, 267u, depth + 1u); else { c.pc = 0x0019BF90u; return; } if (c.pc != 0x003CE42Cu) [[unlikely]] return; }
L_003CE42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CE4BC; } }
L_003CE434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE43Cu);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CE43Cu) [[unlikely]] return; }
L_003CE43C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE458u); c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001E(c, 268u, depth + 1u); else { c.pc = 0x0019BFA0u; return; } if (c.pc != 0x003CE458u) [[unlikely]] return; }
L_003CE458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CE4BC; } }
L_003CE460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE468u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 222u, depth + 1u); else { c.pc = 0x003CE700u; return; } if (c.pc != 0x003CE468u) [[unlikely]] return; }
L_003CE468:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE478u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CE478u) [[unlikely]] return; }
L_003CE478:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4A0u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CE4A0u) [[unlikely]] return; }
L_003CE4A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4BCu); c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001E(c, 268u, depth + 1u); else { c.pc = 0x0019BFA0u; return; } if (c.pc != 0x003CE4BCu) [[unlikely]] return; }
L_003CE4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CE4C0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CE4E0:
    c.budget -= 2;
    {  goto L_003CE4F0; }
L_003CE4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CE518; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE514u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003CE514u) [[unlikely]] return; }
L_003CE514:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003CE518:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CE538; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE530u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003CE530u) [[unlikely]] return; }
L_003CE530:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003CE538:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CE550:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003CE6D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE594u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003CE594u) [[unlikely]] return; }
L_003CE594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CE6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5A4u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003CE5A4u) [[unlikely]] return; }
L_003CE5A4:
    set32(c.r[17], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_003CE5C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CE6CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003CE5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5CCu); set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003CE5CCu) [[unlikely]] return; }
L_003CE5CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5DCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x003CE5DCu) [[unlikely]] return; }
L_003CE5DC:
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003CE5F4u) [[unlikely]] return; }
L_003CE5F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 280u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE610u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003CE610u) [[unlikely]] return; }
L_003CE610:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_003CE678; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003CE6B0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CE62C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[20], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE644u); set32(c.r[19], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003CE644u) [[unlikely]] return; }
L_003CE644:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE654u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003CE654u) [[unlikely]] return; }
L_003CE654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE65Cu); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0013(c, 85u, depth + 1u); else { c.pc = 0x0016D2C0u; return; } if (c.pc != 0x003CE65Cu) [[unlikely]] return; }
L_003CE65C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE62Cu | kUnwind; return; } goto L_003CE62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CE6B0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CE678:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CE6B0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CE684:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE694u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x003CE694u) [[unlikely]] return; }
L_003CE694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE69Cu); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0013(c, 85u, depth + 1u); else { c.pc = 0x0016D2C0u; return; } if (c.pc != 0x003CE69Cu) [[unlikely]] return; }
L_003CE69C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE684u | kUnwind; return; } goto L_003CE684; } }
    c.budget -= 1;
L_003CE6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6B8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003CE6B8u) [[unlikely]] return; }
L_003CE6B8:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003CE6C4u) [[unlikely]] return; }
L_003CE6C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 2;
L_003CE6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003CE6D0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CE700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003CE75C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003CE760; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CE75C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE75Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 229u, depth + 1u); else { c.pc = 0x003CE940u; return; } if (c.pc != 0x003CE75Cu) [[unlikely]] return; }
L_003CE75C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003CE760:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003CE920; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    set32(c.r[16], ld32((c.r[18].w[0] + 144u)));
    c.f[2] = ld32((c.r[18].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003CE830; } }
    c.f[0] = ld32((c.r[18].w[0] + 156u));
    c.budget -= 1;
L_003CE794:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 156u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 276u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_003CE7E0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CE7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 144u), 0u);  if (t) { goto L_003CE7E8; } }
    c.budget -= 1;
L_003CE7D0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003CE91C; } }
L_003CE7E0:
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 2;
L_003CE7E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AB(c, 229u, depth + 1u); else { c.pc = 0x003CE940u; return; } if (c.pc != 0x003CE7F4u) [[unlikely]] return; }
L_003CE7F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003CE818; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 152u));  goto L_003CE81C; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003CE91C; } }
L_003CE818:
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.budget -= 1;
L_003CE81C:
    c.f[2] = ld32((c.r[18].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 156u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE794u | kUnwind; return; } goto L_003CE794; }
    c.budget -= 1;
L_003CE830:
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 152u), c.f[1]);
    st32((c.r[18].w[0] + 156u), c.f[20]);
    c.f[13] = ld32((c.r[18].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 152u));  goto L_003CE87C; }
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.f[0]);  if (t) { goto L_003CE91C; } }
L_003CE87C:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.f[14] = ld32((c.r[18].w[0] + 160u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE898u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003CE898u) [[unlikely]] return; }
L_003CE898:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE8ACu); set32(c.r[6], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003CE8ACu) [[unlikely]] return; }
L_003CE8AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[12] = c.f[20];  goto L_003CE8E0; }
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.f[0]);  if (t) { goto L_003CE91C; } }
L_003CE8E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE8ECu); set32(c.r[5], c.r[18].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CE8ECu) [[unlikely]] return; }
L_003CE8EC:
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.budget -= 12;
L_003CE91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003CE920:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CE940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 276u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_003CEA44; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003CE9FC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 120u), 0u);  goto L_003CE9C8; }
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 124u), c.f[0]);  if (t) { goto L_003CEA44; } }
L_003CE9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.f[0]);  if (t) { goto L_003CEA44; } }
L_003CE9FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 128u));  goto L_003CEA28; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 124u), c.f[0]);  if (t) { goto L_003CEA44; } }
L_003CEA28:
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    st32((c.r[18].w[0] + 124u), c.f[0]);
    c.budget -= 7;
L_003CEA44:
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CEA84; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  goto L_003CEA68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CEA9C; } }
L_003CEA68:
    c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CEA74u) [[unlikely]] return; }
L_003CEA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA7Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CEA7Cu) [[unlikely]] return; }
L_003CEA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003CEA9C; } }
L_003CEA84:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA98u); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CEA98u) [[unlikely]] return; }
L_003CEA98:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003CEA9C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  goto L_003CEAC8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEABCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 238u, depth + 1u); else { c.pc = 0x003CEBA0u; return; } if (c.pc != 0x003CEABCu) [[unlikely]] return; }
L_003CEABC:
    st32((c.r[18].w[0] + 148u), c.f[0]);
    st32((c.r[18].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
L_003CEAC8:
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEADCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 238u, depth + 1u); else { c.pc = 0x003CEBA0u; return; } if (c.pc != 0x003CEADCu) [[unlikely]] return; }
L_003CEADC:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 238u, depth + 1u); else { c.pc = 0x003CEBA0u; return; } if (c.pc != 0x003CEAF8u) [[unlikely]] return; }
L_003CEAF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 238u, depth + 1u); else { c.pc = 0x003CEBA0u; return; } if (c.pc != 0x003CEB14u) [[unlikely]] return; }
L_003CEB14:
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 132u), c.f[20]);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st32((c.r[18].w[0] + 136u), c.f[21]);
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.f[12] = ld32((c.r[2].w[0] + 44u));
    c.f[13] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 238u, depth + 1u); else { c.pc = 0x003CEBA0u; return; } if (c.pc != 0x003CEB40u) [[unlikely]] return; }
L_003CEB40:
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003CEB80; }
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_003CEB80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CEBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003CEC10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003CEC14; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003CEBF4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CEBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CEC24; } }
L_003CEBF0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003CEBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEBFCu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003CEBFCu) [[unlikely]] return; }
L_003CEBFC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003CEC20; } }
L_003CEC10:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003CEC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEC1Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CEC1Cu) [[unlikely]] return; }
L_003CEC1C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003CEC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CEC24:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEC54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CEC54u) [[unlikely]] return; }
L_003CEC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 6240u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 236u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 26;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CECEC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003CECDC; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CECEC; } }
L_003CECDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003CECEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CED00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CED50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 6240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED2Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 247u, depth + 1u); else { c.pc = 0x003CED70u; return; } if (c.pc != 0x003CED2Cu) [[unlikely]] return; }
L_003CED2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CED38u) [[unlikely]] return; }
L_003CED38:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CED54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CED50u) [[unlikely]] return; }
L_003CED50:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CED54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CED70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CED98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003CED94u) [[unlikely]] return; }
L_003CED94:
    st32((c.r[16].w[0] + 220u), 0u);
    c.budget -= 1;
L_003CED98:
    set32(c.r[5], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 236u)));  goto L_003CEDB8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEDB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003CEDB0u) [[unlikely]] return; }
L_003CEDB0:
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 2;
L_003CEDB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CEDE0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 236u), 0u);  goto L_003CEDDC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEDD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CEDD8u) [[unlikely]] return; }
L_003CEDD8:
    st32((c.r[16].w[0] + 236u), 0u);
    c.budget -= 1;
L_003CEDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CEDE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEE18u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CEE18u) [[unlikely]] return; }
L_003CEE18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CEE38; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEE34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 241u, depth + 1u); else { c.pc = 0x003CEC40u; return; } if (c.pc != 0x003CEE34u) [[unlikely]] return; }
L_003CEE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CEE38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CEE50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 101u);  c.pc = t; return; }
L_003CEE60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003CF2E4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], ld32((c.r[6].w[0])));  if (t) { goto L_003CEF74; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 240u)));
    st32((c.r[18].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 244u)));
    c.budget -= 6;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[18].w[0] + 164u)));  goto L_003CEECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_003CEED0; } }
L_003CEECC:
    st32((c.r[18].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 1;
L_003CEED0:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[18].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_003CF2D0; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 224u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_003CF2D4; }
    set32(c.r[5], ld32((c.r[6].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003CF2D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CF2D0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 252u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003CF2D0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CF2D0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 256u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003CEF5C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003CEF4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003CEF78; } }
L_003CEF4C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0] + 156u), c.r[2].w[0]);  goto L_003CEF74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 156u), 0u);  if (t) { goto L_003CEF74; } }
L_003CEF5C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003CEF70; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_003CEF74; } }
L_003CEF70:
    st32((c.r[18].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_003CEF74:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003CEF78:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEF8Cu); set32(c.r[5], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003CEF8Cu) [[unlikely]] return; }
L_003CEF8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_003CF2D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEFC0u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003CEFC0u) [[unlikely]] return; }
L_003CEFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_003CF2D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 228u)));
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEFF4u); set32(c.r[4], ld32((c.r[18].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003CEFF4u) [[unlikely]] return; }
L_003CEFF4:
    st32((c.r[18].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003CF02C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF020u); set32(c.r[5], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003CF020u) [[unlikely]] return; }
L_003CF020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_003CF2D0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003CF02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF034u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003D1970u; return; } if (c.pc != 0x003CF034u) [[unlikely]] return; }
L_003CF034:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 104u)));
    st32((c.r[18].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 236u), 0u);  goto L_003CF068; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF058u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 57u, depth + 1u); else { c.pc = 0x003D1770u; return; } if (c.pc != 0x003CF058u) [[unlikely]] return; }
L_003CF058:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  goto L_003CF06C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CF2D0; } }
L_003CF068:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003CF06C:
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CF0C8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.budget -= 2;
L_003CF084:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CF2D0; } }
    c.f[0] = ld32((c.r[18].w[0] + 188u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 188u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF084u | kUnwind; return; } goto L_003CF084; } }
L_003CF0C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF0F0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CF0F0u) [[unlikely]] return; }
L_003CF0F0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[16], c.r[3].w[0] << 24);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF10Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CF10Cu) [[unlikely]] return; }
L_003CF10C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF12Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CF12Cu) [[unlikely]] return; }
L_003CF12C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[16].d[0] = c.r[3].d[0] | c.r[16].d[0];
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF14Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CF14Cu) [[unlikely]] return; }
L_003CF14C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[16].d[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 164u)));  goto L_003CF184; }
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 192u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 6;
L_003CF184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF18Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003CF18Cu) [[unlikely]] return; }
L_003CF18C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 204u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF1ACu); set32(c.r[4], ld32((c.r[18].w[0] + 168u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003CF1ACu) [[unlikely]] return; }
L_003CF1AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 208u), c.f[0]);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[18].w[0] + 176u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CF2C8; } }
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CF2C8; } }
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CF2C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 1;
L_003CF210:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CF270; } }
L_003CF218:
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CF240; } }
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CF270; } }
L_003CF240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF248u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 9u, depth + 1u); else { c.pc = 0x003D01D0u; return; } if (c.pc != 0x003CF248u) [[unlikely]] return; }
L_003CF248:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF258u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 305u, depth + 1u); else { c.pc = 0x003CF640u; return; } if (c.pc != 0x003CF258u) [[unlikely]] return; }
L_003CF258:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF218u | kUnwind; return; } goto L_003CF218; } }
L_003CF270:
    set32(c.r[16], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003CF2A0; } }
    c.budget -= 1;
L_003CF280:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 112u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF294u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003D1A00u; return; } if (c.pc != 0x003CF294u) [[unlikely]] return; }
L_003CF294:
    set32(c.r[16], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF280u | kUnwind; return; } goto L_003CF280; } }
L_003CF2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF2A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 10u, depth + 1u); else { c.pc = 0x003D0200u; return; } if (c.pc != 0x003CF2A8u) [[unlikely]] return; }
L_003CF2A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[4].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF210u | kUnwind; return; } goto L_003CF210; }
    c.budget -= 1;
L_003CF2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CF2E0; } }
L_003CF2D0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003CF2D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003CF2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003CF2E4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CF300:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CF4B4; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[19].w[0] + 172u), c.f[12]);
    c.f[0] = ld32((c.r[19].w[0] + 176u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[19].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 180u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[19].w[0] + 180u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[19].w[0] + 176u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CF400; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003CF400; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 1;
L_003CF37C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CF3A0; } }
    c.f[1] = ld32((c.r[19].w[0] + 180u));
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CF400; } }
    c.budget -= 1;
L_003CF3A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CF3C8; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3B8u); c.f[12] = ld32((c.r[4].w[0] + 124u));  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003CF3B8u) [[unlikely]] return; }
L_003CF3B8:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CF400; } }
    c.budget -= 1;
L_003CF3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 9u, depth + 1u); else { c.pc = 0x003D01D0u; return; } if (c.pc != 0x003CF3D0u) [[unlikely]] return; }
L_003CF3D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3E0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 305u, depth + 1u); else { c.pc = 0x003CF640u; return; } if (c.pc != 0x003CF3E0u) [[unlikely]] return; }
L_003CF3E0:
    st32((c.r[19].w[0] + 176u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 120u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF37Cu | kUnwind; return; } goto L_003CF37C; }
    c.budget -= 1;
L_003CF400:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_003CF434; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF41Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 361u, depth + 1u); else { c.pc = 0x001575A0u; return; } if (c.pc != 0x003CF41Cu) [[unlikely]] return; }
L_003CF41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF424u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 215u, depth + 1u); else { c.pc = 0x0018F400u; return; } if (c.pc != 0x003CF424u) [[unlikely]] return; }
L_003CF424:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF430u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x003CF430u) [[unlikely]] return; }
L_003CF430:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CF434:
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003CF4AC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[2].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF45Cu); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003CF45Cu) [[unlikely]] return; }
L_003CF45C:
    st32((c.r[19].w[0] + 128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 112u);
    st32((c.r[19].w[0] + 136u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[19].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF480u); set32(c.r[6], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003CF480u) [[unlikely]] return; }
L_003CF480:
    set32(c.r[4], c.r[19].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF490u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003CF490u) [[unlikely]] return; }
L_003CF490:
    set32(c.r[4], c.r[19].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF49Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF49Cu) [[unlikely]] return; }
L_003CF49C:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF4A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF4A8u) [[unlikely]] return; }
L_003CF4A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003CF4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF4B4u);  if (depth < kMaxDepth) unit_00AC(c, 10u, depth + 1u); else { c.pc = 0x003D0200u; return; } if (c.pc != 0x003CF4B4u) [[unlikely]] return; }
L_003CF4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003CF4E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CED70u | kUnwind; return; } goto L_003CED70; }
L_003CF4F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CF61C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_003CF534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003CF620; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003CF534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF53Cu);  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003CF53Cu) [[unlikely]] return; }
L_003CF53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_003CF558; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003CF61C; } }
L_003CF558:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CF588; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003CF588; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF580u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003CF580u) [[unlikely]] return; }
L_003CF580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003CF588u) [[unlikely]] return; }
L_003CF588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF590u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003CF590u) [[unlikely]] return; }
L_003CF590:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF59Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003CF59Cu) [[unlikely]] return; }
L_003CF59C:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5A8u); set32(c.r[4], ld32((c.r[17].w[0] + 216u)));  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003CF5A8u) [[unlikely]] return; }
L_003CF5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5B0u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003CF5B0u) [[unlikely]] return; }
L_003CF5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5B8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 148u, depth + 1u); else { c.pc = 0x0016DBC0u; return; } if (c.pc != 0x003CF5B8u) [[unlikely]] return; }
L_003CF5B8:
    set32(c.r[18], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003CF5E0; } }
L_003CF5C4:
    c.f[12] = ld32((c.r[17].w[0] + 172u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 73u, depth + 1u); else { c.pc = 0x003D1AE0u; return; } if (c.pc != 0x003CF5D4u) [[unlikely]] return; }
L_003CF5D4:
    set32(c.r[18], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF5C4u | kUnwind; return; } goto L_003CF5C4; } }
L_003CF5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5E8u);  if (depth < kMaxDepth) unit_0013(c, 150u, depth + 1u); else { c.pc = 0x0016DBE0u; return; } if (c.pc != 0x003CF5E8u) [[unlikely]] return; }
L_003CF5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5F0u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003CF5F0u) [[unlikely]] return; }
L_003CF5F0:
    st32((c.r[17].w[0] + 172u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CF61C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003CF61C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF61Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003CF61Cu) [[unlikely]] return; }
L_003CF61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CF620:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CF640:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003CF684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00AC(c, 8u, depth); } }
L_003CF684:
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_003CF728; }
    c.f[13] = ld32((c.r[5].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF6A4u); c.f[12] = ld32((c.r[5].w[0] + 20u));  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CF6A4u) [[unlikely]] return; }
L_003CF6A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF6BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CF6BCu) [[unlikely]] return; }
L_003CF6BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF6D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CF6D4u) [[unlikely]] return; }
L_003CF6D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF6F4u); st32((c.r[29].w[0] + 184u), c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF6F4u) [[unlikely]] return; }
L_003CF6F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF70Cu); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00AC(c, 14u, depth + 1u); else { c.pc = 0x003D02F0u; return; } if (c.pc != 0x003CF70Cu) [[unlikely]] return; }
L_003CF70C:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[19].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF724u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x003CF724u) [[unlikely]] return; }
L_003CF724:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CF728:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[3].w[0] + 44u));  goto L_003CF834; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[16].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF74Cu); set32(c.r[6], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003CF74Cu) [[unlikely]] return; }
L_003CF74C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF758u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF758u) [[unlikely]] return; }
L_003CF758:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF76Cu); set32(c.r[6], c.r[6].w[0] + 25696u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003CF76Cu) [[unlikely]] return; }
L_003CF76C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF778u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF778u) [[unlikely]] return; }
L_003CF778:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF78Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CF78Cu) [[unlikely]] return; }
L_003CF78C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF7A4u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CF7A4u) [[unlikely]] return; }
L_003CF7A4:
    set32(c.r[5], c.r[16].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF7B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003CF7B4u) [[unlikely]] return; }
L_003CF7B4:
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[5] = ld32((c.r[29].w[0] + 216u));
    c.f[4] = ld32((c.r[29].w[0] + 136u));
    c.f[7] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = 0u;
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[6] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 208u), c.f[7]);
    st32((c.r[29].w[0] + 216u), c.f[5]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[5] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[4]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[4]);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.f[1]);  if (t) { goto L_003CF850; } }
L_003CF834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[2]);
    c.budget -= 7;
L_003CF850:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 6u);  goto L_003CFA4C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[16].w[0] + 64u));  goto L_003CF9B4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003CF91C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF884u); c.f[12] = ld32((c.r[16].w[0] + 52u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF884u) [[unlikely]] return; }
L_003CF884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF89Cu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF89Cu) [[unlikely]] return; }
L_003CF89C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8B4u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF8B4u) [[unlikely]] return; }
L_003CF8B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8CCu); c.f[23] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF8CCu) [[unlikely]] return; }
L_003CF8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[23]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8F4u); st32((c.r[29].w[0] + 200u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF8F4u) [[unlikely]] return; }
L_003CF8F4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF904u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CF904u) [[unlikely]] return; }
L_003CF904:
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF914u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003CF914u) [[unlikely]] return; }
L_003CF914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003CFD9C; } }
L_003CF91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF930u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF930u) [[unlikely]] return; }
L_003CF930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF948u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF948u) [[unlikely]] return; }
L_003CF948:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF960u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF960u) [[unlikely]] return; }
L_003CF960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[22]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF988u); st32((c.r[29].w[0] + 200u), c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CF988u) [[unlikely]] return; }
L_003CF988:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF99Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CF99Cu) [[unlikely]] return; }
L_003CF99C:
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF9ACu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003CF9ACu) [[unlikely]] return; }
L_003CF9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CFD98; } }
L_003CF9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF9BCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF9BCu) [[unlikely]] return; }
L_003CF9BC:
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF9E8u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CF9E8u) [[unlikely]] return; }
L_003CF9E8:
    c.f[2] = ld32((c.r[20].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[20].w[0] + 56u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA10u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFA10u) [[unlikely]] return; }
L_003CFA10:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[22]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CFD98; } }
L_003CFA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA54u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003CFA54u) [[unlikely]] return; }
L_003CFA54:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 44u)));  goto L_003CFA80; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25712u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003CC000u < 16384u) { entry = entries_00AB[(t - 0x003CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CFA7C:
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CFA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA88u); c.f[12] = ld32((c.r[20].w[0] + 64u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFA88u) [[unlikely]] return; }
L_003CFA88:
    c.f[2] = ld32((c.r[20].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[20].w[0] + 60u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFAB4u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFAB4u) [[unlikely]] return; }
L_003CFAB4:
    c.f[4] = ld32((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[3]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CFD98; } }
L_003CFAFC:
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB08u); c.f[12] = ld32((c.r[20].w[0] + 64u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFB08u) [[unlikely]] return; }
L_003CFB08:
    c.f[2] = ld32((c.r[20].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[20].w[0] + 60u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB34u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFB34u) [[unlikely]] return; }
L_003CFB34:
    c.f[4] = ld32((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[3]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CFD98; } }
L_003CFB7C:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB88u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFB88u) [[unlikely]] return; }
L_003CFB88:
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFBC0u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFBC0u) [[unlikely]] return; }
L_003CFBC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[22]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CFD98; } }
L_003CFBFC:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC08u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFC08u) [[unlikely]] return; }
L_003CFC08:
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC40u); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFC40u) [[unlikely]] return; }
L_003CFC40:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[22]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CFD98; } }
L_003CFC7C:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFCA8u); c.f[21] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFCA8u) [[unlikely]] return; }
L_003CFCA8:
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFCD0u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFCD0u) [[unlikely]] return; }
L_003CFCD0:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[22]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CFD98; } }
L_003CFD0C:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFD38u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFD38u) [[unlikely]] return; }
L_003CFD38:
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFD60u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFD60u) [[unlikely]] return; }
L_003CFD60:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[20] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[22]);
    st32((c.r[18].w[0] + 72u), c.f[21]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 14;
L_003CFD98:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CFD9C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 44u)));  goto L_003CFDE0; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFDCCu); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003CFDCCu) [[unlikely]] return; }
L_003CFDCC:
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFDDCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003CFDDCu) [[unlikely]] return; }
L_003CFDDC:
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CFDE0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CFEE0; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE00u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003CFE00u) [[unlikely]] return; }
L_003CFE00:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE0Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CFE0Cu) [[unlikely]] return; }
L_003CFE0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 172u));
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE20u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFE20u) [[unlikely]] return; }
L_003CFE20:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[2].w[0] + 168u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE34u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003CFE34u) [[unlikely]] return; }
L_003CFE34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_003CFEBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE60u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFE60u) [[unlikely]] return; }
L_003CFE60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE78u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFE78u) [[unlikely]] return; }
L_003CFE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE90u); c.f[23] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CFE90u) [[unlikely]] return; }
L_003CFE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[23]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEB8u); st32((c.r[29].w[0] + 200u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003CFEB8u) [[unlikely]] return; }
L_003CFEB8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_003CFEBC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003CFEC8u) [[unlikely]] return; }
L_003CFEC8:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFED8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003CFED8u) [[unlikely]] return; }
L_003CFED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003CFF3C; } }
L_003CFEE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CFF38; } }
    c.f[12] = ld32((c.r[5].w[0] + 160u));
    c.f[13] = ld32((c.r[5].w[0] + 164u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFEF8u) [[unlikely]] return; }
L_003CFEF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[22] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 152u));
    c.f[13] = ld32((c.r[2].w[0] + 156u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFF10u) [[unlikely]] return; }
L_003CFF10:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 144u));
    c.f[13] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFF28u) [[unlikely]] return; }
L_003CFF28:
    st32((c.r[18].w[0] + 48u), c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[21]);
    st32((c.r[18].w[0] + 56u), c.f[22]);
    st32((c.r[18].w[0] + 60u), c.f[20]);
    c.budget -= 4;
L_003CFF38:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CFF3C:
    c.f[12] = ld32((c.r[2].w[0] + 192u));
    c.f[13] = ld32((c.r[2].w[0] + 196u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFF4Cu) [[unlikely]] return; }
L_003CFF4C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[22] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 184u));
    c.f[13] = ld32((c.r[2].w[0] + 188u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFF64u) [[unlikely]] return; }
L_003CFF64:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 176u));
    c.f[13] = ld32((c.r[2].w[0] + 180u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFF7Cu) [[unlikely]] return; }
L_003CFF7C:
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[21]);
    st32((c.r[18].w[0] + 40u), c.f[22]);
    st32((c.r[18].w[0] + 44u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 68u));
    c.f[13] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFFA0u) [[unlikely]] return; }
L_003CFFA0:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = c.f[0];  if (t) { goto L_003CFFC8; } }
    c.f[12] = ld32((c.r[3].w[0] + 76u));
    c.f[13] = ld32((c.r[3].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFFC0u) [[unlikely]] return; }
L_003CFFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003CFFDC; } }
L_003CFFC8:
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 5;
L_003CFFDC:
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 12u, depth + 1u); else { c.pc = 0x003D02A0u; return; } if (c.pc != 0x003CFFF0u) [[unlikely]] return; }
L_003CFFF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0004u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00AC(c, 2u, depth);
}

}
