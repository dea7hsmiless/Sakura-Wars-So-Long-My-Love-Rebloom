#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C8000;
    case 2u: goto L_003C8050;
    case 3u: goto L_003C8068;
    case 4u: goto L_003C8074;
    case 5u: goto L_003C808C;
    case 6u: goto L_003C80B4;
    case 7u: goto L_003C80CC;
    case 8u: goto L_003C80FC;
    case 9u: goto L_003C8104;
    case 10u: goto L_003C8108;
    case 11u: goto L_003C8130;
    case 12u: goto L_003C81C4;
    case 13u: goto L_003C81D4;
    case 14u: goto L_003C8210;
    case 15u: goto L_003C821C;
    case 16u: goto L_003C8268;
    case 17u: goto L_003C8294;
    case 18u: goto L_003C829C;
    case 19u: goto L_003C82C0;
    case 20u: goto L_003C82D0;
    case 21u: goto L_003C82F0;
    case 22u: goto L_003C8348;
    case 23u: goto L_003C8358;
    case 24u: goto L_003C8360;
    case 25u: goto L_003C8384;
    case 26u: goto L_003C83BC;
    case 27u: goto L_003C83CC;
    case 28u: goto L_003C83D4;
    case 29u: goto L_003C83DC;
    case 30u: goto L_003C83E4;
    case 31u: goto L_003C842C;
    case 32u: goto L_003C8444;
    case 33u: goto L_003C8450;
    case 34u: goto L_003C845C;
    case 35u: goto L_003C846C;
    case 36u: goto L_003C8490;
    case 37u: goto L_003C84C8;
    case 38u: goto L_003C84F8;
    case 39u: goto L_003C854C;
    case 40u: goto L_003C8580;
    case 41u: goto L_003C873C;
    case 42u: goto L_003C8778;
    case 43u: goto L_003C89B8;
    case 44u: goto L_003C8A50;
    case 45u: goto L_003C8A94;
    case 46u: goto L_003C8AB0;
    case 47u: goto L_003C8ABC;
    case 48u: goto L_003C8AFC;
    case 49u: goto L_003C8B34;
    case 50u: goto L_003C8B90;
    case 51u: goto L_003C8BA0;
    case 52u: goto L_003C8BC0;
    case 53u: goto L_003C8BD4;
    case 54u: goto L_003C8BEC;
    case 55u: goto L_003C8C6C;
    case 56u: goto L_003C8C84;
    case 57u: goto L_003C8C94;
    case 58u: goto L_003C8CE8;
    case 59u: goto L_003C8D2C;
    case 60u: goto L_003C8D64;
    case 61u: goto L_003C8D70;
    case 62u: goto L_003C8D94;
    case 63u: goto L_003C8E9C;
    case 64u: goto L_003C8EF8;
    case 65u: goto L_003C8F1C;
    case 66u: goto L_003C8F30;
    case 67u: goto L_003C8F40;
    case 68u: goto L_003C8F6C;
    case 69u: goto L_003C8F80;
    case 70u: goto L_003C8F90;
    case 71u: goto L_003C8FA0;
    case 72u: goto L_003C8FB0;
    case 73u: goto L_003C8FBC;
    case 74u: goto L_003C8FDC;
    case 75u: goto L_003C8FFC;
    case 76u: goto L_003C9034;
    case 77u: goto L_003C90D4;
    case 78u: goto L_003C915C;
    case 79u: goto L_003C9170;
    case 80u: goto L_003C91A8;
    case 81u: goto L_003C9228;
    case 82u: goto L_003C9300;
    case 83u: goto L_003C9330;
    case 84u: goto L_003C9344;
    case 85u: goto L_003C93D0;
    case 86u: goto L_003C9414;
    case 87u: goto L_003C942C;
    case 88u: goto L_003C9438;
    case 89u: goto L_003C946C;
    case 90u: goto L_003C947C;
    case 91u: goto L_003C949C;
    case 92u: goto L_003C94B4;
    case 93u: goto L_003C94C0;
    case 94u: goto L_003C94F4;
    case 95u: goto L_003C9504;
    case 96u: goto L_003C9530;
    case 97u: goto L_003C958C;
    case 98u: goto L_003C9598;
    case 99u: goto L_003C95B4;
    case 100u: goto L_003C95C4;
    case 101u: goto L_003C9604;
    case 102u: goto L_003C9610;
    case 103u: goto L_003C9638;
    case 104u: goto L_003C9644;
    case 105u: goto L_003C9660;
    case 106u: goto L_003C9670;
    case 107u: goto L_003C96A0;
    case 108u: goto L_003C96DC;
    case 109u: goto L_003C96F4;
    case 110u: goto L_003C9748;
    case 111u: goto L_003C9760;
    case 112u: goto L_003C9780;
    case 113u: goto L_003C97B8;
    case 114u: goto L_003C97C4;
    case 115u: goto L_003C97D8;
    case 116u: goto L_003C97E8;
    case 117u: goto L_003C97F8;
    case 118u: goto L_003C9804;
    case 119u: goto L_003C9818;
    case 120u: goto L_003C9828;
    case 121u: goto L_003C9850;
    case 122u: goto L_003C9888;
    case 123u: goto L_003C98A0;
    case 124u: goto L_003C98B8;
    case 125u: goto L_003C9904;
    case 126u: goto L_003C9A00;
    case 127u: goto L_003C9A1C;
    case 128u: goto L_003C9A2C;
    case 129u: goto L_003C9A40;
    case 130u: goto L_003C9A58;
    case 131u: goto L_003C9A70;
    case 132u: goto L_003C9A88;
    case 133u: goto L_003C9AB0;
    case 134u: goto L_003C9ADC;
    case 135u: goto L_003C9AFC;
    case 136u: goto L_003C9B0C;
    case 137u: goto L_003C9B20;
    case 138u: goto L_003C9B34;
    case 139u: goto L_003C9B70;
    case 140u: goto L_003C9BA0;
    case 141u: goto L_003C9BB8;
    case 142u: goto L_003C9BD0;
    case 143u: goto L_003C9BF8;
    case 144u: goto L_003C9C14;
    case 145u: goto L_003C9C30;
    case 146u: goto L_003C9C40;
    case 147u: goto L_003C9C7C;
    case 148u: goto L_003C9C8C;
    case 149u: goto L_003C9C9C;
    case 150u: goto L_003C9CA8;
    case 151u: goto L_003C9CC0;
    case 152u: goto L_003C9CD4;
    case 153u: goto L_003C9D00;
    case 154u: goto L_003C9D30;
    case 155u: goto L_003C9D48;
    case 156u: goto L_003C9D60;
    case 157u: goto L_003C9D88;
    case 158u: goto L_003C9DA4;
    case 159u: goto L_003C9DC0;
    case 160u: goto L_003C9DD0;
    case 161u: goto L_003C9E0C;
    case 162u: goto L_003C9E1C;
    case 163u: goto L_003C9E2C;
    case 164u: goto L_003C9E38;
    case 165u: goto L_003C9E50;
    case 166u: goto L_003C9E64;
    case 167u: goto L_003C9E90;
    case 168u: goto L_003C9EC0;
    case 169u: goto L_003C9ED8;
    case 170u: goto L_003C9EF0;
    case 171u: goto L_003C9F18;
    case 172u: goto L_003C9F34;
    case 173u: goto L_003C9F50;
    case 174u: goto L_003C9F60;
    case 175u: goto L_003C9F7C;
    case 176u: goto L_003C9FA4;
    case 177u: goto L_003C9FD0;
    case 178u: goto L_003C9FE4;
    case 179u: goto L_003CA010;
    case 180u: goto L_003CA040;
    case 181u: goto L_003CA058;
    case 182u: goto L_003CA070;
    case 183u: goto L_003CA098;
    case 184u: goto L_003CA0B4;
    case 185u: goto L_003CA0D0;
    case 186u: goto L_003CA0E0;
    case 187u: goto L_003CA128;
    case 188u: goto L_003CA170;
    case 189u: goto L_003CA18C;
    case 190u: goto L_003CA1AC;
    case 191u: goto L_003CA1CC;
    case 192u: goto L_003CA1E0;
    case 193u: goto L_003CA1F4;
    case 194u: goto L_003CA260;
    case 195u: goto L_003CA2B8;
    case 196u: goto L_003CA2C4;
    case 197u: goto L_003CA2DC;
    case 198u: goto L_003CA300;
    case 199u: goto L_003CA328;
    case 200u: goto L_003CA344;
    case 201u: goto L_003CA360;
    case 202u: goto L_003CA370;
    case 203u: goto L_003CA39C;
    case 204u: goto L_003CA3B8;
    case 205u: goto L_003CA408;
    case 206u: goto L_003CA414;
    case 207u: goto L_003CA420;
    case 208u: goto L_003CA430;
    case 209u: goto L_003CA440;
    case 210u: goto L_003CA450;
    case 211u: goto L_003CA464;
    case 212u: goto L_003CA474;
    case 213u: goto L_003CA490;
    case 214u: goto L_003CA4E8;
    case 215u: goto L_003CA510;
    case 216u: goto L_003CA538;
    case 217u: goto L_003CA574;
    case 218u: goto L_003CA598;
    case 219u: goto L_003CA5A4;
    case 220u: goto L_003CA5C0;
    case 221u: goto L_003CA5D4;
    case 222u: goto L_003CA600;
    case 223u: goto L_003CA630;
    case 224u: goto L_003CA648;
    case 225u: goto L_003CA660;
    case 226u: goto L_003CA688;
    case 227u: goto L_003CA6A4;
    case 228u: goto L_003CA6C0;
    case 229u: goto L_003CA6D0;
    case 230u: goto L_003CA71C;
    case 231u: goto L_003CA72C;
    case 232u: goto L_003CA734;
    case 233u: goto L_003CA76C;
    case 234u: goto L_003CA780;
    case 235u: goto L_003CA7A0;
    case 236u: goto L_003CA7BC;
    case 237u: goto L_003CA828;
    case 238u: goto L_003CA84C;
    case 239u: goto L_003CA890;
    case 240u: goto L_003CA8C0;
    case 241u: goto L_003CA8D8;
    case 242u: goto L_003CA8F0;
    case 243u: goto L_003CA918;
    case 244u: goto L_003CA934;
    case 245u: goto L_003CA950;
    case 246u: goto L_003CA960;
    case 247u: goto L_003CA994;
    case 248u: goto L_003CA9B0;
    case 249u: goto L_003CA9D0;
    case 250u: goto L_003CAA28;
    case 251u: goto L_003CAA90;
    case 252u: goto L_003CAADC;
    case 253u: goto L_003CAB00;
    case 254u: goto L_003CAB6C;
    case 255u: goto L_003CABFC;
    case 256u: goto L_003CAC80;
    case 257u: goto L_003CAC94;
    case 258u: goto L_003CACC0;
    case 259u: goto L_003CAD1C;
    case 260u: goto L_003CAD48;
    case 261u: goto L_003CAD60;
    case 262u: goto L_003CADF0;
    case 263u: goto L_003CAE38;
    case 264u: goto L_003CAE90;
    case 265u: goto L_003CAEC4;
    case 266u: goto L_003CAF14;
    case 267u: goto L_003CAF60;
    case 268u: goto L_003CAF74;
    case 269u: goto L_003CAFA0;
    case 270u: goto L_003CAFD0;
    case 271u: goto L_003CAFE8;
    case 272u: goto L_003CB000;
    case 273u: goto L_003CB028;
    case 274u: goto L_003CB044;
    case 275u: goto L_003CB060;
    case 276u: goto L_003CB070;
    case 277u: goto L_003CB0B0;
    case 278u: goto L_003CB0C4;
    case 279u: goto L_003CB0F0;
    case 280u: goto L_003CB134;
    case 281u: goto L_003CB15C;
    case 282u: goto L_003CB170;
    case 283u: goto L_003CB18C;
    case 284u: goto L_003CB1F8;
    case 285u: goto L_003CB220;
    case 286u: goto L_003CB260;
    case 287u: goto L_003CB290;
    case 288u: goto L_003CB2A8;
    case 289u: goto L_003CB2C0;
    case 290u: goto L_003CB2E8;
    case 291u: goto L_003CB304;
    case 292u: goto L_003CB320;
    case 293u: goto L_003CB330;
    case 294u: goto L_003CB378;
    case 295u: goto L_003CB394;
    case 296u: goto L_003CB3B0;
    case 297u: goto L_003CB408;
    case 298u: goto L_003CB470;
    case 299u: goto L_003CB4BC;
    case 300u: goto L_003CB510;
    case 301u: goto L_003CB528;
    case 302u: goto L_003CB598;
    case 303u: goto L_003CB630;
    case 304u: goto L_003CB6C0;
    case 305u: goto L_003CB6D4;
    case 306u: goto L_003CB700;
    case 307u: goto L_003CB75C;
    case 308u: goto L_003CB788;
    case 309u: goto L_003CB7A0;
    case 310u: goto L_003CB7F0;
    case 311u: goto L_003CB7F8;
    case 312u: goto L_003CB818;
    case 313u: goto L_003CB884;
    case 314u: goto L_003CB8A4;
    case 315u: goto L_003CB8C0;
    case 316u: goto L_003CB910;
    case 317u: goto L_003CB96C;
    case 318u: goto L_003CB98C;
    case 319u: goto L_003CB9B0;
    case 320u: goto L_003CB9C4;
    case 321u: goto L_003CBA00;
    case 322u: goto L_003CBA30;
    case 323u: goto L_003CBA48;
    case 324u: goto L_003CBA60;
    case 325u: goto L_003CBA88;
    case 326u: goto L_003CBAA4;
    case 327u: goto L_003CBAC0;
    case 328u: goto L_003CBAD0;
    case 329u: goto L_003CBAF8;
    case 330u: goto L_003CBB20;
    case 331u: goto L_003CBB58;
    case 332u: goto L_003CBB70;
    case 333u: goto L_003CBB84;
    case 334u: goto L_003CBBB0;
    case 335u: goto L_003CBBF4;
    case 336u: goto L_003CBC1C;
    case 337u: goto L_003CBC30;
    case 338u: goto L_003CBC7C;
    case 339u: goto L_003CBC84;
    case 340u: goto L_003CBCA0;
    case 341u: goto L_003CBCBC;
    case 342u: goto L_003CBCD8;
    case 343u: goto L_003CBCF4;
    case 344u: goto L_003CBD10;
    case 345u: goto L_003CBD40;
    case 346u: goto L_003CBD9C;
    case 347u: goto L_003CBDBC;
    case 348u: goto L_003CBDE0;
    case 349u: goto L_003CBDF4;
    case 350u: goto L_003CBE30;
    case 351u: goto L_003CBE60;
    case 352u: goto L_003CBE78;
    case 353u: goto L_003CBE90;
    case 354u: goto L_003CBEB8;
    case 355u: goto L_003CBED4;
    case 356u: goto L_003CBEF0;
    case 357u: goto L_003CBF00;
    case 358u: goto L_003CBF14;
    case 359u: goto L_003CBF1C;
    case 360u: goto L_003CBF40;
    case 361u: goto L_003CBF8C;
    case 362u: goto L_003CBF98;
    case 363u: goto L_003CBFC0;
    case 364u: goto L_003CBFD4;
    default: bad_entry(c, 0x003C8000u); return;
    }
L_003C8000:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8050u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C8050u) [[unlikely]] return; }
L_003C8050:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  goto L_003C806C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003C8068u) [[unlikely]] return; }
L_003C8068:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_003C806C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8074u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C8074u) [[unlikely]] return; }
L_003C8074:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[4].w[0]);  goto L_003C8094; }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C808Cu); set32(c.r[6], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003C808Cu) [[unlikely]] return; }
L_003C808C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 2;
L_003C8094:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80B4u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003C80B4u) [[unlikely]] return; }
L_003C80B4:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 128u);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80CCu); set32(c.r[6], c.r[16].w[0] + 132u);  if (depth < kMaxDepth) unit_000F(c, 38u, depth + 1u); else { c.pc = 0x0015C3D0u; return; } if (c.pc != 0x003C80CCu) [[unlikely]] return; }
L_003C80CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 140u));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80FCu); st32((c.r[16].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003C8490u; return; } if (c.pc != 0x003C80FCu) [[unlikely]] return; }
L_003C80FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C8118; } }
L_003C8104:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003C8108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_003C8118:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C829C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  goto L_003C817C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003C82A0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003C817C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C81CC; } }
    c.f[2] = ld32((c.r[6].w[0] + 80u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C829C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = ld32((c.r[17].w[0] + 120u));  goto L_003C8214; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81C4u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003C8490u; return; } if (c.pc != 0x003C81C4u) [[unlikely]] return; }
L_003C81C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8210; } }
L_003C81CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81D4u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003C81D4u) [[unlikely]] return; }
L_003C81D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C829C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C8210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8210u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003C8490u; return; } if (c.pc != 0x003C8210u) [[unlikely]] return; }
L_003C8210:
    c.f[12] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 1;
L_003C8214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C821Cu);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003C821Cu) [[unlikely]] return; }
L_003C821C:
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 120u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C825C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[3].w[0] + 12u));  goto L_003C8274; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C825C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8268u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AA(c, 44u, depth + 1u); else { c.pc = 0x003C8A50u; return; } if (c.pc != 0x003C8268u) [[unlikely]] return; }
L_003C8268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C829C; } }
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 1;
L_003C8274:
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C829C; } }
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8294u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 44u, depth + 1u); else { c.pc = 0x003C8A50u; return; } if (c.pc != 0x003C8294u) [[unlikely]] return; }
L_003C8294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C829Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 82u, depth + 1u); else { c.pc = 0x003C9300u; return; } if (c.pc != 0x003C829Cu) [[unlikely]] return; }
L_003C829C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C82A0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C82C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7C40u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 374u, depth); }
L_003C82D0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C82F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003C8470; }
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));  goto L_003C8340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C846C; } }
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_003C8340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8348u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x003C8348u) [[unlikely]] return; }
L_003C8348:
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8358u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x003C8358u) [[unlikely]] return; }
L_003C8358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8360u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C8360u) [[unlikely]] return; }
L_003C8360:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8384u); st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C8384u) [[unlikely]] return; }
L_003C8384:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 199ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] | 24ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st64((c.r[3].w[0] + 16u), 0ull);
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C83BCu) [[unlikely]] return; }
L_003C83BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83CCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003C83CCu) [[unlikely]] return; }
L_003C83CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83D4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003C83D4u) [[unlikely]] return; }
L_003C83D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003C83DCu) [[unlikely]] return; }
L_003C83DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 336u, depth + 1u); else { c.pc = 0x003C3C10u; return; } if (c.pc != 0x003C83E4u) [[unlikely]] return; }
L_003C83E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 48u)));  goto L_003C8438; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[20].w[0] + 120u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003C8424; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_003C8448; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003C8424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C842Cu);  if (depth < kMaxDepth) unit_00AA(c, 121u, depth + 1u); else { c.pc = 0x003C9850u; return; } if (c.pc != 0x003C842Cu) [[unlikely]] return; }
L_003C842C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8444; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 1;
L_003C8438:
    set32(c.r[5], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8444u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 333u, depth + 1u); else { c.pc = 0x0015AE30u; return; } if (c.pc != 0x003C8444u) [[unlikely]] return; }
L_003C8444:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_003C8448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8450u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003C8450u) [[unlikely]] return; }
L_003C8450:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C845Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C845Cu) [[unlikely]] return; }
L_003C845C:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C846Cu); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x003C846Cu) [[unlikely]] return; }
L_003C846C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C8470:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C8490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84C8u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C84C8u) [[unlikely]] return; }
L_003C84C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = c.r[4].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[20].w[0] + 120u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C89A8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C84F8:
    c.f[0] = c.r[18].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0]), 0u);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C854Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C854Cu) [[unlikely]] return; }
L_003C854C:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C8570; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_003C8570:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8580u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C8580u) [[unlikely]] return; }
L_003C8580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003C85C4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003C85DC; } }
L_003C85C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003C85DC:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[3].w[0] << 16);
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003C8618; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003C8630; } }
L_003C8618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003C8630:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 24);
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003C8670; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003C868C; } }
L_003C8670:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003C868C:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 8);
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003C86CC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C86E8; } }
L_003C86CC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003C86E8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 108u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C873Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C873Cu) [[unlikely]] return; }
L_003C873C:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C8768; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_003C8768:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8778u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C8778u) [[unlikely]] return; }
L_003C8778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[2] = c.r[4].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003C87BC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003C87D4; } }
L_003C87BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003C87D4:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[7], c.r[4].w[0] << 16);
    c.f[0] = c.r[5].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003C8810; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003C8828; } }
L_003C8810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
L_003C8828:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 24);
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003C8868; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003C8884; } }
L_003C8868:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_003C8884:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[4].w[0] << 8);
    c.f[1] = ld32((c.r[3].w[0] + 96u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];  if (t) { goto L_003C88C4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003C88E0; } }
L_003C88C4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003C88E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C8950; } }
    c.f[0] = c.r[18].w[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[4].w[0]);  if (t) { goto L_003C8988; } }
    c.budget -= 1;
L_003C8950:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 14;
L_003C8988:
    set32(c.r[3], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C84F8u | kUnwind; return; } goto L_003C84F8; } }
    c.budget -= 1;
L_003C89A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C89D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C89B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C89B8u | kUnwind; return; } goto L_003C89B8; } }
L_003C89D8:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003C8A28; }
    set32(c.r[4], ld32((c.r[20].w[0] + 92u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] - 36u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] - 12u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 16;
L_003C8A28:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C8A50:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A94u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00AA(c, 85u, depth + 1u); else { c.pc = 0x003C93D0u; return; } if (c.pc != 0x003C8A94u) [[unlikely]] return; }
L_003C8A94:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 44u)));  goto L_003C8B44; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8AB0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003C8AB0u) [[unlikely]] return; }
L_003C8AB0:
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8ABCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003C8ABCu) [[unlikely]] return; }
L_003C8ABC:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[13] = ld32((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    c.f[14] = ld32((c.r[3].w[0] + 4u));
    c.f[15] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8AFCu); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003C8AFCu) [[unlikely]] return; }
L_003C8AFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[13] = ld32((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.f[14] = ld32((c.r[3].w[0] + 4u));
    c.f[15] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B34u); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003C8B34u) [[unlikely]] return; }
L_003C8B34:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003C92C8; } }
L_003C8B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 120u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_003C8B74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 4;
L_003C8B74:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[22];  goto L_003C8B98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B90u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x003C8B90u) [[unlikely]] return; }
L_003C8B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);  if (t) { goto L_003C8BA4; } }
L_003C8B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BA0u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003C8BA0u) [[unlikely]] return; }
L_003C8BA0:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 1;
L_003C8BA4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[22];  goto L_003C8BCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BC0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C8BC0u) [[unlikely]] return; }
L_003C8BC0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_003C8BD8; } }
L_003C8BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BD4u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C8BD4u) [[unlikely]] return; }
L_003C8BD4:
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_003C8BD8:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003C8C20; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003C8BEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8C08; } }
    st32((c.r[20].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 2;
L_003C8C08:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8BECu | kUnwind; return; } goto L_003C8BEC; } }
    c.budget -= 1;
L_003C8C20:
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_003C8D8C; }
    c.f[2] = ld32((c.r[20].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[20].w[0] + 124u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C8D50; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C8D50; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C8C6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[21], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C84u); set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003C8C84u) [[unlikely]] return; }
L_003C8C84:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C94u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003C8C94u) [[unlikely]] return; }
L_003C8C94:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[19] = c.f[16];
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[13] = ld32((c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.f[14] = ld32((c.r[4].w[0] + 4u));
    c.f[15] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CE8u); set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003C8CE8u) [[unlikely]] return; }
L_003C8CE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[13] = ld32((c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.f[14] = ld32((c.r[4].w[0] + 4u));
    c.f[15] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[19] = c.f[16];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D2Cu); set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003C8D2Cu) [[unlikely]] return; }
L_003C8D2C:
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8C6Cu | kUnwind; return; } goto L_003C8C6C; } }
    c.budget -= 1;
L_003C8D50:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D64u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C8D64u) [[unlikely]] return; }
L_003C8D64:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D70u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C8D70u) [[unlikely]] return; }
L_003C8D70:
    c.f[21] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8DA0; } }
L_003C8D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D94u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C8D94u) [[unlikely]] return; }
L_003C8D94:
    c.f[21] = fp::ee::div(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 3;
L_003C8DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0]), c.f[22]);  if (t) { goto L_003C8E40; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003C8E40:
    set32(c.r[7], ld32((c.r[20].w[0] + 100u)));
    c.f[16] = 0u;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.f[13] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[2].w[0] + 4u));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E9Cu); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003C8E9Cu) [[unlikely]] return; }
L_003C8E9C:
    set32(c.r[7], ld32((c.r[20].w[0] + 100u)));
    c.f[16] = 0u;
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.f[13] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[2].w[0] + 4u));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EF8u); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003C8EF8u) [[unlikely]] return; }
L_003C8EF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003C92CC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F1Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x003C8F1Cu) [[unlikely]] return; }
L_003C8F1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F30u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x003C8F30u) [[unlikely]] return; }
L_003C8F30:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F40u); set32(c.r[16], ld32((c.r[20].w[0] + 40u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C8F40u) [[unlikely]] return; }
L_003C8F40:
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F6Cu);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003C8F6Cu) [[unlikely]] return; }
L_003C8F6C:
    set32(c.r[3], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C92C8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C8F80:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F90u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003C8F90u) [[unlikely]] return; }
L_003C8F90:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FA0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003C8FA0u) [[unlikely]] return; }
L_003C8FA0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FB0u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003C8FB0u) [[unlikely]] return; }
L_003C8FB0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FBCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003C8FBCu) [[unlikely]] return; }
L_003C8FBC:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.f[12] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FDCu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 96u, depth + 1u); else { c.pc = 0x003C9530u; return; } if (c.pc != 0x003C8FDCu) [[unlikely]] return; }
L_003C8FDC:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FFCu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 96u, depth + 1u); else { c.pc = 0x003C9530u; return; } if (c.pc != 0x003C8FFCu) [[unlikely]] return; }
L_003C8FFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9148; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9080; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9034u); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00AA(c, 112u, depth + 1u); else { c.pc = 0x003C9780u; return; } if (c.pc != 0x003C9034u) [[unlikely]] return; }
L_003C9034:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[2]);  if (t) { goto L_003C9290; } }
    c.budget -= 1;
L_003C9080:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.f[0] = c.r[18].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    st32((c.r[29].w[0] + 236u), c.f[1]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C90C0; } }
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.budget -= 1;
L_003C90C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C90D4u); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00AA(c, 112u, depth + 1u); else { c.pc = 0x003C9780u; return; } if (c.pc != 0x003C90D4u) [[unlikely]] return; }
L_003C90D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.f[3] = ld32((c.r[29].w[0] + 236u));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[4] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[3]);
    st32((c.r[3].w[0] + 16u), c.f[4]);
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.f[3] = ld32((c.r[29].w[0] + 236u));
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[3]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[4]);  if (t) { goto L_003C9290; } }
    c.budget -= 1;
L_003C9148:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 236u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C915Cu); set32(c.r[7], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_00AA(c, 107u, depth + 1u); else { c.pc = 0x003C96A0u; return; } if (c.pc != 0x003C915Cu) [[unlikely]] return; }
L_003C915C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 228u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9170u); set32(c.r[7], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00AA(c, 107u, depth + 1u); else { c.pc = 0x003C96A0u; return; } if (c.pc != 0x003C9170u) [[unlikely]] return; }
L_003C9170:
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 152u), 0u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91A8u); st32((c.r[29].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003C91A8u) [[unlikely]] return; }
L_003C91A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[4] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[5] = ld32((c.r[2].w[0] + 76u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 236u), c.f[5]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    c.f[2] = ld32((c.r[2].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 232u), c.f[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9228u); st32((c.r[29].w[0] + 224u), c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 112u, depth + 1u); else { c.pc = 0x003C9780u; return; } if (c.pc != 0x003C9228u) [[unlikely]] return; }
L_003C9228:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.f[4] = ld32((c.r[29].w[0] + 232u));
    c.f[3] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[3]);
    st32((c.r[3].w[0] + 16u), c.f[4]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.f[4] = ld32((c.r[29].w[0] + 224u));
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[3]);
    st32((c.r[3].w[0] + 16u), c.f[4]);
    c.budget -= 26;
L_003C9290:
    c.f[22] = fp::ee::sub(c.fcr31, c.f[22], c.f[21]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C92B0; } }
    c.f[22] = c.f[0];
    c.budget -= 2;
L_003C92B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8F80u | kUnwind; return; } goto L_003C8F80; } }
L_003C92C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003C92CC:
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003C9300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C93A8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C9330:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9344u); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C9344u) [[unlikely]] return; }
L_003C9344:
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003C9368; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C9368:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9330u | kUnwind; return; } goto L_003C9330; } }
    c.budget -= 1;
L_003C93A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C93D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C9504; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9414u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 133u, depth + 1u); else { c.pc = 0x003C9AB0u; return; } if (c.pc != 0x003C9414u) [[unlikely]] return; }
L_003C9414:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C942Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003C942Cu) [[unlikely]] return; }
L_003C942C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9438u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C9438u) [[unlikely]] return; }
L_003C9438:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C946Cu); st32((c.r[29].w[0] + 136u), c.f[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003C946Cu) [[unlikely]] return; }
L_003C946C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C947Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C947Cu) [[unlikely]] return; }
L_003C947C:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], ld32((c.r[20].w[0] + 44u)));  goto L_003C94C4; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C949Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00AA(c, 133u, depth + 1u); else { c.pc = 0x003C9AB0u; return; } if (c.pc != 0x003C949Cu) [[unlikely]] return; }
L_003C949C:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94B4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003C94B4u) [[unlikely]] return; }
L_003C94B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94C0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C94C0u) [[unlikely]] return; }
L_003C94C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_003C94C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[3].w[0] + 92u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94F4u); st32((c.r[29].w[0] + 136u), c.f[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003C94F4u) [[unlikely]] return; }
L_003C94F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9504u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C9504u) [[unlikely]] return; }
L_003C9504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003C9530:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.f[21] = c.f[12];  if (t) { goto L_003C95CC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  goto L_003C9584; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003C9674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9670; } }
L_003C9584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C958Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C958Cu) [[unlikely]] return; }
L_003C958C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9598u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C9598u) [[unlikely]] return; }
L_003C9598:
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C95B4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003C95B4u) [[unlikely]] return; }
L_003C95B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C95C4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C95C4u) [[unlikely]] return; }
L_003C95C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9670; } }
L_003C95CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 96u)));
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_003C95F0; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003C95F0:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 96u)));  goto L_003C962C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9604u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C9604u) [[unlikely]] return; }
L_003C9604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9610u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C9610u) [[unlikely]] return; }
L_003C9610:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_003C9654; } }
L_003C962C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9638u); set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C9638u) [[unlikely]] return; }
L_003C9638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9644u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C9644u) [[unlikely]] return; }
L_003C9644:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 4;
L_003C9654:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9660u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003C9660u) [[unlikely]] return; }
L_003C9660:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9670u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C9670u) [[unlikely]] return; }
L_003C9670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C9674:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C96A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96DCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003C96DCu) [[unlikely]] return; }
L_003C96DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 108u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96F4u); set32(c.r[8], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0015C690u; return; } if (c.pc != 0x003C96F4u) [[unlikely]] return; }
L_003C96F4:
    c.f[3] = ld32((c.r[19].w[0] + 136u));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[4] = 0u;
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 140u));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9748u); set32(c.r[4], ld32((c.r[19].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003C9748u) [[unlikely]] return; }
L_003C9748:
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9760u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 290u, depth + 1u); else { c.pc = 0x003C6D80u; return; } if (c.pc != 0x003C9760u) [[unlikely]] return; }
L_003C9760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C9780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003C97B8u) [[unlikely]] return; }
L_003C97B8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003C97C4u) [[unlikely]] return; }
L_003C97C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[2].w[0] + 124u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003C97D8u) [[unlikely]] return; }
L_003C97D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97E8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C97E8u) [[unlikely]] return; }
L_003C97E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97F8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003C97F8u) [[unlikely]] return; }
L_003C97F8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9804u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003C9804u) [[unlikely]] return; }
L_003C9804:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[2].w[0] + 124u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9818u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003C9818u) [[unlikely]] return; }
L_003C9818:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9828u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C9828u) [[unlikely]] return; }
L_003C9828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C9850:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9888u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C9888u) [[unlikely]] return; }
L_003C9888:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98A0u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C98A0u) [[unlikely]] return; }
L_003C98A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98B8u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C98B8u) [[unlikely]] return; }
L_003C98B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C98C8; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_003C98DC; }
L_003C98C8:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_003C9A88; } }
L_003C98DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003C99F8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[9].d[0] | 65280ull;
    c.r[10].d[0] = c.r[9].d[0] | 255ull;
    c.budget -= 8;
L_003C9904:
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 28u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 28u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    set32(c.r[7], c.r[7].w[0] + 48u);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[4].w[0] + 28u), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 96u)));
    c.r[9].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 60;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9904u | kUnwind; return; } goto L_003C9904; } }
    c.budget -= 1;
L_003C99F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C9A00u) [[unlikely]] return; }
L_003C9A00:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 341u, depth + 1u); else { c.pc = 0x0015AEB0u; return; } if (c.pc != 0x003C9A1Cu) [[unlikely]] return; }
L_003C9A1C:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 341u, depth + 1u); else { c.pc = 0x0015AEB0u; return; } if (c.pc != 0x003C9A2Cu) [[unlikely]] return; }
L_003C9A2C:
    set32(c.r[5], ld32((c.r[20].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 340u, depth + 1u); else { c.pc = 0x0015AEA0u; return; } if (c.pc != 0x003C9A40u) [[unlikely]] return; }
L_003C9A40:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003C9A58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C9A58u) [[unlikely]] return; }
L_003C9A58:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003C9A70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C9A70u) [[unlikely]] return; }
L_003C9A70:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003C9A8C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C9A88u) [[unlikely]] return; }
L_003C9A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C9A8C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C9AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C9AE4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9ADCu); set32(c.r[5], ld32((c.r[7].w[0] + 32u)));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C9ADCu) [[unlikely]] return; }
L_003C9ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C9B10; } }
L_003C9AE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003C9B04; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9AFCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C9AFCu) [[unlikely]] return; }
L_003C9AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9B0C; } }
L_003C9B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B0Cu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003C9B0Cu) [[unlikely]] return; }
L_003C9B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C9B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003C9B34u) [[unlikely]] return; }
L_003C9B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 5344u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BA0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C9BA0u) [[unlikely]] return; }
L_003C9BA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C9BBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C9BB8u) [[unlikely]] return; }
L_003C9BB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C9BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BF8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003C9BF8u) [[unlikely]] return; }
L_003C9BF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C9C18; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 137u, depth + 1u); else { c.pc = 0x003C9B20u; return; } if (c.pc != 0x003C9C14u) [[unlikely]] return; }
L_003C9C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C9C18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 450u);  c.pc = t; return; }
L_003C9C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9C94; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C7Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003C9C7Cu) [[unlikely]] return; }
L_003C9C7C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C8Cu); set32(c.r[6], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003C9C8Cu) [[unlikely]] return; }
L_003C9C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C9CA0; } }
L_003C9C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C9Cu); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C9C9Cu) [[unlikely]] return; }
L_003C9C9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C9CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CA8u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 327u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x003C9CA8u) [[unlikely]] return; }
L_003C9CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003C9CD4u) [[unlikely]] return; }
L_003C9CD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5408u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D30u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C9D30u) [[unlikely]] return; }
L_003C9D30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C9D4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C9D48u) [[unlikely]] return; }
L_003C9D48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C9D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D88u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003C9D88u) [[unlikely]] return; }
L_003C9D88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C9DA8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 151u, depth + 1u); else { c.pc = 0x003C9CC0u; return; } if (c.pc != 0x003C9DA4u) [[unlikely]] return; }
L_003C9DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C9DA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 451u);  c.pc = t; return; }
L_003C9DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9E24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E0Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x003C9E0Cu) [[unlikely]] return; }
L_003C9E0C:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E1Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003C9E1Cu) [[unlikely]] return; }
L_003C9E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C9E30; } }
L_003C9E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E2Cu); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C9E2Cu) [[unlikely]] return; }
L_003C9E2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C9E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E38u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 329u, depth + 1u); else { c.pc = 0x00157280u; return; } if (c.pc != 0x003C9E38u) [[unlikely]] return; }
L_003C9E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003C9E64u) [[unlikely]] return; }
L_003C9E64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5472u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9ED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9EC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C9EC0u) [[unlikely]] return; }
L_003C9EC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C9EDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9ED8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C9ED8u) [[unlikely]] return; }
L_003C9ED8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C9EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F18u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003C9F18u) [[unlikely]] return; }
L_003C9F18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C9F38; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 165u, depth + 1u); else { c.pc = 0x003C9E50u; return; } if (c.pc != 0x003C9F34u) [[unlikely]] return; }
L_003C9F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C9F38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 602u);  c.pc = t; return; }
L_003C9F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003C9F7Cu) [[unlikely]] return; }
L_003C9F7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C9FC0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 335u, depth + 1u); else { c.pc = 0x003C3BF0u; return; } if (c.pc != 0x003C9FA4u) [[unlikely]] return; }
L_003C9FA4:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003C9FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C9FC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003C9FE4u) [[unlikely]] return; }
L_003C9FE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5536u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CA058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA040u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CA040u) [[unlikely]] return; }
L_003CA040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CA05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CA058u) [[unlikely]] return; }
L_003CA058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CA05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA098u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CA098u) [[unlikely]] return; }
L_003CA098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CA0B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 177u, depth + 1u); else { c.pc = 0x003C9FD0u; return; } if (c.pc != 0x003CA0B4u) [[unlikely]] return; }
L_003CA0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CA0B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 352u);  c.pc = t; return; }
L_003CA0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CA1D0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_003CA120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA1CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_003CA120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA128u); set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 221u, depth + 1u); else { c.pc = 0x003C64D0u; return; } if (c.pc != 0x003CA128u) [[unlikely]] return; }
L_003CA128:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CA194; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[3]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 12;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_003CA17C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA170u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003CA170u) [[unlikely]] return; }
L_003CA170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA1CC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003CA17C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003CA1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA18Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 441u, depth + 1u); else { c.pc = 0x0015BB70u; return; } if (c.pc != 0x003CA18Cu) [[unlikely]] return; }
L_003CA18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA1CC; } }
L_003CA194:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_003CA1B8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1ACu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003CA1ACu) [[unlikely]] return; }
L_003CA1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA1CC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003CA1B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003CA1CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1CCu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 441u, depth + 1u); else { c.pc = 0x0015BB70u; return; } if (c.pc != 0x003CA1CCu) [[unlikely]] return; }
L_003CA1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CA1D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CA1F4u) [[unlikely]] return; }
L_003CA1F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 5600u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA244; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003CA244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CA2DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5600u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    if (c.r[6].sd[0] < 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA2BC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA2B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA2B8u); set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A9(c, 215u, depth + 1u); else { c.pc = 0x003C63B0u; return; } if (c.pc != 0x003CA2B8u) [[unlikely]] return; }
L_003CA2B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CA2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CA2C4u) [[unlikely]] return; }
L_003CA2C4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA2E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA2DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CA2DCu) [[unlikely]] return; }
L_003CA2DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CA2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA328u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CA328u) [[unlikely]] return; }
L_003CA328:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CA348; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA344u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 192u, depth + 1u); else { c.pc = 0x003CA1E0u; return; } if (c.pc != 0x003CA344u) [[unlikely]] return; }
L_003CA344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CA348:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 350u);  c.pc = t; return; }
L_003CA370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CA3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA39Cu);  if (depth < kMaxDepth) unit_00AA(c, 215u, depth + 1u); else { c.pc = 0x003CA510u; return; } if (c.pc != 0x003CA39Cu) [[unlikely]] return; }
L_003CA39C:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CA478; }
L_003CA3AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3B8u); set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 221u, depth + 1u); else { c.pc = 0x003C64D0u; return; } if (c.pc != 0x003CA3B8u) [[unlikely]] return; }
L_003CA3B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA448; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA438; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA428; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CA400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_003CA454; } }
L_003CA400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003CA408u) [[unlikely]] return; }
L_003CA408:
    set32(c.r[17], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003CA414u) [[unlikely]] return; }
L_003CA414:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA420u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x003CA420u) [[unlikely]] return; }
L_003CA420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA474; } }
L_003CA428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA430u);  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003CA430u) [[unlikely]] return; }
L_003CA430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA450; } }
L_003CA438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA440u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003CA440u) [[unlikely]] return; }
L_003CA440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA450; } }
L_003CA448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA450u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003CA450u) [[unlikely]] return; }
L_003CA450:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003CA454:
    set32(c.r[17], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA464u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003CA464u) [[unlikely]] return; }
L_003CA464:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA474u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x003CA474u) [[unlikely]] return; }
L_003CA474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CA478:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CA504; }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA500; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_003CA4EC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4E8u); set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A9(c, 215u, depth + 1u); else { c.pc = 0x003C63B0u; return; } if (c.pc != 0x003CA4E8u) [[unlikely]] return; }
L_003CA4E8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003CA4EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003CA500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CA504:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CA55C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA538u); set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 205u, depth + 1u); else { c.pc = 0x003C61C0u; return; } if (c.pc != 0x003CA538u) [[unlikely]] return; }
L_003CA538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CA550; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003CA584; } }
L_003CA550:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003CA584; } }
L_003CA55C:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CA580; }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA574u); set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 206u, depth + 1u); else { c.pc = 0x003C6210u; return; } if (c.pc != 0x003CA574u) [[unlikely]] return; }
L_003CA574:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003CA584; } }
L_003CA580:
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_003CA584:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA598u); set32(c.r[4], ld32((c.r[3].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 210u, depth + 1u); else { c.pc = 0x003C62F0u; return; } if (c.pc != 0x003CA598u) [[unlikely]] return; }
L_003CA598:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA5A4u); set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 208u, depth + 1u); else { c.pc = 0x003C62A0u; return; } if (c.pc != 0x003CA5A4u) [[unlikely]] return; }
L_003CA5A4:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA5D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CA5D4u) [[unlikely]] return; }
L_003CA5D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5664u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CA648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA630u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CA630u) [[unlikely]] return; }
L_003CA630:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CA64C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA648u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CA648u) [[unlikely]] return; }
L_003CA648:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CA64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA688u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CA688u) [[unlikely]] return; }
L_003CA688:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CA6A8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA6A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 220u, depth + 1u); else { c.pc = 0x003CA5C0u; return; } if (c.pc != 0x003CA6A4u) [[unlikely]] return; }
L_003CA6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CA6A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 351u);  c.pc = t; return; }
L_003CA6D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003CA784; }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_003CA714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA780; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_003CA714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA71Cu); set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_00A9(c, 221u, depth + 1u); else { c.pc = 0x003C64D0u; return; } if (c.pc != 0x003CA71Cu) [[unlikely]] return; }
L_003CA71C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA72Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003CA72Cu) [[unlikely]] return; }
L_003CA72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA734u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x003CA734u) [[unlikely]] return; }
L_003CA734:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CA778; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003CA774; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CA764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA780; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CA764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA76Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 443u, depth + 1u); else { c.pc = 0x0015BB90u; return; } if (c.pc != 0x003CA76Cu) [[unlikely]] return; }
L_003CA76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA780; } }
L_003CA774:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CA778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA780u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 447u, depth + 1u); else { c.pc = 0x0015BC50u; return; } if (c.pc != 0x003CA780u) [[unlikely]] return; }
L_003CA780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003CA784:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CA7BCu) [[unlikely]] return; }
L_003CA7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5728u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003CA810; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA80C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA80C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003CA824; }
L_003CA80C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CA810:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CA874; } }
L_003CA824:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA828:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 80u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 88u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA84Cu); st32((c.r[3].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00AA(c, 261u, depth + 1u); else { c.pc = 0x003CAD60u; return; } if (c.pc != 0x003CA84Cu) [[unlikely]] return; }
L_003CA84C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA828u | kUnwind; return; } goto L_003CA828; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
L_003CA874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CA8D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA8C0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CA8C0u) [[unlikely]] return; }
L_003CA8C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CA8DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA8D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CA8D8u) [[unlikely]] return; }
L_003CA8D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CA8DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA918u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CA918u) [[unlikely]] return; }
L_003CA918:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CA938; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA934u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 235u, depth + 1u); else { c.pc = 0x003CA7A0u; return; } if (c.pc != 0x003CA934u) [[unlikely]] return; }
L_003CA934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CA938:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 204u);  c.pc = t; return; }
L_003CA960:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
L_003CA994:
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9B0u); set32(c.r[17], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003CA9B0u) [[unlikely]] return; }
L_003CA9B0:
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003CAA08; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_003CA9D0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003CAA08; } }
    c.budget -= 1;
L_003CA9F0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA9D0u | kUnwind; return; } goto L_003CA9D0; } }
L_003CAA08:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003CAA38; } }
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CAA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA28u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003CAA28u) [[unlikely]] return; }
L_003CAA28:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.budget -= 4;
L_003CAA38:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA994u | kUnwind; return; } goto L_003CA994; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CAA90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003CAC54; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003CAADC:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 64u);  if (t) { goto L_003CAC20; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003CABA8; } }
L_003CAB00:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CAB20; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003CAC20; } }
    c.budget -= 1;
L_003CAB20:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CAB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_003CAB60; } }
    c.budget -= 1;
L_003CAB58:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_003CAB60:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB6Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 261u, depth + 1u); else { c.pc = 0x003CAD60u; return; } if (c.pc != 0x003CAB6Cu) [[unlikely]] return; }
L_003CAB6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];  if (t) { goto L_003CAB90; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003CAB90; } }
    st32((c.r[17].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003CAC20; } }
L_003CAB90:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAB00u | kUnwind; return; } goto L_003CAB00; } }
    c.budget -= 1;
L_003CABA8:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[13] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CABE0; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003CAC20; } }
L_003CABE0:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    c.f[14] = ld32((c.r[3].w[0] + 12u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABFCu); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003CABFCu) [[unlikely]] return; }
L_003CABFC:
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 9;
L_003CAC20:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 28u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAADCu | kUnwind; return; } goto L_003CAADC; } }
    c.f[3] = ld32((c.r[21].w[0] + 124u));
    c.f[2] = ld32((c.r[21].w[0] + 96u));
    c.f[1] = ld32((c.r[21].w[0] + 68u));
    c.f[0] = ld32((c.r[21].w[0] + 152u));
    st32((c.r[21].w[0] + 60u), c.f[0]);
    st32((c.r[21].w[0] + 48u), c.f[1]);
    st32((c.r[21].w[0] + 52u), c.f[2]);
    st32((c.r[21].w[0] + 56u), c.f[3]);
    c.budget -= 8;
L_003CAC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CAC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CAC94u) [[unlikely]] return; }
L_003CAC94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CACB4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003CACB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CACC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CAD48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003CACFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CAD4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003CACFC:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CAD34; }
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD1Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CAD1Cu) [[unlikely]] return; }
L_003CAD1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003CAD48; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003CAD34:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD48u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CAD48u) [[unlikely]] return; }
L_003CAD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CAD4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CAD60:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = 0u;
    st32((c.r[5].w[0] + 72u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 64u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[5].w[0] + 84u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[5].w[0] + 76u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 28;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[5].w[0] + 64u);  if (t) { goto L_003CADE0; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_003CADE4; } }
L_003CADE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CADE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CADF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CAEAC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_003CAE30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF30; } }
L_003CAE30:
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003CAE38:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[20].w[0] & 31u));
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAE90; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[6], c.r[19].w[0] + 64u);  if (t) { goto L_003CAE90; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CAE90; } }
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE90u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 261u, depth + 1u); else { c.pc = 0x003CAD60u; return; } if (c.pc != 0x003CAE90u) [[unlikely]] return; }
L_003CAE90:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAE38u | kUnwind; return; } goto L_003CAE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF30; } }
L_003CAEAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] >> 16);
    c.budget -= 6;
L_003CAEC4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAF18; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[6], c.r[20].w[0] + 64u);  if (t) { goto L_003CAF18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CAF18; } }
    st32((c.r[6].w[0] + 16u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF14u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 261u, depth + 1u); else { c.pc = 0x003CAD60u; return; } if (c.pc != 0x003CAF14u) [[unlikely]] return; }
L_003CAF14:
    c.budget -= 1;
L_003CAF18:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 28u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAEC4u | kUnwind; return; } goto L_003CAEC4; } }
    c.budget -= 1;
L_003CAF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CAF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CAF74u) [[unlikely]] return; }
L_003CAF74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5792u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CAFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CAFE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFD0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CAFD0u) [[unlikely]] return; }
L_003CAFD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CAFEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CAFE8u) [[unlikely]] return; }
L_003CAFE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CAFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CB000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB028u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CB028u) [[unlikely]] return; }
L_003CB028:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CB048; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB044u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 267u, depth + 1u); else { c.pc = 0x003CAF60u; return; } if (c.pc != 0x003CB044u) [[unlikely]] return; }
L_003CB044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CB048:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CB060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 200u);  c.pc = t; return; }
L_003CB070:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[3]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CB0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB0C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CB0C4u) [[unlikely]] return; }
L_003CB0C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CB0E4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003CB0E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB15C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CB148; }
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB134u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CB134u) [[unlikely]] return; }
L_003CB134:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003CB15C; } }
L_003CB148:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB15Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CB15Cu) [[unlikely]] return; }
L_003CB15C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB18Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CB18Cu) [[unlikely]] return; }
L_003CB18C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5856u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003CB1E0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB1DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB1DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003CB1F4; }
L_003CB1DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CB1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CB248; } }
L_003CB1F4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB1F8:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 80u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 92u), 0u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB220u); st32((c.r[3].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00AA(c, 309u, depth + 1u); else { c.pc = 0x003CB7A0u; return; } if (c.pc != 0x003CB220u) [[unlikely]] return; }
L_003CB220:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB1F8u | kUnwind; return; } goto L_003CB1F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
L_003CB248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CB260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CB2A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB290u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CB290u) [[unlikely]] return; }
L_003CB290:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CB2AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CB2A8u) [[unlikely]] return; }
L_003CB2A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CB2AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CB2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2E8u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CB2E8u) [[unlikely]] return; }
L_003CB2E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CB308; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB304u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 282u, depth + 1u); else { c.pc = 0x003CB170u; return; } if (c.pc != 0x003CB304u) [[unlikely]] return; }
L_003CB304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CB308:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CB320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 205u);  c.pc = t; return; }
L_003CB330:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003CB440; }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003CB378:
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB394u); set32(c.r[17], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003CB394u) [[unlikely]] return; }
L_003CB394:
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003CB3E8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003CB3B0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003CB3E8; } }
    c.budget -= 1;
L_003CB3D0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB3B0u | kUnwind; return; } goto L_003CB3B0; } }
L_003CB3E8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003CB418; } }
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB408u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003CB408u) [[unlikely]] return; }
L_003CB408:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[1]);
    c.budget -= 4;
L_003CB418:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 36u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB378u | kUnwind; return; } goto L_003CB378; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
L_003CB440:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CB470:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003CB690; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003CB4BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 64u);  if (t) { goto L_003CB650; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CB510; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB510; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB510; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB510u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 309u, depth + 1u); else { c.pc = 0x003CB7A0u; return; } if (c.pc != 0x003CB510u) [[unlikely]] return; }
L_003CB510:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003CB5D8; } }
L_003CB528:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB548; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003CB650; } }
    c.budget -= 1;
L_003CB548:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CB580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_003CB588; } }
    c.budget -= 1;
L_003CB580:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_003CB588:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB598u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 309u, depth + 1u); else { c.pc = 0x003CB7A0u; return; } if (c.pc != 0x003CB598u) [[unlikely]] return; }
L_003CB598:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];  if (t) { goto L_003CB5C0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003CB5C0; } }
    st32((c.r[17].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003CB650; } }
    c.budget -= 1;
L_003CB5C0:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB528u | kUnwind; return; } goto L_003CB528; } }
    c.budget -= 1;
L_003CB5D8:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[20]);
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB610; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003CB650; } }
    c.budget -= 1;
L_003CB610:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[14] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB630u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003CB630u) [[unlikely]] return; }
L_003CB630:
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_003CB650:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 36u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB4BCu | kUnwind; return; } goto L_003CB4BC; } }
    c.f[3] = ld32((c.r[21].w[0] + 140u));
    c.f[2] = ld32((c.r[21].w[0] + 104u));
    c.f[1] = ld32((c.r[21].w[0] + 68u));
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    st32((c.r[21].w[0] + 60u), c.f[0]);
    st32((c.r[21].w[0] + 48u), c.f[1]);
    st32((c.r[21].w[0] + 52u), c.f[2]);
    st32((c.r[21].w[0] + 56u), c.f[3]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_003CB690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CB6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CB6D4u) [[unlikely]] return; }
L_003CB6D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CB6F4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003CB6F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB788; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003CB73C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CB78C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003CB73C:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CB774; }
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB75Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CB75Cu) [[unlikely]] return; }
L_003CB75C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003CB788; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003CB774:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB788u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CB788u) [[unlikely]] return; }
L_003CB788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CB78C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB7A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CB804; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  goto L_003CB7E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003CB824; } }
L_003CB7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7F0u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CB7F0u) [[unlikely]] return; }
L_003CB7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7F8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CB7F8u) [[unlikely]] return; }
L_003CB7F8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003CB820; } }
L_003CB804:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB818u); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CB818u) [[unlikely]] return; }
L_003CB818:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003CB820:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003CB824:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    set32(c.r[16], c.r[4].w[0] + 64u);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003CB88C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB884u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 316u, depth + 1u); else { c.pc = 0x003CB910u; return; } if (c.pc != 0x003CB884u) [[unlikely]] return; }
L_003CB884:
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 2;
L_003CB88C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 316u, depth + 1u); else { c.pc = 0x003CB910u; return; } if (c.pc != 0x003CB8A4u) [[unlikely]] return; }
L_003CB8A4:
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[5], c.r[17].w[0] + 2u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[2].w[0] + 20u));
    c.f[13] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 316u, depth + 1u); else { c.pc = 0x003CB910u; return; } if (c.pc != 0x003CB8C0u) [[unlikely]] return; }
L_003CB8C0:
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003CB8E8; }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_003CB8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CB910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003CB980; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003CB984; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003CB964; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CB994; } }
L_003CB960:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003CB964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB96Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003CB96Cu) [[unlikely]] return; }
L_003CB96C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003CB990; } }
L_003CB980:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003CB984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB98Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CB98Cu) [[unlikely]] return; }
L_003CB98C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003CB990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CB994:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CB9C4u) [[unlikely]] return; }
L_003CB9C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 5920u);
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
L_003CBA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CBA48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA30u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CBA30u) [[unlikely]] return; }
L_003CBA30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CBA4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CBA48u) [[unlikely]] return; }
L_003CBA48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CBA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA88u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CBA88u) [[unlikely]] return; }
L_003CBA88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CBAA8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 319u, depth + 1u); else { c.pc = 0x003CB9B0u; return; } if (c.pc != 0x003CBAA4u) [[unlikely]] return; }
L_003CBAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CBAA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CBAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 202u);  c.pc = t; return; }
L_003CBAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAF8u);  if (depth < kMaxDepth) unit_00AA(c, 337u, depth + 1u); else { c.pc = 0x003CBC30u; return; } if (c.pc != 0x003CBAF8u) [[unlikely]] return; }
L_003CBAF8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003CBB5C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CBB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB58u);  if (depth < kMaxDepth) unit_00AA(c, 337u, depth + 1u); else { c.pc = 0x003CBC30u; return; } if (c.pc != 0x003CBB58u) [[unlikely]] return; }
L_003CBB58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CBB5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CBB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CBB84u) [[unlikely]] return; }
L_003CBB84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CBBA4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003CBBA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBC1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003CBC08; }
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CBBF4u) [[unlikely]] return; }
L_003CBBF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003CBC1C; } }
L_003CBC08:
    set32(c.r[7], c.r[16].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC1Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 339u, depth + 1u); else { c.pc = 0x003C3C70u; return; } if (c.pc != 0x003CBC1Cu) [[unlikely]] return; }
L_003CBC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBC30:
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
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CBC8C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003CBC74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003CBCA8; } }
L_003CBC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC7Cu); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003CBC7Cu) [[unlikely]] return; }
L_003CBC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC84u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CBC84u) [[unlikely]] return; }
L_003CBC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003CBCA4; } }
L_003CBC8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCA0u); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003CBCA0u) [[unlikely]] return; }
L_003CBCA0:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003CBCA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003CBCA8:
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 345u, depth + 1u); else { c.pc = 0x003CBD40u; return; } if (c.pc != 0x003CBCBCu) [[unlikely]] return; }
L_003CBCBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[22] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 345u, depth + 1u); else { c.pc = 0x003CBD40u; return; } if (c.pc != 0x003CBCD8u) [[unlikely]] return; }
L_003CBCD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 345u, depth + 1u); else { c.pc = 0x003CBD40u; return; } if (c.pc != 0x003CBCF4u) [[unlikely]] return; }
L_003CBCF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 345u, depth + 1u); else { c.pc = 0x003CBD40u; return; } if (c.pc != 0x003CBD10u) [[unlikely]] return; }
L_003CBD10:
    st32((c.r[17].w[0] + 60u), c.f[22]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    st32((c.r[17].w[0] + 56u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CBD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003CBDB0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003CBDB4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003CBD94; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CBD90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CBDC4; } }
L_003CBD90:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003CBD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD9Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003CBD9Cu) [[unlikely]] return; }
L_003CBD9C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003CBDC0; } }
L_003CBDB0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003CBDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDBCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003CBDBCu) [[unlikely]] return; }
L_003CBDBC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003CBDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003CBDC4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003CBDF4u) [[unlikely]] return; }
L_003CBDF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
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
L_003CBE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CBE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003CBE60u) [[unlikely]] return; }
L_003CBE60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CBE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003CBE78u) [[unlikely]] return; }
L_003CBE78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CBE7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBEB8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003CBEB8u) [[unlikely]] return; }
L_003CBEB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CBED8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 348u, depth + 1u); else { c.pc = 0x003CBDE0u; return; } if (c.pc != 0x003CBED4u) [[unlikely]] return; }
L_003CBED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CBED8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CBEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 203u);  c.pc = t; return; }
L_003CBF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 4u, depth + 1u); else { c.pc = 0x003CC080u; return; } if (c.pc != 0x003CBF14u) [[unlikely]] return; }
L_003CBF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 21u, depth + 1u); else { c.pc = 0x003CC330u; return; } if (c.pc != 0x003CBF1Cu) [[unlikely]] return; }
L_003CBF1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBF8C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CBF90; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF8Cu);  if (depth < kMaxDepth) unit_00AB(c, 4u, depth + 1u); else { c.pc = 0x003CC080u; return; } if (c.pc != 0x003CBF8Cu) [[unlikely]] return; }
L_003CBF8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CBF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF98u);  if (depth < kMaxDepth) unit_00AB(c, 21u, depth + 1u); else { c.pc = 0x003CC330u; return; } if (c.pc != 0x003CBF98u) [[unlikely]] return; }
L_003CBF98:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBFD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003CBFD4u) [[unlikely]] return; }
L_003CBFD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003CBFF4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003CBFF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}
