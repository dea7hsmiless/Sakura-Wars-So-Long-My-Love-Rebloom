#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145,
    0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0,
};

void unit_003E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00218000;
    case 2u: goto L_00218020;
    case 3u: goto L_0021808C;
    case 4u: goto L_00218094;
    case 5u: goto L_002180BC;
    case 6u: goto L_00218114;
    case 7u: goto L_00218124;
    case 8u: goto L_00218134;
    case 9u: goto L_00218144;
    case 10u: goto L_00218168;
    case 11u: goto L_0021818C;
    case 12u: goto L_002181DC;
    case 13u: goto L_002181F0;
    case 14u: goto L_00218204;
    case 15u: goto L_00218224;
    case 16u: goto L_0021822C;
    case 17u: goto L_00218234;
    case 18u: goto L_0021825C;
    case 19u: goto L_002182B4;
    case 20u: goto L_002182C4;
    case 21u: goto L_002182E0;
    case 22u: goto L_0021834C;
    case 23u: goto L_00218354;
    case 24u: goto L_0021837C;
    case 25u: goto L_002183D4;
    case 26u: goto L_002183E4;
    case 27u: goto L_002183F4;
    case 28u: goto L_00218404;
    case 29u: goto L_00218428;
    case 30u: goto L_0021844C;
    case 31u: goto L_0021849C;
    case 32u: goto L_002184B0;
    case 33u: goto L_002184BC;
    case 34u: goto L_002184DC;
    case 35u: goto L_002184E4;
    case 36u: goto L_002184EC;
    case 37u: goto L_00218514;
    case 38u: goto L_0021856C;
    case 39u: goto L_0021857C;
    case 40u: goto L_002185A0;
    case 41u: goto L_00218614;
    case 42u: goto L_0021863C;
    case 43u: goto L_00218694;
    case 44u: goto L_002186A4;
    case 45u: goto L_002186B4;
    case 46u: goto L_002186C8;
    case 47u: goto L_002186D4;
    case 48u: goto L_002186EC;
    case 49u: goto L_00218720;
    case 50u: goto L_0021874C;
    case 51u: goto L_00218770;
    case 52u: goto L_002187C0;
    case 53u: goto L_002187D8;
    case 54u: goto L_00218808;
    case 55u: goto L_00218814;
    case 56u: goto L_00218830;
    case 57u: goto L_0021886C;
    case 58u: goto L_00218898;
    case 59u: goto L_002188BC;
    case 60u: goto L_0021890C;
    case 61u: goto L_00218914;
    case 62u: goto L_0021894C;
    case 63u: goto L_00218964;
    case 64u: goto L_00218984;
    case 65u: goto L_002189A0;
    case 66u: goto L_00218A10;
    case 67u: goto L_00218A48;
    case 68u: goto L_00218A88;
    case 69u: goto L_00218AA0;
    case 70u: goto L_00218ACC;
    case 71u: goto L_00218B0C;
    case 72u: goto L_00218B20;
    case 73u: goto L_00218B50;
    case 74u: goto L_00218BB4;
    case 75u: goto L_00218BCC;
    case 76u: goto L_00218BDC;
    case 77u: goto L_00218BF0;
    case 78u: goto L_00218C08;
    case 79u: goto L_00218C1C;
    case 80u: goto L_00218C30;
    case 81u: goto L_00218C40;
    case 82u: goto L_00218C58;
    case 83u: goto L_00218C70;
    case 84u: goto L_00218C88;
    case 85u: goto L_00218CA0;
    case 86u: goto L_00218CB0;
    case 87u: goto L_00218CE0;
    case 88u: goto L_00218CF8;
    case 89u: goto L_00218D10;
    case 90u: goto L_00218D20;
    case 91u: goto L_00218D74;
    case 92u: goto L_00218D80;
    case 93u: goto L_00218D98;
    case 94u: goto L_00218DB0;
    case 95u: goto L_00218DE0;
    case 96u: goto L_00218E34;
    case 97u: goto L_00218E40;
    case 98u: goto L_00218E58;
    case 99u: goto L_00218E70;
    case 100u: goto L_00218EA0;
    case 101u: goto L_00218EF4;
    case 102u: goto L_00218F00;
    case 103u: goto L_00218F18;
    case 104u: goto L_00218F30;
    case 105u: goto L_00218F60;
    case 106u: goto L_00218FB4;
    case 107u: goto L_00218FC0;
    case 108u: goto L_00218FD8;
    case 109u: goto L_00218FF0;
    case 110u: goto L_00219020;
    case 111u: goto L_00219040;
    case 112u: goto L_00219050;
    case 113u: goto L_00219058;
    case 114u: goto L_0021907C;
    case 115u: goto L_00219098;
    case 116u: goto L_002190B0;
    case 117u: goto L_002190D0;
    case 118u: goto L_002190FC;
    case 119u: goto L_00219120;
    case 120u: goto L_00219130;
    case 121u: goto L_00219148;
    case 122u: goto L_00219160;
    case 123u: goto L_00219174;
    case 124u: goto L_002191A0;
    case 125u: goto L_002191D0;
    case 126u: goto L_002191F0;
    case 127u: goto L_00219200;
    case 128u: goto L_0021920C;
    case 129u: goto L_00219224;
    case 130u: goto L_00219238;
    case 131u: goto L_00219248;
    case 132u: goto L_002192A4;
    case 133u: goto L_002192BC;
    case 134u: goto L_00219300;
    case 135u: goto L_00219310;
    case 136u: goto L_00219340;
    case 137u: goto L_00219368;
    case 138u: goto L_00219380;
    case 139u: goto L_002193E4;
    case 140u: goto L_002193FC;
    case 141u: goto L_00219480;
    case 142u: goto L_0021949C;
    case 143u: goto L_002194E0;
    case 144u: goto L_002194F0;
    case 145u: goto L_002194FC;
    case 146u: goto L_00219508;
    case 147u: goto L_00219510;
    case 148u: goto L_00219550;
    case 149u: goto L_00219560;
    case 150u: goto L_0021956C;
    case 151u: goto L_00219578;
    case 152u: goto L_00219594;
    case 153u: goto L_002195A4;
    case 154u: goto L_002195B0;
    case 155u: goto L_002195C0;
    case 156u: goto L_002195D8;
    case 157u: goto L_00219600;
    case 158u: goto L_00219630;
    case 159u: goto L_00219654;
    case 160u: goto L_0021966C;
    case 161u: goto L_00219674;
    case 162u: goto L_00219680;
    case 163u: goto L_00219690;
    case 164u: goto L_002196FC;
    case 165u: goto L_00219708;
    case 166u: goto L_00219714;
    case 167u: goto L_00219720;
    case 168u: goto L_00219744;
    case 169u: goto L_00219760;
    case 170u: goto L_00219790;
    case 171u: goto L_002197F0;
    case 172u: goto L_0021981C;
    case 173u: goto L_00219840;
    case 174u: goto L_0021987C;
    case 175u: goto L_002198A0;
    case 176u: goto L_002198E0;
    case 177u: goto L_00219920;
    case 178u: goto L_0021994C;
    case 179u: goto L_00219970;
    case 180u: goto L_002199AC;
    case 181u: goto L_002199D0;
    case 182u: goto L_00219A10;
    case 183u: goto L_00219A20;
    case 184u: goto L_00219A4C;
    case 185u: goto L_00219A70;
    case 186u: goto L_00219AB0;
    case 187u: goto L_00219AC0;
    case 188u: goto L_00219B34;
    case 189u: goto L_00219B54;
    case 190u: goto L_00219B74;
    case 191u: goto L_00219B7C;
    case 192u: goto L_00219B84;
    case 193u: goto L_00219BA8;
    case 194u: goto L_00219BF8;
    case 195u: goto L_00219C18;
    case 196u: goto L_00219C20;
    case 197u: goto L_00219C28;
    case 198u: goto L_00219C4C;
    case 199u: goto L_00219C90;
    case 200u: goto L_00219CB0;
    case 201u: goto L_00219CF0;
    case 202u: goto L_00219D30;
    case 203u: goto L_00219D48;
    case 204u: goto L_00219D84;
    case 205u: goto L_00219D98;
    case 206u: goto L_00219DB0;
    case 207u: goto L_00219DEC;
    case 208u: goto L_00219E00;
    case 209u: goto L_00219E38;
    case 210u: goto L_00219E60;
    case 211u: goto L_00219E70;
    case 212u: goto L_00219EB0;
    case 213u: goto L_00219F38;
    case 214u: goto L_00219F54;
    case 215u: goto L_00219F60;
    case 216u: goto L_00219F7C;
    case 217u: goto L_00219F88;
    case 218u: goto L_00219FA4;
    case 219u: goto L_00219FB0;
    case 220u: goto L_00219FCC;
    case 221u: goto L_0021A000;
    case 222u: goto L_0021A03C;
    case 223u: goto L_0021A050;
    case 224u: goto L_0021A064;
    case 225u: goto L_0021A078;
    case 226u: goto L_0021A09C;
    case 227u: goto L_0021A0D4;
    case 228u: goto L_0021A0F0;
    case 229u: goto L_0021A110;
    case 230u: goto L_0021A120;
    case 231u: goto L_0021A130;
    case 232u: goto L_0021A154;
    case 233u: goto L_0021A164;
    case 234u: goto L_0021A198;
    case 235u: goto L_0021A1B0;
    case 236u: goto L_0021A1D4;
    case 237u: goto L_0021A1E4;
    case 238u: goto L_0021A218;
    case 239u: goto L_0021A230;
    case 240u: goto L_0021A254;
    case 241u: goto L_0021A264;
    case 242u: goto L_0021A298;
    case 243u: goto L_0021A2B0;
    case 244u: goto L_0021A2FC;
    case 245u: goto L_0021A31C;
    case 246u: goto L_0021A344;
    case 247u: goto L_0021A358;
    case 248u: goto L_0021A364;
    case 249u: goto L_0021A380;
    case 250u: goto L_0021A3CC;
    case 251u: goto L_0021A3EC;
    case 252u: goto L_0021A414;
    case 253u: goto L_0021A428;
    case 254u: goto L_0021A434;
    case 255u: goto L_0021A450;
    case 256u: goto L_0021A488;
    case 257u: goto L_0021A4A4;
    case 258u: goto L_0021A4CC;
    case 259u: goto L_0021A4E0;
    case 260u: goto L_0021A4EC;
    case 261u: goto L_0021A510;
    case 262u: goto L_0021A518;
    case 263u: goto L_0021A540;
    case 264u: goto L_0021A564;
    case 265u: goto L_0021A580;
    case 266u: goto L_0021A590;
    case 267u: goto L_0021A5B0;
    case 268u: goto L_0021A5E8;
    case 269u: goto L_0021A604;
    case 270u: goto L_0021A614;
    case 271u: goto L_0021A630;
    case 272u: goto L_0021A668;
    case 273u: goto L_0021A684;
    case 274u: goto L_0021A694;
    case 275u: goto L_0021A6B0;
    case 276u: goto L_0021A6E4;
    case 277u: goto L_0021A6F4;
    case 278u: goto L_0021A704;
    case 279u: goto L_0021A720;
    case 280u: goto L_0021A750;
    case 281u: goto L_0021A794;
    case 282u: goto L_0021A7B0;
    case 283u: goto L_0021A7C0;
    case 284u: goto L_0021A7E0;
    case 285u: goto L_0021A834;
    case 286u: goto L_0021A850;
    case 287u: goto L_0021A860;
    case 288u: goto L_0021A880;
    case 289u: goto L_0021A8D4;
    case 290u: goto L_0021A8F0;
    case 291u: goto L_0021A900;
    case 292u: goto L_0021A920;
    case 293u: goto L_0021A9B0;
    case 294u: goto L_0021ABD0;
    case 295u: goto L_0021AC50;
    case 296u: goto L_0021AC70;
    case 297u: goto L_0021AC78;
    case 298u: goto L_0021AC80;
    case 299u: goto L_0021ACA4;
    case 300u: goto L_0021ACF4;
    case 301u: goto L_0021AD14;
    case 302u: goto L_0021AD1C;
    case 303u: goto L_0021AD24;
    case 304u: goto L_0021AD48;
    case 305u: goto L_0021ADC0;
    case 306u: goto L_0021AE00;
    case 307u: goto L_0021AE18;
    case 308u: goto L_0021AE54;
    case 309u: goto L_0021AE68;
    case 310u: goto L_0021AE80;
    case 311u: goto L_0021AEBC;
    case 312u: goto L_0021AEF4;
    case 313u: goto L_0021AF10;
    case 314u: goto L_0021AF20;
    case 315u: goto L_0021AF70;
    case 316u: goto L_0021AFC0;
    case 317u: goto L_0021B018;
    case 318u: goto L_0021B030;
    case 319u: goto L_0021B0A4;
    case 320u: goto L_0021B0C4;
    case 321u: goto L_0021B0CC;
    case 322u: goto L_0021B0D4;
    case 323u: goto L_0021B0F8;
    case 324u: goto L_0021B170;
    case 325u: goto L_0021B1B0;
    case 326u: goto L_0021B1C8;
    case 327u: goto L_0021B204;
    case 328u: goto L_0021B23C;
    case 329u: goto L_0021B260;
    case 330u: goto L_0021B2B0;
    case 331u: goto L_0021B308;
    case 332u: goto L_0021B320;
    case 333u: goto L_0021B36C;
    case 334u: goto L_0021B374;
    case 335u: goto L_0021B3C4;
    case 336u: goto L_0021B3DC;
    case 337u: goto L_0021B410;
    case 338u: goto L_0021B440;
    case 339u: goto L_0021B464;
    case 340u: goto L_0021B470;
    case 341u: goto L_0021B478;
    case 342u: goto L_0021B498;
    case 343u: goto L_0021B4A4;
    case 344u: goto L_0021B4DC;
    case 345u: goto L_0021B500;
    case 346u: goto L_0021B56C;
    case 347u: goto L_0021B57C;
    case 348u: goto L_0021B5A0;
    case 349u: goto L_0021B5AC;
    case 350u: goto L_0021B5D8;
    case 351u: goto L_0021B608;
    case 352u: goto L_0021B630;
    case 353u: goto L_0021B644;
    case 354u: goto L_0021B684;
    case 355u: goto L_0021B730;
    case 356u: goto L_0021B798;
    case 357u: goto L_0021B7B0;
    case 358u: goto L_0021B7C8;
    case 359u: goto L_0021B7D4;
    case 360u: goto L_0021B7E8;
    case 361u: goto L_0021B81C;
    case 362u: goto L_0021B834;
    case 363u: goto L_0021B880;
    case 364u: goto L_0021B8C0;
    case 365u: goto L_0021B908;
    case 366u: goto L_0021B950;
    case 367u: goto L_0021B974;
    case 368u: goto L_0021B9A0;
    case 369u: goto L_0021B9D0;
    case 370u: goto L_0021B9F0;
    case 371u: goto L_0021BA18;
    case 372u: goto L_0021BA60;
    case 373u: goto L_0021BAB8;
    case 374u: goto L_0021BAD4;
    case 375u: goto L_0021BB10;
    case 376u: goto L_0021BB20;
    case 377u: goto L_0021BB30;
    case 378u: goto L_0021BB70;
    case 379u: goto L_0021BBAC;
    case 380u: goto L_0021BBD8;
    case 381u: goto L_0021BBF0;
    case 382u: goto L_0021BC10;
    case 383u: goto L_0021BC84;
    case 384u: goto L_0021BC94;
    case 385u: goto L_0021BCB8;
    case 386u: goto L_0021BD20;
    case 387u: goto L_0021BD34;
    case 388u: goto L_0021BD54;
    case 389u: goto L_0021BDC8;
    case 390u: goto L_0021BE58;
    case 391u: goto L_0021BE5C;
    case 392u: goto L_0021BEC0;
    case 393u: goto L_0021BED8;
    case 394u: goto L_0021BF18;
    case 395u: goto L_0021BF44;
    case 396u: goto L_0021BF80;
    case 397u: goto L_0021BFA0;
    case 398u: goto L_0021BFB4;
    case 399u: goto L_0021BFE8;
    default: bad_entry(c, 0x00218000u); return;
    }
L_00218000:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00218020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 101u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00218284; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 100u);  goto L_00218210; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002181AC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 80u);  goto L_00218160; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002180E8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00218084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002182C8; } }
L_00218084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021808Cu);  if (depth < kMaxDepth) unit_003D(c, 220u, depth + 1u); else { c.pc = 0x00216030u; return; } if (c.pc != 0x0021808Cu) [[unlikely]] return; }
L_0021808C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218094u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218094u) [[unlikely]] return; }
L_00218094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002180D4; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002180BCu); set32(c.r[6], c.r[6].w[0] + 30232u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x002180BCu) [[unlikely]] return; }
L_002180BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 17792u);
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_002180D4:
    st32((c.r[16].w[0] + 76u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
L_002180E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002182C4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0021811C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00218114u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00218114u) [[unlikely]] return; }
L_00218114:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0021811C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218124u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x00218124u) [[unlikely]] return; }
L_00218124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021820C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00218134u) [[unlikely]] return; }
L_00218134:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_00218154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00218144u) [[unlikely]] return; }
L_00218144:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021820C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00218154:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
L_00218160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218168u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218168u) [[unlikely]] return; }
L_00218168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00218198; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021818Cu); set32(c.r[6], c.r[6].w[0] + 30248u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x0021818Cu) [[unlikely]] return; }
L_0021818C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 18032u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
L_00218198:
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
L_002181AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002182C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_002181E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002181DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002181DCu) [[unlikely]] return; }
L_002181DC:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_002181E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0021820C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002181F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 72u, depth + 1u); else { c.pc = 0x00218B20u; return; } if (c.pc != 0x002181F0u) [[unlikely]] return; }
L_002181F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218204u); st32((c.r[2].w[0] + 44u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x00218204u) [[unlikely]] return; }
L_00218204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002182C4; } }
L_0021820C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 1;
L_00218210:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218224u); set32(c.r[5], c.r[5].w[0] + 30586u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00218224u) [[unlikely]] return; }
L_00218224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021822Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 72u, depth + 1u); else { c.pc = 0x00218B20u; return; } if (c.pc != 0x0021822Cu) [[unlikely]] return; }
L_0021822C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218234u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218234u) [[unlikely]] return; }
L_00218234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00218274; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021825Cu); set32(c.r[6], c.r[6].w[0] + 30232u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x0021825Cu) [[unlikely]] return; }
L_0021825C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 17792u);
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_00218274:
    st32((c.r[16].w[0] + 76u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 4;
L_00218284:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002182C4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002182BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002182B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002182B4u) [[unlikely]] return; }
L_002182B4:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002182BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002182C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x002182C4u) [[unlikely]] return; }
L_002182C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002182C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002182E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 101u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021853C; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 100u);  goto L_002184C8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0021846C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 80u);  goto L_00218420; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002183A8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00218344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00218580; } }
L_00218344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021834Cu);  if (depth < kMaxDepth) unit_003D(c, 220u, depth + 1u); else { c.pc = 0x00216030u; return; } if (c.pc != 0x0021834Cu) [[unlikely]] return; }
L_0021834C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218354u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218354u) [[unlikely]] return; }
L_00218354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00218394; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021837Cu); set32(c.r[6], c.r[6].w[0] + 30232u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x0021837Cu) [[unlikely]] return; }
L_0021837C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 17792u);
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_00218394:
    st32((c.r[16].w[0] + 76u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
L_002183A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021857C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002183DC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002183D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002183D4u) [[unlikely]] return; }
L_002183D4:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002183DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002183E4u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x002183E4u) [[unlikely]] return; }
L_002183E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002184C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002183F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x002183F4u) [[unlikely]] return; }
L_002183F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_00218414; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218404u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00218404u) [[unlikely]] return; }
L_00218404:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002184C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00218414:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
L_00218420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218428u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218428u) [[unlikely]] return; }
L_00218428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00218458; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021844Cu); set32(c.r[6], c.r[6].w[0] + 30216u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x0021844Cu) [[unlikely]] return; }
L_0021844C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 17952u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
L_00218458:
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
L_0021846C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021857C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_002184A0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021849Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021849Cu) [[unlikely]] return; }
L_0021849C:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_002184A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002184C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002184B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 72u, depth + 1u); else { c.pc = 0x00218B20u; return; } if (c.pc != 0x002184B0u) [[unlikely]] return; }
L_002184B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002184BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x002184BCu) [[unlikely]] return; }
L_002184BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021857C; } }
L_002184C4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 1;
L_002184C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002184DCu); set32(c.r[5], c.r[5].w[0] + 30609u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x002184DCu) [[unlikely]] return; }
L_002184DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002184E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 72u, depth + 1u); else { c.pc = 0x00218B20u; return; } if (c.pc != 0x002184E4u) [[unlikely]] return; }
L_002184E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002184ECu); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002184ECu) [[unlikely]] return; }
L_002184EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021852C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218514u); set32(c.r[6], c.r[6].w[0] + 30232u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x00218514u) [[unlikely]] return; }
L_00218514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 17792u);
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_0021852C:
    st32((c.r[16].w[0] + 76u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 4;
L_0021853C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021857C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00218574; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021856Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021856Cu) [[unlikely]] return; }
L_0021856C:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00218574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021857Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x0021857Cu) [[unlikely]] return; }
L_0021857C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00218580:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002185A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0021891C; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_002187F4; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_00218790; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 5u);  goto L_002186E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_00218668; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 100u);  goto L_0021860C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00218988; } }
L_0021860C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218614u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218614u) [[unlikely]] return; }
L_00218614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00218654; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021863Cu); set32(c.r[6], c.r[6].w[0] + 30232u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x0021863Cu) [[unlikely]] return; }
L_0021863C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 17792u);
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_00218654:
    st32((c.r[18].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 5;
L_00218668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00218984; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0021869C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00218694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00218694u) [[unlikely]] return; }
L_00218694:
    st32((c.r[18].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0021869C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002186A4u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x002186A4u) [[unlikely]] return; }
L_002186A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002186C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002186B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x002186B4u) [[unlikely]] return; }
L_002186B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002186DC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002186C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002186C8u);  if (depth < kMaxDepth) unit_003E(c, 72u, depth + 1u); else { c.pc = 0x00218B20u; return; } if (c.pc != 0x002186C8u) [[unlikely]] return; }
L_002186C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002186D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x002186D4u) [[unlikely]] return; }
L_002186D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00218984; } }
L_002186DC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002186E0:
    set32(c.r[4], 0u + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002186ECu); st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002186ECu) [[unlikely]] return; }
L_002186EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021877C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1104u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_00218704; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00218704:
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218720u); set32(c.r[6], c.r[6].w[0] + 30312u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x00218720u) [[unlikely]] return; }
L_00218720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 18352u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0021873C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0021873C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00218774; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021874Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0021874Cu) [[unlikely]] return; }
L_0021874C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021875C; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00218764; }
L_0021875C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00218774; } }
L_00218764:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218770u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00218770u) [[unlikely]] return; }
L_00218770:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00218774:
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 2;
L_0021877C:
    st32((c.r[18].w[0] + 76u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 5;
L_00218790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00218984; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_002187C4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002187C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002187C0u) [[unlikely]] return; }
L_002187C0:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_002187C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002187F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002187D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x002187D8u) [[unlikely]] return; }
L_002187D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00218984; } }
L_002187F0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_002187F4:
    set32(c.r[4], c.r[18].w[0] + 80u);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218808u); set32(c.r[6], 0u + 964u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00218808u) [[unlikely]] return; }
L_00218808:
    set32(c.r[4], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218814u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218814u) [[unlikely]] return; }
L_00218814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002188DC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[18].w[0] + 1104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218830u); set32(c.r[6], c.r[6].w[0] + 30634u);  if (depth < kMaxDepth) unit_0022(c, 2u, depth + 1u); else { c.pc = 0x001A8010u; return; } if (c.pc != 0x00218830u) [[unlikely]] return; }
L_00218830:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 92u);  if (t) { goto L_0021884C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 12u);  if (t) { goto L_00218850; } }
L_0021884C:
    set32(c.r[19], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00218850:
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021886Cu); set32(c.r[6], c.r[6].w[0] + 30200u);  if (depth < kMaxDepth) unit_003D(c, 107u, depth + 1u); else { c.pc = 0x00214EA0u; return; } if (c.pc != 0x0021886Cu) [[unlikely]] return; }
L_0021886C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 17712u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00218888; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00218888:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002188C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218898u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00218898u) [[unlikely]] return; }
L_00218898:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002188A8; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_002188B0; }
L_002188A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002188C0; } }
L_002188B0:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002188BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002188BCu) [[unlikely]] return; }
L_002188BC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002188C0:
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] + 80u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], 0u + 964u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 7;
L_002188DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 76u), c.r[16].w[0]);  if (t) { goto L_0021890C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  goto L_00218910; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0021890C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021890Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0021890Cu) [[unlikely]] return; }
L_0021890C:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_00218910:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00218914:
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 2;
L_0021891C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00218984; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_00218950; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021894Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021894Cu) [[unlikely]] return; }
L_0021894C:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_00218950:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0021897C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218964u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x00218964u) [[unlikely]] return; }
L_00218964:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00218984; } }
L_0021897C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218984u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 73u, depth + 1u); else { c.pc = 0x00218B50u; return; } if (c.pc != 0x00218984u) [[unlikely]] return; }
L_00218984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00218988:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002189A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002189BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00218A00; } }
L_002189BC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 4u)));  goto L_002189CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00218A00; } }
L_002189CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 13;
L_00218A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00218A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218A48u); set32(c.r[5], c.r[5].w[0] + 30556u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00218A48u) [[unlikely]] return; }
L_00218A48:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_00218A64; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00218A64:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00218A8C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00218A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218A88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00218A88u) [[unlikely]] return; }
L_00218A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00218A8C:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218ACCu); set32(c.r[5], c.r[5].w[0] + 30385u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00218ACCu) [[unlikely]] return; }
L_00218ACC:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_00218AE8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00218AE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00218B10; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00218B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00218B0Cu) [[unlikely]] return; }
L_00218B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00218B10:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218B20:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[3].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_00218B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00218B88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00218B98; } }
L_00218B88:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00218B98:
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1060u)));  goto L_00218BBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218BB4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00218BB4u) [[unlikely]] return; }
L_00218BB4:
    st32((c.r[16].w[0] + 1100u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1060u)));
    c.budget -= 2;
L_00218BBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00218BD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218BCCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00218BCCu) [[unlikely]] return; }
L_00218BCC:
    st32((c.r[16].w[0] + 1060u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00218BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218BDCu);  if (depth < kMaxDepth) unit_003D(c, 222u, depth + 1u); else { c.pc = 0x00216070u; return; } if (c.pc != 0x00218BDCu) [[unlikely]] return; }
L_00218BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00218BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218C08u); set32(c.r[4], 0u + 1108u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00218C08u) [[unlikely]] return; }
L_00218C08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00218C20; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218C1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 195u, depth + 1u); else { c.pc = 0x00215CF0u; return; } if (c.pc != 0x00218C1Cu) [[unlikely]] return; }
L_00218C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00218C20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00218C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30464u)));  c.pc = t; return; }
L_00218C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00218C88; } }
    goto L_00218C5C;
L_00218C58:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00218C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218C70u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 111u, depth + 1u); else { c.pc = 0x00214F80u; return; } if (c.pc != 0x00218C70u) [[unlikely]] return; }
L_00218C70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00218C8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218C88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00218C88u) [[unlikely]] return; }
L_00218C88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00218C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218CA0:
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001328A8u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 262u, depth); }
L_00218CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00218CF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218CE0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 111u, depth + 1u); else { c.pc = 0x00214F80u; return; } if (c.pc != 0x00218CE0u) [[unlikely]] return; }
L_00218CE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00218CFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218CF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00218CF8u) [[unlikely]] return; }
L_00218CF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00218CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218D10:
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001322D0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 228u, depth); }
L_00218D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00218D98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 18112u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00218D74; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00218D78; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00218D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218D74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00218D74u) [[unlikely]] return; }
L_00218D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218D80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 111u, depth + 1u); else { c.pc = 0x00214F80u; return; } if (c.pc != 0x00218D80u) [[unlikely]] return; }
L_00218D80:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00218D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218D98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00218D98u) [[unlikely]] return; }
L_00218D98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218DB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00218DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_00218DC8; } }
L_00218DC4:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00218DC8:
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 6;
    { set32(c.r[4], ld32((c.r[3].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00131FB0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 204u, depth); }
L_00218DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00218E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 18192u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00218E34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00218E38; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00218E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00218E34u) [[unlikely]] return; }
L_00218E34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218E40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 111u, depth + 1u); else { c.pc = 0x00214F80u; return; } if (c.pc != 0x00218E40u) [[unlikely]] return; }
L_00218E40:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00218E5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00218E58u) [[unlikely]] return; }
L_00218E58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218E70:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00218E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_00218E88; } }
L_00218E84:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00218E88:
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[3].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001323A0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 234u, depth); }
L_00218EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00218F18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 18272u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00218EF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00218EF8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00218EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218EF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00218EF4u) [[unlikely]] return; }
L_00218EF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218F00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 111u, depth + 1u); else { c.pc = 0x00214F80u; return; } if (c.pc != 0x00218F00u) [[unlikely]] return; }
L_00218F00:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00218F1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218F18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00218F18u) [[unlikely]] return; }
L_00218F18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218F30:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00218F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_00218F48; } }
L_00218F44:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00218F48:
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[3].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00131788u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 157u, depth); }
L_00218F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00218FD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 18352u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00218FB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00218FB8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00218FB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218FB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00218FB4u) [[unlikely]] return; }
L_00218FB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218FC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 111u, depth + 1u); else { c.pc = 0x00214F80u; return; } if (c.pc != 0x00218FC0u) [[unlikely]] return; }
L_00218FC0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00218FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00218FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00218FD8u) [[unlikely]] return; }
L_00218FD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00218FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00218FF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00219004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_00219008; } }
L_00219004:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00219008:
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { set32(c.r[4], ld32((c.r[3].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132190u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 221u, depth); }
L_00219020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219040u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00219040u) [[unlikely]] return; }
L_00219040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[16].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + 18496u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_00219050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x00219058u) [[unlikely]] return; }
L_00219058:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[16].w[0] + 184u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00219050u | kUnwind; return; } goto L_00219050; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021907Cu); st32((c.r[16].w[0] + 52u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0023(c, 139u, depth + 1u); else { c.pc = 0x001ACFC0u; return; } if (c.pc != 0x0021907Cu) [[unlikely]] return; }
L_0021907C:
    st32((c.r[16].w[0] + 248u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[4], 0u + 160u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219098u); st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00219098u) [[unlikely]] return; }
L_00219098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  goto L_002190B4; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002190B0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x002190B0u) [[unlikely]] return; }
L_002190B0:
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 1;
L_002190B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002190D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00219148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002190FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 135u, depth + 1u); else { c.pc = 0x00219310u; return; } if (c.pc != 0x002190FCu) [[unlikely]] return; }
L_002190FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00219128; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 264u), 0u);  goto L_00219124; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00219120u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00219120u) [[unlikely]] return; }
L_00219120:
    st32((c.r[17].w[0] + 264u), 0u);
    c.budget -= 1;
L_00219124:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00219128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00219130u) [[unlikely]] return; }
L_00219130:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021914C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219148u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00219148u) [[unlikely]] return; }
L_00219148:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021914C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00219160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 135u, depth + 1u); else { c.pc = 0x00219310u; return; } if (c.pc != 0x00219174u) [[unlikely]] return; }
L_00219174:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002191A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 248u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002191D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002191D0u); set32(c.r[5], c.r[5].w[0] + 30656u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002191D0u) [[unlikely]] return; }
L_002191D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002192E8; } }
L_002191D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30460u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 72u);  goto L_002191F8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002191F0u); set32(c.r[5], c.r[5].w[0] + 30667u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002191F0u) [[unlikely]] return; }
L_002191F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002192E4; } }
L_002191F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219200u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x00219200u) [[unlikely]] return; }
L_00219200:
    set32(c.r[5], ld32((c.r[28].w[0] - 30460u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021920Cu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x0021920Cu) [[unlikely]] return; }
L_0021920C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 30685u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219224u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x00219224u) [[unlikely]] return; }
L_00219224:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002192B4; } }
L_00219238:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219248u); set32(c.r[6], c.r[6].w[0] + 30695u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00219248u) [[unlikely]] return; }
L_00219248:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_00219294; }
    set32(c.r[5], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 184u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.r[3].w[0]);  if (t) { goto L_002192E4; } }
L_00219294:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002192A4u); set32(c.r[6], c.r[6].w[0] + 30685u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x002192A4u) [[unlikely]] return; }
L_002192A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
L_002192B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002192BCu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x002192BCu) [[unlikely]] return; }
L_002192BC:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219238u | kUnwind; return; } goto L_00219238; }
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 184u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 7;
L_002192E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002192E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00219300:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00219310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00219340; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 16385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219340u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 38u, depth + 1u); else { c.pc = 0x00214590u; return; } if (c.pc != 0x00219340u) [[unlikely]] return; }
L_00219340:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0021936C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219368u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00219368u) [[unlikely]] return; }
L_00219368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021936C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00219380:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021960C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002193DC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 16384ull;  goto L_002193EC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002193DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002193E4u);  if (depth < kMaxDepth) unit_003E(c, 135u, depth + 1u); else { c.pc = 0x00219310u; return; } if (c.pc != 0x002193E4u) [[unlikely]] return; }
L_002193E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00219610; } }
L_002193EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 248u)));  goto L_00219418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002193FCu);  if (depth < kMaxDepth) unit_003D(c, 42u, depth + 1u); else { c.pc = 0x002145F0u; return; } if (c.pc != 0x002193FCu) [[unlikely]] return; }
L_002193FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00219414; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u - 16385u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00219414:
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 1;
L_00219418:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0021960C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  goto L_00219440; }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021944C; } }
L_00219440:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
L_0021944C:
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00219468; } }
    st32((c.r[20].w[0] + 252u), c.r[19].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 4;
L_00219468:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219480u); set32(c.r[7], c.r[7].w[0] + 30703u);  if (depth < kMaxDepth) unit_003E(c, 163u, depth + 1u); else { c.pc = 0x00219690u; return; } if (c.pc != 0x00219480u) [[unlikely]] return; }
L_00219480:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021949Cu); set32(c.r[7], c.r[7].w[0] + 30709u);  if (depth < kMaxDepth) unit_003E(c, 163u, depth + 1u); else { c.pc = 0x00219690u; return; } if (c.pc != 0x0021949Cu) [[unlikely]] return; }
L_0021949C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00219600; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30456u)));  goto L_00219520; }
    set32(c.r[2], c.r[19].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[6].w[0] + 30703u);
    set32(c.r[5], c.r[2].w[0] + 56u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002194E0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x002194E0u) [[unlikely]] return; }
L_002194E0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002194F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002194F0u) [[unlikely]] return; }
L_002194F0:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002194FCu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002194FCu) [[unlikely]] return; }
L_002194FC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219508u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00219508u) [[unlikely]] return; }
L_00219508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219510u); set32(c.r[4], ld32((c.r[29].w[0] + 132u)));  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x00219510u) [[unlikely]] return; }
L_00219510:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30456u)));
    c.budget -= 4;
L_00219520:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[20].w[0] + 252u), c.r[19].w[0]);  goto L_00219604; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00219600; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[6].w[0] + 30709u);
    set32(c.r[5], c.r[2].w[0] + 56u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219550u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x00219550u) [[unlikely]] return; }
L_00219550:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219560u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00219560u) [[unlikely]] return; }
L_00219560:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021956Cu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x0021956Cu) [[unlikely]] return; }
L_0021956C:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219578u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00219578u) [[unlikely]] return; }
L_00219578:
    set32(c.r[2], ld32((c.r[20].w[0] + 260u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_002195D0; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219594u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00219594u) [[unlikely]] return; }
L_00219594:
    set32(c.r[5], ld32((c.r[28].w[0] - 30456u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002195A4u); set32(c.r[4], ld32((c.r[20].w[0] + 264u)));  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x002195A4u) [[unlikely]] return; }
L_002195A4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002195B0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002195B0u) [[unlikely]] return; }
L_002195B0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30456u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002195C0u); set32(c.r[4], ld32((c.r[20].w[0] + 264u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x002195C0u) [[unlikely]] return; }
L_002195C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00219600; } }
L_002195D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002195D8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002195D8u) [[unlikely]] return; }
L_002195D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00219600; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219600u); set32(c.r[4], ld32((c.r[20].w[0] + 264u)));  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00219600u) [[unlikely]] return; }
L_00219600:
    st32((c.r[20].w[0] + 252u), c.r[19].w[0]);
    c.budget -= 1;
L_00219604:
    st32((c.r[20].w[0] + 256u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 260u), c.r[16].w[0]);
    c.budget -= 2;
L_0021960C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00219610:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00219630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00219680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219654u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00219654u) [[unlikely]] return; }
L_00219654:
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021966Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x0021966Cu) [[unlikely]] return; }
L_0021966C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219674u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00219674u) [[unlikely]] return; }
L_00219674:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x00219680u) [[unlikely]] return; }
L_00219680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00219690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] < 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002196D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 248u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00219770; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_002196E4; }
L_002196D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00219770; } }
L_002196E4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002196FCu); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x002196FCu) [[unlikely]] return; }
L_002196FC:
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00219758; } }
L_00219708:
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219714u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00219714u) [[unlikely]] return; }
L_00219714:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219720u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00219720u) [[unlikely]] return; }
L_00219720:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00219738; }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_00219738:
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219744u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x00219744u) [[unlikely]] return; }
L_00219744:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 5;
L_00219758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219760u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00219760u) [[unlikely]] return; }
L_00219760:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219708u | kUnwind; return; } goto L_00219708; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00219770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00219790:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002197E8; }
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21324ull;
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
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[28].w[0] - 30460u), c.r[4].w[0]);  goto L_002197E0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002197E8; } }
L_002197E0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 30456u), c.r[5].w[0]);
    c.budget -= 2;
L_002197E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002197F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00219860; } }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00219850; } }
L_0021981C:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219840u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 176u, depth + 1u); else { c.pc = 0x002198E0u; return; } if (c.pc != 0x00219840u) [[unlikely]] return; }
L_00219840:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00219850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002198C4; } }
L_00219850:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021981Cu | kUnwind; return; } goto L_0021981C; }
L_00219860:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002198C4; }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002198B0; } }
L_0021987C:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002198A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 177u, depth + 1u); else { c.pc = 0x00219920u; return; } if (c.pc != 0x002198A0u) [[unlikely]] return; }
L_002198A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002198B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002198C4; } }
L_002198B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021987Cu | kUnwind; return; } goto L_0021987C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002198C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002198E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  goto L_002198F8; }
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
L_002198F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0021990C; }
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0021990C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00219920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00219990; } }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00219980; } }
L_0021994C:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219970u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 182u, depth + 1u); else { c.pc = 0x00219A10u; return; } if (c.pc != 0x00219970u) [[unlikely]] return; }
L_00219970:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00219980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002199F4; } }
L_00219980:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021994Cu | kUnwind; return; } goto L_0021994C; }
L_00219990:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002199F4; }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002199E0; } }
L_002199AC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002199D0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 183u, depth + 1u); else { c.pc = 0x00219A20u; return; } if (c.pc != 0x002199D0u) [[unlikely]] return; }
L_002199D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002199E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002199F4; } }
L_002199E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002199ACu | kUnwind; return; } goto L_002199AC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002199F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00219A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00219A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00219A90; } }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00219A80; } }
L_00219A4C:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219A70u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 186u, depth + 1u); else { c.pc = 0x00219AB0u; return; } if (c.pc != 0x00219A70u) [[unlikely]] return; }
L_00219A70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00219A80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00219A94; } }
L_00219A80:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219A4Cu | kUnwind; return; } goto L_00219A4C; }
L_00219A90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00219A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00219AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00219AC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 18632u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219B34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 171u, depth + 1u); else { c.pc = 0x002197F0u; return; } if (c.pc != 0x00219B34u) [[unlikely]] return; }
L_00219B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_00219CC0; }
    st32((c.r[18].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_00219BE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219B54u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219B54u) [[unlikely]] return; }
L_00219B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00219CBC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219B74u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219B74u) [[unlikely]] return; }
L_00219B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00219BD0; } }
L_00219B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219B84u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00219B84u) [[unlikely]] return; }
L_00219B84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_00219BAC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219BA8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 212u, depth + 1u); else { c.pc = 0x00219EB0u; return; } if (c.pc != 0x00219BA8u) [[unlikely]] return; }
L_00219BA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00219BAC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00219CBC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00219BD0:
    set32(c.r[17], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00219B7Cu | kUnwind; return; } goto L_00219B7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00219BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00219CD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219BF8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219BF8u) [[unlikely]] return; }
L_00219BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00219CBC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219C18u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219C18u) [[unlikely]] return; }
L_00219C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00219C74; } }
L_00219C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219C28u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00219C28u) [[unlikely]] return; }
L_00219C28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_00219C50; }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219C4Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 294u, depth + 1u); else { c.pc = 0x0021ABD0u; return; } if (c.pc != 0x00219C4Cu) [[unlikely]] return; }
L_00219C4C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_00219C50:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00219CBC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00219C74:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00219C20u | kUnwind; return; } goto L_00219C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219C90u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219C90u) [[unlikely]] return; }
L_00219C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00219CBC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219CB0u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219CB0u) [[unlikely]] return; }
L_00219CB0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00219CD0; } }
L_00219CBC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00219CC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00219CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00219CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00219E38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18632u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_00219D88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00219D4C; } }
L_00219D30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00219D4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00219D48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00219D48u) [[unlikely]] return; }
L_00219D48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00219D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_00219D7C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00219D30u | kUnwind; return; } goto L_00219D30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00219D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219D84u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00219D84u) [[unlikely]] return; }
L_00219D84:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_00219D88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  goto L_00219DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00219DB4; } }
L_00219D98:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00219DB4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00219DB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00219DB0u) [[unlikely]] return; }
L_00219DB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00219DB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_00219DE4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00219D98u | kUnwind; return; } goto L_00219D98; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_00219DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219DECu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00219DECu) [[unlikely]] return; }
L_00219DEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_00219DF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00219E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219E00u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00219E00u) [[unlikely]] return; }
L_00219E00:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00219E24; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00219E24:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00219E3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219E38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00219E38u) [[unlikely]] return; }
L_00219E38:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00219E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00219E60:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00219E94; } }
L_00219E70:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00219E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00219EA4; } }
L_00219E94:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219E70u | kUnwind; return; } goto L_00219E70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00219EA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00219EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 18616u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 32;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00219FEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219F38u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219F38u) [[unlikely]] return; }
L_00219F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00219FD8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219F54u); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219F54u) [[unlikely]] return; }
L_00219F54:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219F60u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219F60u) [[unlikely]] return; }
L_00219F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00219FD8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219F7Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219F7Cu) [[unlikely]] return; }
L_00219F7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219F88u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219F88u) [[unlikely]] return; }
L_00219F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00219FD8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219FA4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219FA4u) [[unlikely]] return; }
L_00219FA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219FB0u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00219FB0u) [[unlikely]] return; }
L_00219FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00219FD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00219FCCu); set32(c.r[6], c.r[3].w[0] << 3);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00219FCCu) [[unlikely]] return; }
L_00219FCC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00219FEC; } }
L_00219FD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00219FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021A000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021A0D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18616u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_0021A040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A03Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021A03Cu) [[unlikely]] return; }
L_0021A03C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0021A040:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_0021A054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A050u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021A050u) [[unlikely]] return; }
L_0021A050:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0021A054:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_0021A068; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A064u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021A064u) [[unlikely]] return; }
L_0021A064:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_0021A068:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0021A07C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A078u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021A078u) [[unlikely]] return; }
L_0021A078:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0021A07C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021A09C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021A09C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A09Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021A09Cu) [[unlikely]] return; }
L_0021A09C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0021A0C0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_0021A0C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021A0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A0D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021A0D4u) [[unlikely]] return; }
L_0021A0D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021A0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021A0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0021A110u) [[unlikely]] return; }
L_0021A110:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A120u); set32(c.r[5], c.r[5].w[0] + 30720u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0021A120u) [[unlikely]] return; }
L_0021A120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021A130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021A16C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0021A154u) [[unlikely]] return; }
L_0021A154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A164u); set32(c.r[5], c.r[5].w[0] + 30728u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0021A164u) [[unlikely]] return; }
L_0021A164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021A19C; } }
L_0021A16C:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 30736u);
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A198u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x0021A198u) [[unlikely]] return; }
L_0021A198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021A19C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021A1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021A1EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0021A1D4u) [[unlikely]] return; }
L_0021A1D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A1E4u); set32(c.r[5], c.r[5].w[0] + 30752u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0021A1E4u) [[unlikely]] return; }
L_0021A1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021A21C; } }
L_0021A1EC:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 30760u);
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A218u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x0021A218u) [[unlikely]] return; }
L_0021A218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021A21C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021A230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021A26C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0021A254u) [[unlikely]] return; }
L_0021A254:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A264u); set32(c.r[5], c.r[5].w[0] + 30776u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0021A264u) [[unlikely]] return; }
L_0021A264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021A29C; } }
L_0021A26C:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 30784u);
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A298u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x0021A298u) [[unlikely]] return; }
L_0021A298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021A29C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021A2B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021A2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021A2F0; } }
L_0021A2E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021A2F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A2FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0021A2FCu) [[unlikely]] return; }
L_0021A2FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[7], c.r[16].w[0] << 3);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A31Cu); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 235u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x0021A31Cu) [[unlikely]] return; }
L_0021A31C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0021A34C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A344u); set32(c.r[4], c.r[4].w[0] + 30800u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A344u) [[unlikely]] return; }
L_0021A344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021A368; } }
L_0021A34C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A358u); set32(c.r[4], c.r[4].w[0] + 30832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021A358u) [[unlikely]] return; }
L_0021A358:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A364u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 261u, depth + 1u); else { c.pc = 0x0021A510u; return; } if (c.pc != 0x0021A364u) [[unlikely]] return; }
L_0021A364:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021A368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021A380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021A3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021A3C0; } }
L_0021A3B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
L_0021A3C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A3CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0021A3CCu) [[unlikely]] return; }
L_0021A3CC:
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A3ECu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 239u, depth + 1u); else { c.pc = 0x0021A230u; return; } if (c.pc != 0x0021A3ECu) [[unlikely]] return; }
L_0021A3EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0021A41C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A414u); set32(c.r[4], c.r[4].w[0] + 30800u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A414u) [[unlikely]] return; }
L_0021A414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021A438; } }
L_0021A41C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A428u); set32(c.r[4], c.r[4].w[0] + 30832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021A428u) [[unlikely]] return; }
L_0021A428:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A434u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 261u, depth + 1u); else { c.pc = 0x0021A510u; return; } if (c.pc != 0x0021A434u) [[unlikely]] return; }
L_0021A434:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021A438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021A450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A488u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0021A488u) [[unlikely]] return; }
L_0021A488:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A4A4u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 231u, depth + 1u); else { c.pc = 0x0021A130u; return; } if (c.pc != 0x0021A4A4u) [[unlikely]] return; }
L_0021A4A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0021A4D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A4CCu); set32(c.r[4], c.r[4].w[0] + 30800u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A4CCu) [[unlikely]] return; }
L_0021A4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021A4F0; } }
L_0021A4D4:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A4E0u); set32(c.r[4], c.r[4].w[0] + 30832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021A4E0u) [[unlikely]] return; }
L_0021A4E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A4ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x0021A630u; return; } if (c.pc != 0x0021A4ECu) [[unlikely]] return; }
L_0021A4EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021A4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 2;
L_0021A518:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021A548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A540u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x0021A630u; return; } if (c.pc != 0x0021A540u) [[unlikely]] return; }
L_0021A540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021A594; } }
L_0021A548:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[18], c.r[16].w[0] << 3);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A564u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 125u, depth + 1u); else { c.pc = 0x003C5420u; return; } if (c.pc != 0x0021A564u) [[unlikely]] return; }
L_0021A564:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A580u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_003E(c, 235u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x0021A580u) [[unlikely]] return; }
L_0021A580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A590u); set32(c.r[4], c.r[4].w[0] + 30880u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A590u) [[unlikely]] return; }
L_0021A590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021A594:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A5B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A5E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 125u, depth + 1u); else { c.pc = 0x003C5420u; return; } if (c.pc != 0x0021A5E8u) [[unlikely]] return; }
L_0021A5E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A604u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_003E(c, 239u, depth + 1u); else { c.pc = 0x0021A230u; return; } if (c.pc != 0x0021A604u) [[unlikely]] return; }
L_0021A604:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A614u); set32(c.r[4], c.r[4].w[0] + 30880u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A614u) [[unlikely]] return; }
L_0021A614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 125u, depth + 1u); else { c.pc = 0x003C5420u; return; } if (c.pc != 0x0021A668u) [[unlikely]] return; }
L_0021A668:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A684u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_003E(c, 231u, depth + 1u); else { c.pc = 0x0021A130u; return; } if (c.pc != 0x0021A684u) [[unlikely]] return; }
L_0021A684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A694u); set32(c.r[4], c.r[4].w[0] + 30880u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A694u) [[unlikely]] return; }
L_0021A694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A6B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021A704; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0021A6DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021A708; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0021A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A6E4u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x0021A6E4u) [[unlikely]] return; }
L_0021A6E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A6F4u); st32((c.r[16].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_003E(c, 228u, depth + 1u); else { c.pc = 0x0021A0F0u; return; } if (c.pc != 0x0021A6F4u) [[unlikely]] return; }
L_0021A6F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A704u); set32(c.r[4], c.r[4].w[0] + 30912u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A704u) [[unlikely]] return; }
L_0021A704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021A708:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021A720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021A758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A750u);  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x0021A880u; return; } if (c.pc != 0x0021A750u) [[unlikely]] return; }
L_0021A750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021A7C4; } }
L_0021A758:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021A7C0; } }
    set32(c.r[18], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021A7C0; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0021A78C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021A7C0; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0021A78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A794u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x0021A794u) [[unlikely]] return; }
L_0021A794:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A7B0u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_003E(c, 235u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x0021A7B0u) [[unlikely]] return; }
L_0021A7B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A7C0u); set32(c.r[4], c.r[4].w[0] + 30944u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A7C0u) [[unlikely]] return; }
L_0021A7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021A7C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021A860; } }
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0021A864; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0021A82C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021A860; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0021A82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A834u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x0021A834u) [[unlikely]] return; }
L_0021A834:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A850u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_003E(c, 239u, depth + 1u); else { c.pc = 0x0021A230u; return; } if (c.pc != 0x0021A850u) [[unlikely]] return; }
L_0021A850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A860u); set32(c.r[4], c.r[4].w[0] + 30944u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A860u) [[unlikely]] return; }
L_0021A860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021A864:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A880:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021A900; } }
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0021A904; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0021A8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021A900; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0021A8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A8D4u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x0021A8D4u) [[unlikely]] return; }
L_0021A8D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A8F0u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_003E(c, 231u, depth + 1u); else { c.pc = 0x0021A130u; return; } if (c.pc != 0x0021A8F0u) [[unlikely]] return; }
L_0021A8F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021A900u); set32(c.r[4], c.r[4].w[0] + 30944u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021A900u) [[unlikely]] return; }
L_0021A900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021A904:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021A920:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 60u)));  goto L_0021A97C; }
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021A99C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021A99C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021A99C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 1;
L_0021A97C:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
L_0021A99C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021A9B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0021AB14; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 48u)));  goto L_0021A9EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021AA08; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 1;
L_0021A9EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_0021AA00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021AA04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0021AA00:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0021AA04:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021AA08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021ABBC; }
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[8].w[0] + 4u);  if (t) { goto L_0021AA28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021AA48; } }
L_0021AA28:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_0021AA40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021AA44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0021AA40:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0021AA44:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021AA48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] ^ 0ull;  goto L_0021AA60; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021ABBC; } }
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    c.budget -= 1;
L_0021AA60:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021ABBC; } }
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 48u)));  goto L_0021AA90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021AAB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 1;
L_0021AA90:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_0021AAA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021AAB0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0021AAA8:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021AAB0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021AAB4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_0021AB0C; }
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 48u)));  goto L_0021AAE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021AB04; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 1;
L_0021AAE0:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_0021AAF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021AB00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0021AAF8:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_0021AB00:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021AB04:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0021AB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021ABBC; } }
L_0021AB14:
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 48u)));  goto L_0021AB34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021AB50; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 1;
L_0021AB34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_0021AB48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021AB4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0021AB48:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0021AB4C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021AB50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] ^ 0ull;  goto L_0021AB64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021ABBC; } }
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    c.budget -= 1;
L_0021AB64:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021ABBC; } }
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 48u)));  goto L_0021AB94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021ABB8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 1;
L_0021AB94:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_0021ABAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021ABB4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0021ABAC:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021ABB4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021ABB8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021ABBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021ABD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[6], c.r[6].w[0] + 18600u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43530000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 30;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_0021ACE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AC50u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0021AC50u) [[unlikely]] return; }
L_0021AC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0021AD90; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AC70u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021AC70u) [[unlikely]] return; }
L_0021AC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021ACCC; } }
L_0021AC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AC80u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021AC80u) [[unlikely]] return; }
L_0021AC80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_0021ACA8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ACA4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 315u, depth + 1u); else { c.pc = 0x0021AF70u; return; } if (c.pc != 0x0021ACA4u) [[unlikely]] return; }
L_0021ACA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0021ACA8:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0021AD94; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021ACCC:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021AC78u | kUnwind; return; } goto L_0021AC78; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_0021ACE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021ADA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ACF4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0021ACF4u) [[unlikely]] return; }
L_0021ACF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0021AD90; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AD14u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021AD14u) [[unlikely]] return; }
L_0021AD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021AD70; } }
L_0021AD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AD24u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021AD24u) [[unlikely]] return; }
L_0021AD24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_0021AD4C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AD48u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 318u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x0021AD48u) [[unlikely]] return; }
L_0021AD48:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0021AD4C:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021AD90; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021AD70:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021AD1Cu | kUnwind; return; } goto L_0021AD1C; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021ADA4; } }
L_0021AD90:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0021AD94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0021ADA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021ADC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021AEF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18600u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_0021AE58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021AE1C; } }
L_0021AE00:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0021AE1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AE18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021AE18u) [[unlikely]] return; }
L_0021AE18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021AE1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_0021AE4C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021AE00u | kUnwind; return; } goto L_0021AE00; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0021AE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AE54u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021AE54u) [[unlikely]] return; }
L_0021AE54:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_0021AE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021AEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021AE84; } }
L_0021AE68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0021AE84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AE80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021AE80u) [[unlikely]] return; }
L_0021AE80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021AE84:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_0021AEB4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021AE68u | kUnwind; return; } goto L_0021AE68; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_0021AEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AEBCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021AEBCu) [[unlikely]] return; }
L_0021AEBC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0021AEE0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_0021AEE0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0021AEF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021AEF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021AEF4u) [[unlikely]] return; }
L_0021AEF4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021AEF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021AF10:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0021AF50; } }
L_0021AF20:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0021AF50; }
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0021AF5C; } }
L_0021AF50:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021AF20u | kUnwind; return; } goto L_0021AF20; }
L_0021AF5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021AF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[6], c.r[6].w[0] + 18584u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52540000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  c.pc = t; return; }
L_0021AFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021B01C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18584u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0021B000; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0021B000:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021B018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021B018u) [[unlikely]] return; }
L_0021B018:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021B01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021B030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 18568u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E430000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 27;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021B154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B0A4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0021B0A4u) [[unlikely]] return; }
L_0021B0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0021B140; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B0C4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021B0C4u) [[unlikely]] return; }
L_0021B0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021B120; } }
L_0021B0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B0D4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021B0D4u) [[unlikely]] return; }
L_0021B0D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_0021B0FC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B0F8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003E(c, 329u, depth + 1u); else { c.pc = 0x0021B260u; return; } if (c.pc != 0x0021B0F8u) [[unlikely]] return; }
L_0021B0F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0021B0FC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0021B144; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021B120:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B0CCu | kUnwind; return; } goto L_0021B0CC; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021B154; } }
L_0021B140:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0021B144:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0021B154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021B170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021B23C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18568u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021B204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021B1CC; } }
L_0021B1B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0021B1CC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B1C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021B1C8u) [[unlikely]] return; }
L_0021B1C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021B1CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_0021B1FC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B1B0u | kUnwind; return; } goto L_0021B1B0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0021B1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B204u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021B204u) [[unlikely]] return; }
L_0021B204:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0021B228; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_0021B228:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0021B240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B23Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021B23Cu) [[unlikely]] return; }
L_0021B23C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021B240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021B260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[6], c.r[6].w[0] + 18552u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  c.pc = t; return; }
L_0021B2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021B30C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18552u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0021B2F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0021B2F0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021B308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021B308u) [[unlikely]] return; }
L_0021B308:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021B30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021B320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 18648u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B36Cu); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0040(c, 22u, depth + 1u); else { c.pc = 0x00220190u; return; } if (c.pc != 0x0021B36Cu) [[unlikely]] return; }
L_0021B36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B374u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 22u, depth + 1u); else { c.pc = 0x00220190u; return; } if (c.pc != 0x0021B374u) [[unlikely]] return; }
L_0021B374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[2].d[0] | 16711ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 216u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B3C4u); st32((c.r[16].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021B3C4u) [[unlikely]] return; }
L_0021B3C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  goto L_0021B3E0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B3DCu); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 214u, depth + 1u); else { c.pc = 0x0021EA00u; return; } if (c.pc != 0x0021B3DCu) [[unlikely]] return; }
L_0021B3DC:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_0021B3E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0021B3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021B400; } }
L_0021B3F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0021B400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021B410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021B4DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B440u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 4u, depth + 1u); else { c.pc = 0x0021C060u; return; } if (c.pc != 0x0021B440u) [[unlikely]] return; }
L_0021B440:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  goto L_0021B47C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021B464; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B464u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021B464u) [[unlikely]] return; }
L_0021B464:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021B47C; } }
L_0021B470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B478u); set32(c.r[18], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021B478u) [[unlikely]] return; }
L_0021B478:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021B47C:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B470u | kUnwind; return; } goto L_0021B470; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B498u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0040(c, 24u, depth + 1u); else { c.pc = 0x002201E0u; return; } if (c.pc != 0x0021B498u) [[unlikely]] return; }
L_0021B498:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B4A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0040(c, 24u, depth + 1u); else { c.pc = 0x002201E0u; return; } if (c.pc != 0x0021B4A4u) [[unlikely]] return; }
L_0021B4A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0021B4C8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_0021B4C8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021B4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B4DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021B4DCu) [[unlikely]] return; }
L_0021B4DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021B4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021B500:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    st32((c.r[4].w[0] + 104u), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021B84C; } }
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_0021B850; }
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_0021B58C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B56Cu);  if (depth < kMaxDepth) unit_003F(c, 65u, depth + 1u); else { c.pc = 0x0021CCB0u; return; } if (c.pc != 0x0021B56Cu) [[unlikely]] return; }
L_0021B56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021B588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B57Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 20u, depth + 1u); else { c.pc = 0x0021C240u; return; } if (c.pc != 0x0021B57Cu) [[unlikely]] return; }
L_0021B57C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0021B588:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0021B58C:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  goto L_0021B634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B5A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 70u, depth + 1u); else { c.pc = 0x0021CEF0u; return; } if (c.pc != 0x0021B5A0u) [[unlikely]] return; }
L_0021B5A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B5ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 23u, depth + 1u); else { c.pc = 0x0021C2F0u; return; } if (c.pc != 0x0021B5ACu) [[unlikely]] return; }
L_0021B5AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0021B5E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021B5E0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B5D8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 11u, depth + 1u); else { c.pc = 0x0021C120u; return; } if (c.pc != 0x0021B5D8u) [[unlikely]] return; }
L_0021B5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021B630; } }
L_0021B5E0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0021B620; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021B61C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B608u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 40u, depth + 1u); else { c.pc = 0x0021C6D0u; return; } if (c.pc != 0x0021B608u) [[unlikely]] return; }
L_0021B608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021B61C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0021B61C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0021B620:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B630u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 46u, depth + 1u); else { c.pc = 0x0021C7E0u; return; } if (c.pc != 0x0021B630u) [[unlikely]] return; }
L_0021B630:
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_0021B634:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0021B648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B644u);  if (depth < kMaxDepth) unit_003F(c, 224u, depth + 1u); else { c.pc = 0x0021ECA0u; return; } if (c.pc != 0x0021B644u) [[unlikely]] return; }
L_0021B644:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0021B648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021B84C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[30], ld32((c.r[28].w[0] - 31436u)));  goto L_0021B674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021B84C; } }
    set32(c.r[30], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0021B674:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021B838; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_0021B684:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0021B838; }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0021B744; }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[5].d[0] = c.r[5].d[0] & 2ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021B740; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_0021B714; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0021B714:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  goto L_0021B734; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B730u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021B730u) [[unlikely]] return; }
L_0021B730:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_0021B734:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_0021B834; } }
L_0021B740:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0021B744:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 28u)));  if (t) { goto L_0021B7E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0021B7E8; } }
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021B7E8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0021B7E0; }
    set32(c.r[21], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0021B7DC; } }
    set32(c.r[22], ld32((c.r[5].w[0] + 32u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B798u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 246u, depth + 1u); else { c.pc = 0x003C2E80u; return; } if (c.pc != 0x0021B798u) [[unlikely]] return; }
L_0021B798:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0021B7DC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B7B0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 243u, depth + 1u); else { c.pc = 0x003C2E30u; return; } if (c.pc != 0x0021B7B0u) [[unlikely]] return; }
L_0021B7B0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0021B7DC; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B7C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x0021B7C8u) [[unlikely]] return; }
L_0021B7C8:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B7D4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0021B7D4u) [[unlikely]] return; }
L_0021B7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021B7E8; } }
L_0021B7DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021B7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B7E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x0021B7E8u) [[unlikely]] return; }
L_0021B7E8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0021B80C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0021B82C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0021B80C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B81Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 146u, depth + 1u); else { c.pc = 0x0021DD80u; return; } if (c.pc != 0x0021B81Cu) [[unlikely]] return; }
L_0021B81C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[28].w[0] - 31436u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0021B82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B834u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_003F(c, 198u, depth + 1u); else { c.pc = 0x0021E790u; return; } if (c.pc != 0x0021B834u) [[unlikely]] return; }
L_0021B834:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0021B838:
    set32(c.r[4], ld32((c.r[20].w[0] + 120u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B684u | kUnwind; return; } goto L_0021B684; }
    st32((c.r[28].w[0] - 31436u), c.r[30].w[0]);
    c.budget -= 1;
L_0021B84C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0021B850:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0021B880:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021B8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B8C0u);  if (depth < kMaxDepth) unit_003E(c, 378u, depth + 1u); else { c.pc = 0x0021BB70u; return; } if (c.pc != 0x0021B8C0u) [[unlikely]] return; }
L_0021B8C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0021BA30; }
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021BA2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021BA2C; } }
    set32(c.r[23], ld32((c.r[28].w[0] - 31436u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021B9F4; } }
L_0021B908:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0021B9F4; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0021B93C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  goto L_0021B9B8; }
L_0021B93C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_0021B964; }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B950u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0021B950u) [[unlikely]] return; }
L_0021B950:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
L_0021B964:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B974u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 146u, depth + 1u); else { c.pc = 0x0021DD80u; return; } if (c.pc != 0x0021B974u) [[unlikely]] return; }
L_0021B974:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 31436u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[21].d[0] == 0ull; c.r[20].d[0] = ld16((c.r[3].w[0] + 74u));  if (t) { goto L_0021B9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B9A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0021B9A0u) [[unlikely]] return; }
L_0021B9A0:
    set32(c.r[3], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0021B9E4; } }
L_0021B9B8:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0021B9E8; }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B9D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0021B9D0u) [[unlikely]] return; }
L_0021B9D0:
    set32(c.r[3], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0021B9E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021B9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021B9F0u);  if (depth < kMaxDepth) unit_003F(c, 201u, depth + 1u); else { c.pc = 0x0021E7F0u; return; } if (c.pc != 0x0021B9F0u) [[unlikely]] return; }
L_0021B9F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021B9F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B908u | kUnwind; return; } goto L_0021B908; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[28].w[0] - 31436u), c.r[23].w[0]);  goto L_0021BA2C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BA18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0021BA18u) [[unlikely]] return; }
L_0021BA18:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[28].w[0] - 31436u), c.r[23].w[0]);
    c.budget -= 5;
L_0021BA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0021BA30:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0021BA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0021BB60; }
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021BB5C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u - 121u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0021BB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021BAD8; } }
L_0021BAB8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0021BAD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BAD4u);  if (depth < kMaxDepth) unit_003F(c, 203u, depth + 1u); else { c.pc = 0x0021E840u; return; } if (c.pc != 0x0021BAD4u) [[unlikely]] return; }
L_0021BAD4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021BAD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BAB8u | kUnwind; return; } goto L_0021BAB8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30440u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0021BB08; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30440u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_0021BB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BB10u);  if (depth < kMaxDepth) unit_003F(c, 159u, depth + 1u); else { c.pc = 0x0021DF80u; return; } if (c.pc != 0x0021BB10u) [[unlikely]] return; }
L_0021BB10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 112u)));  goto L_0021BB28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BB20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 156u, depth + 1u); else { c.pc = 0x0021DF30u; return; } if (c.pc != 0x0021BB20u) [[unlikely]] return; }
L_0021BB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 104u));  if (t) { goto L_0021BB50; } }
L_0021BB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0021BB44; } }
L_0021BB30:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[6], ld32((c.r[6].w[0] + 16u)));  goto L_0021BB44; }
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 2;
L_0021BB44:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BB30u | kUnwind; return; } goto L_0021BB30; }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_0021BB50:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.budget -= 3;
L_0021BB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021BB60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021BB70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], 0u + 4u);  if (t) { goto L_0021BF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021BDE8; } }
L_0021BBAC:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 24u)));  goto L_0021BBC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021BBD0; } }
L_0021BBC4:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021BBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021BDD0; } }
L_0021BBD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0021BD28; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BBF0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 235u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x0021BBF0u) [[unlikely]] return; }
L_0021BBF0:
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u + 480u);
    set32(c.r[6], c.r[6].w[0] + 30976u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BC10u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BC10u) [[unlikely]] return; }
L_0021BC10:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0021BC2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0021BC38; } }
L_0021BC2C:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021BC38:
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[22], c.r[17].w[0] << 3);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + 30984u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BC84u); set32(c.r[4], 0u + 504u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BC84u) [[unlikely]] return; }
L_0021BC84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BC94u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 239u, depth + 1u); else { c.pc = 0x0021A230u; return; } if (c.pc != 0x0021BC94u) [[unlikely]] return; }
L_0021BC94:
    set32(c.r[3], c.r[20].w[0] + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 30976u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BCB8u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BCB8u) [[unlikely]] return; }
L_0021BCB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[5], c.r[20].w[0] + 3u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);  if (t) { goto L_0021BCF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0021BD04; } }
L_0021BCF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_0021BD04:
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[9], ld32((c.r[3].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 504u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BD20u); set32(c.r[6], c.r[6].w[0] + 30984u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BD20u) [[unlikely]] return; }
L_0021BD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0021BDCC; } }
L_0021BD28:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BD34u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 231u, depth + 1u); else { c.pc = 0x0021A130u; return; } if (c.pc != 0x0021BD34u) [[unlikely]] return; }
L_0021BD34:
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u + 480u);
    set32(c.r[6], c.r[6].w[0] + 30976u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BD54u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BD54u) [[unlikely]] return; }
L_0021BD54:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0021BD70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0021BD7C; } }
L_0021BD70:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021BD7C:
    set32(c.r[4], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 504u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BDC8u); set32(c.r[6], c.r[6].w[0] + 30984u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BDC8u) [[unlikely]] return; }
L_0021BDC8:
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.budget -= 1;
L_0021BDCC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021BDD0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BBD8u | kUnwind; return; } goto L_0021BBD8; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021BDE8:
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BBACu | kUnwind; return; } goto L_0021BBAC; }
    set32(c.r[3], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0021BE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_0021BE3C; } }
L_0021BE14:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 28u)));  goto L_0021BE28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021BE34; } }
L_0021BE28:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021BE34:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 2;
L_0021BE3C:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 31008u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BE5Cu); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BE5Cu) [[unlikely]] return; }
    goto L_0021BE5C;
L_0021BE58:
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 1;
L_0021BE5C:
    set32(c.r[3], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  goto L_0021BE70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_0021BEA0; } }
L_0021BE70:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_0021BE8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021BE98; } }
L_0021BE8C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021BE98:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 2;
L_0021BEA0:
    set32(c.r[3], c.r[20].w[0] + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 31040u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BEC0u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BEC0u) [[unlikely]] return; }
L_0021BEC0:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021BF4C; } }
L_0021BED8:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0021BEF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021BF00; } }
L_0021BEF4:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0021BF00:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0021BF4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BF18u); set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_003E(c, 210u, depth + 1u); else { c.pc = 0x00219E60u; return; } if (c.pc != 0x0021BF18u) [[unlikely]] return; }
L_0021BF18:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[4], 0u + 480u);
    set32(c.r[8], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BF44u); set32(c.r[6], c.r[6].w[0] + 31064u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0021BF44u) [[unlikely]] return; }
L_0021BF44:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0021BF4C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BED8u | kUnwind; return; } goto L_0021BED8; }
L_0021BF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0021BF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BFA0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021BFA0u) [[unlikely]] return; }
L_0021BFA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  goto L_0021BFB8; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BFB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 187u, depth + 1u); else { c.pc = 0x00219AC0u; return; } if (c.pc != 0x0021BFB4u) [[unlikely]] return; }
L_0021BFB4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0021BFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003F(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003F(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 31088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021BFE8u); st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021BFE8u) [[unlikely]] return; }
L_0021BFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    [[clang::musttail]] return unit_003F(c, 1u, depth);
}

}
