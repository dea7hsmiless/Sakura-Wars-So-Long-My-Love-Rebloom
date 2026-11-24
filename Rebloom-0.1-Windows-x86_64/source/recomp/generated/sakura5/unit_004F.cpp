#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004F[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0,
    291, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0,
    0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404,
    0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
};

void unit_004F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0025C000;
    case 2u: goto L_0025C018;
    case 3u: goto L_0025C040;
    case 4u: goto L_0025C090;
    case 5u: goto L_0025C170;
    case 6u: goto L_0025C1C0;
    case 7u: goto L_0025C234;
    case 8u: goto L_0025C258;
    case 9u: goto L_0025C280;
    case 10u: goto L_0025C2A0;
    case 11u: goto L_0025C2B4;
    case 12u: goto L_0025C2C8;
    case 13u: goto L_0025C2E0;
    case 14u: goto L_0025C30C;
    case 15u: goto L_0025C318;
    case 16u: goto L_0025C330;
    case 17u: goto L_0025C350;
    case 18u: goto L_0025C380;
    case 19u: goto L_0025C3B4;
    case 20u: goto L_0025C3E0;
    case 21u: goto L_0025C404;
    case 22u: goto L_0025C40C;
    case 23u: goto L_0025C418;
    case 24u: goto L_0025C42C;
    case 25u: goto L_0025C43C;
    case 26u: goto L_0025C4E0;
    case 27u: goto L_0025C618;
    case 28u: goto L_0025C634;
    case 29u: goto L_0025C664;
    case 30u: goto L_0025C74C;
    case 31u: goto L_0025C7A8;
    case 32u: goto L_0025C804;
    case 33u: goto L_0025C814;
    case 34u: goto L_0025C828;
    case 35u: goto L_0025C850;
    case 36u: goto L_0025C870;
    case 37u: goto L_0025C880;
    case 38u: goto L_0025C894;
    case 39u: goto L_0025C8AC;
    case 40u: goto L_0025C8C0;
    case 41u: goto L_0025C8F0;
    case 42u: goto L_0025C908;
    case 43u: goto L_0025C920;
    case 44u: goto L_0025C948;
    case 45u: goto L_0025C954;
    case 46u: goto L_0025C960;
    case 47u: goto L_0025C9DC;
    case 48u: goto L_0025C9E4;
    case 49u: goto L_0025CA18;
    case 50u: goto L_0025CA2C;
    case 51u: goto L_0025CA3C;
    case 52u: goto L_0025CA54;
    case 53u: goto L_0025CA5C;
    case 54u: goto L_0025CA64;
    case 55u: goto L_0025CA78;
    case 56u: goto L_0025CAC4;
    case 57u: goto L_0025CB00;
    case 58u: goto L_0025CB4C;
    case 59u: goto L_0025CB74;
    case 60u: goto L_0025CB98;
    case 61u: goto L_0025CBAC;
    case 62u: goto L_0025CBBC;
    case 63u: goto L_0025CBFC;
    case 64u: goto L_0025CC38;
    case 65u: goto L_0025CC70;
    case 66u: goto L_0025CC80;
    case 67u: goto L_0025CCBC;
    case 68u: goto L_0025CCE0;
    case 69u: goto L_0025CD08;
    case 70u: goto L_0025CD1C;
    case 71u: goto L_0025CD30;
    case 72u: goto L_0025CD7C;
    case 73u: goto L_0025CD8C;
    case 74u: goto L_0025CD9C;
    case 75u: goto L_0025CDA4;
    case 76u: goto L_0025CDD0;
    case 77u: goto L_0025CDE8;
    case 78u: goto L_0025CDFC;
    case 79u: goto L_0025CE10;
    case 80u: goto L_0025CE28;
    case 81u: goto L_0025CE3C;
    case 82u: goto L_0025CE4C;
    case 83u: goto L_0025CE58;
    case 84u: goto L_0025CE60;
    case 85u: goto L_0025CE8C;
    case 86u: goto L_0025CE98;
    case 87u: goto L_0025CEB0;
    case 88u: goto L_0025CED0;
    case 89u: goto L_0025CF10;
    case 90u: goto L_0025CF3C;
    case 91u: goto L_0025CF64;
    case 92u: goto L_0025CF8C;
    case 93u: goto L_0025CFB0;
    case 94u: goto L_0025D014;
    case 95u: goto L_0025D020;
    case 96u: goto L_0025D030;
    case 97u: goto L_0025D064;
    case 98u: goto L_0025D08C;
    case 99u: goto L_0025D0A0;
    case 100u: goto L_0025D0B4;
    case 101u: goto L_0025D0E0;
    case 102u: goto L_0025D0F0;
    case 103u: goto L_0025D124;
    case 104u: goto L_0025D138;
    case 105u: goto L_0025D15C;
    case 106u: goto L_0025D170;
    case 107u: goto L_0025D184;
    case 108u: goto L_0025D190;
    case 109u: goto L_0025D1A0;
    case 110u: goto L_0025D1DC;
    case 111u: goto L_0025D1E4;
    case 112u: goto L_0025D2A4;
    case 113u: goto L_0025D2C8;
    case 114u: goto L_0025D2D4;
    case 115u: goto L_0025D2F0;
    case 116u: goto L_0025D318;
    case 117u: goto L_0025D388;
    case 118u: goto L_0025D408;
    case 119u: goto L_0025D420;
    case 120u: goto L_0025D434;
    case 121u: goto L_0025D444;
    case 122u: goto L_0025D468;
    case 123u: goto L_0025D480;
    case 124u: goto L_0025D4A0;
    case 125u: goto L_0025D4AC;
    case 126u: goto L_0025D4CC;
    case 127u: goto L_0025D4F4;
    case 128u: goto L_0025D514;
    case 129u: goto L_0025D528;
    case 130u: goto L_0025D538;
    case 131u: goto L_0025D55C;
    case 132u: goto L_0025D574;
    case 133u: goto L_0025D594;
    case 134u: goto L_0025D5A0;
    case 135u: goto L_0025D5C0;
    case 136u: goto L_0025D5E0;
    case 137u: goto L_0025D648;
    case 138u: goto L_0025D674;
    case 139u: goto L_0025D6A4;
    case 140u: goto L_0025D6C0;
    case 141u: goto L_0025D6F4;
    case 142u: goto L_0025D6FC;
    case 143u: goto L_0025D758;
    case 144u: goto L_0025D76C;
    case 145u: goto L_0025D774;
    case 146u: goto L_0025D77C;
    case 147u: goto L_0025D798;
    case 148u: goto L_0025D7C0;
    case 149u: goto L_0025D830;
    case 150u: goto L_0025D8AC;
    case 151u: goto L_0025D8D8;
    case 152u: goto L_0025D8E8;
    case 153u: goto L_0025D900;
    case 154u: goto L_0025D940;
    case 155u: goto L_0025D970;
    case 156u: goto L_0025D97C;
    case 157u: goto L_0025D994;
    case 158u: goto L_0025D9A8;
    case 159u: goto L_0025D9B8;
    case 160u: goto L_0025D9DC;
    case 161u: goto L_0025D9E8;
    case 162u: goto L_0025D9F4;
    case 163u: goto L_0025DA10;
    case 164u: goto L_0025DA4C;
    case 165u: goto L_0025DA64;
    case 166u: goto L_0025DA80;
    case 167u: goto L_0025DB88;
    case 168u: goto L_0025DBA0;
    case 169u: goto L_0025DBBC;
    case 170u: goto L_0025DBEC;
    case 171u: goto L_0025DC08;
    case 172u: goto L_0025DC38;
    case 173u: goto L_0025DC90;
    case 174u: goto L_0025DCA4;
    case 175u: goto L_0025DCE0;
    case 176u: goto L_0025DCF0;
    case 177u: goto L_0025DD0C;
    case 178u: goto L_0025DD34;
    case 179u: goto L_0025DD80;
    case 180u: goto L_0025DDCC;
    case 181u: goto L_0025DDEC;
    case 182u: goto L_0025DDF8;
    case 183u: goto L_0025DE18;
    case 184u: goto L_0025DE38;
    case 185u: goto L_0025DE50;
    case 186u: goto L_0025DE70;
    case 187u: goto L_0025DEA0;
    case 188u: goto L_0025DED8;
    case 189u: goto L_0025DEE0;
    case 190u: goto L_0025DEEC;
    case 191u: goto L_0025DF30;
    case 192u: goto L_0025DF50;
    case 193u: goto L_0025DF7C;
    case 194u: goto L_0025DFA0;
    case 195u: goto L_0025DFD0;
    case 196u: goto L_0025DFE0;
    case 197u: goto L_0025E014;
    case 198u: goto L_0025E050;
    case 199u: goto L_0025E064;
    case 200u: goto L_0025E0A0;
    case 201u: goto L_0025E0B4;
    case 202u: goto L_0025E0F0;
    case 203u: goto L_0025E10C;
    case 204u: goto L_0025E130;
    case 205u: goto L_0025E14C;
    case 206u: goto L_0025E170;
    case 207u: goto L_0025E1A8;
    case 208u: goto L_0025E1E4;
    case 209u: goto L_0025E210;
    case 210u: goto L_0025E250;
    case 211u: goto L_0025E290;
    case 212u: goto L_0025E2E0;
    case 213u: goto L_0025E310;
    case 214u: goto L_0025E33C;
    case 215u: goto L_0025E350;
    case 216u: goto L_0025E37C;
    case 217u: goto L_0025E390;
    case 218u: goto L_0025E3B0;
    case 219u: goto L_0025E3D0;
    case 220u: goto L_0025E400;
    case 221u: goto L_0025E418;
    case 222u: goto L_0025E42C;
    case 223u: goto L_0025E43C;
    case 224u: goto L_0025E460;
    case 225u: goto L_0025E48C;
    case 226u: goto L_0025E498;
    case 227u: goto L_0025E4B0;
    case 228u: goto L_0025E4D0;
    case 229u: goto L_0025E4F0;
    case 230u: goto L_0025E508;
    case 231u: goto L_0025E530;
    case 232u: goto L_0025E568;
    case 233u: goto L_0025E574;
    case 234u: goto L_0025E580;
    case 235u: goto L_0025E5AC;
    case 236u: goto L_0025E5BC;
    case 237u: goto L_0025E5F0;
    case 238u: goto L_0025E620;
    case 239u: goto L_0025E674;
    case 240u: goto L_0025E6A0;
    case 241u: goto L_0025E6B4;
    case 242u: goto L_0025E6CC;
    case 243u: goto L_0025E6F0;
    case 244u: goto L_0025E700;
    case 245u: goto L_0025E760;
    case 246u: goto L_0025E784;
    case 247u: goto L_0025E7C0;
    case 248u: goto L_0025E7E0;
    case 249u: goto L_0025E810;
    case 250u: goto L_0025E84C;
    case 251u: goto L_0025E85C;
    case 252u: goto L_0025E890;
    case 253u: goto L_0025E8CC;
    case 254u: goto L_0025E8DC;
    case 255u: goto L_0025E8E8;
    case 256u: goto L_0025E930;
    case 257u: goto L_0025E950;
    case 258u: goto L_0025E994;
    case 259u: goto L_0025EA20;
    case 260u: goto L_0025EA30;
    case 261u: goto L_0025EA6C;
    case 262u: goto L_0025EA78;
    case 263u: goto L_0025EAF0;
    case 264u: goto L_0025EB0C;
    case 265u: goto L_0025EC2C;
    case 266u: goto L_0025ECB8;
    case 267u: goto L_0025ECC4;
    case 268u: goto L_0025ECF0;
    case 269u: goto L_0025ED10;
    case 270u: goto L_0025ED1C;
    case 271u: goto L_0025ED50;
    case 272u: goto L_0025ED90;
    case 273u: goto L_0025EDB0;
    case 274u: goto L_0025EDBC;
    case 275u: goto L_0025EDDC;
    case 276u: goto L_0025EE30;
    case 277u: goto L_0025EE78;
    case 278u: goto L_0025EEA0;
    case 279u: goto L_0025EEAC;
    case 280u: goto L_0025EEE0;
    case 281u: goto L_0025EF10;
    case 282u: goto L_0025EF24;
    case 283u: goto L_0025EF40;
    case 284u: goto L_0025EF7C;
    case 285u: goto L_0025EF88;
    case 286u: goto L_0025EF9C;
    case 287u: goto L_0025EFAC;
    case 288u: goto L_0025EFC0;
    case 289u: goto L_0025EFDC;
    case 290u: goto L_0025EFF0;
    case 291u: goto L_0025F000;
    case 292u: goto L_0025F004;
    case 293u: goto L_0025F040;
    case 294u: goto L_0025F080;
    case 295u: goto L_0025F09C;
    case 296u: goto L_0025F0C0;
    case 297u: goto L_0025F0CC;
    case 298u: goto L_0025F128;
    case 299u: goto L_0025F140;
    case 300u: goto L_0025F14C;
    case 301u: goto L_0025F174;
    case 302u: goto L_0025F1E0;
    case 303u: goto L_0025F218;
    case 304u: goto L_0025F270;
    case 305u: goto L_0025F288;
    case 306u: goto L_0025F2A4;
    case 307u: goto L_0025F2F0;
    case 308u: goto L_0025F33C;
    case 309u: goto L_0025F348;
    case 310u: goto L_0025F3B0;
    case 311u: goto L_0025F3C0;
    case 312u: goto L_0025F3D0;
    case 313u: goto L_0025F3E4;
    case 314u: goto L_0025F3EC;
    case 315u: goto L_0025F3F8;
    case 316u: goto L_0025F410;
    case 317u: goto L_0025F434;
    case 318u: goto L_0025F480;
    case 319u: goto L_0025F490;
    case 320u: goto L_0025F4AC;
    case 321u: goto L_0025F4B8;
    case 322u: goto L_0025F4D4;
    case 323u: goto L_0025F4E4;
    case 324u: goto L_0025F4F0;
    case 325u: goto L_0025F508;
    case 326u: goto L_0025F520;
    case 327u: goto L_0025F540;
    case 328u: goto L_0025F568;
    case 329u: goto L_0025F578;
    case 330u: goto L_0025F584;
    case 331u: goto L_0025F59C;
    case 332u: goto L_0025F5B0;
    case 333u: goto L_0025F5D4;
    case 334u: goto L_0025F5EC;
    case 335u: goto L_0025F5F8;
    case 336u: goto L_0025F610;
    case 337u: goto L_0025F634;
    case 338u: goto L_0025F660;
    case 339u: goto L_0025F670;
    case 340u: goto L_0025F67C;
    case 341u: goto L_0025F698;
    case 342u: goto L_0025F6A8;
    case 343u: goto L_0025F6C0;
    case 344u: goto L_0025F6DC;
    case 345u: goto L_0025F6F4;
    case 346u: goto L_0025F700;
    case 347u: goto L_0025F720;
    case 348u: goto L_0025F750;
    case 349u: goto L_0025F75C;
    case 350u: goto L_0025F794;
    case 351u: goto L_0025F7B4;
    case 352u: goto L_0025F7C0;
    case 353u: goto L_0025F7E8;
    case 354u: goto L_0025F7F0;
    case 355u: goto L_0025F804;
    case 356u: goto L_0025F814;
    case 357u: goto L_0025F828;
    case 358u: goto L_0025F850;
    case 359u: goto L_0025F860;
    case 360u: goto L_0025F874;
    case 361u: goto L_0025F8A8;
    case 362u: goto L_0025F8C4;
    case 363u: goto L_0025F8F4;
    case 364u: goto L_0025F91C;
    case 365u: goto L_0025F944;
    case 366u: goto L_0025F960;
    case 367u: goto L_0025F974;
    case 368u: goto L_0025F990;
    case 369u: goto L_0025F9A4;
    case 370u: goto L_0025F9AC;
    case 371u: goto L_0025F9BC;
    case 372u: goto L_0025F9C4;
    case 373u: goto L_0025F9E0;
    case 374u: goto L_0025F9F8;
    case 375u: goto L_0025FA1C;
    case 376u: goto L_0025FA3C;
    case 377u: goto L_0025FA58;
    case 378u: goto L_0025FA60;
    case 379u: goto L_0025FA6C;
    case 380u: goto L_0025FA80;
    case 381u: goto L_0025FAE0;
    case 382u: goto L_0025FAE8;
    case 383u: goto L_0025FB04;
    case 384u: goto L_0025FB14;
    case 385u: goto L_0025FB28;
    case 386u: goto L_0025FB38;
    case 387u: goto L_0025FB4C;
    case 388u: goto L_0025FB6C;
    case 389u: goto L_0025FB88;
    case 390u: goto L_0025FBB0;
    case 391u: goto L_0025FBBC;
    case 392u: goto L_0025FBD4;
    case 393u: goto L_0025FBEC;
    case 394u: goto L_0025FC10;
    case 395u: goto L_0025FC54;
    case 396u: goto L_0025FC80;
    case 397u: goto L_0025FCA0;
    case 398u: goto L_0025FCC4;
    case 399u: goto L_0025FCCC;
    case 400u: goto L_0025FD10;
    case 401u: goto L_0025FD2C;
    case 402u: goto L_0025FD74;
    case 403u: goto L_0025FDD0;
    case 404u: goto L_0025FDFC;
    case 405u: goto L_0025FE08;
    case 406u: goto L_0025FE20;
    case 407u: goto L_0025FE40;
    case 408u: goto L_0025FE6C;
    case 409u: goto L_0025FE8C;
    case 410u: goto L_0025FEAC;
    case 411u: goto L_0025FEC4;
    case 412u: goto L_0025FEF0;
    case 413u: goto L_0025FF18;
    case 414u: goto L_0025FF34;
    case 415u: goto L_0025FF38;
    case 416u: goto L_0025FF70;
    case 417u: goto L_0025FFB4;
    case 418u: goto L_0025FFB8;
    case 419u: goto L_0025FFC4;
    case 420u: goto L_0025FFF8;
    default: bad_entry(c, 0x0025C000u); return;
    }
L_0025C000:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16016u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C018u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0025C018u) [[unlikely]] return; }
L_0025C018:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025C040:
    set32(c.r[3], 0u + 7u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 10352u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 10320u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0220000u);
    c.r[3].d[0] = c.r[3].d[0] | 11572ull;
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[3].w[0]);  c.pc = t; return; }
L_0025C090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[5], c.r[3].w[0] >> 1);  goto L_0025C0AC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025C0C4; } }
L_0025C0AC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0025C0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 68u), c.f[1]);  if (t) { goto L_0025C0EC; } }
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.budget -= 1;
L_0025C0EC:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025C164; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[5], c.r[3].w[0] >> 1);  goto L_0025C118; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025C130; } }
L_0025C118:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0025C130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025C164; } }
    st32((c.r[4].w[0] + 60u), c.f[1]);
    c.budget -= 1;
L_0025C164:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025C170:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0025C180; }
L_0025C180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025C280; } }
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C1C0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_003C(c, 178u, depth + 1u); else { c.pc = 0x00211FA0u; return; } if (c.pc != 0x0025C1C0u) [[unlikely]] return; }
L_0025C1C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], c.r[2].w[0] << 2);  goto L_0025C1F4; }
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025C1F0; } }
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 2;
L_0025C1F0:
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 1;
L_0025C1F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0025C234; } }
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C234u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003A(c, 191u, depth + 1u); else { c.pc = 0x00209AC0u; return; } if (c.pc != 0x0025C234u) [[unlikely]] return; }
L_0025C234:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[14] = ld32((c.r[28].w[0] - 32248u));
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C258u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 180u, depth + 1u); else { c.pc = 0x00212000u; return; } if (c.pc != 0x0025C258u) [[unlikely]] return; }
L_0025C258:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[14] = ld32((c.r[28].w[0] - 32248u));
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.f[13] = c.r[2].w[0];
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C280u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 180u, depth + 1u); else { c.pc = 0x00212000u; return; } if (c.pc != 0x0025C280u) [[unlikely]] return; }
L_0025C280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025C2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0025C2B4u) [[unlikely]] return; }
L_0025C2B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2C8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 17u, depth + 1u); else { c.pc = 0x0025C350u; return; } if (c.pc != 0x0025C2C8u) [[unlikely]] return; }
L_0025C2C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025C330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C30Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 18u, depth + 1u); else { c.pc = 0x0025C380u; return; } if (c.pc != 0x0025C30Cu) [[unlikely]] return; }
L_0025C30C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0025C318u) [[unlikely]] return; }
L_0025C318:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0025C334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0025C330u) [[unlikely]] return; }
L_0025C330:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025C334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025C350:
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0025C380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0025C3BC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_0025C3B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C3B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C3B4u) [[unlikely]] return; }
L_0025C3B4:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_0025C3B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0025C3BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 18u, depth + 1u); else { c.pc = 0x0025C380u; return; } if (c.pc != 0x0025C404u) [[unlikely]] return; }
L_0025C404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C40Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 17u, depth + 1u); else { c.pc = 0x0025C350u; return; } if (c.pc != 0x0025C40Cu) [[unlikely]] return; }
L_0025C40C:
    set32(c.r[4], 0u + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C418u); st32((c.r[16].w[0] + 52u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025C418u) [[unlikely]] return; }
L_0025C418:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  goto L_0025C430; }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C42Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x0025C42Cu) [[unlikely]] return; }
L_0025C42C:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_0025C430:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C43Cu); st32((c.r[16].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 195u, depth + 1u); else { c.pc = 0x00225B50u; return; } if (c.pc != 0x0025C43Cu) [[unlikely]] return; }
L_0025C43C:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[3].w[0] - 10064u));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], 0u + 96u);
    set32(c.r[4], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[6].w[0] + 284u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0] - 10060u));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[3].w[0] + 280u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[4].w[0] + 224u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[4].w[0] + 228u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025C4E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025C838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0025C520; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025C538; } }
L_0025C520:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_0025C538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[2] = ld32((c.r[18].w[0] + 68u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 68u), c.f[1]);  if (t) { goto L_0025C5D8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    st32((c.r[5].w[0] + 240u), c.r[7].w[0]);
    set32(c.r[2], 0u - 16385u);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[5].w[0] + 244u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 31724u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[4].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 29;
L_0025C5D8:
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 10u);
    c.f[12] = 0u;
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFF400000u);  goto L_0025C628; }
L_0025C618:
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF400000u);
    c.budget -= 4;
L_0025C628:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C634u); c.r[5].d[0] = c.r[2].d[0] | 16448ull;  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x0025C634u) [[unlikely]] return; }
L_0025C634:
    c.f[0] = c.r[17].w[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 68u));  goto L_0025C6C8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C664u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x0025C664u) [[unlikely]] return; }
L_0025C664:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    st32((c.r[5].w[0] + 240u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    st32((c.r[5].w[0] + 244u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    st32((c.r[4].w[0] + 160u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[5].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_0025C7D4; } }
L_0025C6C8:
    set32(c.r[2], 0u + 20u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  goto L_0025C714; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], ld32((c.r[18].w[0] + 56u)));  goto L_0025C740; }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_0025C714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_0025C774; } }
L_0025C740:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C74Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x0025C74Cu) [[unlikely]] return; }
L_0025C74C:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 10;
L_0025C774:
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C7A8u);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0025C7A8u) [[unlikely]] return; }
L_0025C7A8:
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 160u), c.r[16].w[0]);
    c.budget -= 11;
L_0025C7D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0025C83C; }
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025C838; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_0025C804:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0025C838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C814u); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025C814u) [[unlikely]] return; }
L_0025C814:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C828u); c.r[5].d[0] = c.r[2].d[0] | 4100ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0025C828u) [[unlikely]] return; }
L_0025C828:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 8193u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0025C838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025C83C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025C850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0025C874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C870u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x0025C870u) [[unlikely]] return; }
L_0025C870:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0025C874:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025C880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0025C894u) [[unlikely]] return; }
L_0025C894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20464u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8ACu); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0025C8ACu) [[unlikely]] return; }
L_0025C8AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025C908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8F0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0025C8F0u) [[unlikely]] return; }
L_0025C8F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0025C90C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C908u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0025C908u) [[unlikely]] return; }
L_0025C908:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025C90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025C920:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C948u); set32(c.r[4], 0u + 277u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025C948u) [[unlikely]] return; }
L_0025C948:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C954u); set32(c.r[4], 0u + 4107u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025C954u) [[unlikely]] return; }
L_0025C954:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C960u); set32(c.r[4], 0u + 283u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025C960u) [[unlikely]] return; }
L_0025C960:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025CCF0; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_0025CC5C; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0025CC48; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_0025CC0C; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_0025CBE8; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0025CBCC; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0025CA4C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025CA24; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_0025C9D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0025CDB4; } }
L_0025C9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9DCu);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0025C9DCu) [[unlikely]] return; }
L_0025C9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9E4u); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 147u, depth + 1u); else { c.pc = 0x001B0F70u; return; } if (c.pc != 0x0025C9E4u) [[unlikely]] return; }
L_0025C9E4:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16384u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA18u); st32((c.r[29].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 302u, depth + 1u); else { c.pc = 0x001CE6C0u; return; } if (c.pc != 0x0025CA18u) [[unlikely]] return; }
L_0025CA18:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_0025CA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA2Cu);  if (depth < kMaxDepth) unit_002B(c, 306u, depth + 1u); else { c.pc = 0x001CE760u; return; } if (c.pc != 0x0025CA2Cu) [[unlikely]] return; }
L_0025CA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025CDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA3Cu);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x0025CA3Cu) [[unlikely]] return; }
L_0025CA3C:
    set32(c.r[3], 0u + 1900u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0025CBE4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0025CA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA54u); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x0025CA54u) [[unlikely]] return; }
L_0025CA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA5Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x0025CA5Cu) [[unlikely]] return; }
L_0025CA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA64u); set32(c.r[4], c.r[2].w[0] + 76u);  if (depth < kMaxDepth) unit_0038(c, 59u, depth + 1u); else { c.pc = 0x002005B0u; return; } if (c.pc != 0x0025CA64u) [[unlikely]] return; }
L_0025CA64:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA78u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0025CA78u) [[unlikely]] return; }
L_0025CA78:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0025CA8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  if (t) { goto L_0025CAA0; } }
L_0025CA8C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025CAA0; }
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0025CAA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0025CAC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025CAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025CAC4u) [[unlikely]] return; }
L_0025CAC4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0025CB5C; }
    c.r[2].d[0] = c.r[20].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1100u);  goto L_0025CAE8; }
    c.r[1].d[0] = c.r[20].sd[0] < 1100ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_0025CB58; }
    set32(c.r[2], 0u + 1100u);
    c.budget -= 1;
L_0025CAE8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0025CB58; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB00u); set32(c.r[6], 0u + 67u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0025CB00u) [[unlikely]] return; }
L_0025CB00:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0025CB14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_0025CB28; } }
L_0025CB14:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025CB28; }
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0025CB28:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0025CB4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025CB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025CB4Cu) [[unlikely]] return; }
L_0025CB4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025CB58; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0025CB58:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0025CB5C:
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB74u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0025CB74u) [[unlikely]] return; }
L_0025CB74:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01150000u);  goto L_0025CB9C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025CB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025CB98u) [[unlikely]] return; }
L_0025CB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01150000u);
    c.budget -= 1;
L_0025CB9C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBACu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0025CBACu) [[unlikely]] return; }
L_0025CBAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01150000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBBCu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0025CBBCu) [[unlikely]] return; }
L_0025CBBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0025CDB0; } }
L_0025CBCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CDB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025CC58; } }
L_0025CBE4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0025CBE8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBFCu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0025CBFCu) [[unlikely]] return; }
L_0025CBFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0025CDB0; } }
L_0025CC0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CDB0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0025CC58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01150000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CC38u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0025CC38u) [[unlikely]] return; }
L_0025CC38:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0025CDB0; } }
L_0025CC48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CDB0; } }
L_0025CC58:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0025CC5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CC70u); st32((c.r[18].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001E92E0u; return; } if (c.pc != 0x0025CC70u) [[unlikely]] return; }
L_0025CC70:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CC80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0025CC80u) [[unlikely]] return; }
L_0025CC80:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0025CC98; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025CCAC; } }
L_0025CC98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025CCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[29].w[0] + 128u));  if (t) { goto L_0025CCAC; } }
L_0025CCA8:
    c.f[13] = 0u;
    c.budget -= 1;
L_0025CCAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CCBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 131u, depth + 1u); else { c.pc = 0x001E9330u; return; } if (c.pc != 0x0025CCBCu) [[unlikely]] return; }
L_0025CCBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 52u)));  goto L_0025CCE4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0025CCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CCE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025CCE0u) [[unlikely]] return; }
L_0025CCE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0025CCE4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0025CDB0; } }
L_0025CCF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD08u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x0025CD08u) [[unlikely]] return; }
L_0025CD08:
    set32(c.r[3], 0u + 1007u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0025CD24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD1Cu); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0025CD1Cu) [[unlikely]] return; }
L_0025CD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025CD9C; } }
L_0025CD24:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0025CD30u) [[unlikely]] return; }
L_0025CD30:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0025CD44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_0025CD58; } }
L_0025CD44:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025CD58; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0025CD58:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0025CD7C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025CD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025CD7Cu) [[unlikely]] return; }
L_0025CD7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0025CD94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD8Cu); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0025CD8Cu) [[unlikely]] return; }
L_0025CD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025CD9C; } }
L_0025CD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD9Cu);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0025CD9Cu) [[unlikely]] return; }
L_0025CD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDA4u);  if (depth < kMaxDepth) unit_0024(c, 504u, depth + 1u); else { c.pc = 0x001B3720u; return; } if (c.pc != 0x0025CDA4u) [[unlikely]] return; }
L_0025CDA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_0025CDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0025CDB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0025CDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDE8u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0025CDE8u) [[unlikely]] return; }
L_0025CDE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0025CE00; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 37u, depth + 1u); else { c.pc = 0x0025C880u; return; } if (c.pc != 0x0025CDFCu) [[unlikely]] return; }
L_0025CDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025CE00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4098u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x0025CE28u) [[unlikely]] return; }
L_0025CE28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE3Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 88u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x0025CE3Cu) [[unlikely]] return; }
L_0025CE3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE4Cu); set32(c.r[5], c.r[5].w[0] - 10048u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0025CE4Cu) [[unlikely]] return; }
L_0025CE4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_0025CE58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025CEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE8Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 89u, depth + 1u); else { c.pc = 0x0025CF10u; return; } if (c.pc != 0x0025CE8Cu) [[unlikely]] return; }
L_0025CE8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x0025CE98u) [[unlikely]] return; }
L_0025CE98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0025CEB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0025CEB0u) [[unlikely]] return; }
L_0025CEB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025CEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025CED0:
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0025CF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 172u)));  goto L_0025CF44; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CF3Cu) [[unlikely]] return; }
L_0025CF3C:
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 2;
L_0025CF44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  goto L_0025CF6C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), 0u);  goto L_0025CF68; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CF64u) [[unlikely]] return; }
L_0025CF64:
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 1;
L_0025CF68:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_0025CF6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0025CF94; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 176u), 0u);  goto L_0025CF90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CF8Cu) [[unlikely]] return; }
L_0025CF8C:
    st32((c.r[16].w[0] + 176u), 0u);
    c.budget -= 1;
L_0025CF90:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0025CF94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0025D018; }
    set32(c.r[5], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D004; } }
    c.f[2] = ld32((c.r[5].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_0025D004; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025D004:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D014u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x0025D014u) [[unlikely]] return; }
L_0025D014:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0025D018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025D020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025D030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  goto L_0025D06C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), 0u);  goto L_0025D068; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D064u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D064u) [[unlikely]] return; }
L_0025D064:
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 1;
L_0025D068:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_0025D06C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0025D094; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 176u), 0u);  goto L_0025D090; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D08Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D08Cu) [[unlikely]] return; }
L_0025D08C:
    st32((c.r[16].w[0] + 176u), 0u);
    c.budget -= 1;
L_0025D090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025D094:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025D0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 365u, depth + 1u); else { c.pc = 0x001CF330u; return; } if (c.pc != 0x0025D0B4u) [[unlikely]] return; }
L_0025D0B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0025D0E4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D0E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0E0u); set32(c.r[5], c.r[5].w[0] - 9835u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D0E0u) [[unlikely]] return; }
L_0025D0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025D0E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025D0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D148; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], 0u + 4096u);  goto L_0025D11C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025D160; } }
L_0025D11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D124u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025D124u) [[unlikely]] return; }
L_0025D124:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D138u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0025D138u) [[unlikely]] return; }
L_0025D138:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D15C; } }
L_0025D148:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D15Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D15Cu) [[unlikely]] return; }
L_0025D15C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025D160:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025D170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 89u, depth + 1u); else { c.pc = 0x0025CF10u; return; } if (c.pc != 0x0025D184u) [[unlikely]] return; }
L_0025D184:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D190u) [[unlikely]] return; }
L_0025D190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025D1A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D1D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x402C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0025D1DC; } }
L_0025D1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D1DCu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x0025D1DCu) [[unlikely]] return; }
L_0025D1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D1E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x0025D1E4u) [[unlikely]] return; }
L_0025D1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = c.f[0];  if (t) { goto L_0025D200; } }
    c.f[21] = c.f[1];
    c.budget -= 1;
L_0025D200:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 56u)));  goto L_0025D584; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[29].w[0] + 88u), 0u);  goto L_0025D504; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_0025D4D8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 56u)));  goto L_0025D490; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 168u)));  goto L_0025D3F0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D344; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_0025D2B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0025D5C4; } }
L_0025D268:
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0025D278; }
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_0025D278:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_0025D290; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
L_0025D290:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  goto L_0025D2AC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D2A4u) [[unlikely]] return; }
L_0025D2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D5C0; } }
L_0025D2AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
L_0025D2B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2C8u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0025D2C8u) [[unlikely]] return; }
L_0025D2C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 87u, depth + 1u); else { c.pc = 0x00228A40u; return; } if (c.pc != 0x0025D2D4u) [[unlikely]] return; }
L_0025D2D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2F0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025D2F0u) [[unlikely]] return; }
L_0025D2F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  goto L_0025D31C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D318u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x0025D318u) [[unlikely]] return; }
L_0025D318:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_0025D31C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 148u), c.f[21]);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 10;
L_0025D344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0025D360; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025D378; } }
L_0025D360:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0025D378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D388u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x0025D388u) [[unlikely]] return; }
L_0025D388:
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 148u), c.f[0]);  if (t) { goto L_0025D3AC; } }
    st32((c.r[17].w[0] + 148u), c.f[1]);
    c.budget -= 1;
L_0025D3AC:
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[17].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025D5C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D5C0; } }
L_0025D3F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 92u), 0u);  goto L_0025D410; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D408u) [[unlikely]] return; }
L_0025D408:
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 2;
L_0025D410:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D420u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_002D(c, 67u, depth + 1u); else { c.pc = 0x001D49E0u; return; } if (c.pc != 0x0025D420u) [[unlikely]] return; }
L_0025D420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0025D43C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D434u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_004F(c, 95u, depth + 1u); else { c.pc = 0x0025D020u; return; } if (c.pc != 0x0025D434u) [[unlikely]] return; }
L_0025D434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (t) { goto L_0025D448; } }
L_0025D43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D444u);  if (depth < kMaxDepth) unit_004F(c, 96u, depth + 1u); else { c.pc = 0x0025D030u; return; } if (c.pc != 0x0025D444u) [[unlikely]] return; }
L_0025D444:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_0025D448:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_0025D46C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025D468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025D468u) [[unlikely]] return; }
L_0025D468:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_0025D46C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D480u); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0025D480u) [[unlikely]] return; }
L_0025D480:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D5C0; } }
L_0025D490:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0025D4C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4A0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0025D4A0u) [[unlikely]] return; }
L_0025D4A0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x0025D4ACu) [[unlikely]] return; }
L_0025D4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D4C0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_0025D4C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025D4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D4CCu) [[unlikely]] return; }
L_0025D4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D5C0; } }
L_0025D4D4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0025D4D8:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[6].d[0] = c.r[2].d[0] | 4098ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0025D4F4u) [[unlikely]] return; }
L_0025D4F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D5C0; } }
L_0025D504:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D514u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002D(c, 67u, depth + 1u); else { c.pc = 0x001D49E0u; return; } if (c.pc != 0x0025D514u) [[unlikely]] return; }
L_0025D514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0025D530; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D528u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_004F(c, 95u, depth + 1u); else { c.pc = 0x0025D020u; return; } if (c.pc != 0x0025D528u) [[unlikely]] return; }
L_0025D528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_0025D53C; } }
L_0025D530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D538u);  if (depth < kMaxDepth) unit_004F(c, 96u, depth + 1u); else { c.pc = 0x0025D030u; return; } if (c.pc != 0x0025D538u) [[unlikely]] return; }
L_0025D538:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0025D53C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  goto L_0025D560; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025D55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D55Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025D55Cu) [[unlikely]] return; }
L_0025D55C:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_0025D560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D574u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x0025D574u) [[unlikely]] return; }
L_0025D574:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D5C0; } }
L_0025D584:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0025D5B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D594u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0025D594u) [[unlikely]] return; }
L_0025D594:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x0025D5A0u) [[unlikely]] return; }
L_0025D5A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D5B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_0025D5B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025D5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D5C0u) [[unlikely]] return; }
L_0025D5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025D5C4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025D5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D69C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_0025D60C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025D6A8; } }
L_0025D60C:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_0025D620; }
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_0025D620:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 152u)));  goto L_0025D634; }
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_0025D634:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 56u)));  goto L_0025D650; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D648u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D648u) [[unlikely]] return; }
L_0025D648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D6A4; } }
L_0025D650:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D674u); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 21u, depth + 1u); else { c.pc = 0x001D0320u; return; } if (c.pc != 0x0025D674u) [[unlikely]] return; }
L_0025D674:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 212u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D6A4; } }
L_0025D69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D6A4u) [[unlikely]] return; }
L_0025D6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025D6A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025D6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D6EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x402C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0025D6F4; } }
L_0025D6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6F4u); c.f[12] = ld32((c.r[16].w[0] + 56u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x0025D6F4u) [[unlikely]] return; }
L_0025D6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x0025D6FCu) [[unlikely]] return; }
L_0025D6FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = c.f[0];  if (t) { goto L_0025D718; } }
    c.f[21] = c.f[1];
    c.budget -= 1;
L_0025D718:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0025D8B8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D7EC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 152u)));  goto L_0025D744; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0025D8EC; } }
L_0025D744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D758u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0025D758u) [[unlikely]] return; }
L_0025D758:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D76Cu); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0025D76Cu) [[unlikely]] return; }
L_0025D76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D774u); set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  if (depth < kMaxDepth) unit_0042(c, 117u, depth + 1u); else { c.pc = 0x00228DC0u; return; } if (c.pc != 0x0025D774u) [[unlikely]] return; }
L_0025D774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D77Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 96u, depth + 1u); else { c.pc = 0x0025D030u; return; } if (c.pc != 0x0025D77Cu) [[unlikely]] return; }
L_0025D77C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D8B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D798u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025D798u) [[unlikely]] return; }
L_0025D798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  goto L_0025D7C4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D7C0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x0025D7C0u) [[unlikely]] return; }
L_0025D7C0:
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_0025D7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 148u), c.f[21]);
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 10;
L_0025D7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0025D808; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025D820; } }
L_0025D808:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0025D820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D830u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x0025D830u) [[unlikely]] return; }
L_0025D830:
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 148u), c.f[0]);  if (t) { goto L_0025D854; } }
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.budget -= 1;
L_0025D854:
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[16].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 152u)));  goto L_0025D898; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 8;
L_0025D898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8ACu); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0025D8ACu) [[unlikely]] return; }
L_0025D8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D8E8; } }
L_0025D8B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0025D8B8:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0025D8E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D8D8u) [[unlikely]] return; }
L_0025D8D8:
    st32((c.r[16].w[0] + 168u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0025D8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D8E8u) [[unlikely]] return; }
L_0025D8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0025D8EC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025D900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D950; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 152u)));  goto L_0025D92C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025D9F8; } }
L_0025D92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D940u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x0025D940u) [[unlikely]] return; }
L_0025D940:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025D9F4; } }
L_0025D950:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    if (c.r[2].sd[0] >= 0) { st32((c.r[29].w[0] + 44u), 0u);  goto L_0025D984; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D970u); set32(c.r[5], c.r[5].w[0] - 9822u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025D970u) [[unlikely]] return; }
L_0025D970:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D97Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D97Cu) [[unlikely]] return; }
L_0025D97C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D9F4; } }
L_0025D984:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D994u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_002D(c, 67u, depth + 1u); else { c.pc = 0x001D49E0u; return; } if (c.pc != 0x0025D994u) [[unlikely]] return; }
L_0025D994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0025D9B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9A8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_004F(c, 95u, depth + 1u); else { c.pc = 0x0025D020u; return; } if (c.pc != 0x0025D9A8u) [[unlikely]] return; }
L_0025D9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_0025D9BC; } }
L_0025D9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9B8u);  if (depth < kMaxDepth) unit_004F(c, 96u, depth + 1u); else { c.pc = 0x0025D030u; return; } if (c.pc != 0x0025D9B8u) [[unlikely]] return; }
L_0025D9B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_0025D9BC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_0025D9E0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025D9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025D9DCu) [[unlikely]] return; }
L_0025D9DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0025D9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9E8u); set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0042(c, 87u, depth + 1u); else { c.pc = 0x00228A40u; return; } if (c.pc != 0x0025D9E8u) [[unlikely]] return; }
L_0025D9E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025D9F4u) [[unlikely]] return; }
L_0025D9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025D9F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025DA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025DA5C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 152u)));  goto L_0025DA3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025DA68; } }
L_0025DA3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA4Cu); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0025DA4Cu) [[unlikely]] return; }
L_0025DA4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025DA64; } }
L_0025DA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025DA64u) [[unlikely]] return; }
L_0025DA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025DA68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025DA80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025DCA4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = ld32((c.r[18].w[0] + 160u));  if (t) { goto L_0025DAE4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0025DB00; } }
L_0025DAE4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0025DB00:
    c.f[1] = ld32((c.r[18].w[0] + 164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0025DB38; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 164u), c.f[3]);  if (t) { goto L_0025DB50; } }
L_0025DB38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 164u), c.f[3]);
    c.budget -= 6;
L_0025DB50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025DCA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[29], c.r[29].w[0] - 2304u);
    set32(c.r[3], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[21].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[20], c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[21] = ld32((c.r[3].w[0] - 10056u));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.f[20] = ld32((c.r[2].w[0] - 10052u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_0025DB88:
    st32((c.r[17].w[0]), c.f[21]);
    set32(c.r[19], c.r[16].w[0] << 11);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBA0u); st32((c.r[17].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0025DBA0u) [[unlikely]] return; }
L_0025DBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42740000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBBCu); c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0025DBBCu) [[unlikely]] return; }
L_0025DBBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42740000u);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.f[1] = 0u;
    set32(c.r[19], c.r[2].w[0] << 11);
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[22]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBECu); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0025DBECu) [[unlikely]] return; }
L_0025DBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42740000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC08u); c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0025DC08u) [[unlikely]] return; }
L_0025DC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42740000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[22]);
    c.f[1] = ld32((c.r[28].w[0] - 32680u));
    st32((c.r[17].w[0] + 56u), 0u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 12;
L_0025DC38:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 20u), c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DC38u | kUnwind; return; } goto L_0025DC38; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DB88u | kUnwind; return; } goto L_0025DB88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC90u); set32(c.r[5], ld32((c.r[18].w[0] + 168u)));  if (depth < kMaxDepth) unit_0010(c, 151u, depth + 1u); else { c.pc = 0x001615C0u; return; } if (c.pc != 0x0025DC90u) [[unlikely]] return; }
L_0025DC90:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DCA4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 336u, depth + 1u); else { c.pc = 0x0015AE60u; return; } if (c.pc != 0x0025DCA4u) [[unlikely]] return; }
L_0025DCA4:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025DCE0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DA80u | kUnwind; return; } goto L_0025DA80; }
L_0025DCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0025DD0Cu) [[unlikely]] return; }
L_0025DD0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C460000u);
    set32(c.r[3], c.r[3].w[0] + 20592u);
    c.r[2].d[0] = c.r[2].d[0] | 19777ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 10;
L_0025DD34:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DD34u | kUnwind; return; } goto L_0025DD34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025DD80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025DE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20592u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  goto L_0025DDD4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DDCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DDCCu) [[unlikely]] return; }
L_0025DDCC:
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 2;
L_0025DDD4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0025DDF4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DDECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DDECu) [[unlikely]] return; }
L_0025DDEC:
    st32((c.r[18].w[0] + 60u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0025DDF4:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0025DDF8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 64u);  if (t) { goto L_0025DE1C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DE18u) [[unlikely]] return; }
L_0025DE18:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0025DE1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DDF8u | kUnwind; return; } goto L_0025DDF8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0025DE38u) [[unlikely]] return; }
L_0025DE38:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0025DE54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0025DE50u) [[unlikely]] return; }
L_0025DE50:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0025DE54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025DE70:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025DE94; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0025DE94; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025DE94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025DEA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0025DECC; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025DECC; } }
L_0025DEC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025DECC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025DED8:
    c.budget -= 2;
L_0025DEE0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0025DF18; } }
L_0025DEEC:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0025DF18; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DF14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025DF28; } }
L_0025DF14:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0025DF18:
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DEECu | kUnwind; return; } goto L_0025DEEC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025DF28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025DF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025DF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF50u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0025DF50u) [[unlikely]] return; }
L_0025DF50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  goto L_0025DF84; }
    set32(c.r[7], ld32((c.r[28].w[0] - 31720u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9249u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF7Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0025DF7Cu) [[unlikely]] return; }
L_0025DF7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_0025DF84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025DFA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025DFD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DFD0u); set32(c.r[5], c.r[5].w[0] - 9236u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025DFD0u) [[unlikely]] return; }
L_0025DFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0025E150; } }
L_0025DFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DFE0u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0025DFE0u) [[unlikely]] return; }
L_0025DFE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 360u);  goto L_0025E0AC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 360u);  goto L_0025E05C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_0025E00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0025E0FC; } }
L_0025E00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E014u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0025E014u) [[unlikely]] return; }
L_0025E014:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  goto L_0025E10C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15136u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9249u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E050u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0025E050u) [[unlikely]] return; }
L_0025E050:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E10C; } }
L_0025E05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E064u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0025E064u) [[unlikely]] return; }
L_0025E064:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  goto L_0025E10C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15168u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9249u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0A0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0025E0A0u) [[unlikely]] return; }
L_0025E0A0:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E10C; } }
L_0025E0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0B4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0025E0B4u) [[unlikely]] return; }
L_0025E0B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  goto L_0025E10C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9249u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0F0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0025E0F0u) [[unlikely]] return; }
L_0025E0F0:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E10C; } }
L_0025E0FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9203u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E10Cu); st32((c.r[18].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E10Cu) [[unlikely]] return; }
L_0025E10C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0025E138; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E130u); set32(c.r[5], c.r[5].w[0] - 9184u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0025E130u) [[unlikely]] return; }
L_0025E130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E14C; } }
L_0025E138:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E14Cu); set32(c.r[5], c.r[5].w[0] - 9138u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E14Cu) [[unlikely]] return; }
L_0025E14C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025E150:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[3].w[0] + 64u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025E1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E1A8u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0025E1A8u) [[unlikely]] return; }
L_0025E1A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[4].w[0]);  goto L_0025E1EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] - 9249u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E1E4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0025E1E4u) [[unlikely]] return; }
L_0025E1E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_0025E1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E210:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025E23C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E23C; } }
L_0025E238:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025E23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025E250:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025E27C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E27C; } }
L_0025E278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025E27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025E290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E2D0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025E2F8; } }
L_0025E2D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E2E0u); set32(c.r[5], c.r[5].w[0] - 9085u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E2E0u) [[unlikely]] return; }
L_0025E2E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_0025E2F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0025E344; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E33Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E33Cu) [[unlikely]] return; }
L_0025E33C:
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0025E344:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0025E384; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E37Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E37Cu) [[unlikely]] return; }
L_0025E37C:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0025E384:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 8;
L_0025E3B0:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 64u);  if (t) { goto L_0025E3D4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E3D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E3D0u) [[unlikely]] return; }
L_0025E3D0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0025E3D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025E3B0u | kUnwind; return; } goto L_0025E3B0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4109u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E418u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x0025E418u) [[unlikely]] return; }
L_0025E418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E42Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0025E4D0u; return; } if (c.pc != 0x0025E42Cu) [[unlikely]] return; }
L_0025E42C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E43Cu); set32(c.r[5], c.r[5].w[0] - 9008u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0025E43Cu) [[unlikely]] return; }
L_0025E43C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43490000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 20545ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025E4B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E48Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0025E530u; return; } if (c.pc != 0x0025E48Cu) [[unlikely]] return; }
L_0025E48C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x0025E498u) [[unlikely]] return; }
L_0025E498:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0025E4B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E4B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0025E4B0u) [[unlikely]] return; }
L_0025E4B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025E4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025E4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
L_0025E4F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 152u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E508u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025E508u) [[unlikely]] return; }
L_0025E508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025E4F0u | kUnwind; return; } goto L_0025E4F0; }
    st32((c.r[17].w[0] + 184u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025E530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0025E570; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_0025E56C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E568u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E568u) [[unlikely]] return; }
L_0025E568:
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 1;
L_0025E56C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025E570:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0025E574:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E580u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025E580u) [[unlikely]] return; }
L_0025E580:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025E574u | kUnwind; return; } goto L_0025E574; }
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0025E5B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E5ACu) [[unlikely]] return; }
L_0025E5AC:
    st32((c.r[16].w[0] + 184u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0025E5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5BCu);  if (depth < kMaxDepth) unit_004F(c, 272u, depth + 1u); else { c.pc = 0x0025ED90u; return; } if (c.pc != 0x0025E5BCu) [[unlikely]] return; }
L_0025E5BC:
    st32((c.r[28].w[0] - 30532u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025E5F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E620u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025E620u) [[unlikely]] return; }
L_0025E620:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0025E6D0; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21324ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0025E67C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E674u); set32(c.r[5], c.r[5].w[0] - 8811u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E674u) [[unlikely]] return; }
L_0025E674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E6CC; } }
L_0025E67C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0025E6A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E6A0u); set32(c.r[5], c.r[5].w[0] - 8797u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E6A0u) [[unlikely]] return; }
L_0025E6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E6CC; } }
L_0025E6A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E6B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 248u, depth + 1u); else { c.pc = 0x0025E7E0u; return; } if (c.pc != 0x0025E6B4u) [[unlikely]] return; }
L_0025E6B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E6CC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E6CCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0025E6CCu) [[unlikely]] return; }
L_0025E6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0025E6D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025E6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E700u);  if (depth < kMaxDepth) unit_004F(c, 248u, depth + 1u); else { c.pc = 0x0025E7E0u; return; } if (c.pc != 0x0025E700u) [[unlikely]] return; }
L_0025E700:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[2].w[0])));  goto L_0025E710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E750; } }
L_0025E710:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 21324ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025E750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E750; } }
L_0025E750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025E760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E784u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 248u, depth + 1u); else { c.pc = 0x0025E7E0u; return; } if (c.pc != 0x0025E784u) [[unlikely]] return; }
L_0025E784:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0025E7C8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41470000u);
    c.r[3].d[0] = c.r[3].d[0] | 17747ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0025E7C4; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 152u);  if (t) { goto L_0025E7C4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E7C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E7C0u) [[unlikely]] return; }
L_0025E7C0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0025E7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025E7C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0025E804; } }
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E818; } }
L_0025E804:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E810u); set32(c.r[5], c.r[5].w[0] - 8776u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E810u) [[unlikely]] return; }
L_0025E810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E878; } }
L_0025E818:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0025E840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9048u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_0025E854; }
L_0025E840:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E84Cu); set32(c.r[5], c.r[5].w[0] - 8758u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025E84Cu) [[unlikely]] return; }
L_0025E84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E878; } }
L_0025E854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E85Cu);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0025E85Cu) [[unlikely]] return; }
L_0025E85C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 9032u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 10);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_0025E878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025E890:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0025E930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E8CCu); set32(c.r[4], 0u + 284u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025E8CCu) [[unlikely]] return; }
L_0025E8CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E8DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001EA0B0u; return; } if (c.pc != 0x0025E8DCu) [[unlikely]] return; }
L_0025E8DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E8E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 151u, depth + 1u); else { c.pc = 0x001615C0u; return; } if (c.pc != 0x0025E8E8u) [[unlikely]] return; }
L_0025E8E8:
    c.f[4] = ld32((c.r[19].w[0] + 164u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 148u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 152u));
    c.f[2] = ld32((c.r[19].w[0] + 156u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[14] = c.f[20];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E930u);  if (depth < kMaxDepth) unit_004F(c, 260u, depth + 1u); else { c.pc = 0x0025EA30u; return; } if (c.pc != 0x0025E930u) [[unlikely]] return; }
L_0025E930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025E950:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] < 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025E970; } }
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  goto L_0025E978; }
L_0025E970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025E980; } }
L_0025E978:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 152u)));
    c.budget -= 2;
L_0025E980:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0025EA24; }
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E994u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x0025E994u) [[unlikely]] return; }
L_0025E994:
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[7], 0u - 1u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA20u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x0025EA20u) [[unlikely]] return; }
L_0025EA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025EA24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0025EA30:
    set32(c.r[29], c.r[29].w[0] - 1616u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[16], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA6Cu); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0025EA6Cu) [[unlikely]] return; }
L_0025EA6C:
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0025EA78u) [[unlikely]] return; }
L_0025EA78:
    set32(c.r[2], 0u + 764u);
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 49162ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld8((c.r[4].w[0] + 85u));
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[20]));
    c.r[3].d[0] = c.r[3].d[0] & 199ull;
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 85u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st64((c.r[4].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0025EC34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[6] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[5] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[4] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 13;
L_0025EAF0:
    c.f[0] = c.r[7].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[9] = fp::ee::div(c.fcr31, c.f[0], c.f[5]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[9], c.f[22]);
    c.budget -= 7;
L_0025EB0C:
    c.f[0] = c.r[6].w[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[8] = fp::ee::div(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 15;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);  goto L_0025EB58; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 4u));  if (t) { goto L_0025EB6C; } }
L_0025EB58:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 5;
L_0025EB6C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[21]);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.f[9]);
    st32((c.r[16].w[0] + 16u), c.f[8]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[1]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.f[9]);
    st32((c.r[16].w[0] + 40u), c.f[2]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), c.f[7]);
    st32((c.r[16].w[0] + 64u), c.f[8]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    st32((c.r[16].w[0] + 76u), c.f[1]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), c.f[7]);
    st32((c.r[16].w[0] + 88u), c.f[2]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 39;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EB0Cu | kUnwind; return; } goto L_0025EB0C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EAF0u | kUnwind; return; } goto L_0025EAF0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC2Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 336u, depth + 1u); else { c.pc = 0x0015AE60u; return; } if (c.pc != 0x0025EC2Cu) [[unlikely]] return; }
L_0025EC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_0025ECBC; } }
L_0025EC34:
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u - 1u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 92u), c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[3]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[3]);
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 140u), c.f[22]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECB8u); st32((c.r[29].w[0] + 164u), c.f[22]);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x0025ECB8u) [[unlikely]] return; }
L_0025ECB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0025ECBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECC4u);  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0025ECC4u) [[unlikely]] return; }
L_0025ECC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1616u);  c.pc = t; return; }
L_0025ECF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED10u); set32(c.r[4], 0u + 284u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025ED10u) [[unlikely]] return; }
L_0025ED10:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED1Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025ED1Cu) [[unlikely]] return; }
L_0025ED1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025ED70; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025ED50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 195u, depth + 1u); else { c.pc = 0x001E9C90u; return; } if (c.pc != 0x0025ED50u) [[unlikely]] return; }
L_0025ED50:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0025ED68; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_0025ED68:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_0025ED70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025ED90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EDB0u); set32(c.r[4], 0u + 284u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025EDB0u) [[unlikely]] return; }
L_0025EDB0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EDBCu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025EDBCu) [[unlikely]] return; }
L_0025EDBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025EE0C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025EDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EDDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 213u, depth + 1u); else { c.pc = 0x001E9FD0u; return; } if (c.pc != 0x0025EDDCu) [[unlikely]] return; }
L_0025EDDC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0025EDFC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
L_0025EDFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0025EE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025EE30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] < 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025EEBC; } }
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025EE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0025EEC0; } }
L_0025EE68:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0025EE80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE78u);  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025EE78u) [[unlikely]] return; }
L_0025EE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025EEBC; } }
L_0025EE80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 9048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025EEB0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0025EEA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EEACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025EEACu) [[unlikely]] return; }
L_0025EEAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0025EEB0:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EEA0u | kUnwind; return; } goto L_0025EEA0; }
L_0025EEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0025EEC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025EEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF10u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025EF10u) [[unlikely]] return; }
L_0025EF10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF24u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 237u, depth + 1u); else { c.pc = 0x0025E5F0u; return; } if (c.pc != 0x0025EF24u) [[unlikely]] return; }
L_0025EF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025EF40:
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
    c.budget -= 12;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025F014; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] - c.r[18].w[0]);  if (t) { goto L_0025EFB0; } }
L_0025EF7C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF88u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025EF88u) [[unlikely]] return; }
L_0025EF88:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 237u, depth + 1u); else { c.pc = 0x0025E5F0u; return; } if (c.pc != 0x0025EF9Cu) [[unlikely]] return; }
L_0025EF9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025EFACu) [[unlikely]] return; }
L_0025EFAC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0025EFB0:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EF7Cu | kUnwind; return; } goto L_0025EF7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025F008; } }
L_0025EFC0:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[6].sd[0] < 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0025EFF8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025EFDCu) [[unlikely]] return; }
L_0025EFDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFF0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 237u, depth + 1u); else { c.pc = 0x0025E5F0u; return; } if (c.pc != 0x0025EFF0u) [[unlikely]] return; }
L_0025EFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0025F008; } }
L_0025EFF8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F004u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 245u, depth + 1u); else { c.pc = 0x0025E760u; return; } if (c.pc != 0x0025F004u) [[unlikely]] return; }
    goto L_0025F004;
L_0025F000:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0025F004:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0025F008:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EFC0u | kUnwind; return; } goto L_0025EFC0; }
L_0025F014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025F040:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F080u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 307u, depth + 1u); else { c.pc = 0x0025F2F0u; return; } if (c.pc != 0x0025F080u) [[unlikely]] return; }
L_0025F080:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0025F0A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F09Cu); set32(c.r[5], c.r[5].w[0] - 8735u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025F09Cu) [[unlikely]] return; }
L_0025F09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0025F1A8; } }
L_0025F0A4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9048u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0025F0DC; } }
L_0025F0C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F0CCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F0CCu) [[unlikely]] return; }
L_0025F0CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0025F0DC; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0025F0DC:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F0C0u | kUnwind; return; } goto L_0025F0C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] | 20545ull;
    set32(c.r[3], c.r[16].w[0] + 23u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], 0u - 16u);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[20].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[21], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F128u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0025F128u) [[unlikely]] return; }
L_0025F128:
    st32((c.r[21].w[0]), c.r[20].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[20], c.r[21].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025F18C; } }
L_0025F140:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F14Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F14Cu) [[unlikely]] return; }
L_0025F14C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0025F18C; }
    set32(c.r[3], c.r[21].w[0] + c.r[22].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F174u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0025F174u) [[unlikely]] return; }
L_0025F174:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
L_0025F18C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F140u | kUnwind; return; } goto L_0025F140; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[20].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0025F1A8:
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
L_0025F1E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F218u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 276u, depth + 1u); else { c.pc = 0x0025EE30u; return; } if (c.pc != 0x0025F218u) [[unlikely]] return; }
L_0025F218:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 18755ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0025F25C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F2CC; } }
L_0025F25C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0025F2B8; } }
L_0025F270:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 8u));
    set32(c.r[21], c.r[2].w[0] + 8u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F288u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 237u, depth + 1u); else { c.pc = 0x0025E5F0u; return; } if (c.pc != 0x0025F288u) [[unlikely]] return; }
L_0025F288:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0025F2A8; }
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100D0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F2A4u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0025F2A4u) [[unlikely]] return; }
L_0025F2A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0025F2A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0025F2B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F270u | kUnwind; return; } goto L_0025F270; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025F2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0025F2F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9048u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[20].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], 0u + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025F368; } }
L_0025F33C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F348u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F348u) [[unlikely]] return; }
L_0025F348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0025F368; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
L_0025F368:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F33Cu | kUnwind; return; } goto L_0025F33C; }
    set32(c.r[3], c.r[18].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0025F3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F3C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F3C0u) [[unlikely]] return; }
L_0025F3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F3E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0025E530u; return; } if (c.pc != 0x0025F3E4u) [[unlikely]] return; }
L_0025F3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F3ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0025E4D0u; return; } if (c.pc != 0x0025F3ECu) [[unlikely]] return; }
L_0025F3EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F3F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F3F8u) [[unlikely]] return; }
L_0025F3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025F410:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F434u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025F434u) [[unlikely]] return; }
L_0025F434:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025F5E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0025F550; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0025F4CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0025F46C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0025F5FC; } }
L_0025F46C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0025F484; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F480u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 268u, depth + 1u); else { c.pc = 0x0025ECF0u; return; } if (c.pc != 0x0025F480u) [[unlikely]] return; }
L_0025F480:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0025F484:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F490u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F490u) [[unlikely]] return; }
L_0025F490:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_0025F4C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4ACu); set32(c.r[5], c.r[5].w[0] - 8712u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025F4ACu) [[unlikely]] return; }
L_0025F4AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F4B8u) [[unlikely]] return; }
L_0025F4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F5F8; } }
L_0025F4C0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
L_0025F4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4D4u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0025F4D4u) [[unlikely]] return; }
L_0025F4D4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F4E4u) [[unlikely]] return; }
L_0025F4E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x0025F4F0u) [[unlikely]] return; }
L_0025F4F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 8698u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F508u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x0025F508u) [[unlikely]] return; }
L_0025F508:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[6], c.r[6].w[0] - 8684u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F520u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x0025F520u) [[unlikely]] return; }
L_0025F520:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[6], c.r[16].w[0] + 136u);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F540u); st32((c.r[16].w[0] + 140u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0025F540u) [[unlikely]] return; }
L_0025F540:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025F5F8; } }
L_0025F550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025F5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F568u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0025F568u) [[unlikely]] return; }
L_0025F568:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F578u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F578u) [[unlikely]] return; }
L_0025F578:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F584u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x0025F584u) [[unlikely]] return; }
L_0025F584:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[6], c.r[6].w[0] - 8698u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F59Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x0025F59Cu) [[unlikely]] return; }
L_0025F59C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5B0u); set32(c.r[6], c.r[6].w[0] - 8678u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0025F5B0u) [[unlikely]] return; }
L_0025F5B0:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100D0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 47u, depth + 1u); else { c.pc = 0x001D0770u; return; } if (c.pc != 0x0025F5D4u) [[unlikely]] return; }
L_0025F5D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025F5F8; } }
L_0025F5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 272u, depth + 1u); else { c.pc = 0x0025ED90u; return; } if (c.pc != 0x0025F5ECu) [[unlikely]] return; }
L_0025F5EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F5F8u) [[unlikely]] return; }
L_0025F5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025F5FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025F610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F634u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025F634u) [[unlikely]] return; }
L_0025F634:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0025F6EC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0025F684; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0025F664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0025F704; } }
L_0025F660:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0025F664:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F670u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 272u, depth + 1u); else { c.pc = 0x0025ED90u; return; } if (c.pc != 0x0025F670u) [[unlikely]] return; }
L_0025F670:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F67Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F67Cu) [[unlikely]] return; }
L_0025F67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F700; } }
L_0025F684:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  goto L_0025F69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 268u, depth + 1u); else { c.pc = 0x0025ECF0u; return; } if (c.pc != 0x0025F698u) [[unlikely]] return; }
L_0025F698:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_0025F69C:
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F6A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x0025F6A8u) [[unlikely]] return; }
L_0025F6A8:
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F6C0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 237u, depth + 1u); else { c.pc = 0x0025E5F0u; return; } if (c.pc != 0x0025F6C0u) [[unlikely]] return; }
L_0025F6C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F660u | kUnwind; return; } goto L_0025F660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100D0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F6DCu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x0025F6DCu) [[unlikely]] return; }
L_0025F6DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025F700; } }
L_0025F6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F6F4u);  if (depth < kMaxDepth) unit_004F(c, 272u, depth + 1u); else { c.pc = 0x0025ED90u; return; } if (c.pc != 0x0025F6F4u) [[unlikely]] return; }
L_0025F6F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F700u) [[unlikely]] return; }
L_0025F700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025F704:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025F720:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 284u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F750u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025F750u) [[unlikely]] return; }
L_0025F750:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F75Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0025F75Cu) [[unlikely]] return; }
L_0025F75C:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.f[20] = ld32((c.r[20].w[0] + 60u));
    set32(c.r[17], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025FC54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 8880u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_004F[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025F794:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0025F7C8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F7B4u); set32(c.r[5], c.r[5].w[0] - 8672u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0025F7B4u) [[unlikely]] return; }
L_0025F7B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F7C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025F7C0u) [[unlikely]] return; }
L_0025F7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0025FC58; } }
L_0025F7C8:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 30532u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025FC54; } }
L_0025F7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F7F0u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025F7F0u) [[unlikely]] return; }
L_0025F7F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 148u), c.r[16].w[0]);  goto L_0025F81C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F804u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001EA0B0u; return; } if (c.pc != 0x0025F804u) [[unlikely]] return; }
L_0025F804:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F814u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 76u, depth + 1u); else { c.pc = 0x00170A30u; return; } if (c.pc != 0x0025F814u) [[unlikely]] return; }
L_0025F814:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 148u), c.r[16].w[0]);
    c.budget -= 2;
L_0025F81C:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0025F828:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025FC54; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[28].w[0] - 30532u), 0u);  if (t) { goto L_0025F9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F850u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025F850u) [[unlikely]] return; }
L_0025F850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025F86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 263u, depth + 1u); else { c.pc = 0x001AAAC0u; return; } if (c.pc != 0x0025F860u) [[unlikely]] return; }
L_0025F860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10296u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0025F86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x0025F874u) [[unlikely]] return; }
L_0025F874:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025F8A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025F8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F8A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025F8A8u) [[unlikely]] return; }
L_0025F8A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 8698u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0025F8F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F8C4u); set32(c.r[4], c.r[4].w[0] - 8698u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0025F8C4u) [[unlikely]] return; }
L_0025F8C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] - 8698u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025F8F4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[19].w[0] + 8u);  goto L_0025F8E8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F8F4; } }
L_0025F8E8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F8F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0025F8F4u) [[unlikely]] return; }
L_0025F8F4:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0025F8F8:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8678u);
    set32(c.r[6], c.r[29].w[0] + 424u);
    st32((c.r[29].w[0] + 428u), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F91Cu); st32((c.r[29].w[0] + 424u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x0025F91Cu) [[unlikely]] return; }
L_0025F91C:
    set32(c.r[3], ld32((c.r[29].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 16u)));  goto L_0025F948; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0025F944; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0025F944u) [[unlikely]] return; }
L_0025F944:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0025F948:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F960u); set32(c.r[6], c.r[6].w[0] - 8684u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F960u) [[unlikely]] return; }
L_0025F960:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F974u); c.r[7].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0022(c, 167u, depth + 1u); else { c.pc = 0x001A9BD0u; return; } if (c.pc != 0x0025F974u) [[unlikely]] return; }
L_0025F974:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 144u)));  goto L_0025F994; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F990u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F990u) [[unlikely]] return; }
L_0025F990:
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_0025F994:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 237u, depth + 1u); else { c.pc = 0x0025E5F0u; return; } if (c.pc != 0x0025F9A4u) [[unlikely]] return; }
L_0025F9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9ACu); set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0025F9ACu) [[unlikely]] return; }
L_0025F9AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025FC54; } }
L_0025F9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9C4u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025F9C4u) [[unlikely]] return; }
L_0025F9C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 184u), c.r[4].w[0]);  goto L_0025F9E8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 97u, depth + 1u); else { c.pc = 0x0015CE20u; return; } if (c.pc != 0x0025F9E0u) [[unlikely]] return; }
L_0025F9E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 184u), c.r[4].w[0]);
    c.budget -= 2;
L_0025F9E8:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0025FC54; } }
L_0025F9F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_0025FA24; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 148u), 0u);  goto L_0025FA20; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FA1Cu) [[unlikely]] return; }
L_0025FA1C:
    st32((c.r[20].w[0] + 148u), 0u);
    c.budget -= 1;
L_0025FA20:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0025FA24:
    set32(c.r[2], 0u - 16385u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA3Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0025FA3Cu) [[unlikely]] return; }
L_0025FA3C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA58u); st32((c.r[28].w[0] - 31436u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0025FA58u) [[unlikely]] return; }
L_0025FA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0025FA60u) [[unlikely]] return; }
L_0025FA60:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0025FA6Cu) [[unlikely]] return; }
L_0025FA6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[20].w[0] + 184u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA80u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 151u, depth + 1u); else { c.pc = 0x001615C0u; return; } if (c.pc != 0x0025FA80u) [[unlikely]] return; }
L_0025FA80:
    c.f[4] = ld32((c.r[19].w[0] + 164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[1] = ld32((c.r[19].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[0] = ld32((c.r[19].w[0] + 152u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 156u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[14] = c.f[20];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.f[13] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FAE0u);  if (depth < kMaxDepth) unit_004F(c, 260u, depth + 1u); else { c.pc = 0x0025EA30u; return; } if (c.pc != 0x0025FAE0u) [[unlikely]] return; }
L_0025FAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FAE8u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0025FAE8u) [[unlikely]] return; }
L_0025FAE8:
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 52u);  goto L_0025FB0C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FB04u) [[unlikely]] return; }
L_0025FB04:
    st32((c.r[20].w[0] + 184u), 0u);
    set32(c.r[4], 0u + 52u);
    c.budget -= 2;
L_0025FB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB14u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025FB14u) [[unlikely]] return; }
L_0025FB14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 148u), c.r[16].w[0]);  goto L_0025FB40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001EA0B0u; return; } if (c.pc != 0x0025FB28u) [[unlikely]] return; }
L_0025FB28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 76u, depth + 1u); else { c.pc = 0x00170A30u; return; } if (c.pc != 0x0025FB38u) [[unlikely]] return; }
L_0025FB38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 148u), c.r[16].w[0]);
    c.budget -= 2;
L_0025FB40:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0025FB4C:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025FC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB6Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025FB6Cu) [[unlikely]] return; }
L_0025FB6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 444u), c.r[2].w[0]);  goto L_0025FB8C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 97u, depth + 1u); else { c.pc = 0x0015CE20u; return; } if (c.pc != 0x0025FB88u) [[unlikely]] return; }
L_0025FB88:
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 1;
L_0025FB8C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 152u);  if (t) { goto L_0025FBB4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FBB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FBB0u) [[unlikely]] return; }
L_0025FBB0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0025FBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FBBCu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0025FBBCu) [[unlikely]] return; }
L_0025FBBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0025FBD8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 444u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FBD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 147u, depth + 1u); else { c.pc = 0x0015D710u; return; } if (c.pc != 0x0025FBD4u) [[unlikely]] return; }
L_0025FBD4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0025FBD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FBECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FBECu) [[unlikely]] return; }
L_0025FBEC:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[7], ld32((c.r[19].w[0] + 4u)));  goto L_0025FC18; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 148u), 0u);  goto L_0025FC14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FC10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FC10u) [[unlikely]] return; }
L_0025FC10:
    st32((c.r[20].w[0] + 148u), 0u);
    c.budget -= 1;
L_0025FC14:
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0025FC18:
    set32(c.r[6], 0u - 8193u);
    set32(c.r[3], 0u - 65u);
    set32(c.r[2], 0u - 16385u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 16384ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FC54u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0025FC54u) [[unlikely]] return; }
L_0025FC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0025FC58:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_0025FC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] - 9048u);
    c.budget -= 8;
L_0025FCA0:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FCA0u | kUnwind; return; } goto L_0025FCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025FCE4; } }
L_0025FCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FCCCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x0025FCCCu) [[unlikely]] return; }
L_0025FCCC:
    set32(c.r[4], c.r[16].w[0] << 10);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41470000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 17747ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
L_0025FCE4:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FCC4u | kUnwind; return; } goto L_0025FCC4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025FD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FD2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0025FD2Cu) [[unlikely]] return; }
L_0025FD2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 20720u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 18;
L_0025FD74:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 124u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FD74u | kUnwind; return; } goto L_0025FD74; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x46490000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 17217ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025FDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025FE20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FDFCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 407u, depth + 1u); else { c.pc = 0x0025FE40u; return; } if (c.pc != 0x0025FDFCu) [[unlikely]] return; }
L_0025FDFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0025FE08u) [[unlikely]] return; }
L_0025FE08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0025FE24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0025FE20u) [[unlikely]] return; }
L_0025FE20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025FE24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025FE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_0025FE74; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FE6Cu) [[unlikely]] return; }
L_0025FE6C:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_0025FE74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_0025FE94; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FE8Cu) [[unlikely]] return; }
L_0025FE8C:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_0025FE94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_0025FEB4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FEACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FEACu) [[unlikely]] return; }
L_0025FEAC:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_0025FEB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0025FECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FEC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0025FEC4u) [[unlikely]] return; }
L_0025FEC4:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0025FECC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025FEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025FF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF18u);  if (depth < kMaxDepth) unit_004F(c, 416u, depth + 1u); else { c.pc = 0x0025FF70u; return; } if (c.pc != 0x0025FF18u) [[unlikely]] return; }
L_0025FF18:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0025FF38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 47u, depth + 1u); else { c.pc = 0x002604C0u; return; } if (c.pc != 0x0025FF34u) [[unlikely]] return; }
L_0025FF34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025FF38:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 100u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FF38u | kUnwind; return; } goto L_0025FF38; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025FF70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0050(c, 46u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 8544u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_004F[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025FFB4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0025FFB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFC4u); st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 407u, depth + 1u); else { c.pc = 0x0025FE40u; return; } if (c.pc != 0x0025FFC4u) [[unlikely]] return; }
L_0025FFC4:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0050(c, 46u, depth); } }
L_0025FFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260000u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00260000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0050(c, 1u, depth);
}

}
