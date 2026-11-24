#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0003[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0,
    0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0,
    0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0,
    229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0,
    316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 341, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 379, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402,
    0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430,
};

void unit_0003(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0012C000;
    case 2u: goto L_0012C010;
    case 3u: goto L_0012C018;
    case 4u: goto L_0012C02C;
    case 5u: goto L_0012C03C;
    case 6u: goto L_0012C04C;
    case 7u: goto L_0012C054;
    case 8u: goto L_0012C088;
    case 9u: goto L_0012C0D0;
    case 10u: goto L_0012C0E8;
    case 11u: goto L_0012C110;
    case 12u: goto L_0012C200;
    case 13u: goto L_0012C220;
    case 14u: goto L_0012C24C;
    case 15u: goto L_0012C25C;
    case 16u: goto L_0012C264;
    case 17u: goto L_0012C278;
    case 18u: goto L_0012C288;
    case 19u: goto L_0012C298;
    case 20u: goto L_0012C2A0;
    case 21u: goto L_0012C2D8;
    case 22u: goto L_0012C314;
    case 23u: goto L_0012C32C;
    case 24u: goto L_0012C358;
    case 25u: goto L_0012C3C0;
    case 26u: goto L_0012C414;
    case 27u: goto L_0012C434;
    case 28u: goto L_0012C460;
    case 29u: goto L_0012C470;
    case 30u: goto L_0012C478;
    case 31u: goto L_0012C48C;
    case 32u: goto L_0012C49C;
    case 33u: goto L_0012C4AC;
    case 34u: goto L_0012C4B4;
    case 35u: goto L_0012C4E0;
    case 36u: goto L_0012C4F0;
    case 37u: goto L_0012C500;
    case 38u: goto L_0012C53C;
    case 39u: goto L_0012C554;
    case 40u: goto L_0012C580;
    case 41u: goto L_0012C5EC;
    case 42u: goto L_0012C62C;
    case 43u: goto L_0012C63C;
    case 44u: goto L_0012C644;
    case 45u: goto L_0012C658;
    case 46u: goto L_0012C668;
    case 47u: goto L_0012C678;
    case 48u: goto L_0012C680;
    case 49u: goto L_0012C6B0;
    case 50u: goto L_0012C700;
    case 51u: goto L_0012C718;
    case 52u: goto L_0012C738;
    case 53u: goto L_0012C790;
    case 54u: goto L_0012C7D0;
    case 55u: goto L_0012C7F8;
    case 56u: goto L_0012C85C;
    case 57u: goto L_0012C87C;
    case 58u: goto L_0012C8A8;
    case 59u: goto L_0012C8B8;
    case 60u: goto L_0012C8C0;
    case 61u: goto L_0012C8D4;
    case 62u: goto L_0012C8E4;
    case 63u: goto L_0012C8F4;
    case 64u: goto L_0012C8FC;
    case 65u: goto L_0012C930;
    case 66u: goto L_0012C940;
    case 67u: goto L_0012C950;
    case 68u: goto L_0012C988;
    case 69u: goto L_0012C994;
    case 70u: goto L_0012C9C0;
    case 71u: goto L_0012CA0C;
    case 72u: goto L_0012CA34;
    case 73u: goto L_0012CA74;
    case 74u: goto L_0012CAB0;
    case 75u: goto L_0012CAF4;
    case 76u: goto L_0012CB04;
    case 77u: goto L_0012CB0C;
    case 78u: goto L_0012CB20;
    case 79u: goto L_0012CB30;
    case 80u: goto L_0012CB48;
    case 81u: goto L_0012CB58;
    case 82u: goto L_0012CB60;
    case 83u: goto L_0012CB90;
    case 84u: goto L_0012CBDC;
    case 85u: goto L_0012CBFC;
    case 86u: goto L_0012CC18;
    case 87u: goto L_0012CC80;
    case 88u: goto L_0012CC98;
    case 89u: goto L_0012CCC0;
    case 90u: goto L_0012CD1C;
    case 91u: goto L_0012CD60;
    case 92u: goto L_0012CD84;
    case 93u: goto L_0012CDB0;
    case 94u: goto L_0012CDC0;
    case 95u: goto L_0012CDC8;
    case 96u: goto L_0012CDDC;
    case 97u: goto L_0012CDEC;
    case 98u: goto L_0012CDFC;
    case 99u: goto L_0012CE04;
    case 100u: goto L_0012CE38;
    case 101u: goto L_0012CE74;
    case 102u: goto L_0012CE8C;
    case 103u: goto L_0012CEB8;
    case 104u: goto L_0012CF20;
    case 105u: goto L_0012CF70;
    case 106u: goto L_0012CFB0;
    case 107u: goto L_0012CFC0;
    case 108u: goto L_0012CFC8;
    case 109u: goto L_0012CFDC;
    case 110u: goto L_0012CFEC;
    case 111u: goto L_0012CFFC;
    case 112u: goto L_0012D004;
    case 113u: goto L_0012D030;
    case 114u: goto L_0012D078;
    case 115u: goto L_0012D090;
    case 116u: goto L_0012D0C0;
    case 117u: goto L_0012D128;
    case 118u: goto L_0012D148;
    case 119u: goto L_0012D188;
    case 120u: goto L_0012D198;
    case 121u: goto L_0012D1A0;
    case 122u: goto L_0012D1B4;
    case 123u: goto L_0012D1C4;
    case 124u: goto L_0012D1D4;
    case 125u: goto L_0012D1DC;
    case 126u: goto L_0012D210;
    case 127u: goto L_0012D228;
    case 128u: goto L_0012D230;
    case 129u: goto L_0012D264;
    case 130u: goto L_0012D298;
    case 131u: goto L_0012D2EC;
    case 132u: goto L_0012D388;
    case 133u: goto L_0012D3E4;
    case 134u: goto L_0012D400;
    case 135u: goto L_0012D410;
    case 136u: goto L_0012D510;
    case 137u: goto L_0012D560;
    case 138u: goto L_0012D580;
    case 139u: goto L_0012D5D0;
    case 140u: goto L_0012D5F0;
    case 141u: goto L_0012D640;
    case 142u: goto L_0012D760;
    case 143u: goto L_0012D788;
    case 144u: goto L_0012D79C;
    case 145u: goto L_0012D7E0;
    case 146u: goto L_0012D820;
    case 147u: goto L_0012D860;
    case 148u: goto L_0012D89C;
    case 149u: goto L_0012D8B4;
    case 150u: goto L_0012D8C8;
    case 151u: goto L_0012D8F0;
    case 152u: goto L_0012D918;
    case 153u: goto L_0012D928;
    case 154u: goto L_0012D960;
    case 155u: goto L_0012D970;
    case 156u: goto L_0012D9BC;
    case 157u: goto L_0012DA20;
    case 158u: goto L_0012DAB0;
    case 159u: goto L_0012DAEC;
    case 160u: goto L_0012DB30;
    case 161u: goto L_0012DB68;
    case 162u: goto L_0012DB78;
    case 163u: goto L_0012DBC4;
    case 164u: goto L_0012DC28;
    case 165u: goto L_0012DCB8;
    case 166u: goto L_0012DCF4;
    case 167u: goto L_0012DD38;
    case 168u: goto L_0012DD50;
    case 169u: goto L_0012DD60;
    case 170u: goto L_0012DDA4;
    case 171u: goto L_0012DDC8;
    case 172u: goto L_0012DDDC;
    case 173u: goto L_0012DDEC;
    case 174u: goto L_0012DE14;
    case 175u: goto L_0012DE48;
    case 176u: goto L_0012DE68;
    case 177u: goto L_0012DE80;
    case 178u: goto L_0012DE90;
    case 179u: goto L_0012DED4;
    case 180u: goto L_0012DEF8;
    case 181u: goto L_0012DF08;
    case 182u: goto L_0012DF18;
    case 183u: goto L_0012DF28;
    case 184u: goto L_0012DF38;
    case 185u: goto L_0012DF70;
    case 186u: goto L_0012DF80;
    case 187u: goto L_0012DFA8;
    case 188u: goto L_0012DFE0;
    case 189u: goto L_0012E048;
    case 190u: goto L_0012E0D8;
    case 191u: goto L_0012E11C;
    case 192u: goto L_0012E160;
    case 193u: goto L_0012E174;
    case 194u: goto L_0012E180;
    case 195u: goto L_0012E190;
    case 196u: goto L_0012E1A0;
    case 197u: goto L_0012E1D0;
    case 198u: goto L_0012E1E0;
    case 199u: goto L_0012E20C;
    case 200u: goto L_0012E220;
    case 201u: goto L_0012E250;
    case 202u: goto L_0012E2A8;
    case 203u: goto L_0012E2B8;
    case 204u: goto L_0012E2F0;
    case 205u: goto L_0012E318;
    case 206u: goto L_0012E368;
    case 207u: goto L_0012E3E0;
    case 208u: goto L_0012E404;
    case 209u: goto L_0012E48C;
    case 210u: goto L_0012E4C0;
    case 211u: goto L_0012E4E4;
    case 212u: goto L_0012E4F0;
    case 213u: goto L_0012E4F8;
    case 214u: goto L_0012E500;
    case 215u: goto L_0012E528;
    case 216u: goto L_0012E5A4;
    case 217u: goto L_0012E5B0;
    case 218u: goto L_0012E5BC;
    case 219u: goto L_0012E5CC;
    case 220u: goto L_0012E5D8;
    case 221u: goto L_0012E5E8;
    case 222u: goto L_0012E5F4;
    case 223u: goto L_0012E618;
    case 224u: goto L_0012E628;
    case 225u: goto L_0012E640;
    case 226u: goto L_0012E650;
    case 227u: goto L_0012E668;
    case 228u: goto L_0012E674;
    case 229u: goto L_0012E680;
    case 230u: goto L_0012E690;
    case 231u: goto L_0012E6B8;
    case 232u: goto L_0012E6FC;
    case 233u: goto L_0012E70C;
    case 234u: goto L_0012E714;
    case 235u: goto L_0012E728;
    case 236u: goto L_0012E760;
    case 237u: goto L_0012E78C;
    case 238u: goto L_0012E7A0;
    case 239u: goto L_0012E7D0;
    case 240u: goto L_0012E7DC;
    case 241u: goto L_0012E7E8;
    case 242u: goto L_0012E888;
    case 243u: goto L_0012E890;
    case 244u: goto L_0012E898;
    case 245u: goto L_0012E8A8;
    case 246u: goto L_0012E8D0;
    case 247u: goto L_0012E8D8;
    case 248u: goto L_0012E8E0;
    case 249u: goto L_0012E8E8;
    case 250u: goto L_0012E8F0;
    case 251u: goto L_0012E920;
    case 252u: goto L_0012E938;
    case 253u: goto L_0012E940;
    case 254u: goto L_0012E948;
    case 255u: goto L_0012E954;
    case 256u: goto L_0012E960;
    case 257u: goto L_0012E968;
    case 258u: goto L_0012E970;
    case 259u: goto L_0012E980;
    case 260u: goto L_0012E994;
    case 261u: goto L_0012E9D8;
    case 262u: goto L_0012E9E0;
    case 263u: goto L_0012E9E8;
    case 264u: goto L_0012EA0C;
    case 265u: goto L_0012EA78;
    case 266u: goto L_0012EA88;
    case 267u: goto L_0012EA9C;
    case 268u: goto L_0012EAAC;
    case 269u: goto L_0012EAB8;
    case 270u: goto L_0012EB08;
    case 271u: goto L_0012EB2C;
    case 272u: goto L_0012EB34;
    case 273u: goto L_0012EB48;
    case 274u: goto L_0012EB60;
    case 275u: goto L_0012EB94;
    case 276u: goto L_0012EB9C;
    case 277u: goto L_0012EBB0;
    case 278u: goto L_0012EBC8;
    case 279u: goto L_0012EC10;
    case 280u: goto L_0012EC18;
    case 281u: goto L_0012EC28;
    case 282u: goto L_0012EC40;
    case 283u: goto L_0012EC68;
    case 284u: goto L_0012EC84;
    case 285u: goto L_0012ECC0;
    case 286u: goto L_0012EDC0;
    case 287u: goto L_0012EDD4;
    case 288u: goto L_0012EDDC;
    case 289u: goto L_0012EE00;
    case 290u: goto L_0012F020;
    case 291u: goto L_0012F038;
    case 292u: goto L_0012F070;
    case 293u: goto L_0012F088;
    case 294u: goto L_0012F0C4;
    case 295u: goto L_0012F0D4;
    case 296u: goto L_0012F108;
    case 297u: goto L_0012F118;
    case 298u: goto L_0012F140;
    case 299u: goto L_0012F158;
    case 300u: goto L_0012F180;
    case 301u: goto L_0012F188;
    case 302u: goto L_0012F1C8;
    case 303u: goto L_0012F208;
    case 304u: goto L_0012F214;
    case 305u: goto L_0012F224;
    case 306u: goto L_0012F238;
    case 307u: goto L_0012F250;
    case 308u: goto L_0012F264;
    case 309u: goto L_0012F280;
    case 310u: goto L_0012F2C8;
    case 311u: goto L_0012F2D0;
    case 312u: goto L_0012F2D8;
    case 313u: goto L_0012F2E8;
    case 314u: goto L_0012F2F0;
    case 315u: goto L_0012F2F8;
    case 316u: goto L_0012F300;
    case 317u: goto L_0012F308;
    case 318u: goto L_0012F310;
    case 319u: goto L_0012F318;
    case 320u: goto L_0012F320;
    case 321u: goto L_0012F330;
    case 322u: goto L_0012F338;
    case 323u: goto L_0012F340;
    case 324u: goto L_0012F348;
    case 325u: goto L_0012F350;
    case 326u: goto L_0012F360;
    case 327u: goto L_0012F388;
    case 328u: goto L_0012F390;
    case 329u: goto L_0012F398;
    case 330u: goto L_0012F3AC;
    case 331u: goto L_0012F3D0;
    case 332u: goto L_0012F3D8;
    case 333u: goto L_0012F3E0;
    case 334u: goto L_0012F400;
    case 335u: goto L_0012F418;
    case 336u: goto L_0012F438;
    case 337u: goto L_0012F450;
    case 338u: goto L_0012F458;
    case 339u: goto L_0012F460;
    case 340u: goto L_0012F46C;
    case 341u: goto L_0012F470;
    case 342u: goto L_0012F478;
    case 343u: goto L_0012F488;
    case 344u: goto L_0012F4B0;
    case 345u: goto L_0012F4B8;
    case 346u: goto L_0012F4C0;
    case 347u: goto L_0012F4C8;
    case 348u: goto L_0012F4F0;
    case 349u: goto L_0012F4F8;
    case 350u: goto L_0012F500;
    case 351u: goto L_0012F554;
    case 352u: goto L_0012F570;
    case 353u: goto L_0012F57C;
    case 354u: goto L_0012F590;
    case 355u: goto L_0012F5A8;
    case 356u: goto L_0012F5BC;
    case 357u: goto L_0012F5C8;
    case 358u: goto L_0012F5E0;
    case 359u: goto L_0012F618;
    case 360u: goto L_0012F690;
    case 361u: goto L_0012F6A8;
    case 362u: goto L_0012F6B0;
    case 363u: goto L_0012F6D8;
    case 364u: goto L_0012F6EC;
    case 365u: goto L_0012F750;
    case 366u: goto L_0012F758;
    case 367u: goto L_0012F760;
    case 368u: goto L_0012F768;
    case 369u: goto L_0012F770;
    case 370u: goto L_0012F780;
    case 371u: goto L_0012F7A8;
    case 372u: goto L_0012F7B0;
    case 373u: goto L_0012F7B8;
    case 374u: goto L_0012F800;
    case 375u: goto L_0012F818;
    case 376u: goto L_0012F830;
    case 377u: goto L_0012F838;
    case 378u: goto L_0012F840;
    case 379u: goto L_0012F84C;
    case 380u: goto L_0012F850;
    case 381u: goto L_0012F858;
    case 382u: goto L_0012F868;
    case 383u: goto L_0012F890;
    case 384u: goto L_0012F8A8;
    case 385u: goto L_0012F900;
    case 386u: goto L_0012F910;
    case 387u: goto L_0012F920;
    case 388u: goto L_0012F930;
    case 389u: goto L_0012F98C;
    case 390u: goto L_0012F9A0;
    case 391u: goto L_0012F9C8;
    case 392u: goto L_0012F9E0;
    case 393u: goto L_0012FA00;
    case 394u: goto L_0012FA38;
    case 395u: goto L_0012FA40;
    case 396u: goto L_0012FA48;
    case 397u: goto L_0012FA50;
    case 398u: goto L_0012FA60;
    case 399u: goto L_0012FA88;
    case 400u: goto L_0012FADC;
    case 401u: goto L_0012FAEC;
    case 402u: goto L_0012FAFC;
    case 403u: goto L_0012FB04;
    case 404u: goto L_0012FB0C;
    case 405u: goto L_0012FB24;
    case 406u: goto L_0012FB70;
    case 407u: goto L_0012FB84;
    case 408u: goto L_0012FBB0;
    case 409u: goto L_0012FBCC;
    case 410u: goto L_0012FBD4;
    case 411u: goto L_0012FBDC;
    case 412u: goto L_0012FBEC;
    case 413u: goto L_0012FC00;
    case 414u: goto L_0012FC14;
    case 415u: goto L_0012FC40;
    case 416u: goto L_0012FC58;
    case 417u: goto L_0012FC68;
    case 418u: goto L_0012FC80;
    case 419u: goto L_0012FCC8;
    case 420u: goto L_0012FD30;
    case 421u: goto L_0012FD9C;
    case 422u: goto L_0012FDD0;
    case 423u: goto L_0012FE10;
    case 424u: goto L_0012FE40;
    case 425u: goto L_0012FE98;
    case 426u: goto L_0012FED0;
    case 427u: goto L_0012FF30;
    case 428u: goto L_0012FF7C;
    case 429u: goto L_0012FFB8;
    case 430u: goto L_0012FFFC;
    default: bad_entry(c, 0x0012C000u); return;
    }
L_0012C000:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012C020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C010u) [[unlikely]] return; }
L_0012C010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C018u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C018u) [[unlikely]] return; }
L_0012C018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C058; } }
L_0012C020:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C02Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C02Cu) [[unlikely]] return; }
L_0012C02C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012C044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C03Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C03Cu) [[unlikely]] return; }
L_0012C03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C058; } }
L_0012C044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C04Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012C04Cu) [[unlikely]] return; }
L_0012C04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C054u) [[unlikely]] return; }
L_0012C054:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012C058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0012C088:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[19], c.r[30].w[0] + 30144u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0D0u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012C0D0u) [[unlikely]] return; }
L_0012C0D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16004u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0012C0EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0E8u);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012C0E8u) [[unlikely]] return; }
L_0012C0E8:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_0012C0EC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012C138; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
L_0012C110:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (t) { goto L_0012C148; } }
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C110u | kUnwind; return; } goto L_0012C110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012C14C; } }
L_0012C138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
L_0012C148:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012C14C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[5].w[0] + 22928u);  if (t) { goto L_0012C15C; } }
    st8((c.r[19].w[0] + 1103u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], 0u + 1023u);
    c.budget -= 2;
L_0012C15C:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[4], (c.r[16].w[0] + 7u));
    ldr(c.r[4], (c.r[16].w[0]));
    ldl(c.r[5], (c.r[16].w[0] + 15u));
    ldr(c.r[5], (c.r[16].w[0] + 8u));
    ldl(c.r[6], (c.r[16].w[0] + 23u));
    ldr(c.r[6], (c.r[16].w[0] + 16u));
    ldl(c.r[7], (c.r[16].w[0] + 31u));
    ldr(c.r[7], (c.r[16].w[0] + 24u));
    sdl(c.r[4], (c.r[19].w[0] + 23u));
    sdr(c.r[4], (c.r[19].w[0] + 16u));
    sdl(c.r[5], (c.r[19].w[0] + 31u));
    sdr(c.r[5], (c.r[19].w[0] + 24u));
    sdl(c.r[6], (c.r[19].w[0] + 39u));
    sdr(c.r[6], (c.r[19].w[0] + 32u));
    sdl(c.r[7], (c.r[19].w[0] + 47u));
    sdr(c.r[7], (c.r[19].w[0] + 40u));
    ldl(c.r[4], (c.r[16].w[0] + 39u));
    ldr(c.r[4], (c.r[16].w[0] + 32u));
    ldl(c.r[5], (c.r[16].w[0] + 47u));
    ldr(c.r[5], (c.r[16].w[0] + 40u));
    ldl(c.r[6], (c.r[16].w[0] + 55u));
    ldr(c.r[6], (c.r[16].w[0] + 48u));
    ldl(c.r[7], (c.r[16].w[0] + 63u));
    ldr(c.r[7], (c.r[16].w[0] + 56u));
    sdl(c.r[4], (c.r[19].w[0] + 55u));
    sdr(c.r[4], (c.r[19].w[0] + 48u));
    sdl(c.r[5], (c.r[19].w[0] + 63u));
    sdr(c.r[5], (c.r[19].w[0] + 56u));
    sdl(c.r[6], (c.r[19].w[0] + 71u));
    sdr(c.r[6], (c.r[19].w[0] + 64u));
    sdl(c.r[7], (c.r[19].w[0] + 79u));
    sdr(c.r[7], (c.r[19].w[0] + 72u));
    set32(c.r[21], c.r[21].w[0] - 32256u);
    st32((c.r[19].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[30].w[0] + 30144u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C200u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012C200u) [[unlikely]] return; }
L_0012C200:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C220u); st32((c.r[19].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012C220u) [[unlikely]] return; }
L_0012C220:
    set32(c.r[4], c.r[22].w[0] - 29504u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 81u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C24Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012C24Cu) [[unlikely]] return; }
L_0012C24C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012C26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C25Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C25Cu) [[unlikely]] return; }
L_0012C25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C264u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C264u) [[unlikely]] return; }
L_0012C264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C2A4; } }
L_0012C26C:
    c.r[2].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C278u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C278u) [[unlikely]] return; }
L_0012C278:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012C290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C288u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C288u) [[unlikely]] return; }
L_0012C288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C2A4; } }
L_0012C290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012C298u) [[unlikely]] return; }
L_0012C298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C2A0u) [[unlikely]] return; }
L_0012C2A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012C2A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0012C2D8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] + 30144u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C314u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012C314u) [[unlikely]] return; }
L_0012C314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16004u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0012C330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C32Cu);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012C32Cu) [[unlikely]] return; }
L_0012C32C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0012C330:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012C384; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_0012C358:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0012C394; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C358u | kUnwind; return; } goto L_0012C358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012C398; } }
L_0012C384:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
L_0012C394:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012C398:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0012C3A0; }
L_0012C3A0:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012C3E4; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0012C3C0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0012C3E4; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C3C0u | kUnwind; return; } goto L_0012C3C0; }
L_0012C3E4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_0012C3F0; }
L_0012C3F0:
    set32(c.r[3], c.r[7].w[0] + 22952u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[16], c.r[22].w[0] + 30144u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C414u); set32(c.r[20], c.r[20].w[0] - 32256u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012C414u) [[unlikely]] return; }
L_0012C414:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2060u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C434u); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012C434u) [[unlikely]] return; }
L_0012C434:
    set32(c.r[4], c.r[21].w[0] - 29504u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 17u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C460u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012C460u) [[unlikely]] return; }
L_0012C460:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012C480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C470u) [[unlikely]] return; }
L_0012C470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C478u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C478u) [[unlikely]] return; }
L_0012C478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C4B8; } }
L_0012C480:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C48Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C48Cu) [[unlikely]] return; }
L_0012C48C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012C4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C49Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C49Cu) [[unlikely]] return; }
L_0012C49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C4B8; } }
L_0012C4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012C4ACu) [[unlikely]] return; }
L_0012C4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C4B4u) [[unlikely]] return; }
L_0012C4B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012C4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0012C4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4F0u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0002(c, 368u, depth + 1u); else { c.pc = 0x0012B3D0u; return; } if (c.pc != 0x0012C4F0u) [[unlikely]] return; }
L_0012C4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C500:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 19u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[16], c.r[22].w[0] + 30144u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C53Cu); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012C53Cu) [[unlikely]] return; }
L_0012C53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16004u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0012C558; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C554u);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012C554u) [[unlikely]] return; }
L_0012C554:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0012C558:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012C5AC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_0012C580:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0012C5BC; } }
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C580u | kUnwind; return; } goto L_0012C580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012C5C0; } }
L_0012C5AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
L_0012C5BC:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012C5C0:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_0012C5C8; }
L_0012C5C8:
    st32((c.r[16].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[3], c.r[6].w[0] + 22976u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] - 32256u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5ECu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012C5ECu) [[unlikely]] return; }
L_0012C5EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] - 29504u);
    set32(c.r[7], c.r[22].w[0] + 30144u);
    set32(c.r[5], 0u + 19u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 1044u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C62Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012C62Cu) [[unlikely]] return; }
L_0012C62C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012C64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C63Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C63Cu) [[unlikely]] return; }
L_0012C63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C644u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C644u) [[unlikely]] return; }
L_0012C644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C684; } }
L_0012C64C:
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C658u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C658u) [[unlikely]] return; }
L_0012C658:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012C670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C668u) [[unlikely]] return; }
L_0012C668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C684; } }
L_0012C670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012C678u) [[unlikely]] return; }
L_0012C678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C680u) [[unlikely]] return; }
L_0012C680:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012C684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0012C6B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[30].w[0] + 30144u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C700u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012C700u) [[unlikely]] return; }
L_0012C700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16004u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_0012C71C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C718u);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012C718u) [[unlikely]] return; }
L_0012C718:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0012C71C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012C764; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0012C738:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0012C768; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C738u | kUnwind; return; } goto L_0012C738; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012C76C; } }
L_0012C764:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_0012C768:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012C76C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0012C774; }
L_0012C774:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012C7B4; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0012C790:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_0012C7B4; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C790u | kUnwind; return; } goto L_0012C790; }
L_0012C7B4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_0012C7C0; }
L_0012C7C0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0012C7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7D0u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C7D0u) [[unlikely]] return; }
L_0012C7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_0012C900; } }
L_0012C7D8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012C820; } }
    set32(c.r[6], c.r[18].w[0] + 2060u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 6;
L_0012C7F8:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C7F8u | kUnwind; return; } goto L_0012C7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);  if (t) { goto L_0012C834; } }
L_0012C820:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);
    c.budget -= 5;
L_0012C834:
    set32(c.r[3], c.r[7].w[0] + 23000u);
    st32((c.r[18].w[0] + 3084u), c.r[23].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[16], c.r[30].w[0] + 30144u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C85Cu); set32(c.r[20], c.r[20].w[0] - 32256u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012C85Cu) [[unlikely]] return; }
L_0012C85C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3092u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C87Cu); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012C87Cu) [[unlikely]] return; }
L_0012C87C:
    set32(c.r[4], c.r[21].w[0] - 29504u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 20u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3092u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8A8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012C8A8u) [[unlikely]] return; }
L_0012C8A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012C8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C8B8u) [[unlikely]] return; }
L_0012C8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8C0u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C8C0u) [[unlikely]] return; }
L_0012C8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C900; } }
L_0012C8C8:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8D4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C8D4u) [[unlikely]] return; }
L_0012C8D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012C8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C8E4u) [[unlikely]] return; }
L_0012C8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012C900; } }
L_0012C8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012C8F4u) [[unlikely]] return; }
L_0012C8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012C8FCu) [[unlikely]] return; }
L_0012C8FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012C900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0012C930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C940u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0002(c, 368u, depth + 1u); else { c.pc = 0x0012B3D0u; return; } if (c.pc != 0x0012C940u) [[unlikely]] return; }
L_0012C940:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C950:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[20].w[0] + 30144u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C988u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0002(c, 178u, depth + 1u); else { c.pc = 0x00129840u; return; } if (c.pc != 0x0012C988u) [[unlikely]] return; }
L_0012C988:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C994u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012C994u) [[unlikely]] return; }
L_0012C994:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C9B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012C9B8; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012C9C8; } }
L_0012C9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9C0u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012C9C0u) [[unlikely]] return; }
L_0012C9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0012CB64; } }
L_0012C9C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 30016u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st64((c.r[17].w[0] + 16u), c.r[19].d[0]);
    st32((c.r[17].w[0] + 24u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 23024u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[18].d[0] & 32768ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA0Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012CA0Cu) [[unlikely]] return; }
L_0012CA0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 30144u), c.r[19].w[0]);  if (t) { goto L_0012CAB8; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA34u); set32(c.r[4], ld32((c.r[21].w[0] - 15988u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012CA34u) [[unlikely]] return; }
L_0012CA34:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] - 16136u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012CA68; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 30144u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] - 16136u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 30144u), c.r[2].w[0]);  if (t) { goto L_0012CAA8; } }
L_0012CA68:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0012CA74:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_0012CAA8; } }
    set32(c.r[3], c.r[7].w[0] - 16136u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CA74u | kUnwind; return; } goto L_0012CA74; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0012CAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CAB0u); set32(c.r[4], ld32((c.r[21].w[0] - 15988u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x0012CAB0u) [[unlikely]] return; }
L_0012CAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 32256u);  if (t) { goto L_0012CAC8; } }
L_0012CAB8:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 32256u);
    c.budget -= 4;
L_0012CAC8:
    set32(c.r[4], c.r[22].w[0] - 29504u);
    set32(c.r[7], c.r[20].w[0] + 30144u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CAF4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012CAF4u) [[unlikely]] return; }
L_0012CAF4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012CB14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CB04u) [[unlikely]] return; }
L_0012CB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB0Cu);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CB0Cu) [[unlikely]] return; }
L_0012CB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012CB64; } }
L_0012CB14:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB20u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CB20u) [[unlikely]] return; }
L_0012CB20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012CB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CB30u) [[unlikely]] return; }
L_0012CB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012CB64; } }
L_0012CB38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0012CB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CB48u) [[unlikely]] return; }
L_0012CB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CB64; } }
L_0012CB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012CB58u) [[unlikely]] return; }
L_0012CB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CB60u) [[unlikely]] return; }
L_0012CB60:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012CB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0012CB90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    set32(c.r[4], 0u + 23u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBDCu); st32((c.r[29].w[0] + 52u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012CBDCu) [[unlikely]] return; }
L_0012CBDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[2].w[0] + 30144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16004u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0]));  goto L_0012CC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBFCu);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012CBFCu) [[unlikely]] return; }
L_0012CBFC:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 1;
L_0012CC00:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012CC44; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0012CC18:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_0012CC48; } }
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CC18u | kUnwind; return; } goto L_0012CC18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012CC4C; } }
L_0012CC44:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0012CC48:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012CC4C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0012CC54; }
L_0012CC54:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_0012CC90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17921u);  if (t) { goto L_0012CC90; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_0012CCA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0012CC88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC80u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CC80u) [[unlikely]] return; }
L_0012CC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CE08; } }
L_0012CC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012CCA0; } }
L_0012CC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC98u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CC98u) [[unlikely]] return; }
L_0012CC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_0012CE08; } }
L_0012CCA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012CCE8; } }
    set32(c.r[6], c.r[17].w[0] + 1036u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 6;
L_0012CCC0:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CCC0u | kUnwind; return; } goto L_0012CCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2064u), c.r[16].w[0]);  if (t) { goto L_0012CCFC; } }
L_0012CCE8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[17].w[0] + 2064u), c.r[16].w[0]);
    c.budget -= 5;
L_0012CCFC:
    set32(c.r[3], c.r[7].w[0] + 23048u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[17].w[0] + 2060u), c.r[21].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD1Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012CD1Cu) [[unlikely]] return; }
L_0012CD1C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 2072u), c.r[30].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u + 17921u);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[17].w[0]), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 2068u), c.r[2].w[0]);  if (t) { goto L_0012CD68; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[17], 0u + 28u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD60u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012CD60u) [[unlikely]] return; }
L_0012CD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0012CD70; } }
L_0012CD68:
    set32(c.r[17], 0u + 23u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 2;
L_0012CD70:
    set32(c.r[5], 0u + 2076u);
    set32(c.r[16], c.r[2].w[0] + 30144u);
    set32(c.r[18], c.r[22].w[0] - 32256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012CD84u) [[unlikely]] return; }
L_0012CD84:
    set32(c.r[4], c.r[23].w[0] - 29504u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2076u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDB0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012CDB0u) [[unlikely]] return; }
L_0012CDB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012CDD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CDC0u) [[unlikely]] return; }
L_0012CDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDC8u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CDC8u) [[unlikely]] return; }
L_0012CDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012CE08; } }
L_0012CDD0:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDDCu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CDDCu) [[unlikely]] return; }
L_0012CDDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012CDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CDECu) [[unlikely]] return; }
L_0012CDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012CE08; } }
L_0012CDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDFCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012CDFCu) [[unlikely]] return; }
L_0012CDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE04u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CE04u) [[unlikely]] return; }
L_0012CE04:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012CE08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0012CE38:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] + 30144u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE74u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012CE74u) [[unlikely]] return; }
L_0012CE74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16004u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_0012CE90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE8Cu);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012CE8Cu) [[unlikely]] return; }
L_0012CE8C:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0012CE90:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012CEE4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_0012CEB8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0012CEF4; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CEB8u | kUnwind; return; } goto L_0012CEB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012CEF8; } }
L_0012CEE4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
L_0012CEF4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012CEF8:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0012CF00; }
L_0012CF00:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012CF44; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0012CF20:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0012CF44; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CF20u | kUnwind; return; } goto L_0012CF20; }
L_0012CF44:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_0012CF50; }
L_0012CF50:
    set32(c.r[2], c.r[7].w[0] + 23072u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[16], c.r[20].w[0] - 32256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF70u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012CF70u) [[unlikely]] return; }
L_0012CF70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 29504u);
    set32(c.r[7], c.r[22].w[0] + 30144u);
    set32(c.r[5], 0u + 24u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFB0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012CFB0u) [[unlikely]] return; }
L_0012CFB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012CFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CFC0u) [[unlikely]] return; }
L_0012CFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFC8u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CFC8u) [[unlikely]] return; }
L_0012CFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012D008; } }
L_0012CFD0:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFDCu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012CFDCu) [[unlikely]] return; }
L_0012CFDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012CFF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012CFECu) [[unlikely]] return; }
L_0012CFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012D008; } }
L_0012CFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012CFFCu) [[unlikely]] return; }
L_0012CFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D004u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012D004u) [[unlikely]] return; }
L_0012D004:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012D008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0012D030:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    set32(c.r[18], c.r[30].w[0] + 30144u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D078u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0002(c, 199u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012D078u) [[unlikely]] return; }
L_0012D078:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16004u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0012D094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D090u);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x00129DE8u; return; } if (c.pc != 0x0012D090u) [[unlikely]] return; }
L_0012D090:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0012D094:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012D0EC; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
L_0012D0C0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0012D100; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D0C0u | kUnwind; return; } goto L_0012D0C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0012D104; } }
L_0012D0EC:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
L_0012D100:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0012D104:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_0012D10C; }
L_0012D10C:
    set32(c.r[2], 0u + 1023u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[6].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    st32((c.r[18].w[0] + 16u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D128u); st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012D128u) [[unlikely]] return; }
L_0012D128:
    set32(c.r[16], c.r[20].w[0] - 32256u);
    set32(c.r[3], c.r[22].w[0] + 23096u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D148u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012D148u) [[unlikely]] return; }
L_0012D148:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[23].w[0] - 29504u);
    set32(c.r[7], c.r[30].w[0] + 30144u);
    set32(c.r[5], 0u + 25u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D188u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 173u, depth + 1u); else { c.pc = 0x00129750u; return; } if (c.pc != 0x0012D188u) [[unlikely]] return; }
L_0012D188:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0012D1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D198u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012D198u) [[unlikely]] return; }
L_0012D198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1A0u);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012D1A0u) [[unlikely]] return; }
L_0012D1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012D1E0; } }
L_0012D1A8:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1B4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012D1B4u) [[unlikely]] return; }
L_0012D1B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012D1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012D1C4u) [[unlikely]] return; }
L_0012D1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0012D1E0; } }
L_0012D1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x0012D1D4u) [[unlikely]] return; }
L_0012D1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x0012D1DCu) [[unlikely]] return; }
L_0012D1DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0012D1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0012D210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012D24C; } }
L_0012D228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012D230:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D230u | kUnwind; return; } goto L_0012D230; } }
L_0012D24C:
    set32(c.r[16], c.r[17].w[0] - 29248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D264u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x0012D264u) [[unlikely]] return; }
L_0012D264:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0012D274; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012D284; } }
L_0012D274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D228u | kUnwind; return; } goto L_0012D228; } }
    st32((c.r[2].w[0] - 15976u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0012D284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D298:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] - 15976u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012D2F4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[7].w[0] - 29120u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 29248u);
    set32(c.r[7], c.r[7].w[0] - 29120u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 29184u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2ECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012D2ECu) [[unlikely]] return; }
L_0012D2EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 29184u)));  if (t) { goto L_0012D2F8; } }
L_0012D2F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] - 15976u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012D3AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D3F0; } }
L_0012D3AC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[7].w[0] - 29120u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 29248u);
    set32(c.r[7], c.r[7].w[0] - 29120u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 29184u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D3E4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012D3E4u) [[unlikely]] return; }
L_0012D3E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 29184u)));  if (t) { goto L_0012D3F0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012D3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D410u);  if (depth < kMaxDepth) unit_0003(c, 132u, depth + 1u); else { c.pc = 0x0012D388u; return; } if (c.pc != 0x0012D410u) [[unlikely]] return; }
L_0012D410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012D510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15976u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012D530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D570; } }
L_0012D530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 29248u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 29184u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D560u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012D560u) [[unlikely]] return; }
L_0012D560:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 29184u)));  goto L_0012D570; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0012D570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15976u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012D5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D5E0; } }
L_0012D5A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 29248u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 29184u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D5D0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012D5D0u) [[unlikely]] return; }
L_0012D5D0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 29184u)));  goto L_0012D5E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0012D5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15976u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012D610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D650; } }
L_0012D610:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 29248u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 29184u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D640u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012D640u) [[unlikely]] return; }
L_0012D640:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 29184u)));  goto L_0012D650; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0012D650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] - 15968u)));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012D844; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[17].w[0] - 28288u);
    c.budget -= 2;
L_0012D788:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 6ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D79Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x0012D79Cu) [[unlikely]] return; }
L_0012D79C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0012D7AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012D848; } }
L_0012D7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012D814; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[18].w[0] - 15968u), 0u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 255u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] - 28800u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7E0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012D7E0u) [[unlikely]] return; }
L_0012D7E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012D7F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0012D848; } }
L_0012D7F4:
    set32(c.r[7], c.r[17].w[0] - 28800u);
    set32(c.r[6], c.r[3].w[0] - 28248u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D848; } }
L_0012D814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0012D820:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D820u | kUnwind; return; } goto L_0012D820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 28288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D788u | kUnwind; return; } goto L_0012D788; } }
L_0012D844:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012D860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] - 16180u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] - 28248u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D89Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x0012D89Cu) [[unlikely]] return; }
L_0012D89C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012D8CC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] - 15964u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D8B4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x0012D8B4u) [[unlikely]] return; }
L_0012D8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] - 15964u)));  if (t) { goto L_0012D8CC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D8C8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x0012D8C8u) [[unlikely]] return; }
L_0012D8C8:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0012D8CC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012D8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 28248u);
    st32((c.r[2].w[0] - 15968u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D918u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0012D918u) [[unlikely]] return; }
L_0012D918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012D928:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D960u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012D960u) [[unlikely]] return; }
L_0012D960:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012DB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D970u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012D970u) [[unlikely]] return; }
L_0012D970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012D984; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012DB08; } }
L_0012D984:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] - 28800u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 28800u), c.r[19].w[0]);  if (t) { goto L_0012DAB8; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012DAA4; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012DA18; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 2;
L_0012D9BC:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D9BCu | kUnwind; return; } goto L_0012D9BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DA54; } }
L_0012DA18:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 2;
L_0012DA20:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DA20u | kUnwind; return; } goto L_0012DA20; } }
L_0012DA54:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] - 28800u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012DAC0; } }
L_0012DAA4:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAB0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0012DAB0u) [[unlikely]] return; }
L_0012DAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0012DABC; } }
L_0012DAB8:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0012DABC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0012DAC0:
    set32(c.r[16], c.r[21].w[0] - 28800u);
    set32(c.r[4], c.r[5].w[0] - 28288u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012DAECu) [[unlikely]] return; }
L_0012DAEC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0012DB00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0012DB08; } }
L_0012DB00:
    set32(c.r[2], ld32((c.r[20].w[0] - 28800u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0012DB08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012DB30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB68u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012DB68u) [[unlikely]] return; }
L_0012DB68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012DD10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB78u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012DB78u) [[unlikely]] return; }
L_0012DB78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012DB8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012DD10; } }
L_0012DB8C:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] - 28800u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 28800u), c.r[19].w[0]);  if (t) { goto L_0012DCC0; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012DCAC; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012DC20; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 2;
L_0012DBC4:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DBC4u | kUnwind; return; } goto L_0012DBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DC5C; } }
L_0012DC20:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 2;
L_0012DC28:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DC28u | kUnwind; return; } goto L_0012DC28; } }
L_0012DC5C:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] - 28800u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012DCC8; } }
L_0012DCAC:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCB8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0012DCB8u) [[unlikely]] return; }
L_0012DCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0012DCC4; } }
L_0012DCC0:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0012DCC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0012DCC8:
    set32(c.r[16], c.r[21].w[0] - 28800u);
    set32(c.r[4], c.r[5].w[0] - 28288u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCF4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012DCF4u) [[unlikely]] return; }
L_0012DCF4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0012DD08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0012DD10; } }
L_0012DD08:
    set32(c.r[2], ld32((c.r[20].w[0] - 28800u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0012DD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012DD38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD50u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012DD50u) [[unlikely]] return; }
L_0012DD50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012DDB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD60u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012DD60u) [[unlikely]] return; }
L_0012DD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012DD74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012DDB4; } }
L_0012DD74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[16].w[0] - 28800u);
    st32((c.r[16].w[0] - 28800u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 28288u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDA4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012DDA4u) [[unlikely]] return; }
L_0012DDA4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 28800u)));  goto L_0012DDB4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0012DDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DDC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012DDDCu) [[unlikely]] return; }
L_0012DDDC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012DE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDECu);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012DDECu) [[unlikely]] return; }
L_0012DDEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012DE00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012DE58; } }
L_0012DE00:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 28792u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x0012DE14u) [[unlikely]] return; }
L_0012DE14:
    set32(c.r[3], c.r[16].w[0] - 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 28288u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE48u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012DE48u) [[unlikely]] return; }
L_0012DE48:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 8u)));  goto L_0012DE58; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0012DE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DE68:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE80u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012DE80u) [[unlikely]] return; }
L_0012DE80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012DEE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE90u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012DE90u) [[unlikely]] return; }
L_0012DE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012DEA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012DEE4; } }
L_0012DEA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[16].w[0] - 28800u);
    st32((c.r[16].w[0] - 28800u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 28288u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DED4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012DED4u) [[unlikely]] return; }
L_0012DED4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 28800u)));  goto L_0012DEE4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0012DEE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DEF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF08u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 153u, depth + 1u); else { c.pc = 0x0012D928u; return; } if (c.pc != 0x0012DF08u) [[unlikely]] return; }
L_0012DF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DF18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF28u);  if (depth < kMaxDepth) unit_0003(c, 153u, depth + 1u); else { c.pc = 0x0012D928u; return; } if (c.pc != 0x0012DF28u) [[unlikely]] return; }
L_0012DF28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012DF38:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF70u); st64((c.r[29].w[0] + 96u), c.r[21].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012DF70u) [[unlikely]] return; }
L_0012DF70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF80u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012DF80u) [[unlikely]] return; }
L_0012DF80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012DF94; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012E138; } }
L_0012DF94:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 28792u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x0012DFA8u) [[unlikely]] return; }
L_0012DFA8:
    set32(c.r[2], c.r[17].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012E0E0; } }
    c.r[2].d[0] = c.r[18].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012E0C8; } }
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012E03C; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
L_0012DFE0:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DFE0u | kUnwind; return; } goto L_0012DFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E07C; } }
L_0012E03C:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
L_0012E048:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E048u | kUnwind; return; } goto L_0012E048; } }
L_0012E07C:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    lwl(c.r[9], (c.r[3].w[0] + 27u));
    lwr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    swl(c.r[9], (c.r[4].w[0] + 27u));
    set32(c.r[2], 0u + 252u);
    swr(c.r[9], (c.r[4].w[0] + 24u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 28800u), c.r[2].w[0]);  if (t) { goto L_0012E0F0; } }
L_0012E0C8:
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0D8u); c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0012E0D8u) [[unlikely]] return; }
L_0012E0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 8u), c.r[18].w[0]);  if (t) { goto L_0012E0EC; } }
L_0012E0E0:
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[17].w[0] - 8u), 0u);
    c.budget -= 3;
L_0012E0EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0012E0F0:
    set32(c.r[16], c.r[21].w[0] - 28800u);
    set32(c.r[4], c.r[5].w[0] - 28288u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E11Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012E11Cu) [[unlikely]] return; }
L_0012E11C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0012E130; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0012E138; } }
L_0012E130:
    set32(c.r[2], ld32((c.r[21].w[0] - 28800u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0012E138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012E160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E174u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 184u, depth + 1u); else { c.pc = 0x0012DF38u; return; } if (c.pc != 0x0012E174u) [[unlikely]] return; }
L_0012E174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E190u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 184u, depth + 1u); else { c.pc = 0x0012DF38u; return; } if (c.pc != 0x0012E190u) [[unlikely]] return; }
L_0012E190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E1A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1D0u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012E1D0u) [[unlikely]] return; }
L_0012E1D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012E284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1E0u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0012D860u; return; } if (c.pc != 0x0012E1E0u) [[unlikely]] return; }
L_0012E1E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012E1F4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0012E284; } }
L_0012E1F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 28792u);
    set32(c.r[6], 0u + 252u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E20Cu); set32(c.r[16], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x0012E20Cu) [[unlikely]] return; }
L_0012E20C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E220u); set32(c.r[6], 0u + 252u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x0012E220u) [[unlikely]] return; }
L_0012E220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[16].w[0] + 511u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 28288u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E250u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012E250u) [[unlikely]] return; }
L_0012E250:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] - 8u)));  goto L_0012E264; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0012E284; } }
L_0012E264:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_0012E278; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_0012E284; } }
L_0012E278:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0012E284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0012E2A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2B8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 196u, depth + 1u); else { c.pc = 0x0012E1A0u; return; } if (c.pc != 0x0012E2B8u) [[unlikely]] return; }
L_0012E2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E2F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E318u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012E318u) [[unlikely]] return; }
L_0012E318:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_0012E328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012E3C0; } }
L_0012E328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012E3AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[17].w[0] - 28800u);
    st32((c.r[17].w[0] - 28800u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 28288u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E368u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012E368u) [[unlikely]] return; }
L_0012E368:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0012E37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0012E3C0; } }
L_0012E37C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E390; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] - 28800u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012E3BC; } }
L_0012E390:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012E3A4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] - 28800u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012E3BC; } }
L_0012E3A4:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] - 28800u)));  goto L_0012E3B8; }
L_0012E3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_0012E3C0; } }
L_0012E3B8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0012E3BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012E3E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E404u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0012D760u; return; } if (c.pc != 0x0012E404u) [[unlikely]] return; }
L_0012E404:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012E414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0012E4A4; } }
L_0012E414:
    set32(c.r[3], c.r[7].w[0] - 28800u);
    st32((c.r[7].w[0] - 28800u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0012E430; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012E460; } }
L_0012E430:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012E448; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012E460; } }
L_0012E448:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0012E45C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_0012E4A4; } }
L_0012E45C:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0012E460:
    set32(c.r[7], c.r[7].w[0] - 28800u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 28288u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E48Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012E48Cu) [[unlikely]] return; }
L_0012E48C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
L_0012E4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012E4C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 115u, depth + 1u); else { c.pc = 0x001311A8u; return; } if (c.pc != 0x0012E4E4u) [[unlikely]] return; }
L_0012E4E4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 115u, depth + 1u); else { c.pc = 0x001311A8u; return; } if (c.pc != 0x0012E4F0u) [[unlikely]] return; }
L_0012E4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4F8u);  if (depth < kMaxDepth) unit_0001(c, 151u, depth + 1u); else { c.pc = 0x00125230u; return; } if (c.pc != 0x0012E4F8u) [[unlikely]] return; }
L_0012E4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E500u); c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (depth < kMaxDepth) unit_0001(c, 171u, depth + 1u); else { c.pc = 0x00125370u; return; } if (c.pc != 0x0012E500u) [[unlikely]] return; }
L_0012E500:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 28224u);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0012E548; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
L_0012E528:
    set32(c.r[3], c.r[10].w[0] - 28224u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E528u | kUnwind; return; } goto L_0012E528; }
L_0012E548:
    set32(c.r[6], c.r[10].w[0] - 28224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 255ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[5], 0u + 104u);
    c.r[2].d[0] = ld64((c.r[10].w[0] - 28224u));
    set32(c.r[7], 0u + 104u);
    st32((c.r[6].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[8], 0u + 68u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st64((c.r[10].w[0] - 28224u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[10].w[0] - 28224u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 104u);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5A4u); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x0012E5A4u) [[unlikely]] return; }
L_0012E5A4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5B0u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x0012E5B0u) [[unlikely]] return; }
L_0012E5B0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 161u, depth + 1u); else { c.pc = 0x00125320u; return; } if (c.pc != 0x0012E5BCu) [[unlikely]] return; }
L_0012E5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0012E5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5CCu); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x0012E5CCu) [[unlikely]] return; }
L_0012E5CC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5D8u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x0012E5D8u) [[unlikely]] return; }
L_0012E5D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5E8u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x0012E5E8u) [[unlikely]] return; }
L_0012E5E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x0012E5F4u) [[unlikely]] return; }
L_0012E5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E600; } }
L_0012E5FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E618:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E628u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 171u, depth + 1u); else { c.pc = 0x00125370u; return; } if (c.pc != 0x0012E628u) [[unlikely]] return; }
L_0012E628:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E650u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 171u, depth + 1u); else { c.pc = 0x00125370u; return; } if (c.pc != 0x0012E650u) [[unlikely]] return; }
L_0012E650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E668u);  if (depth < kMaxDepth) unit_0001(c, 179u, depth + 1u); else { c.pc = 0x001253E0u; return; } if (c.pc != 0x0012E668u) [[unlikely]] return; }
L_0012E668:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E674u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 115u, depth + 1u); else { c.pc = 0x001311A8u; return; } if (c.pc != 0x0012E674u) [[unlikely]] return; }
L_0012E674:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E680u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 115u, depth + 1u); else { c.pc = 0x001311A8u; return; } if (c.pc != 0x0012E680u) [[unlikely]] return; }
L_0012E680:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012E684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E690:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 23136u);  if (t) { goto L_0012E6DC; } }
    set32(c.r[3], c.r[16].w[0] - 11u);
    c.budget -= 1;
L_0012E6B8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E6B8u | kUnwind; return; } goto L_0012E6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_0012E6E4; } }
L_0012E6DC:
    set32(c.r[3], c.r[16].w[0] - 11u);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_0012E6E4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(81ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0012E704; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E6FCu); set32(c.r[4], c.r[4].w[0] + 23152u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0012E6FCu) [[unlikely]] return; }
L_0012E6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E78C; } }
L_0012E704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E70Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x0012E70Cu) [[unlikely]] return; }
L_0012E70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E714u);  if (depth < kMaxDepth) unit_0002(c, 41u, depth + 1u); else { c.pc = 0x001286C0u; return; } if (c.pc != 0x0012E714u) [[unlikely]] return; }
L_0012E714:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_0012E74C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0012E728:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E728u | kUnwind; return; } goto L_0012E728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012E754; } }
L_0012E74C:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0012E754:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  goto L_0012E780; }
    c.budget -= 1;
L_0012E760:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E760u | kUnwind; return; } goto L_0012E760; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012E780:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E78Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 210u, depth + 1u); else { c.pc = 0x0012E4C0u; return; } if (c.pc != 0x0012E78Cu) [[unlikely]] return; }
L_0012E78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012E7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[16], c.r[16].w[0] - 4928u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] - 15144u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 67u, depth + 1u); else { c.pc = 0x00124C10u; return; } if (c.pc != 0x0012E7D0u) [[unlikely]] return; }
L_0012E7D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7DCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 67u, depth + 1u); else { c.pc = 0x00124C10u; return; } if (c.pc != 0x0012E7DCu) [[unlikely]] return; }
L_0012E7DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7E8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 67u, depth + 1u); else { c.pc = 0x00124C10u; return; } if (c.pc != 0x0012E7E8u) [[unlikely]] return; }
L_0012E7E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E888:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0012E890u; syscall(c, 0x0012E88Cu); if (c.pc != 0x0012E890u) return;
    c.budget -= 1;
L_0012E890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E898:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0012E8C8; } }
    c.budget -= 1;
L_0012E8A8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E8A8u | kUnwind; return; } goto L_0012E8A8; } }
L_0012E8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E8D0:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0012E8D8u; syscall(c, 0x0012E8D4u); if (c.pc != 0x0012E8D8u) return;
    c.budget -= 1;
L_0012E8D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E8E0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0012E8E8u; syscall(c, 0x0012E8E4u); if (c.pc != 0x0012E8E8u) return;
    c.budget -= 1;
L_0012E8E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 15064u);
    set32(c.r[4], ld32((c.r[2].w[0] - 15064u)));
    set32(c.r[17], c.r[16].w[0] + 24u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E920u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 248u, depth + 1u); else { c.pc = 0x0012E8E0u; return; } if (c.pc != 0x0012E920u) [[unlikely]] return; }
L_0012E920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 816u);
    set32(c.r[5], c.r[5].w[0] - 15960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E938u); c.r[4].d[0] = c.r[4].d[0] | 20480ull;  if (depth < kMaxDepth) unit_0003(c, 242u, depth + 1u); else { c.pc = 0x0012E888u; return; } if (c.pc != 0x0012E938u) [[unlikely]] return; }
L_0012E938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E940u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012E940u) [[unlikely]] return; }
L_0012E940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E948u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012E948u) [[unlikely]] return; }
L_0012E948:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E954u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0003(c, 248u, depth + 1u); else { c.pc = 0x0012E8E0u; return; } if (c.pc != 0x0012E954u) [[unlikely]] return; }
L_0012E954:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E960u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0003(c, 248u, depth + 1u); else { c.pc = 0x0012E8E0u; return; } if (c.pc != 0x0012E960u) [[unlikely]] return; }
L_0012E960:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0012E968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E970u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 246u, depth + 1u); else { c.pc = 0x0012E8D0u; return; } if (c.pc != 0x0012E970u) [[unlikely]] return; }
L_0012E970:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E980u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0003(c, 248u, depth + 1u); else { c.pc = 0x0012E8E0u; return; } if (c.pc != 0x0012E980u) [[unlikely]] return; }
L_0012E980:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E968u | kUnwind; return; } goto L_0012E968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E994u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0003(c, 246u, depth + 1u); else { c.pc = 0x0012E8D0u; return; } if (c.pc != 0x0012E994u) [[unlikely]] return; }
L_0012E994:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 15072u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E9D8:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x0012E9E0u; syscall(c, 0x0012E9DCu); if (c.pc != 0x0012E9E0u) return;
    c.budget -= 1;
L_0012E9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E9E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] - 13u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012EA04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012EA0C; } }
L_0012EA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA0Cu);  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0012E9D8u; return; } if (c.pc != 0x0012EA0Cu) [[unlikely]] return; }
L_0012EA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012EA78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA88u);  if (depth < kMaxDepth) unit_0001(c, 175u, depth + 1u); else { c.pc = 0x001253C0u; return; } if (c.pc != 0x0012EA88u) [[unlikely]] return; }
L_0012EA88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012EAA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA9Cu);  if (depth < kMaxDepth) unit_0003(c, 269u, depth + 1u); else { c.pc = 0x0012EAB8u; return; } if (c.pc != 0x0012EA9Cu) [[unlikely]] return; }
L_0012EA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012EAB0; } }
L_0012EAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAACu);  if (depth < kMaxDepth) unit_0001(c, 177u, depth + 1u); else { c.pc = 0x001253D0u; return; } if (c.pc != 0x0012EAACu) [[unlikely]] return; }
L_0012EAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012EAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012EAB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23184u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] - 14376u);
    set32(c.r[5], ld32((c.r[18].w[0] - 14376u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB08u); set32(c.r[7], c.r[7].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x0012EB08u) [[unlikely]] return; }
L_0012EB08:
    mtc0(c, 6u, 0u);
    set32(c.r[17], ld32((c.r[18].w[0] - 14376u)));
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_0012EB34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB2Cu); set32(c.r[4], c.r[4].w[0] + 23240u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x0012EB2Cu) [[unlikely]] return; }
L_0012EB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB34u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 363u, depth + 1u); else { c.pc = 0x0012F6D8u; return; } if (c.pc != 0x0012EB34u) [[unlikely]] return; }
L_0012EB34:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_0012EB70; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0012EB48:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB60u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0012E9D8u; return; } if (c.pc != 0x0012EB60u) [[unlikely]] return; }
L_0012EB60:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EB48u | kUnwind; return; } goto L_0012EB48; }
L_0012EB70:
    set32(c.r[16], c.r[18].w[0] - 14376u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0012EBA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB94u); set32(c.r[4], c.r[4].w[0] + 23264u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x0012EB94u) [[unlikely]] return; }
L_0012EB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 363u, depth + 1u); else { c.pc = 0x0012F6D8u; return; } if (c.pc != 0x0012EB9Cu) [[unlikely]] return; }
L_0012EB9C:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0012EBA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0012EBD8; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0012EBB0:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EBC8u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0012E9D8u; return; } if (c.pc != 0x0012EBC8u) [[unlikely]] return; }
L_0012EBC8:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EBB0u | kUnwind; return; } goto L_0012EBB0; }
L_0012EBD8:
    set32(c.r[16], c.r[18].w[0] - 14376u);
    st32((c.r[16].w[0] + 12u), c.r[25].w[0]);
    mtc0(c, 6u, c.r[25].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = c.r[25].d[0] + 0ull;  goto L_0012EC54; }
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0012EC1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC10u); set32(c.r[4], c.r[4].w[0] + 23288u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x0012EC10u) [[unlikely]] return; }
L_0012EC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC18u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 363u, depth + 1u); else { c.pc = 0x0012F6D8u; return; } if (c.pc != 0x0012EC18u) [[unlikely]] return; }
L_0012EC18:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0012EC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0012EC50; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0012EC28:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC40u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0012E9D8u; return; } if (c.pc != 0x0012EC40u) [[unlikely]] return; }
L_0012EC40:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EC28u | kUnwind; return; } goto L_0012EC28; }
L_0012EC50:
    c.r[16].d[0] = c.r[25].d[0] + 0ull;
    c.budget -= 1;
L_0012EC54:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[25], c.r[25].w[0] << 13);  if (t) { goto L_0012EC90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0012EC68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC84u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0012E9D8u; return; } if (c.pc != 0x0012EC84u) [[unlikely]] return; }
L_0012EC84:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EC68u | kUnwind; return; } goto L_0012EC68; } }
L_0012EC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[25].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012ECC0:
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[26], c.r[26].w[0] - 24000u);
    st128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    st128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    st128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    st128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    st128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    st128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    st128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    st128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    st128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    st128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    st128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    st128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    st128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    st128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    st128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    st128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    st128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    st128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    st128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    st128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[1].w[0] - 23488u), c.r[2].d[0]);
    c.r[2].d[0] = c.hi.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[1].w[0] - 23480u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[1].w[0] - 23472u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[1].w[0] - 23464u), c.r[2].d[0]);
    c.r[2].d[0] = c.sa;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[1].w[0] - 23456u), c.r[2].d[0]);
    set32(c.r[4], mfc0(c, 12u, 0u));
    set32(c.r[5], mfc0(c, 13u, 0u));
    set32(c.r[6], mfc0(c, 14u, 0u));
    set32(c.r[7], mfc0(c, 8u, 0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], c.r[8].w[0] - 24000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[1].w[0] - 23448u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[1], c.r[1].w[0] - 4672u);
    mtc0(c, 14u, c.r[1].w[0]);
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[2], 0u - 2u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[2].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012EDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[1], ld32((c.r[1].w[0] - 15144u)));
    c.r[29].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EDD4u); set32(c.r[29], c.r[29].w[0] - 24000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EDD4u) [[unlikely]] return; }
L_0012EDD4:
    set32(c.r[3], 0u - 84u);
    c.budget -= 1;
    c.pc = 0x0012EDDCu; syscall(c, 0x0012EDD8u); if (c.pc != 0x0012EDDCu) return;
    c.budget -= 1;
L_0012EDDC:
    c.budget -= 9;
L_0012EE00:
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[26], 0u - 28u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[26].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 23448u)));
    mtc0(c, 14u, c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 23488u));
    c.hi.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 23480u));
    c.hi.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 23472u));
    c.lo.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 23464u));
    c.lo.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 23456u));
    c.sa = c.r[2].w[0] & 15u;
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[26], c.r[26].w[0] - 24000u);
    ld128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    ld128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    ld128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    ld128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    ld128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    ld128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    ld128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    ld128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    ld128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    ld128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    ld128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    ld128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    ld128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    ld128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    ld128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    ld128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    ld128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    ld128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    ld128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    ld128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    ld128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    set32(c.r[26], mfc0(c, 12u, 0u));
    c.r[26].d[0] = c.r[26].d[0] | 19ull;
    mtc0(c, 12u, c.r[26].w[0]);
    c.budget -= 60;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012F020:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0012F064; } }
    c.budget -= 1;
L_0012F038:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F038u | kUnwind; return; } goto L_0012F038; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012F064:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012F070:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set_interrupts(c, true);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0012F088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 23312u);
    set32(c.r[5], c.r[5].w[0] + 23328u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F0C4u); st32((c.r[29].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012F0C4u) [[unlikely]] return; }
L_0012F0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F0D4u); st32((c.r[3].w[0] - 14320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012F0D4u) [[unlikely]] return; }
L_0012F0D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[3].w[0] - 14316u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F108:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0012F138; } }
    c.budget -= 1;
L_0012F118:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F118u | kUnwind; return; } goto L_0012F118; } }
L_0012F138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012F140:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_0012F174; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  goto L_0012F178; }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_0012F158:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_0012F174; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F158u | kUnwind; return; } goto L_0012F158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0012F178; } }
L_0012F174:
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 1;
L_0012F178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012F180:
    set32(c.r[3], 0u + 131u);
    c.budget -= 1;
    c.pc = 0x0012F188u; syscall(c, 0x0012F184u); if (c.pc != 0x0012F188u) return;
    c.budget -= 1;
L_0012F188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F1C8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00130000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00130000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 14336u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 14336u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F208u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 310u, depth + 1u); else { c.pc = 0x0012F2C8u; return; } if (c.pc != 0x0012F208u) [[unlikely]] return; }
L_0012F208:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F214u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0003(c, 310u, depth + 1u); else { c.pc = 0x0012F2C8u; return; } if (c.pc != 0x0012F214u) [[unlikely]] return; }
L_0012F214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F224u); set32(c.r[6], c.r[21].w[0] - 3776u);  if (depth < kMaxDepth) unit_0003(c, 300u, depth + 1u); else { c.pc = 0x0012F180u; return; } if (c.pc != 0x0012F224u) [[unlikely]] return; }
L_0012F224:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F238u); set32(c.r[6], c.r[20].w[0] - 3832u);  if (depth < kMaxDepth) unit_0003(c, 300u, depth + 1u); else { c.pc = 0x0012F180u; return; } if (c.pc != 0x0012F238u) [[unlikely]] return; }
L_0012F238:
    set32(c.r[17], c.r[19].w[0] - 524u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012F298; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0012F250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_0012F270; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F264u); set32(c.r[6], c.r[21].w[0] - 3776u);  if (depth < kMaxDepth) unit_0003(c, 300u, depth + 1u); else { c.pc = 0x0012F180u; return; } if (c.pc != 0x0012F264u) [[unlikely]] return; }
L_0012F264:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] - 524u);  if (t) { goto L_0012F288; } }
L_0012F270:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F280u); set32(c.r[6], c.r[20].w[0] - 3832u);  if (depth < kMaxDepth) unit_0003(c, 300u, depth + 1u); else { c.pc = 0x0012F180u; return; } if (c.pc != 0x0012F280u) [[unlikely]] return; }
L_0012F280:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 2;
L_0012F288:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F250u | kUnwind; return; } goto L_0012F250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] - 14344u), c.r[17].w[0]);  if (t) { goto L_0012F29C; } }
L_0012F298:
    st32((c.r[22].w[0] - 14344u), c.r[17].w[0]);
    c.budget -= 1;
L_0012F29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012F2C8:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0012F2D0u; syscall(c, 0x0012F2CCu); if (c.pc != 0x0012F2D0u) return;
    c.budget -= 1;
L_0012F2D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2E8u);  if (depth < kMaxDepth) unit_0003(c, 293u, depth + 1u); else { c.pc = 0x0012F088u; return; } if (c.pc != 0x0012F2E8u) [[unlikely]] return; }
L_0012F2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2F0u);  if (depth < kMaxDepth) unit_0003(c, 302u, depth + 1u); else { c.pc = 0x0012F1C8u; return; } if (c.pc != 0x0012F2F0u) [[unlikely]] return; }
L_0012F2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2F8u);  if (depth < kMaxDepth) unit_0003(c, 373u, depth + 1u); else { c.pc = 0x0012F7B8u; return; } if (c.pc != 0x0012F2F8u) [[unlikely]] return; }
L_0012F2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F300u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 388u, depth + 1u); else { c.pc = 0x0012F930u; return; } if (c.pc != 0x0012F300u) [[unlikely]] return; }
L_0012F300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F308u);  if (depth < kMaxDepth) unit_0003(c, 406u, depth + 1u); else { c.pc = 0x0012FB70u; return; } if (c.pc != 0x0012F308u) [[unlikely]] return; }
L_0012F308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F310u);  if (depth < kMaxDepth) unit_0001(c, 258u, depth + 1u); else { c.pc = 0x00125D38u; return; } if (c.pc != 0x0012F310u) [[unlikely]] return; }
L_0012F310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F318u);  if (depth < kMaxDepth) unit_0003(c, 334u, depth + 1u); else { c.pc = 0x0012F400u; return; } if (c.pc != 0x0012F318u) [[unlikely]] return; }
L_0012F318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F320u);  if (depth < kMaxDepth) unit_0003(c, 250u, depth + 1u); else { c.pc = 0x0012E8F0u; return; } if (c.pc != 0x0012F320u) [[unlikely]] return; }
L_0012F320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0004(c, 101u, depth); }
L_0012F330:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0012F338u; syscall(c, 0x0012F334u); if (c.pc != 0x0012F338u) return;
    c.budget -= 1;
L_0012F338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F340:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0012F348u; syscall(c, 0x0012F344u); if (c.pc != 0x0012F348u) return;
    c.budget -= 1;
L_0012F348:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F350:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0012F380; } }
    c.budget -= 1;
L_0012F360:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F360u | kUnwind; return; } goto L_0012F360; } }
L_0012F380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012F388:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0012F390u; syscall(c, 0x0012F38Cu); if (c.pc != 0x0012F390u) return;
    c.budget -= 1;
L_0012F390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F398:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3ACu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 145u, depth + 1u); else { c.pc = 0x00125010u; return; } if (c.pc != 0x0012F3ACu) [[unlikely]] return; }
L_0012F3AC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8191ull;
    set32(c.r[16], c.r[29].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3D0u); st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 143u, depth + 1u); else { c.pc = 0x00125000u; return; } if (c.pc != 0x0012F3D0u) [[unlikely]] return; }
L_0012F3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 145u, depth + 1u); else { c.pc = 0x00125010u; return; } if (c.pc != 0x0012F3D8u) [[unlikely]] return; }
L_0012F3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3E0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 143u, depth + 1u); else { c.pc = 0x00125000u; return; } if (c.pc != 0x0012F3E0u) [[unlikely]] return; }
L_0012F3E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012F400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F418u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 329u, depth + 1u); else { c.pc = 0x0012F398u; return; } if (c.pc != 0x0012F418u) [[unlikely]] return; }
L_0012F418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012F494; } }
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 12352u);
    set32(c.r[4], ld32((c.r[2].w[0] - 12352u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F438u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 321u, depth + 1u); else { c.pc = 0x0012F330u; return; } if (c.pc != 0x0012F438u) [[unlikely]] return; }
L_0012F438:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 1960u);
    set32(c.r[5], c.r[5].w[0] - 14312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F450u); c.r[4].d[0] = c.r[4].d[0] | 16384ull;  if (depth < kMaxDepth) unit_0003(c, 323u, depth + 1u); else { c.pc = 0x0012F340u; return; } if (c.pc != 0x0012F450u) [[unlikely]] return; }
L_0012F450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F458u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012F458u) [[unlikely]] return; }
L_0012F458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F460u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012F460u) [[unlikely]] return; }
L_0012F460:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F46Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0003(c, 321u, depth + 1u); else { c.pc = 0x0012F330u; return; } if (c.pc != 0x0012F46Cu) [[unlikely]] return; }
L_0012F46C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0012F470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F478u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 327u, depth + 1u); else { c.pc = 0x0012F388u; return; } if (c.pc != 0x0012F478u) [[unlikely]] return; }
L_0012F478:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F488u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0003(c, 321u, depth + 1u); else { c.pc = 0x0012F330u; return; } if (c.pc != 0x0012F488u) [[unlikely]] return; }
L_0012F488:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F470u | kUnwind; return; } goto L_0012F470; }
L_0012F494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012F4B0:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0012F4B8u; syscall(c, 0x0012F4B4u); if (c.pc != 0x0012F4B8u) return;
    c.budget -= 1;
L_0012F4B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F4C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0012F4E8; } }
L_0012F4C8:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F4C8u | kUnwind; return; } goto L_0012F4C8; } }
L_0012F4E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012F4F0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0012F4F8u; syscall(c, 0x0012F4F4u); if (c.pc != 0x0012F4F8u) return;
    c.budget -= 1;
L_0012F4F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F500:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[19], ld32((c.r[2].w[0] - 15072u)));
    set32(c.r[7], c.r[3].w[0] - 12328u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], c.r[19].w[0] + 64u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 12328u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F554u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 348u, depth + 1u); else { c.pc = 0x0012F4F0u; return; } if (c.pc != 0x0012F554u) [[unlikely]] return; }
L_0012F554:
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F570u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 344u, depth + 1u); else { c.pc = 0x0012F4B0u; return; } if (c.pc != 0x0012F570u) [[unlikely]] return; }
L_0012F570:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F57Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0012F57Cu) [[unlikely]] return; }
L_0012F57C:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F590u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 344u, depth + 1u); else { c.pc = 0x0012F4B0u; return; } if (c.pc != 0x0012F590u) [[unlikely]] return; }
L_0012F590:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F5F0; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0012F5A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5BCu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0003(c, 344u, depth + 1u); else { c.pc = 0x0012F4B0u; return; } if (c.pc != 0x0012F5BCu) [[unlikely]] return; }
L_0012F5BC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5C8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0012F5C8u) [[unlikely]] return; }
L_0012F5C8:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0003(c, 344u, depth + 1u); else { c.pc = 0x0012F4B0u; return; } if (c.pc != 0x0012F5E0u) [[unlikely]] return; }
L_0012F5E0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F5A8u | kUnwind; return; } goto L_0012F5A8; } }
L_0012F5F0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012F618:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EA78u | kUnwind; return; } goto L_0012EA78; }
L_0012F690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6A8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 350u, depth + 1u); else { c.pc = 0x0012F500u; return; } if (c.pc != 0x0012F6A8u) [[unlikely]] return; }
L_0012F6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6B0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 359u, depth + 1u); else { c.pc = 0x0012F618u; return; } if (c.pc != 0x0012F6B0u) [[unlikely]] return; }
L_0012F6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 15072u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124BA0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 65u, depth); }
L_0012F6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 359u, depth + 1u); else { c.pc = 0x0012F618u; return; } if (c.pc != 0x0012F6ECu) [[unlikely]] return; }
L_0012F6EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124B80u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 63u, depth); }
L_0012F750:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0012F758u; syscall(c, 0x0012F754u); if (c.pc != 0x0012F758u) return;
    c.budget -= 1;
L_0012F758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F760:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0012F768u; syscall(c, 0x0012F764u); if (c.pc != 0x0012F768u) return;
    c.budget -= 1;
L_0012F768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F770:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0012F7A0; } }
    c.budget -= 1;
L_0012F780:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F780u | kUnwind; return; } goto L_0012F780; } }
L_0012F7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012F7A8:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0012F7B0u; syscall(c, 0x0012F7ACu); if (c.pc != 0x0012F7B0u) return;
    c.budget -= 1;
L_0012F7B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F7B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 6160ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012F878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 10424u);
    set32(c.r[4], ld32((c.r[2].w[0] - 10424u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F800u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 365u, depth + 1u); else { c.pc = 0x0012F750u; return; } if (c.pc != 0x0012F800u) [[unlikely]] return; }
L_0012F800:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[5], c.r[5].w[0] - 12320u);
    c.r[4].d[0] = c.r[4].d[0] | 24576ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F818u); set32(c.r[6], 0u + 1856u);  if (depth < kMaxDepth) unit_0003(c, 367u, depth + 1u); else { c.pc = 0x0012F760u; return; } if (c.pc != 0x0012F818u) [[unlikely]] return; }
L_0012F818:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[5], c.r[5].w[0] - 10464u);
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F830u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0003(c, 367u, depth + 1u); else { c.pc = 0x0012F760u; return; } if (c.pc != 0x0012F830u) [[unlikely]] return; }
L_0012F830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F838u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012F838u) [[unlikely]] return; }
L_0012F838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F840u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012F840u) [[unlikely]] return; }
L_0012F840:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F84Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0003(c, 365u, depth + 1u); else { c.pc = 0x0012F750u; return; } if (c.pc != 0x0012F84Cu) [[unlikely]] return; }
L_0012F84C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0012F850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F858u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 371u, depth + 1u); else { c.pc = 0x0012F7A8u; return; } if (c.pc != 0x0012F858u) [[unlikely]] return; }
L_0012F858:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F868u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0003(c, 365u, depth + 1u); else { c.pc = 0x0012F750u; return; } if (c.pc != 0x0012F868u) [[unlikely]] return; }
L_0012F868:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F850u | kUnwind; return; } goto L_0012F850; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012F878:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012F890:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0012F8CC; } }
    c.budget -= 1;
L_0012F8A8:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F8A8u | kUnwind; return; } goto L_0012F8A8; } }
L_0012F8CC:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] | 6ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mtc0(c, 12u, c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    mtc0(c, 30u, c.r[31].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012F900:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F890u | kUnwind; return; } goto L_0012F890; }
L_0012F910:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4112ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F890u | kUnwind; return; } goto L_0012F890; }
L_0012F920:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4128ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F890u | kUnwind; return; } goto L_0012F890; }
L_0012F930:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[17], c.r[18].w[0] - 10360u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012F96C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_0012FA64; } }
L_0012F96C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[18].w[0] - 10360u), 0ull);
    set32(c.r[16], c.r[19].w[0] - 23424u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F98Cu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0012F98Cu) [[unlikely]] return; }
L_0012F98C:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 8192u);
    set32(c.r[2], 0u + 127u);
    set32(c.r[16], c.r[16].w[0] + 8128u);
    c.budget -= 5;
L_0012F9A0:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] - 64u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F9A0u | kUnwind; return; } goto L_0012F9A0; } }
    set32(c.r[2], c.r[19].w[0] - 23424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9C8u); st32((c.r[2].w[0] + 8128u), 0u);  if (depth < kMaxDepth) unit_0004(c, 77u, depth + 1u); else { c.pc = 0x00130C00u; return; } if (c.pc != 0x0012F9C8u) [[unlikely]] return; }
L_0012F9C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], c.r[5].w[0] - 304u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 71u, depth + 1u); else { c.pc = 0x00124C50u; return; } if (c.pc != 0x0012F9E0u) [[unlikely]] return; }
L_0012F9E0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] - 10360u);  goto L_0012F9F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 36897ull;  if (t) { goto L_0012FA64; } }
L_0012F9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA00u); st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012FA00u) [[unlikely]] return; }
L_0012FA00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.r[16].d[0] = c.r[16].d[0] | 768ull;
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012FA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA38u); c.r[16].d[0] = c.r[16].d[0] | 3200ull;  if (depth < kMaxDepth) unit_0003(c, 385u, depth + 1u); else { c.pc = 0x0012F900u; return; } if (c.pc != 0x0012FA38u) [[unlikely]] return; }
L_0012FA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA40u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_0003(c, 387u, depth + 1u); else { c.pc = 0x0012F920u; return; } if (c.pc != 0x0012FA40u) [[unlikely]] return; }
L_0012FA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 386u, depth + 1u); else { c.pc = 0x0012F910u; return; } if (c.pc != 0x0012FA48u) [[unlikely]] return; }
L_0012FA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA50u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0001(c, 230u, depth + 1u); else { c.pc = 0x00125AA8u; return; } if (c.pc != 0x0012FA50u) [[unlikely]] return; }
L_0012FA50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012FA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA60u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012FA60u) [[unlikely]] return; }
L_0012FA60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012FA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012FA88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] - 10360u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0012FABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_0012FB28; } }
L_0012FABC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012FAD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_0012FB28; } }
L_0012FAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FADCu);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012FADCu) [[unlikely]] return; }
L_0012FADC:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAECu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0001(c, 73u, depth + 1u); else { c.pc = 0x00124C60u; return; } if (c.pc != 0x0012FAECu) [[unlikely]] return; }
L_0012FAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012FB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAFCu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0001(c, 226u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x0012FAFCu) [[unlikely]] return; }
L_0012FAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB04u); set32(c.r[4], 0u + 3072u);  if (depth < kMaxDepth) unit_0003(c, 386u, depth + 1u); else { c.pc = 0x0012F910u; return; } if (c.pc != 0x0012FB04u) [[unlikely]] return; }
L_0012FB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 385u, depth + 1u); else { c.pc = 0x0012F900u; return; } if (c.pc != 0x0012FB0Cu) [[unlikely]] return; }
L_0012FB0C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012FB10:
    st64((c.r[18].w[0] - 10360u), 0ull);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0012FB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB24u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012FB24u) [[unlikely]] return; }
L_0012FB24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012FB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012FB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB84u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012FB84u) [[unlikely]] return; }
L_0012FB84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FBB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012FBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBB0u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012FBB0u) [[unlikely]] return; }
L_0012FBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012FBF0; } }
L_0012FBB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62463ull;
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBCCu); c.r[4].d[0] = c.r[4].d[0] | 128ull;  if (depth < kMaxDepth) unit_0003(c, 386u, depth + 1u); else { c.pc = 0x0012F910u; return; } if (c.pc != 0x0012FBCCu) [[unlikely]] return; }
L_0012FBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBD4u);  if (depth < kMaxDepth) unit_0004(c, 8u, depth + 1u); else { c.pc = 0x00130178u; return; } if (c.pc != 0x0012FBD4u) [[unlikely]] return; }
L_0012FBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 418u, depth + 1u); else { c.pc = 0x0012FC80u; return; } if (c.pc != 0x0012FBDCu) [[unlikely]] return; }
L_0012FBDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012FBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBECu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012FBECu) [[unlikely]] return; }
L_0012FBEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012FBF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012FC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC14u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012FC14u) [[unlikely]] return; }
L_0012FC14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012FC48; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012FC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC40u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012FC40u) [[unlikely]] return; }
L_0012FC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012FC6C; } }
L_0012FC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62335ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC58u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0003(c, 386u, depth + 1u); else { c.pc = 0x0012F910u; return; } if (c.pc != 0x0012FC58u) [[unlikely]] return; }
L_0012FC58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012FC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC68u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012FC68u) [[unlikely]] return; }
L_0012FC68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012FC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012FC80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10360u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_0012FDF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));  goto L_0012FCEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 387u, depth + 1u); else { c.pc = 0x0012F920u; return; } if (c.pc != 0x0012FCC8u) [[unlikely]] return; }
L_0012FCC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F910u | kUnwind; return; } goto L_0012F910; }
L_0012FCEC:
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] - c.r[4].d[0];  if (t) { goto L_0012FD64; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(29491ll);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] & 3ull;  if (t) { goto L_0012FD64; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0012FD30:
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(29491ll);  if (t) { goto L_0012FD68; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] - c.r[7].d[0];  goto L_0012FD6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FD30u | kUnwind; return; } goto L_0012FD30; } }
L_0012FD64:
    c.r[17].d[0] = c.r[18].d[0] & 3ull;
    c.budget -= 1;
L_0012FD68:
    c.r[2].d[0] = c.r[16].d[0] - c.r[7].d[0];
    c.budget -= 1;
L_0012FD6C:
    c.r[2].d[0] = c.r[2].sd[0] < 29491ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0012FDC0; } }
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[4], 0u + 29491u);
    c.r[4].d[0] = c.r[4].d[0] >> (c.r[5].w[0] & 63u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD9Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0003(c, 387u, depth + 1u); else { c.pc = 0x0012F920u; return; } if (c.pc != 0x0012FD9Cu) [[unlikely]] return; }
L_0012FD9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F910u | kUnwind; return; } goto L_0012F910; }
L_0012FDC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDD0u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0003(c, 386u, depth + 1u); else { c.pc = 0x0012F910u; return; } if (c.pc != 0x0012FDD0u) [[unlikely]] return; }
L_0012FDD0:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[16].d[0] >> (c.r[4].w[0] & 63u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F920u | kUnwind; return; } goto L_0012F920; }
L_0012FDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012FE10:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    set32(c.r[5], c.r[9].w[0] - 10360u);
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] - c.r[4].d[0];  if (t) { goto L_0012FE44; } }
    c.budget -= 1;
L_0012FE40:
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 1;
L_0012FE44:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[6].w[0] + 4u), c.r[8].w[0]);  goto L_0012FE70; }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[4].d[0];
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FE40u | kUnwind; return; } goto L_0012FE40; }
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 1;
L_0012FE70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_0012FE7C; } }
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_0012FE7C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] - 10360u);  if (t) { goto L_0012FE8C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0012FE8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 24u), c.r[6].w[0]);  c.pc = t; return; }
L_0012FE98:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { goto L_0012FEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0012FEB4; } }
L_0012FEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 10336u), c.r[3].w[0]);
    c.budget -= 2;
L_0012FEB4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 4u), 0u);  goto L_0012FEC8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
L_0012FEC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0012FED0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
    set32(c.r[2], c.r[21].w[0] - 10360u);
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
    set32(c.r[23], 0u + 14745u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_0012FF30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[4].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[5].d[0] = c.r[17].d[0] & 2048ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] - c.r[3].d[0];  if (t) { goto L_0012FF84; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] - 10360u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF7Cu); st64((c.r[20].w[0] - 10360u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0003(c, 386u, depth + 1u); else { c.pc = 0x0012F910u; return; } if (c.pc != 0x0012FF7Cu) [[unlikely]] return; }
L_0012FF7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 4096u)));
    c.budget -= 2;
L_0012FF84:
    c.r[4].d[0] = ld64((c.r[20].w[0] - 10360u));
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[17].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[20].w[0] - 10360u);  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 425u, depth + 1u); else { c.pc = 0x0012FE98u; return; } if (c.pc != 0x0012FFB8u) [[unlikely]] return; }
L_0012FFB8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld64((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] << 4);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[6].d[0] = c.r[17].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] - c.r[3].d[0];
    set32(c.r[28], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[5].d[0] = ld64((c.r[16].w[0] + 32u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFFCu); set32(c.r[7], ld32((c.r[16].w[0] + 48u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FFFCu) [[unlikely]] return; }
L_0012FFFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0004(c, 1u, depth);
}

}
