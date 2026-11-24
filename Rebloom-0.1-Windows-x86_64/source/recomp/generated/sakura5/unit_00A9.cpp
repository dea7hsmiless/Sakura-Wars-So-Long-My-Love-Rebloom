#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A9[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0,
    0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0,
    239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0,
    0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0,
};

void unit_00A9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C4000;
    case 2u: goto L_003C4018;
    case 3u: goto L_003C4020;
    case 4u: goto L_003C4028;
    case 5u: goto L_003C402C;
    case 6u: goto L_003C4034;
    case 7u: goto L_003C4040;
    case 8u: goto L_003C4090;
    case 9u: goto L_003C4098;
    case 10u: goto L_003C40B0;
    case 11u: goto L_003C40C8;
    case 12u: goto L_003C40D8;
    case 13u: goto L_003C40E8;
    case 14u: goto L_003C4100;
    case 15u: goto L_003C4110;
    case 16u: goto L_003C414C;
    case 17u: goto L_003C4150;
    case 18u: goto L_003C4170;
    case 19u: goto L_003C41E0;
    case 20u: goto L_003C41E8;
    case 21u: goto L_003C4218;
    case 22u: goto L_003C4220;
    case 23u: goto L_003C424C;
    case 24u: goto L_003C426C;
    case 25u: goto L_003C4290;
    case 26u: goto L_003C42B0;
    case 27u: goto L_003C42D0;
    case 28u: goto L_003C42E0;
    case 29u: goto L_003C430C;
    case 30u: goto L_003C4318;
    case 31u: goto L_003C4328;
    case 32u: goto L_003C432C;
    case 33u: goto L_003C4340;
    case 34u: goto L_003C4364;
    case 35u: goto L_003C43B0;
    case 36u: goto L_003C43E4;
    case 37u: goto L_003C43FC;
    case 38u: goto L_003C442C;
    case 39u: goto L_003C447C;
    case 40u: goto L_003C448C;
    case 41u: goto L_003C44C0;
    case 42u: goto L_003C4560;
    case 43u: goto L_003C45F0;
    case 44u: goto L_003C4650;
    case 45u: goto L_003C466C;
    case 46u: goto L_003C4680;
    case 47u: goto L_003C4690;
    case 48u: goto L_003C46E0;
    case 49u: goto L_003C4714;
    case 50u: goto L_003C472C;
    case 51u: goto L_003C4744;
    case 52u: goto L_003C475C;
    case 53u: goto L_003C4774;
    case 54u: goto L_003C478C;
    case 55u: goto L_003C4798;
    case 56u: goto L_003C47B0;
    case 57u: goto L_003C47D0;
    case 58u: goto L_003C4818;
    case 59u: goto L_003C48D4;
    case 60u: goto L_003C48E8;
    case 61u: goto L_003C491C;
    case 62u: goto L_003C4930;
    case 63u: goto L_003C4964;
    case 64u: goto L_003C4978;
    case 65u: goto L_003C49AC;
    case 66u: goto L_003C49C4;
    case 67u: goto L_003C49F8;
    case 68u: goto L_003C4A0C;
    case 69u: goto L_003C4A40;
    case 70u: goto L_003C4A54;
    case 71u: goto L_003C4A88;
    case 72u: goto L_003C4A9C;
    case 73u: goto L_003C4AD0;
    case 74u: goto L_003C4AE8;
    case 75u: goto L_003C4B1C;
    case 76u: goto L_003C4B30;
    case 77u: goto L_003C4B64;
    case 78u: goto L_003C4B78;
    case 79u: goto L_003C4BAC;
    case 80u: goto L_003C4BC0;
    case 81u: goto L_003C4C70;
    case 82u: goto L_003C4D94;
    case 83u: goto L_003C4DA8;
    case 84u: goto L_003C4DBC;
    case 85u: goto L_003C4DD0;
    case 86u: goto L_003C4DE4;
    case 87u: goto L_003C4DF8;
    case 88u: goto L_003C4E0C;
    case 89u: goto L_003C4E20;
    case 90u: goto L_003C4E34;
    case 91u: goto L_003C4E48;
    case 92u: goto L_003C4E5C;
    case 93u: goto L_003C4E90;
    case 94u: goto L_003C4EB0;
    case 95u: goto L_003C4ED4;
    case 96u: goto L_003C4EF0;
    case 97u: goto L_003C4F00;
    case 98u: goto L_003C4F10;
    case 99u: goto L_003C4F2C;
    case 100u: goto L_003C4F40;
    case 101u: goto L_003C4F80;
    case 102u: goto L_003C4FC0;
    case 103u: goto L_003C4FF4;
    case 104u: goto L_003C5030;
    case 105u: goto L_003C5064;
    case 106u: goto L_003C50A0;
    case 107u: goto L_003C50D4;
    case 108u: goto L_003C5140;
    case 109u: goto L_003C51B0;
    case 110u: goto L_003C51BC;
    case 111u: goto L_003C51E0;
    case 112u: goto L_003C51F8;
    case 113u: goto L_003C5228;
    case 114u: goto L_003C5240;
    case 115u: goto L_003C5270;
    case 116u: goto L_003C5288;
    case 117u: goto L_003C52B8;
    case 118u: goto L_003C52D0;
    case 119u: goto L_003C5300;
    case 120u: goto L_003C5318;
    case 121u: goto L_003C5368;
    case 122u: goto L_003C5388;
    case 123u: goto L_003C5398;
    case 124u: goto L_003C53D4;
    case 125u: goto L_003C5420;
    case 126u: goto L_003C5454;
    case 127u: goto L_003C5464;
    case 128u: goto L_003C5490;
    case 129u: goto L_003C54C0;
    case 130u: goto L_003C5500;
    case 131u: goto L_003C5540;
    case 132u: goto L_003C5550;
    case 133u: goto L_003C55AC;
    case 134u: goto L_003C55CC;
    case 135u: goto L_003C55E8;
    case 136u: goto L_003C5620;
    case 137u: goto L_003C5690;
    case 138u: goto L_003C56B8;
    case 139u: goto L_003C5730;
    case 140u: goto L_003C5778;
    case 141u: goto L_003C5788;
    case 142u: goto L_003C57A0;
    case 143u: goto L_003C57D0;
    case 144u: goto L_003C57E8;
    case 145u: goto L_003C5818;
    case 146u: goto L_003C5830;
    case 147u: goto L_003C5860;
    case 148u: goto L_003C5878;
    case 149u: goto L_003C589C;
    case 150u: goto L_003C58AC;
    case 151u: goto L_003C58C4;
    case 152u: goto L_003C58F0;
    case 153u: goto L_003C5908;
    case 154u: goto L_003C592C;
    case 155u: goto L_003C593C;
    case 156u: goto L_003C5954;
    case 157u: goto L_003C5980;
    case 158u: goto L_003C5998;
    case 159u: goto L_003C59BC;
    case 160u: goto L_003C59CC;
    case 161u: goto L_003C59E4;
    case 162u: goto L_003C5A10;
    case 163u: goto L_003C5A28;
    case 164u: goto L_003C5A4C;
    case 165u: goto L_003C5A5C;
    case 166u: goto L_003C5A74;
    case 167u: goto L_003C5AA0;
    case 168u: goto L_003C5AB8;
    case 169u: goto L_003C5ADC;
    case 170u: goto L_003C5AEC;
    case 171u: goto L_003C5B04;
    case 172u: goto L_003C5B28;
    case 173u: goto L_003C5B38;
    case 174u: goto L_003C5B50;
    case 175u: goto L_003C5B78;
    case 176u: goto L_003C5BA0;
    case 177u: goto L_003C5BC4;
    case 178u: goto L_003C5C10;
    case 179u: goto L_003C5C44;
    case 180u: goto L_003C5C5C;
    case 181u: goto L_003C5C8C;
    case 182u: goto L_003C5CDC;
    case 183u: goto L_003C5CEC;
    case 184u: goto L_003C5D20;
    case 185u: goto L_003C5DB0;
    case 186u: goto L_003C5E40;
    case 187u: goto L_003C5EA0;
    case 188u: goto L_003C5EB4;
    case 189u: goto L_003C5ED8;
    case 190u: goto L_003C5F20;
    case 191u: goto L_003C5F4C;
    case 192u: goto L_003C5F58;
    case 193u: goto L_003C5F70;
    case 194u: goto L_003C5F90;
    case 195u: goto L_003C5FC0;
    case 196u: goto L_003C5FF0;
    case 197u: goto L_003C6010;
    case 198u: goto L_003C6034;
    case 199u: goto L_003C6050;
    case 200u: goto L_003C60A4;
    case 201u: goto L_003C60F0;
    case 202u: goto L_003C6100;
    case 203u: goto L_003C6160;
    case 204u: goto L_003C61AC;
    case 205u: goto L_003C61C0;
    case 206u: goto L_003C6210;
    case 207u: goto L_003C623C;
    case 208u: goto L_003C62A0;
    case 209u: goto L_003C62B0;
    case 210u: goto L_003C62F0;
    case 211u: goto L_003C6354;
    case 212u: goto L_003C6364;
    case 213u: goto L_003C6380;
    case 214u: goto L_003C638C;
    case 215u: goto L_003C63B0;
    case 216u: goto L_003C640C;
    case 217u: goto L_003C641C;
    case 218u: goto L_003C6484;
    case 219u: goto L_003C6494;
    case 220u: goto L_003C64A0;
    case 221u: goto L_003C64D0;
    case 222u: goto L_003C6520;
    case 223u: goto L_003C656C;
    case 224u: goto L_003C658C;
    case 225u: goto L_003C65A0;
    case 226u: goto L_003C65F0;
    case 227u: goto L_003C6600;
    case 228u: goto L_003C6614;
    case 229u: goto L_003C66C0;
    case 230u: goto L_003C66EC;
    case 231u: goto L_003C66F8;
    case 232u: goto L_003C6704;
    case 233u: goto L_003C6714;
    case 234u: goto L_003C6744;
    case 235u: goto L_003C6750;
    case 236u: goto L_003C675C;
    case 237u: goto L_003C6768;
    case 238u: goto L_003C6774;
    case 239u: goto L_003C6780;
    case 240u: goto L_003C678C;
    case 241u: goto L_003C6798;
    case 242u: goto L_003C67A0;
    case 243u: goto L_003C67AC;
    case 244u: goto L_003C67BC;
    case 245u: goto L_003C67DC;
    case 246u: goto L_003C6800;
    case 247u: goto L_003C682C;
    case 248u: goto L_003C6838;
    case 249u: goto L_003C6844;
    case 250u: goto L_003C6858;
    case 251u: goto L_003C6888;
    case 252u: goto L_003C6894;
    case 253u: goto L_003C68A0;
    case 254u: goto L_003C68AC;
    case 255u: goto L_003C68B8;
    case 256u: goto L_003C68C4;
    case 257u: goto L_003C68D0;
    case 258u: goto L_003C68DC;
    case 259u: goto L_003C68E4;
    case 260u: goto L_003C68F0;
    case 261u: goto L_003C6900;
    case 262u: goto L_003C691C;
    case 263u: goto L_003C6940;
    case 264u: goto L_003C6970;
    case 265u: goto L_003C6994;
    case 266u: goto L_003C69A8;
    case 267u: goto L_003C69D0;
    case 268u: goto L_003C6A1C;
    case 269u: goto L_003C6A40;
    case 270u: goto L_003C6A60;
    case 271u: goto L_003C6A70;
    case 272u: goto L_003C6A80;
    case 273u: goto L_003C6AA0;
    case 274u: goto L_003C6AC0;
    case 275u: goto L_003C6AE0;
    case 276u: goto L_003C6B0C;
    case 277u: goto L_003C6B30;
    case 278u: goto L_003C6B80;
    case 279u: goto L_003C6B94;
    case 280u: goto L_003C6BB4;
    case 281u: goto L_003C6BC4;
    case 282u: goto L_003C6BEC;
    case 283u: goto L_003C6C00;
    case 284u: goto L_003C6C0C;
    case 285u: goto L_003C6C1C;
    case 286u: goto L_003C6C2C;
    case 287u: goto L_003C6C38;
    case 288u: goto L_003C6C48;
    case 289u: goto L_003C6C80;
    case 290u: goto L_003C6D80;
    case 291u: goto L_003C6DDC;
    case 292u: goto L_003C6E04;
    case 293u: goto L_003C6E0C;
    case 294u: goto L_003C6E38;
    case 295u: goto L_003C6E90;
    case 296u: goto L_003C6F00;
    case 297u: goto L_003C6F40;
    case 298u: goto L_003C6F70;
    case 299u: goto L_003C6F84;
    case 300u: goto L_003C6F94;
    case 301u: goto L_003C6FA0;
    case 302u: goto L_003C6FB4;
    case 303u: goto L_003C6FE0;
    case 304u: goto L_003C6FF4;
    case 305u: goto L_003C7050;
    case 306u: goto L_003C708C;
    case 307u: goto L_003C7098;
    case 308u: goto L_003C70A8;
    case 309u: goto L_003C70D8;
    case 310u: goto L_003C70F0;
    case 311u: goto L_003C7120;
    case 312u: goto L_003C7144;
    case 313u: goto L_003C7170;
    case 314u: goto L_003C71A0;
    case 315u: goto L_003C71D0;
    case 316u: goto L_003C71E0;
    case 317u: goto L_003C7200;
    case 318u: goto L_003C7208;
    case 319u: goto L_003C7230;
    case 320u: goto L_003C7240;
    case 321u: goto L_003C7280;
    case 322u: goto L_003C72A0;
    case 323u: goto L_003C72B0;
    case 324u: goto L_003C72C0;
    case 325u: goto L_003C72DC;
    case 326u: goto L_003C731C;
    case 327u: goto L_003C7330;
    case 328u: goto L_003C734C;
    case 329u: goto L_003C73F0;
    case 330u: goto L_003C7430;
    case 331u: goto L_003C7444;
    case 332u: goto L_003C745C;
    case 333u: goto L_003C7480;
    case 334u: goto L_003C74A8;
    case 335u: goto L_003C74C4;
    case 336u: goto L_003C74E0;
    case 337u: goto L_003C74F0;
    case 338u: goto L_003C7510;
    case 339u: goto L_003C7520;
    case 340u: goto L_003C7550;
    case 341u: goto L_003C75B0;
    case 342u: goto L_003C75BC;
    case 343u: goto L_003C75E0;
    case 344u: goto L_003C75EC;
    case 345u: goto L_003C75F8;
    case 346u: goto L_003C7608;
    case 347u: goto L_003C7614;
    case 348u: goto L_003C7624;
    case 349u: goto L_003C7634;
    case 350u: goto L_003C7640;
    case 351u: goto L_003C7658;
    case 352u: goto L_003C770C;
    case 353u: goto L_003C7758;
    case 354u: goto L_003C7798;
    case 355u: goto L_003C77C8;
    case 356u: goto L_003C77F0;
    case 357u: goto L_003C7830;
    case 358u: goto L_003C7870;
    case 359u: goto L_003C78AC;
    case 360u: goto L_003C78D8;
    case 361u: goto L_003C7900;
    case 362u: goto L_003C7940;
    case 363u: goto L_003C7980;
    case 364u: goto L_003C79BC;
    case 365u: goto L_003C79EC;
    case 366u: goto L_003C7A30;
    case 367u: goto L_003C7A50;
    case 368u: goto L_003C7B50;
    case 369u: goto L_003C7B64;
    case 370u: goto L_003C7BD0;
    case 371u: goto L_003C7BFC;
    case 372u: goto L_003C7C08;
    case 373u: goto L_003C7C20;
    case 374u: goto L_003C7C40;
    case 375u: goto L_003C7C74;
    case 376u: goto L_003C7C9C;
    case 377u: goto L_003C7CB8;
    case 378u: goto L_003C7CD4;
    case 379u: goto L_003C7CF0;
    case 380u: goto L_003C7D0C;
    case 381u: goto L_003C7D28;
    case 382u: goto L_003C7D44;
    case 383u: goto L_003C7D60;
    case 384u: goto L_003C7D7C;
    case 385u: goto L_003C7D90;
    case 386u: goto L_003C7DB8;
    case 387u: goto L_003C7DD4;
    case 388u: goto L_003C7DF0;
    case 389u: goto L_003C7E00;
    case 390u: goto L_003C7E50;
    case 391u: goto L_003C7E80;
    case 392u: goto L_003C7EA8;
    case 393u: goto L_003C7F1C;
    case 394u: goto L_003C7F34;
    case 395u: goto L_003C7F5C;
    case 396u: goto L_003C7F84;
    case 397u: goto L_003C7F9C;
    case 398u: goto L_003C7FB4;
    case 399u: goto L_003C7FCC;
    case 400u: goto L_003C7FE4;
    default: bad_entry(c, 0x003C4000u); return;
    }
L_003C4000:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C4014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4074; } }
L_003C4014:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C4018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4020u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 445u, depth + 1u); else { c.pc = 0x0015BC00u; return; } if (c.pc != 0x003C4020u) [[unlikely]] return; }
L_003C4020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[29].w[0] + 144u));  if (t) { goto L_003C4080; } }
L_003C4028:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_003C402C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4034u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C4034u) [[unlikely]] return; }
L_003C4034:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4040u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 449u, depth + 1u); else { c.pc = 0x0015BCC0u; return; } if (c.pc != 0x003C4040u) [[unlikely]] return; }
L_003C4040:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_003C407C; } }
L_003C4074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C414C; } }
L_003C407C:
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003C4080:
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.f[14] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4090u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00A9(c, 297u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C4090u) [[unlikely]] return; }
L_003C4090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4098u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003C4098u) [[unlikely]] return; }
L_003C4098:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_003C40E0; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C40B0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003C40B0u) [[unlikely]] return; }
L_003C40B0:
    set32(c.r[6], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[7], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C40C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003C40C8u) [[unlikely]] return; }
L_003C40C8:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C40D8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003C40D8u) [[unlikely]] return; }
L_003C40D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003C4144; } }
L_003C40E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C40E8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003C40E8u) [[unlikely]] return; }
L_003C40E8:
    set32(c.r[6], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[7], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4100u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003C4100u) [[unlikely]] return; }
L_003C4100:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4110u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003C4110u) [[unlikely]] return; }
L_003C4110:
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[3] = ld32((c.r[29].w[0] + 244u));
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[4]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 13;
L_003C4144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C414Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003C414Cu) [[unlikely]] return; }
L_003C414C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003C4150:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003C4170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C4198; } }
    c.f[0] = fp::ee::div(c.fcr31, c.f[12], c.f[13]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C427C; } }
L_003C4198:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C4228; } }
    c.f[2] = fp::ee::div(c.fcr31, c.f[12], c.f[13]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003C41F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41E0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C41E0u) [[unlikely]] return; }
L_003C41E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003C41E8u) [[unlikely]] return; }
L_003C41E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003C427C; } }
L_003C41F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4218u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C4218u) [[unlikely]] return; }
L_003C4218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4220u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003C4220u) [[unlikely]] return; }
L_003C4220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C4280; } }
L_003C4228:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[12]);  goto L_003C4254; }
    c.f[12] = fp::ee::div(c.fcr31, c.f[12], c.f[13]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C424Cu); c.f[13] = c.f[14];  if (depth < kMaxDepth) unit_0005(c, 138u, depth + 1u); else { c.pc = 0x001372D8u; return; } if (c.pc != 0x003C424Cu) [[unlikely]] return; }
L_003C424C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C427C; } }
L_003C4254:
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[13]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C426Cu); c.f[13] = c.f[14];  if (depth < kMaxDepth) unit_0005(c, 138u, depth + 1u); else { c.pc = 0x001372D8u; return; } if (c.pc != 0x003C426Cu) [[unlikely]] return; }
L_003C426C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_003C427C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C4280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C4290:
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st16((c.r[5].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 80u), c.f[12]);  c.pc = t; return; }
L_003C42B0:
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] & 65519ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C42D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C42E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C432C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 24784u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00A9[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C430C:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 72u)));  if (t) { goto L_003C432C; } }
L_003C4318:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 92u)));  if (t) { goto L_003C432C; } }
L_003C4328:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 1;
L_003C432C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[8], ld32((c.r[16].w[0])));  goto L_003C436C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4364u); set32(c.r[4], c.r[4].w[0] + 24832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C4364u) [[unlikely]] return; }
L_003C4364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C44A4; } }
L_003C436C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17473ull;
    set32(c.r[5], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[8].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 14;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003C43B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43B0u); set32(c.r[4], c.r[4].w[0] + 24864u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C43B0u) [[unlikely]] return; }
L_003C43B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C44A0; } }
L_003C43B8:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C44A4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x77820000u);
    c.r[3].d[0] = c.r[3].d[0] | 3417ull;
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  goto L_003C4434; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43E4u); set32(c.r[4], c.r[4].w[0] + 24896u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C43E4u) [[unlikely]] return; }
L_003C43E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01310000u);
    set32(c.r[4], c.r[4].w[0] + 24960u);
    c.r[5].d[0] = c.r[2].d[0] | 61638ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C43FCu) [[unlikely]] return; }
L_003C43FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[4].w[0] + 25008u);
    mmi::multu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C442Cu); set32(c.r[5], c.r[2].w[0] >> 5);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C442Cu) [[unlikely]] return; }
L_003C442C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C44A0; } }
L_003C4434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x504F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17968ull;
    set32(c.r[8], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[7].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 15;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[8].w[0] + 8u)));  goto L_003C4484; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C447Cu); set32(c.r[4], c.r[4].w[0] + 25056u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C447Cu) [[unlikely]] return; }
L_003C447C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C44A0; } }
L_003C4484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C448Cu); set32(c.r[5], c.r[8].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 144u, depth + 1u); else { c.pc = 0x001712F0u; return; } if (c.pc != 0x003C448Cu) [[unlikely]] return; }
L_003C448C:
    set32(c.r[2], 0u + 256u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C44A4; } }
L_003C44A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C44A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C44C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4550; }
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C454C; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C454C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C454C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C454C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003C4550; } }
L_003C454C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C4550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4560:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C45E0; }
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C45DC; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C45DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C45DC; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  if (t) { goto L_003C45E0; } }
L_003C45DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C45E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C45F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4640; }
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C463C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_003C4640; } }
L_003C463C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C4640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C466Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003C466Cu) [[unlikely]] return; }
L_003C466C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4680u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003C4340u; return; } if (c.pc != 0x003C4680u) [[unlikely]] return; }
L_003C4680:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 41u, depth + 1u); else { c.pc = 0x003C44C0u; return; } if (c.pc != 0x003C4690u) [[unlikely]] return; }
L_003C4690:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C46E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C47B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5152u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4714u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 125u, depth + 1u); else { c.pc = 0x003C5420u; return; } if (c.pc != 0x003C4714u) [[unlikely]] return; }
L_003C4714:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_003C4730; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C472Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C472Cu) [[unlikely]] return; }
L_003C472C:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_003C4730:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 36u)));  goto L_003C4748; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4744u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C4744u) [[unlikely]] return; }
L_003C4744:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003C4748:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  goto L_003C4760; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C475Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C475Cu) [[unlikely]] return; }
L_003C475C:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003C4760:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  goto L_003C4778; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4774u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C4774u) [[unlikely]] return; }
L_003C4774:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003C4778:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C4790; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C478Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C478Cu) [[unlikely]] return; }
L_003C478C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C4790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003C4798u) [[unlikely]] return; }
L_003C4798:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C47B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C47B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C47B0u) [[unlikely]] return; }
L_003C47B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C47B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C47D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C4C50; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C4C54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4818u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x003C4818u) [[unlikely]] return; }
L_003C4818:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[3].d[0] = c.r[5].d[0] | 17229ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 80u);  goto L_003C4BA4; }
    c.r[3].d[0] = c.r[5].d[0] | 17234ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 144u);  goto L_003C4B5C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x484C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 19796ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 80u);  goto L_003C4B14; }
    c.r[3].d[0] = c.r[3].d[0] | 18772ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 176u);  goto L_003C4AC8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48430000u);
    c.r[4].d[0] = c.r[3].d[0] | 19796ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 80u);  goto L_003C4A80; }
    c.r[3].d[0] = c.r[3].d[0] | 16717ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 288u);  goto L_003C4A38; }
    c.r[3].d[0] = c.r[5].d[0] | 20562ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 128u);  goto L_003C49F0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[3].d[0] = c.r[3].d[0] | 17752ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 80u);  goto L_003C49A4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x484D0000u);
    c.r[3].d[0] = c.r[4].d[0] | 21072ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 368u);  goto L_003C495C; }
    c.r[3].d[0] = c.r[4].d[0] | 20308ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 80u);  goto L_003C4914; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48420000u);
    c.r[3].d[0] = c.r[3].d[0] | 21328ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 176u);  goto L_003C48CC; }
    c.r[3].d[0] = c.r[4].d[0] | 17484ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C48C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_003C4BEC; } }
L_003C48C8:
    set32(c.r[4], 0u + 176u);
    c.budget -= 1;
L_003C48CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48D4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C48D4u) [[unlikely]] return; }
L_003C48D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C48F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x003C48E8u) [[unlikely]] return; }
L_003C48E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C48F0:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x484D0000u);
    c.r[5].d[0] = c.r[5].d[0] | 17484ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C491Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C491Cu) [[unlikely]] return; }
L_003C491C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4930u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 278u, depth + 1u); else { c.pc = 0x00166630u; return; } if (c.pc != 0x003C4930u) [[unlikely]] return; }
L_003C4930:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4938:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x484D0000u);
    c.r[5].d[0] = c.r[5].d[0] | 20308ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C495C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4964u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4964u) [[unlikely]] return; }
L_003C4964:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4978u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 285u, depth + 1u); else { c.pc = 0x0016F1C0u; return; } if (c.pc != 0x003C4978u) [[unlikely]] return; }
L_003C4978:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4980:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x484D0000u);
    c.r[5].d[0] = c.r[5].d[0] | 21076ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C49A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C49ACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C49ACu) [[unlikely]] return; }
L_003C49AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C49CC; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C49C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x003C49C4u) [[unlikely]] return; }
L_003C49C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C49CC:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[5].d[0] = c.r[5].d[0] | 17752ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C49F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C49F8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C49F8u) [[unlikely]] return; }
L_003C49F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4A14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 377u, depth + 1u); else { c.pc = 0x0016FDD0u; return; } if (c.pc != 0x003C4A0Cu) [[unlikely]] return; }
L_003C4A0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4A14:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[5].d[0] | 20562ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A40u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4A40u) [[unlikely]] return; }
L_003C4A40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4A5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 307u, depth + 1u); else { c.pc = 0x00157000u; return; } if (c.pc != 0x003C4A54u) [[unlikely]] return; }
L_003C4A54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4A5C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48430000u);
    c.r[5].d[0] = c.r[5].d[0] | 16717ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4A88u) [[unlikely]] return; }
L_003C4A88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4AA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A9Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 326u, depth + 1u); else { c.pc = 0x00166C50u; return; } if (c.pc != 0x003C4A9Cu) [[unlikely]] return; }
L_003C4A9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4AA4:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48430000u);
    c.r[5].d[0] = c.r[5].d[0] | 19796ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4AD0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4AD0u) [[unlikely]] return; }
L_003C4AD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4AF0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4AE8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 405u, depth + 1u); else { c.pc = 0x0015B570u; return; } if (c.pc != 0x003C4AE8u) [[unlikely]] return; }
L_003C4AE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4AF0:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x484C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 18772ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B1Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4B1Cu) [[unlikely]] return; }
L_003C4B1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4B38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B30u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 363u, depth + 1u); else { c.pc = 0x001671F0u; return; } if (c.pc != 0x003C4B30u) [[unlikely]] return; }
L_003C4B30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4B38:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x484C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 19796ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4B64u) [[unlikely]] return; }
L_003C4B64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4B80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0015C1F0u; return; } if (c.pc != 0x003C4B78u) [[unlikely]] return; }
L_003C4B78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4B80:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[5].d[0] | 17234ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4BACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C4BACu) [[unlikely]] return; }
L_003C4BAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_003C4BC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4BC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 272u, depth + 1u); else { c.pc = 0x0016F010u; return; } if (c.pc != 0x003C4BC0u) [[unlikely]] return; }
L_003C4BC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_003C4BC8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[5].d[0] | 17229ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003C4C10; } }
L_003C4BEC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 9;
L_003C4C10:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C4C50; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_003C4C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C4C54:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C4C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C4E5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[7], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_003C4E60; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C4E5C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[3].d[0] = c.r[6].d[0] | 17229ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4E50; }
    c.r[3].d[0] = c.r[6].d[0] | 17234ull;
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4E3C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x484C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 19796ull;
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[5].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4E28; }
    c.r[3].d[0] = c.r[3].d[0] | 18772ull;
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4E14; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48430000u);
    c.r[5].d[0] = c.r[3].d[0] | 19796ull;
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[5].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4E00; }
    c.r[3].d[0] = c.r[3].d[0] | 16717ull;
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4DEC; }
    c.r[3].d[0] = c.r[6].d[0] | 20562ull;
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4DD8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[3].d[0] = c.r[3].d[0] | 17752ull;
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4DC4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x484D0000u);
    c.r[3].d[0] = c.r[5].d[0] | 21076ull;
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4DB0; }
    c.r[3].d[0] = c.r[5].d[0] | 20308ull;
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4D9C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48420000u);
    c.r[3].d[0] = c.r[3].d[0] | 21328ull;
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003C4D88; }
    c.r[3].d[0] = c.r[5].d[0] | 17484ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003C4D84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4D84:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_003C4D88:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4D94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4D94u) [[unlikely]] return; }
L_003C4D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4D9C:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4DA8u) [[unlikely]] return; }
L_003C4DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4DB0:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4DBCu) [[unlikely]] return; }
L_003C4DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4DC4:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4DD0u) [[unlikely]] return; }
L_003C4DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4DD8:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4DE4u) [[unlikely]] return; }
L_003C4DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4DEC:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4DF8u) [[unlikely]] return; }
L_003C4DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4E00:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4E0Cu) [[unlikely]] return; }
L_003C4E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4E14:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4E20u) [[unlikely]] return; }
L_003C4E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4E28:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4E34u) [[unlikely]] return; }
L_003C4E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4E3C:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4E48u) [[unlikely]] return; }
L_003C4E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E5C; } }
L_003C4E50:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4E5Cu) [[unlikely]] return; }
L_003C4E5C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003C4E60:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C4E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4EB0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 43u, depth + 1u); else { c.pc = 0x003C45F0u; return; } if (c.pc != 0x003C4EB0u) [[unlikely]] return; }
L_003C4EB0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4EDC; }
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4ED4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 41u, depth + 1u); else { c.pc = 0x003C44C0u; return; } if (c.pc != 0x003C4ED4u) [[unlikely]] return; }
L_003C4ED4:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C4EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C4EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F00u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 41u, depth + 1u); else { c.pc = 0x003C44C0u; return; } if (c.pc != 0x003C4F00u) [[unlikely]] return; }
L_003C4F00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C4F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4F2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F2Cu);  if (depth < kMaxDepth) unit_00A9(c, 43u, depth + 1u); else { c.pc = 0x003C45F0u; return; } if (c.pc != 0x003C4F2Cu) [[unlikely]] return; }
L_003C4F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C4F40:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4F78; }
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
L_003C4F78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4F80:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4FB4; }
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
L_003C4FB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4FC0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C4FDC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
L_003C4FDC:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003C5020; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 184u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003C4FF4:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_003C5014; }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003C5020; } }
L_003C5014:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4FF4u | kUnwind; return; } goto L_003C4FF4; } }
L_003C5020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5030:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C504C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
L_003C504C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003C5098; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 184u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003C5064:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_003C5088; }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_003C5098; } }
L_003C5088:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5064u | kUnwind; return; } goto L_003C5064; } }
    c.budget -= 1;
L_003C5098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C50A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003C50C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
L_003C50C0:
    set32(c.r[7], ld32((c.r[2].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003C5128; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 184u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003C50D4:
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_003C511C; }
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C5128; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003C512C; } }
L_003C511C:
    c.r[2].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C50D4u | kUnwind; return; } goto L_003C50D4; } }
L_003C5128:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C512C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5140:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003C51A8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003C53F0; } }
L_003C51A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51B0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 176u, depth + 1u); else { c.pc = 0x003C5BA0u; return; } if (c.pc != 0x003C51B0u) [[unlikely]] return; }
L_003C51B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 186u, depth + 1u); else { c.pc = 0x003C5E40u; return; } if (c.pc != 0x003C51BCu) [[unlikely]] return; }
L_003C51BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 52u)));  goto L_003C5340; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[20], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C51E0u) [[unlikely]] return; }
L_003C51E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003C5200; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51F8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x003C51F8u) [[unlikely]] return; }
L_003C51F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));  if (t) { goto L_003C521C; } }
L_003C5200:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 7;
L_003C521C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5228u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C5228u) [[unlikely]] return; }
L_003C5228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003C5248; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5240u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x003C5240u) [[unlikely]] return; }
L_003C5240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));  if (t) { goto L_003C5264; } }
L_003C5248:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 7;
L_003C5264:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5270u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C5270u) [[unlikely]] return; }
L_003C5270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003C5290; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5288u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x003C5288u) [[unlikely]] return; }
L_003C5288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));  if (t) { goto L_003C52AC; } }
L_003C5290:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 7;
L_003C52AC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C52B8u) [[unlikely]] return; }
L_003C52B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003C52D8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52D0u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x003C52D0u) [[unlikely]] return; }
L_003C52D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));  if (t) { goto L_003C52F4; } }
L_003C52D8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 7;
L_003C52F4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5300u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C5300u) [[unlikely]] return; }
L_003C5300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003C5320; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5318u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x003C5318u) [[unlikely]] return; }
L_003C5318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 48u), c.r[17].w[0]);  if (t) { goto L_003C533C; } }
L_003C5320:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 7;
L_003C533C:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 1;
L_003C5340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C53E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003C53E8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5368:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C53D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5388u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 184u, depth + 1u); else { c.pc = 0x003C5D20u; return; } if (c.pc != 0x003C5388u) [[unlikely]] return; }
L_003C5388:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5398u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 185u, depth + 1u); else { c.pc = 0x003C5DB0u; return; } if (c.pc != 0x003C5398u) [[unlikely]] return; }
L_003C5398:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003C53D8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C53D4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C53D4u) [[unlikely]] return; }
L_003C53D4:
    c.budget -= 1;
L_003C53D8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5368u | kUnwind; return; } goto L_003C5368; } }
L_003C53E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  if (t) { goto L_003C53F4; } }
L_003C53F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C53F4:
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
L_003C5420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C5480; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C54D8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003C5454:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5464u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C5464u) [[unlikely]] return; }
L_003C5464:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5454u | kUnwind; return; } goto L_003C5454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C54D8; } }
L_003C5480:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C54D8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5490:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C54C0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003C54C0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C54C0u) [[unlikely]] return; }
L_003C54C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5490u | kUnwind; return; } goto L_003C5490; } }
    c.budget -= 1;
L_003C54D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C5500:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_003C5514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5538; } }
L_003C5514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_003C552C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5538; } }
L_003C552C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_003C5538:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5540:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4560u | kUnwind; return; } goto L_003C4560; }
L_003C5550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C5600; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003C5600; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C5600; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C5600; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 1;
L_003C55AC:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003C55F0; }
    set32(c.r[25], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C55CCu) [[unlikely]] return; }
L_003C55CC:
    set32(c.r[25], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C55E8u) [[unlikely]] return; }
L_003C55E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C5600; } }
L_003C55F0:
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C55ACu | kUnwind; return; } goto L_003C55AC; } }
    c.budget -= 1;
L_003C5600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C5620:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C5708; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_003C5708; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C5708; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C5708; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5690:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_003C56F0; } }
    set32(c.r[25], ld32((c.r[21].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C56B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C56B8u) [[unlikely]] return; }
L_003C56B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[2].w[0]), c.r[19].w[0]);  if (t) { goto L_003C56E8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003C56E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C56F0:
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5690u | kUnwind; return; } goto L_003C5690; } }
    c.budget -= 1;
L_003C5708:
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
L_003C5730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C5B78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00A9[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C5778:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C57C0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5788:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C57A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C57A0u) [[unlikely]] return; }
L_003C57A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C5B7C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5788u | kUnwind; return; } goto L_003C5788; } }
    c.budget -= 1;
L_003C57C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5808; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C57D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C57E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C57E8u) [[unlikely]] return; }
L_003C57E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C57D0u | kUnwind; return; } goto L_003C57D0; } }
    c.budget -= 1;
L_003C5808:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5850; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5818:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5830u) [[unlikely]] return; }
L_003C5830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5818u | kUnwind; return; } goto L_003C5818; } }
    c.budget -= 1;
L_003C5850:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5860:
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5878u) [[unlikely]] return; }
L_003C5878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5860u | kUnwind; return; } goto L_003C5860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5B70; } }
L_003C589C:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C58E0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C58AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C58C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C58C4u) [[unlikely]] return; }
L_003C58C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C58ACu | kUnwind; return; } goto L_003C58AC; } }
L_003C58E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C58F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5908u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5908u) [[unlikely]] return; }
L_003C5908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C58F0u | kUnwind; return; } goto L_003C58F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5B70; } }
L_003C592C:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5970; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C593C:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5954u) [[unlikely]] return; }
L_003C5954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C593Cu | kUnwind; return; } goto L_003C593C; } }
L_003C5970:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5980:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5998u) [[unlikely]] return; }
L_003C5998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5980u | kUnwind; return; } goto L_003C5980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5B70; } }
L_003C59BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5A00; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C59CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C59E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C59E4u) [[unlikely]] return; }
L_003C59E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C59CCu | kUnwind; return; } goto L_003C59CC; } }
L_003C5A00:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5A10:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5A28u) [[unlikely]] return; }
L_003C5A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5A10u | kUnwind; return; } goto L_003C5A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5B70; } }
L_003C5A4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5A90; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5A5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5A74u) [[unlikely]] return; }
L_003C5A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5A5Cu | kUnwind; return; } goto L_003C5A5C; } }
L_003C5A90:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5AA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5AB8u) [[unlikely]] return; }
L_003C5AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5AA0u | kUnwind; return; } goto L_003C5AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5B70; } }
L_003C5ADC:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5AEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5B04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5B04u) [[unlikely]] return; }
L_003C5B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5AECu | kUnwind; return; } goto L_003C5AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5B70; } }
L_003C5B28:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C5B70; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5B38:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5B50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003C5B50u) [[unlikely]] return; }
L_003C5B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5B38u | kUnwind; return; } goto L_003C5B38; } }
    c.budget -= 1;
L_003C5B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C5B7C; } }
L_003C5B78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C5BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[8], ld32((c.r[16].w[0])));  goto L_003C5BCC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BC4u); set32(c.r[4], c.r[4].w[0] + 25136u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C5BC4u) [[unlikely]] return; }
L_003C5BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5D08; } }
L_003C5BCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 21075ull;
    set32(c.r[5], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[8].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 14;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003C5C18; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C10u); set32(c.r[4], c.r[4].w[0] + 25168u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C5C10u) [[unlikely]] return; }
L_003C5C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5D04; } }
L_003C5C18:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C5D08; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x77820000u);
    c.r[3].d[0] = c.r[3].d[0] | 3417ull;
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  goto L_003C5C94; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C44u); set32(c.r[4], c.r[4].w[0] + 25200u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C5C44u) [[unlikely]] return; }
L_003C5C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01310000u);
    set32(c.r[4], c.r[4].w[0] + 25264u);
    c.r[5].d[0] = c.r[2].d[0] | 61638ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C5C5Cu) [[unlikely]] return; }
L_003C5C5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[4].w[0] + 25312u);
    mmi::multu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C8Cu); set32(c.r[5], c.r[2].w[0] >> 5);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C5C8Cu) [[unlikely]] return; }
L_003C5C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5D04; } }
L_003C5C94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x504F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17968ull;
    set32(c.r[8], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[7].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 15;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[8].w[0] + 8u)));  goto L_003C5CE4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5CDCu); set32(c.r[4], c.r[4].w[0] + 25360u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C5CDCu) [[unlikely]] return; }
L_003C5CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5D04; } }
L_003C5CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5CECu); set32(c.r[5], c.r[8].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 144u, depth + 1u); else { c.pc = 0x001712F0u; return; } if (c.pc != 0x003C5CECu) [[unlikely]] return; }
L_003C5CEC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5D08; } }
L_003C5D04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C5D20:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0])));  goto L_003C5D30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5DA8; } }
L_003C5D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21075ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));  goto L_003C5D70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5DA8; } }
L_003C5D70:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003C5D8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5DA8; } }
L_003C5D8C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_003C5DA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5DA8; } }
L_003C5DA0:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_003C5DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5DB0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0])));  goto L_003C5DC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5E38; } }
L_003C5DC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21075ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));  goto L_003C5E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5E38; } }
L_003C5E00:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003C5E1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5E38; } }
L_003C5E1C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_003C5E30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5E38; } }
L_003C5E30:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 2;
L_003C5E38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5E40:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  goto L_003C5E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5E90; } }
L_003C5E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21075ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003C5E90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5E90; } }
L_003C5E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5EB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003C5EB4u) [[unlikely]] return; }
L_003C5EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5176u);
    set32(c.r[5], 0u + 20u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5ED8u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003C5FC0u; return; } if (c.pc != 0x003C5ED8u) [[unlikely]] return; }
L_003C5ED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C5F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C5F70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5F4Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 263u, depth + 1u); else { c.pc = 0x003C6940u; return; } if (c.pc != 0x003C5F4Cu) [[unlikely]] return; }
L_003C5F4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003C5F58u) [[unlikely]] return; }
L_003C5F58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C5F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5F70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C5F70u) [[unlikely]] return; }
L_003C5F70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C5F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C5F90:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C5FB0; } }
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_003C5FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C6034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5FF0u);  if (depth < kMaxDepth) unit_00A9(c, 263u, depth + 1u); else { c.pc = 0x003C6940u; return; } if (c.pc != 0x003C5FF0u) [[unlikely]] return; }
L_003C5FF0:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6010u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x003C6010u) [[unlikely]] return; }
L_003C6010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003C602C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003C6034; } }
L_003C602C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 222u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x003C6034u) [[unlikely]] return; }
L_003C6034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003C6074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C60F4; } }
L_003C6074:
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 3);  goto L_003C60AC; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60A4u); set32(c.r[4], c.r[4].w[0] + 25392u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C60A4u) [[unlikely]] return; }
L_003C60A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C60F4; } }
L_003C60AC:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60F0u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 229u, depth + 1u); else { c.pc = 0x003C66C0u; return; } if (c.pc != 0x003C60F0u) [[unlikely]] return; }
L_003C60F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C60F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003C6124; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C61B0; } }
L_003C6124:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_003C6134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C61B0; } }
L_003C6134:
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 3);  goto L_003C6168; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6160u); set32(c.r[4], c.r[4].w[0] + 25392u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x003C6160u) [[unlikely]] return; }
L_003C6160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C61B0; } }
L_003C6168:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C61ACu); set32(c.r[6], ld32((c.r[2].w[0] - 72u)));  if (depth < kMaxDepth) unit_00A9(c, 246u, depth + 1u); else { c.pc = 0x003C6800u; return; } if (c.pc != 0x003C61ACu) [[unlikely]] return; }
L_003C61AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C61B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C61C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_003C61DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C61FC; } }
L_003C61DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003C61FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C61F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C61FC; } }
L_003C61F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C61FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6210:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_003C622C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C6290; } }
L_003C622C:
    set32(c.r[2], 0u - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_003C623C:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_003C6280; }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C627C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C627C; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_003C6290; } }
L_003C627C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003C6280:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C623Cu | kUnwind; return; } goto L_003C623C; } }
L_003C6290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C62A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_003C62B0:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C62DC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C62DC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
L_003C62DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C62F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C6390; }
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;  goto L_003C6330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C638C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_003C6330:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_003C6370; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003C6354u) [[unlikely]] return; }
L_003C6354:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6364u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x003C6364u) [[unlikely]] return; }
L_003C6364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C638C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003C6370:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003C6380u) [[unlikely]] return; }
L_003C6380:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C638Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x003C638Cu) [[unlikely]] return; }
L_003C638C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C6390:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C63B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C64AC; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  goto L_003C63FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003C64B0; } }
    c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_003C63FC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003C644C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C640Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003C640Cu) [[unlikely]] return; }
L_003C640C:
    set32(c.r[4], ld32((c.r[18].w[0] + 448u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C641Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x003C641Cu) [[unlikely]] return; }
L_003C641C:
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), 0u);  if (t) { goto L_003C64AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003C644C:
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6484u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003C6484u) [[unlikely]] return; }
L_003C6484:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6494u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x003C6494u) [[unlikely]] return; }
L_003C6494:
    set32(c.r[4], ld32((c.r[18].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C64A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x003C64A0u) [[unlikely]] return; }
L_003C64A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 40u), 0u);
    c.budget -= 3;
L_003C64AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C64B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C64D0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;  goto L_003C64EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C650C; } }
L_003C64EC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_003C6508; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003C650C; } }
L_003C6508:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003C650C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6520:
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
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003C669C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C6698; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C656C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], 0u + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C658Cu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C658Cu) [[unlikely]] return; }
L_003C658C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C65A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C65A0u);  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x003C65A0u) [[unlikely]] return; }
L_003C65A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003C65A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003C65E8; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_003C6698; } }
L_003C65E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C65F0:
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6600u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003C6600u) [[unlikely]] return; }
L_003C6600:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6614u);  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x003C6614u) [[unlikely]] return; }
L_003C6614:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C6618:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 19;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003C6678; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_003C6698; } }
L_003C6678:
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C65F0u | kUnwind; return; } goto L_003C65F0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 108u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C656Cu | kUnwind; return; } goto L_003C656C; } }
L_003C6698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C669C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C66C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C66ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003C66ECu) [[unlikely]] return; }
L_003C66EC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C66F8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 440u, depth + 1u); else { c.pc = 0x0015BB60u; return; } if (c.pc != 0x003C66F8u) [[unlikely]] return; }
L_003C66F8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6704u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003C6704u) [[unlikely]] return; }
L_003C6704:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 4;
L_003C6714:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C67C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C67C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6744u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x003C6744u) [[unlikely]] return; }
L_003C6744:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6750u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003C6750u) [[unlikely]] return; }
L_003C6750:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C675Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 449u, depth + 1u); else { c.pc = 0x0015BCC0u; return; } if (c.pc != 0x003C675Cu) [[unlikely]] return; }
L_003C675C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6768u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 447u, depth + 1u); else { c.pc = 0x0015BC50u; return; } if (c.pc != 0x003C6768u) [[unlikely]] return; }
L_003C6768:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6774u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 440u, depth + 1u); else { c.pc = 0x0015BB60u; return; } if (c.pc != 0x003C6774u) [[unlikely]] return; }
L_003C6774:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6780u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003C6780u) [[unlikely]] return; }
L_003C6780:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C678Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 442u, depth + 1u); else { c.pc = 0x0015BB80u; return; } if (c.pc != 0x003C678Cu) [[unlikely]] return; }
L_003C678C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6798u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 441u, depth + 1u); else { c.pc = 0x0015BB70u; return; } if (c.pc != 0x003C6798u) [[unlikely]] return; }
L_003C6798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67A0u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 456u, depth + 1u); else { c.pc = 0x0015BDD0u; return; } if (c.pc != 0x003C67A0u) [[unlikely]] return; }
L_003C67A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67ACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 458u, depth + 1u); else { c.pc = 0x0015BE10u; return; } if (c.pc != 0x003C67ACu) [[unlikely]] return; }
L_003C67AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67BCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 451u, depth + 1u); else { c.pc = 0x0015BD10u; return; } if (c.pc != 0x003C67BCu) [[unlikely]] return; }
L_003C67BC:
    c.budget -= 1;
L_003C67C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C6714u | kUnwind; return; } goto L_003C6714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67DCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 215u, depth + 1u); else { c.pc = 0x00161D70u; return; } if (c.pc != 0x003C67DCu) [[unlikely]] return; }
L_003C67DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C6800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C682Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003C682Cu) [[unlikely]] return; }
L_003C682C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6838u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 440u, depth + 1u); else { c.pc = 0x0015BB60u; return; } if (c.pc != 0x003C6838u) [[unlikely]] return; }
L_003C6838:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6844u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003C6844u) [[unlikely]] return; }
L_003C6844:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
L_003C6858:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6888u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x003C6888u) [[unlikely]] return; }
L_003C6888:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6894u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x003C6894u) [[unlikely]] return; }
L_003C6894:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68A0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 449u, depth + 1u); else { c.pc = 0x0015BCC0u; return; } if (c.pc != 0x003C68A0u) [[unlikely]] return; }
L_003C68A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68ACu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 447u, depth + 1u); else { c.pc = 0x0015BC50u; return; } if (c.pc != 0x003C68ACu) [[unlikely]] return; }
L_003C68AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68B8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 440u, depth + 1u); else { c.pc = 0x0015BB60u; return; } if (c.pc != 0x003C68B8u) [[unlikely]] return; }
L_003C68B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68C4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x003C68C4u) [[unlikely]] return; }
L_003C68C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68D0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 442u, depth + 1u); else { c.pc = 0x0015BB80u; return; } if (c.pc != 0x003C68D0u) [[unlikely]] return; }
L_003C68D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68DCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 441u, depth + 1u); else { c.pc = 0x0015BB70u; return; } if (c.pc != 0x003C68DCu) [[unlikely]] return; }
L_003C68DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68E4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 456u, depth + 1u); else { c.pc = 0x0015BDD0u; return; } if (c.pc != 0x003C68E4u) [[unlikely]] return; }
L_003C68E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68F0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 458u, depth + 1u); else { c.pc = 0x0015BE10u; return; } if (c.pc != 0x003C68F0u) [[unlikely]] return; }
L_003C68F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6900u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 451u, depth + 1u); else { c.pc = 0x0015BD10u; return; } if (c.pc != 0x003C6900u) [[unlikely]] return; }
L_003C6900:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C6858u | kUnwind; return; } goto L_003C6858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C691Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 221u, depth + 1u); else { c.pc = 0x00161E10u; return; } if (c.pc != 0x003C691Cu) [[unlikely]] return; }
L_003C691C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C6940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C6A08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C6970:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C69A0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6994u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C6994u) [[unlikely]] return; }
L_003C6994:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 3;
L_003C69A0:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C69A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C69E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C69D0u) [[unlikely]] return; }
L_003C69D0:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 4;
L_003C69E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C69A8u | kUnwind; return; } goto L_003C69A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 108u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C6970u | kUnwind; return; } goto L_003C6970; } }
    c.budget -= 1;
L_003C6A08:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003C6A24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003C6A1Cu) [[unlikely]] return; }
L_003C6A1C:
    st32((c.r[20].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_003C6A24:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C6A40:
    set32(c.r[2], ld32((c.r[28].w[0] - 30168u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C6A54; }
    st32((c.r[28].w[0] - 30168u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C6A54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30168u), 0u);  c.pc = t; return; }
L_003C6A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30168u)));  c.pc = t; return; }
L_003C6A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 25424u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_003C6AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 25424u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6AC0u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003C6AC0u) [[unlikely]] return; }
L_003C6AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 25424u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 30164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B0Cu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003C6B0Cu) [[unlikely]] return; }
L_003C6B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6B30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C6C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B80u); set32(c.r[4], c.r[19].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x003C6B80u) [[unlikely]] return; }
L_003C6B80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003C6C4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B94u); set32(c.r[4], c.r[19].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003C6B94u) [[unlikely]] return; }
L_003C6B94:
    c.f[21] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[20] = 0u;
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C6BD8; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C6BB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BC4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003C6BC4u) [[unlikely]] return; }
L_003C6BC4:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[21]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C6BB4u | kUnwind; return; } goto L_003C6BB4; } }
L_003C6BD8:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C6BECu) [[unlikely]] return; }
L_003C6BEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0] + 40u), c.r[22].w[0]);  if (t) { goto L_003C6C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C00u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003C6C00u) [[unlikely]] return; }
L_003C6C00:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C0Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x003C6C0Cu) [[unlikely]] return; }
L_003C6C0C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 339u, depth + 1u); else { c.pc = 0x0015AE90u; return; } if (c.pc != 0x003C6C1Cu) [[unlikely]] return; }
L_003C6C1C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_003C6C30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C2Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003C6C2Cu) [[unlikely]] return; }
L_003C6C2C:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_003C6C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C6C38u) [[unlikely]] return; }
L_003C6C38:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C48u); st32((c.r[2].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x003C6C48u) [[unlikely]] return; }
L_003C6C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003C6C4C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C6C80:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C6CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_003C6CBC; } }
L_003C6CA4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 4u));  goto L_003C6CC0; }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_003C6CBC:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_003C6CC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 4u);  if (t) { goto L_003C6CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_003C6CF8; } }
L_003C6CE0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 8u));  goto L_003C6CFC; }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_003C6CF8:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 1;
L_003C6CFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 8u);  if (t) { goto L_003C6D1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_003C6D34; } }
L_003C6D1C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 12u));  goto L_003C6D38; }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_003C6D34:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 1;
L_003C6D38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 12u);  if (t) { goto L_003C6D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_003C6D70; } }
L_003C6D58:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C6D70; } }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_003C6D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6D80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.f[23] = c.f[12];
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] <= 0; c.f[22] = c.f[13];  if (t) { goto L_003C6DD0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[2].w[0] + 132u));  if (t) { goto L_003C6DD4; } }
L_003C6DD0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C6DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DDCu);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003C6DDCu) [[unlikely]] return; }
L_003C6DDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.f[21] = c.f[0];  if (t) { goto L_003C6DF8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[2].w[0] + 134u));  if (t) { goto L_003C6DFC; } }
L_003C6DF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C6DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E04u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003C6E04u) [[unlikely]] return; }
L_003C6E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E0Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 74u, depth + 1u); else { c.pc = 0x001647D0u; return; } if (c.pc != 0x003C6E0Cu) [[unlikely]] return; }
L_003C6E0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));  goto L_003C6E28; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 5;
L_003C6E28:
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E38u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x003C6E38u) [[unlikely]] return; }
L_003C6E38:
    c.f[1] = fp::ee::div(c.fcr31, c.f[23], c.f[21]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[22], c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C6E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.f[20] = c.f[14];  if (t) { goto L_003C6EF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003C6ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[22];  if (t) { goto L_003C6F28; } }
L_003C6ECC:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C6EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[21];  if (t) { goto L_003C6F24; } }
L_003C6EE0:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C6F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[20];  if (t) { goto L_003C6F24; } }
L_003C6EF4:
    c.f[12] = fp::ee::sub(c.fcr31, c.f[22], c.f[21]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F00u); c.f[13] = fp::ee::sub(c.fcr31, c.f[20], c.f[21]);  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003C6F00u) [[unlikely]] return; }
L_003C6F00:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C6F14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_003C6F24; } }
L_003C6F14:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C6F24; } }
    c.f[22] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003C6F24:
    c.f[0] = c.f[22];
    c.budget -= 1;
L_003C6F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[14];
    c.f[21] = c.f[13];
    c.f[22] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F70u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x003C6F70u) [[unlikely]] return; }
L_003C6F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F84u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C6F84u) [[unlikely]] return; }
L_003C6F84:
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F94u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003C6F94u) [[unlikely]] return; }
L_003C6F94:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6FA0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x003C6FA0u) [[unlikely]] return; }
L_003C6FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6FB4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C6FB4u) [[unlikely]] return; }
L_003C6FB4:
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6FF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003C6FF4u) [[unlikely]] return; }
L_003C6FF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[3], c.r[3].w[0] + 5192u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C70F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5192u);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_003C708C:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C70B8; } }
L_003C7098:
    set32(c.r[20], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C70A8u) [[unlikely]] return; }
L_003C70A8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7098u | kUnwind; return; } goto L_003C7098; } }
    c.budget -= 1;
L_003C70B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C708Cu | kUnwind; return; } goto L_003C708C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003C70D8u) [[unlikely]] return; }
L_003C70D8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003C70F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C70F0u) [[unlikely]] return; }
L_003C70F0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C70F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C7120:
    set32(c.r[2], 0u + 5u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C7160; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_003C7144:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_003C7154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_003C7164; } }
L_003C7154:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7144u | kUnwind; return; } goto L_003C7144; }
    c.budget -= 1;
L_003C7160:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C7164:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C7170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C7258; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C71A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C71A0u) [[unlikely]] return; }
L_003C71A0:
    set32(c.r[3], 0u + 5u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003C71F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C71D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C71D0u) [[unlikely]] return; }
L_003C71D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003C7250; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C71E0u); st32((c.r[2].w[0]), c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C71E0u) [[unlikely]] return; }
L_003C71E0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { goto L_003C7250; } }
L_003C71F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7220; } }
L_003C7200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7208u); set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7208u) [[unlikely]] return; }
L_003C7208:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C725C; }
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7200u | kUnwind; return; } goto L_003C7200; } }
L_003C7220:
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7230u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7230u) [[unlikely]] return; }
L_003C7230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003C7250; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7240u); st32((c.r[2].w[0]), c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7240u) [[unlikely]] return; }
L_003C7240:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
L_003C7250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C725C; } }
L_003C7258:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C725C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C7280:
    set32(c.r[2], ld32((c.r[28].w[0] - 30160u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C7294; }
    st32((c.r[28].w[0] - 30160u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C7294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C72A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30160u), 0u);  c.pc = t; return; }
L_003C72B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30160u)));  c.pc = t; return; }
L_003C72C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003C72DCu) [[unlikely]] return; }
L_003C72DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5216u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003C73B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C731Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C731Cu) [[unlikely]] return; }
L_003C731C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003C73B8; } }
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C7330:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 100u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 116u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C734Cu); st32((c.r[2].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_00A9(c, 367u, depth + 1u); else { c.pc = 0x003C7A50u; return; } if (c.pc != 0x003C734Cu) [[unlikely]] return; }
L_003C734C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7330u | kUnwind; return; } goto L_003C7330; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003C73BC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C73B8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C73B8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C73B8; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_003C73CC; } }
L_003C73B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003C73BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003C73CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C73F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C745C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5216u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_003C7434; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7430u) [[unlikely]] return; }
L_003C7430:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_003C7434:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7444u); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C7444u) [[unlikely]] return; }
L_003C7444:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C7460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C745Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C745Cu) [[unlikely]] return; }
L_003C745C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C7460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C7480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C74A8u); set32(c.r[4], 0u + 228u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003C74A8u) [[unlikely]] return; }
L_003C74A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C74C8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C74C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x003C72C0u; return; } if (c.pc != 0x003C74C4u) [[unlikely]] return; }
L_003C74C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C74C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C74E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 605u);  c.pc = t; return; }
L_003C74F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
L_003C7510:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7520u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003C7520u) [[unlikely]] return; }
L_003C7520:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7510u | kUnwind; return; } goto L_003C7510; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C7550:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C79FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_003C79F4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75B0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003C75B0u) [[unlikely]] return; }
L_003C75B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75BCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x003C75BCu) [[unlikely]] return; }
L_003C75BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_003C7638; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75E0u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003C75E0u) [[unlikely]] return; }
L_003C75E0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003C75ECu) [[unlikely]] return; }
L_003C75EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75F8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C75F8u) [[unlikely]] return; }
L_003C75F8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7608u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003C7608u) [[unlikely]] return; }
L_003C7608:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7614u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003C7614u) [[unlikely]] return; }
L_003C7614:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7624u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003C7624u) [[unlikely]] return; }
L_003C7624:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7634u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003C7634u) [[unlikely]] return; }
L_003C7634:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C7638:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_003C7640:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 84u);  if (t) { goto L_003C7718; } }
L_003C7658:
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003C7670; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C7670:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C76B0; } }
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[20]);  if (t) { goto L_003C7718; } }
L_003C76B0:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C76F8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C76F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003C7718; } }
    c.budget -= 1;
L_003C76F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_003C7700; } }
L_003C76F8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_003C7700:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C770Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 367u, depth + 1u); else { c.pc = 0x003C7A50u; return; } if (c.pc != 0x003C770Cu) [[unlikely]] return; }
L_003C770C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7658u | kUnwind; return; } goto L_003C7658; } }
    c.budget -= 1;
L_003C7718:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7640u | kUnwind; return; } goto L_003C7640; } }
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 156u));
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7758u); st32((c.r[20].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x003C7758u) [[unlikely]] return; }
L_003C7758:
    c.f[3] = ld32((c.r[20].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[3] = ld32((c.r[20].w[0] + 68u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[20].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7798u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003C7798u) [[unlikely]] return; }
L_003C7798:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[17], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = 0u;
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003C78C8; } }
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[21]);
    c.budget -= 1;
L_003C77C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[20].w[0] + 72u));
    c.f[15] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C77F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C77F0u) [[unlikely]] return; }
L_003C77F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C7830; } }
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = c.f[20];
    c.f[15] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7830u); c.f[14] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C7830u) [[unlikely]] return; }
L_003C7830:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C7870; } }
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7870u); c.f[15] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C7870u) [[unlikely]] return; }
L_003C7870:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C78B0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[15] = ld32((c.r[20].w[0] + 76u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[14] = 0u;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C78ACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C78ACu) [[unlikely]] return; }
L_003C78AC:
    c.budget -= 1;
L_003C78B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[21]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C77C8u | kUnwind; return; } goto L_003C77C8; }
L_003C78C8:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.f[20] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C79E0; } }
L_003C78D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[14] = ld32((c.r[20].w[0] + 72u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[15] = 0u;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7900u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C7900u) [[unlikely]] return; }
L_003C7900:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C7940; } }
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = c.f[20];
    c.f[15] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7940u); c.f[14] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C7940u) [[unlikely]] return; }
L_003C7940:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C7980; } }
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7980u); c.f[15] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C7980u) [[unlikely]] return; }
L_003C7980:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C79C0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[13] = ld32((c.r[20].w[0] + 80u));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[15] = ld32((c.r[20].w[0] + 76u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[14] = 0u;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C79BCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A9(c, 366u, depth + 1u); else { c.pc = 0x003C7A30u; return; } if (c.pc != 0x003C79BCu) [[unlikely]] return; }
L_003C79BC:
    c.budget -= 1;
L_003C79C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C78D8u | kUnwind; return; } goto L_003C78D8; } }
    c.budget -= 1;
L_003C79E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C79ECu); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 154u, depth + 1u); else { c.pc = 0x00161600u; return; } if (c.pc != 0x003C79ECu) [[unlikely]] return; }
L_003C79EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003C7A00; } }
L_003C79F4:
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003C79FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003C7A00:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003C7A30:
    st32((c.r[5].w[0]), c.f[12]);
    st32((c.r[5].w[0] + 4u), c.f[13]);
    st32((c.r[5].w[0] + 8u), c.f[14]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[15]);  c.pc = t; return; }
L_003C7A50:
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[7].w[0] + 104u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[7].w[0] + 108u), c.f[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 104u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[7].w[0] + 88u), c.f[0]);
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0] + 100u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 25;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[7].w[0] + 84u);  if (t) { goto L_003C7AE4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 4u));  goto L_003C7ADC; }
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_003C7B00; } }
L_003C7ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_003C7B00; } }
L_003C7AE4:
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_003C7B00:
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[4].d[0] = c.r[4].d[0] | 46871ull;
    c.f[0] = c.r[4].w[0];
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[3].w[0] + 8u));  goto L_003C7B28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_003C7B38; } }
L_003C7B28:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_003C7B38:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.f[0]);  c.pc = t; return; }
L_003C7B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003C7B64u) [[unlikely]] return; }
L_003C7B64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 5280u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C7C20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7BFCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 374u, depth + 1u); else { c.pc = 0x003C7C40u; return; } if (c.pc != 0x003C7BFCu) [[unlikely]] return; }
L_003C7BFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7C08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C7C08u) [[unlikely]] return; }
L_003C7C08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C7C24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7C20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C7C20u) [[unlikely]] return; }
L_003C7C20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C7C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C7C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_003C7C7C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_003C7C78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7C74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7C74u) [[unlikely]] return; }
L_003C7C74:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_003C7C78:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003C7C7C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  goto L_003C7CA4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), 0u);  goto L_003C7CA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7C9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7C9Cu) [[unlikely]] return; }
L_003C7C9C:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_003C7CA0:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_003C7CA4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_003C7CC0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7CB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7CB8u) [[unlikely]] return; }
L_003C7CB8:
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 2;
L_003C7CC0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  goto L_003C7CDC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7CD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7CD4u) [[unlikely]] return; }
L_003C7CD4:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_003C7CDC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_003C7CF8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7CF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7CF0u) [[unlikely]] return; }
L_003C7CF0:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_003C7CF8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  goto L_003C7D14; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7D0Cu) [[unlikely]] return; }
L_003C7D0C:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_003C7D14:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  goto L_003C7D30; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7D28u) [[unlikely]] return; }
L_003C7D28:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_003C7D30:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_003C7D4C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7D44u) [[unlikely]] return; }
L_003C7D44:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_003C7D4C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  goto L_003C7D68; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7D60u) [[unlikely]] return; }
L_003C7D60:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 2;
L_003C7D68:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C7D84; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C7D7Cu) [[unlikely]] return; }
L_003C7D7C:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003C7D84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7DB8u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003C7DB8u) [[unlikely]] return; }
L_003C7DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C7DD8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7DD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 368u, depth + 1u); else { c.pc = 0x003C7B50u; return; } if (c.pc != 0x003C7DD4u) [[unlikely]] return; }
L_003C7DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C7DD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C7DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 120u);  c.pc = t; return; }
L_003C7E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[2] = ld32((c.r[2].w[0] + 108u));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C7E58; } }
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[20] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E50u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C7E50u) [[unlikely]] return; }
L_003C7E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003C7E84; } }
L_003C7E58:
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[20] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E80u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003C7E80u) [[unlikely]] return; }
L_003C7E80:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_003C7E84:
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C7ED0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_003C7EA8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[16].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7EA8u | kUnwind; return; } goto L_003C7EA8; }
L_003C7ED0:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F1Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7F1Cu) [[unlikely]] return; }
L_003C7F1C:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F34u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7F34u) [[unlikely]] return; }
L_003C7F34:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F5Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7F5Cu) [[unlikely]] return; }
L_003C7F5C:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F84u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7F84u) [[unlikely]] return; }
L_003C7F84:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F9Cu); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7F9Cu) [[unlikely]] return; }
L_003C7F9C:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7FB4u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7FB4u) [[unlikely]] return; }
L_003C7FB4:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7FCCu); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7FCCu) [[unlikely]] return; }
L_003C7FCC:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7FE4u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C7FE4u) [[unlikely]] return; }
L_003C7FE4:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  [[clang::musttail]] return unit_00AA(c, 10u, depth); }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AA(c, 9u, depth); } }
    [[clang::musttail]] return unit_00AA(c, 1u, depth);
}

}
