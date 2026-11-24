#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0051[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 26, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0,
    0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0051(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00264000;
    case 2u: goto L_00264008;
    case 3u: goto L_00264020;
    case 4u: goto L_00264030;
    case 5u: goto L_00264034;
    case 6u: goto L_0026407C;
    case 7u: goto L_00264088;
    case 8u: goto L_00264090;
    case 9u: goto L_00264094;
    case 10u: goto L_002640B4;
    case 11u: goto L_002640D0;
    case 12u: goto L_002640D8;
    case 13u: goto L_00264108;
    case 14u: goto L_00264140;
    case 15u: goto L_00264148;
    case 16u: goto L_00264190;
    case 17u: goto L_002641AC;
    case 18u: goto L_002641BC;
    case 19u: goto L_002641D8;
    case 20u: goto L_002641EC;
    case 21u: goto L_002641FC;
    case 22u: goto L_0026426C;
    case 23u: goto L_0026428C;
    case 24u: goto L_002642A4;
    case 25u: goto L_00264310;
    case 26u: goto L_00264318;
    case 27u: goto L_0026431C;
    case 28u: goto L_00264330;
    case 29u: goto L_00264350;
    case 30u: goto L_00264364;
    case 31u: goto L_002643DC;
    case 32u: goto L_002643E0;
    case 33u: goto L_002643F0;
    case 34u: goto L_00264408;
    case 35u: goto L_0026441C;
    case 36u: goto L_0026442C;
    case 37u: goto L_00264440;
    case 38u: goto L_0026446C;
    case 39u: goto L_00264478;
    case 40u: goto L_00264490;
    case 41u: goto L_002644B0;
    case 42u: goto L_002644D0;
    case 43u: goto L_002644EC;
    case 44u: goto L_002644F8;
    case 45u: goto L_00264518;
    case 46u: goto L_00264530;
    case 47u: goto L_00264554;
    case 48u: goto L_0026457C;
    case 49u: goto L_00264594;
    case 50u: goto L_002645A4;
    case 51u: goto L_002645B4;
    case 52u: goto L_002645D0;
    case 53u: goto L_002645EC;
    case 54u: goto L_00264618;
    case 55u: goto L_00264658;
    case 56u: goto L_0026466C;
    case 57u: goto L_0026468C;
    case 58u: goto L_0026469C;
    case 59u: goto L_002646C0;
    case 60u: goto L_002646F8;
    case 61u: goto L_00264708;
    case 62u: goto L_00264724;
    case 63u: goto L_0026473C;
    case 64u: goto L_00264790;
    case 65u: goto L_002647B8;
    case 66u: goto L_002647DC;
    case 67u: goto L_00264808;
    case 68u: goto L_00264850;
    case 69u: goto L_00264864;
    case 70u: goto L_0026487C;
    case 71u: goto L_002648B0;
    case 72u: goto L_002648D4;
    case 73u: goto L_002648E4;
    case 74u: goto L_002648F8;
    case 75u: goto L_00264920;
    case 76u: goto L_00264944;
    case 77u: goto L_00264970;
    case 78u: goto L_00264994;
    case 79u: goto L_002649A0;
    case 80u: goto L_002649B0;
    case 81u: goto L_002649DC;
    case 82u: goto L_00264A10;
    case 83u: goto L_00264A2C;
    case 84u: goto L_00264A58;
    case 85u: goto L_00264A88;
    case 86u: goto L_00264AB0;
    case 87u: goto L_00264ABC;
    case 88u: goto L_00264ACC;
    case 89u: goto L_00264AD4;
    case 90u: goto L_00264AFC;
    case 91u: goto L_00264B40;
    case 92u: goto L_00264B78;
    case 93u: goto L_00264B8C;
    case 94u: goto L_00264BA8;
    case 95u: goto L_00264BC0;
    case 96u: goto L_00264BD8;
    case 97u: goto L_00264BF8;
    case 98u: goto L_00264C04;
    case 99u: goto L_00264C24;
    case 100u: goto L_00264C40;
    case 101u: goto L_00264C88;
    case 102u: goto L_00264C98;
    case 103u: goto L_00264CB4;
    case 104u: goto L_00264CDC;
    case 105u: goto L_00264CE4;
    case 106u: goto L_00264CEC;
    case 107u: goto L_00264CFC;
    case 108u: goto L_00264D08;
    case 109u: goto L_00264D24;
    case 110u: goto L_00264D3C;
    case 111u: goto L_00264D50;
    case 112u: goto L_00264D74;
    case 113u: goto L_00264DA0;
    case 114u: goto L_00264DE8;
    case 115u: goto L_00264E20;
    case 116u: goto L_00264E38;
    case 117u: goto L_00264E4C;
    case 118u: goto L_00264E5C;
    case 119u: goto L_00264E70;
    case 120u: goto L_00264E9C;
    case 121u: goto L_00264EA8;
    case 122u: goto L_00264EC0;
    case 123u: goto L_00264EE0;
    case 124u: goto L_00264EF0;
    case 125u: goto L_00264F1C;
    case 126u: goto L_00264F30;
    case 127u: goto L_00264F40;
    case 128u: goto L_00264F50;
    case 129u: goto L_00264FC0;
    case 130u: goto L_00264FDC;
    case 131u: goto L_00265000;
    case 132u: goto L_00265008;
    case 133u: goto L_00265014;
    case 134u: goto L_00265030;
    case 135u: goto L_00265070;
    case 136u: goto L_0026507C;
    case 137u: goto L_0026508C;
    case 138u: goto L_002650A4;
    case 139u: goto L_002650B0;
    case 140u: goto L_002650CC;
    case 141u: goto L_002650FC;
    case 142u: goto L_00265110;
    case 143u: goto L_00265130;
    case 144u: goto L_0026513C;
    case 145u: goto L_00265198;
    case 146u: goto L_002651A4;
    case 147u: goto L_002651BC;
    case 148u: goto L_002651F0;
    case 149u: goto L_00265218;
    case 150u: goto L_0026522C;
    case 151u: goto L_00265240;
    case 152u: goto L_00265254;
    case 153u: goto L_00265260;
    case 154u: goto L_00265268;
    case 155u: goto L_00265270;
    case 156u: goto L_0026527C;
    case 157u: goto L_00265294;
    case 158u: goto L_0026529C;
    case 159u: goto L_002652B8;
    case 160u: goto L_002652CC;
    case 161u: goto L_002652DC;
    case 162u: goto L_002652EC;
    case 163u: goto L_0026531C;
    case 164u: goto L_00265340;
    case 165u: goto L_00265358;
    case 166u: goto L_0026536C;
    case 167u: goto L_00265380;
    case 168u: goto L_002653A0;
    case 169u: goto L_002653C0;
    case 170u: goto L_002653F0;
    case 171u: goto L_00265408;
    case 172u: goto L_00265420;
    case 173u: goto L_00265448;
    case 174u: goto L_00265460;
    case 175u: goto L_00265494;
    case 176u: goto L_002654C0;
    case 177u: goto L_002654D4;
    case 178u: goto L_002654F8;
    case 179u: goto L_00265508;
    case 180u: goto L_00265520;
    case 181u: goto L_00265554;
    case 182u: goto L_00265580;
    case 183u: goto L_00265598;
    case 184u: goto L_002655BC;
    case 185u: goto L_002655E0;
    case 186u: goto L_00265600;
    case 187u: goto L_00265630;
    case 188u: goto L_0026563C;
    case 189u: goto L_00265658;
    case 190u: goto L_0026568C;
    case 191u: goto L_002656B8;
    case 192u: goto L_002656CC;
    case 193u: goto L_002656F0;
    case 194u: goto L_00265700;
    case 195u: goto L_0026570C;
    case 196u: goto L_00265728;
    case 197u: goto L_0026575C;
    case 198u: goto L_00265788;
    case 199u: goto L_002657A0;
    case 200u: goto L_002657C4;
    case 201u: goto L_002657E8;
    case 202u: goto L_00265800;
    case 203u: goto L_00265818;
    case 204u: goto L_0026582C;
    case 205u: goto L_0026583C;
    case 206u: goto L_00265850;
    case 207u: goto L_0026587C;
    case 208u: goto L_00265888;
    case 209u: goto L_002658A0;
    case 210u: goto L_002658C0;
    case 211u: goto L_002658D0;
    case 212u: goto L_002658FC;
    case 213u: goto L_00265924;
    case 214u: goto L_00265950;
    case 215u: goto L_00265994;
    case 216u: goto L_002659A0;
    case 217u: goto L_002659E0;
    case 218u: goto L_002659EC;
    case 219u: goto L_00265A00;
    case 220u: goto L_00265A3C;
    case 221u: goto L_00265A54;
    case 222u: goto L_00265A60;
    case 223u: goto L_00265A70;
    case 224u: goto L_00265A98;
    case 225u: goto L_00265AEC;
    case 226u: goto L_00265B00;
    case 227u: goto L_00265B10;
    case 228u: goto L_00265B4C;
    case 229u: goto L_00265B58;
    case 230u: goto L_00265B90;
    case 231u: goto L_00265BA8;
    case 232u: goto L_00265BC0;
    case 233u: goto L_00265BD4;
    case 234u: goto L_00265BDC;
    case 235u: goto L_00265BE8;
    case 236u: goto L_00265C00;
    case 237u: goto L_00265C78;
    case 238u: goto L_00265C90;
    case 239u: goto L_00265CAC;
    case 240u: goto L_00265CB8;
    case 241u: goto L_00265D34;
    case 242u: goto L_00265D50;
    case 243u: goto L_00265D68;
    case 244u: goto L_00265D74;
    case 245u: goto L_00265D84;
    case 246u: goto L_00265DB0;
    case 247u: goto L_00265DE4;
    case 248u: goto L_00265E08;
    case 249u: goto L_00265E20;
    case 250u: goto L_00265E50;
    case 251u: goto L_00265E60;
    case 252u: goto L_00265E84;
    case 253u: goto L_00265E90;
    case 254u: goto L_00265EB0;
    case 255u: goto L_00265F20;
    case 256u: goto L_00265F6C;
    case 257u: goto L_00265F80;
    case 258u: goto L_00265FC0;
    case 259u: goto L_00265FD8;
    case 260u: goto L_00265FFC;
    case 261u: goto L_00266004;
    case 262u: goto L_00266098;
    case 263u: goto L_002660AC;
    case 264u: goto L_002660B4;
    case 265u: goto L_002660BC;
    case 266u: goto L_002660D0;
    case 267u: goto L_00266144;
    case 268u: goto L_0026616C;
    case 269u: goto L_00266194;
    case 270u: goto L_002661A0;
    case 271u: goto L_002661B0;
    case 272u: goto L_002661C8;
    case 273u: goto L_002661D0;
    case 274u: goto L_00266200;
    case 275u: goto L_00266238;
    case 276u: goto L_002662A4;
    case 277u: goto L_002662EC;
    case 278u: goto L_00266358;
    case 279u: goto L_00266364;
    case 280u: goto L_0026637C;
    case 281u: goto L_00266388;
    case 282u: goto L_002663B0;
    case 283u: goto L_002663E0;
    case 284u: goto L_0026641C;
    case 285u: goto L_00266460;
    case 286u: goto L_00266494;
    case 287u: goto L_002664C8;
    case 288u: goto L_00266500;
    case 289u: goto L_00266530;
    case 290u: goto L_00266540;
    case 291u: goto L_002665A0;
    case 292u: goto L_002665B4;
    case 293u: goto L_002665EC;
    case 294u: goto L_002665F4;
    case 295u: goto L_00266670;
    case 296u: goto L_0026668C;
    case 297u: goto L_002666C0;
    case 298u: goto L_002666E0;
    case 299u: goto L_00266704;
    case 300u: goto L_00266714;
    case 301u: goto L_00266750;
    case 302u: goto L_00266770;
    case 303u: goto L_00266780;
    case 304u: goto L_0026679C;
    case 305u: goto L_002667E0;
    case 306u: goto L_0026680C;
    case 307u: goto L_00266818;
    case 308u: goto L_00266830;
    case 309u: goto L_00266850;
    case 310u: goto L_00266920;
    case 311u: goto L_00266990;
    case 312u: goto L_00266A70;
    case 313u: goto L_00266A94;
    case 314u: goto L_00266AB0;
    case 315u: goto L_00266AF0;
    case 316u: goto L_00266B20;
    case 317u: goto L_00266B40;
    case 318u: goto L_00266B50;
    case 319u: goto L_00266B90;
    case 320u: goto L_00266BB0;
    case 321u: goto L_00266BC0;
    case 322u: goto L_00266BD0;
    case 323u: goto L_00266C00;
    case 324u: goto L_00266C34;
    case 325u: goto L_00266C40;
    case 326u: goto L_00266C78;
    case 327u: goto L_00266C90;
    case 328u: goto L_00266CE4;
    case 329u: goto L_00266CFC;
    case 330u: goto L_00266D1C;
    case 331u: goto L_00266D40;
    case 332u: goto L_00266D68;
    case 333u: goto L_00266D74;
    case 334u: goto L_00266D84;
    case 335u: goto L_00266D94;
    case 336u: goto L_00266DA4;
    case 337u: goto L_00266DB8;
    case 338u: goto L_00266DC8;
    case 339u: goto L_00266DD8;
    case 340u: goto L_00266DF0;
    case 341u: goto L_00266E0C;
    case 342u: goto L_00266E18;
    case 343u: goto L_00266E20;
    case 344u: goto L_00266E2C;
    case 345u: goto L_00266E90;
    case 346u: goto L_00266EB0;
    case 347u: goto L_00266EC4;
    case 348u: goto L_00266ED8;
    case 349u: goto L_00266F00;
    case 350u: goto L_00266F44;
    case 351u: goto L_00266F5C;
    case 352u: goto L_00266F64;
    case 353u: goto L_00266FB8;
    case 354u: goto L_00266FD4;
    case 355u: goto L_00266FDC;
    case 356u: goto L_00266FE4;
    case 357u: goto L_00266FFC;
    case 358u: goto L_00267074;
    case 359u: goto L_00267094;
    case 360u: goto L_002670E8;
    case 361u: goto L_0026710C;
    case 362u: goto L_00267140;
    case 363u: goto L_0026715C;
    case 364u: goto L_00267170;
    case 365u: goto L_00267178;
    case 366u: goto L_002671B0;
    case 367u: goto L_002671F0;
    case 368u: goto L_00267208;
    case 369u: goto L_00267218;
    case 370u: goto L_00267234;
    case 371u: goto L_00267250;
    case 372u: goto L_0026727C;
    case 373u: goto L_0026728C;
    case 374u: goto L_002672B4;
    case 375u: goto L_002672BC;
    case 376u: goto L_002672F0;
    case 377u: goto L_00267318;
    case 378u: goto L_0026733C;
    case 379u: goto L_00267370;
    case 380u: goto L_00267380;
    case 381u: goto L_002673B8;
    case 382u: goto L_002673D4;
    case 383u: goto L_0026742C;
    case 384u: goto L_00267440;
    case 385u: goto L_00267470;
    case 386u: goto L_00267480;
    case 387u: goto L_002674A0;
    case 388u: goto L_002674B0;
    case 389u: goto L_002674D0;
    case 390u: goto L_002674E0;
    case 391u: goto L_00267508;
    case 392u: goto L_00267514;
    case 393u: goto L_00267530;
    case 394u: goto L_00267580;
    case 395u: goto L_002675AC;
    case 396u: goto L_002675CC;
    case 397u: goto L_002675E0;
    case 398u: goto L_0026760C;
    case 399u: goto L_00267640;
    case 400u: goto L_00267674;
    case 401u: goto L_00267694;
    case 402u: goto L_002676D0;
    case 403u: goto L_002676FC;
    case 404u: goto L_00267718;
    case 405u: goto L_00267750;
    case 406u: goto L_00267770;
    case 407u: goto L_00267790;
    case 408u: goto L_002677E0;
    case 409u: goto L_00267838;
    case 410u: goto L_00267844;
    case 411u: goto L_00267850;
    case 412u: goto L_0026785C;
    case 413u: goto L_00267874;
    case 414u: goto L_00267890;
    case 415u: goto L_002678A0;
    case 416u: goto L_002678B0;
    case 417u: goto L_002678C0;
    case 418u: goto L_002678D0;
    case 419u: goto L_002678E0;
    case 420u: goto L_002678FC;
    case 421u: goto L_00267908;
    case 422u: goto L_002679AC;
    case 423u: goto L_002679D8;
    case 424u: goto L_002679F0;
    case 425u: goto L_00267A04;
    case 426u: goto L_00267A10;
    case 427u: goto L_00267A30;
    case 428u: goto L_00267ABC;
    case 429u: goto L_00267AEC;
    case 430u: goto L_00267B0C;
    case 431u: goto L_00267B30;
    case 432u: goto L_00267B3C;
    case 433u: goto L_00267B98;
    case 434u: goto L_00267BDC;
    case 435u: goto L_00267C10;
    case 436u: goto L_00267C6C;
    case 437u: goto L_00267C84;
    case 438u: goto L_00267CA0;
    case 439u: goto L_00267CF8;
    case 440u: goto L_00267D14;
    case 441u: goto L_00267D24;
    case 442u: goto L_00267D2C;
    case 443u: goto L_00267D40;
    case 444u: goto L_00267D5C;
    case 445u: goto L_00267D64;
    case 446u: goto L_00267DBC;
    case 447u: goto L_00267DE8;
    case 448u: goto L_00267E00;
    case 449u: goto L_00267E20;
    case 450u: goto L_00267E78;
    case 451u: goto L_00267E88;
    case 452u: goto L_00267EA0;
    case 453u: goto L_00267EC0;
    case 454u: goto L_00267F14;
    case 455u: goto L_00267F20;
    case 456u: goto L_00267F78;
    case 457u: goto L_00267FA4;
    case 458u: goto L_00267FBC;
    default: bad_entry(c, 0x00264000u); return;
    }
L_00264000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 268u, depth + 1u); else { c.pc = 0x0025ECF0u; return; } if (c.pc != 0x00264008u) [[unlikely]] return; }
L_00264008:
    set32(c.r[7], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264020u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x00264020u) [[unlikely]] return; }
L_00264020:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002643DC; } }
L_00264030:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_00264034:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026405C; }
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_00264054; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026405C; } }
L_00264054:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_0026405C:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002641D4; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026407Cu); set32(c.r[5], c.r[5].w[0] - 7786u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0026407Cu) [[unlikely]] return; }
L_0026407C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264088u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00264088u) [[unlikely]] return; }
L_00264088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643DC; } }
L_00264090:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00264094:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), 0u);  goto L_002640BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002640B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002640B4u) [[unlikely]] return; }
L_002640B4:
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 2;
L_002640BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640D0u); set32(c.r[5], c.r[5].w[0] - 7764u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x002640D0u) [[unlikely]] return; }
L_002640D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640D8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002640D8u) [[unlikely]] return; }
L_002640D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 156u), c.r[4].w[0]);  goto L_00264110; }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_002640F4; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002640F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7815u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264108u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 113u, depth + 1u); else { c.pc = 0x00211330u; return; } if (c.pc != 0x00264108u) [[unlikely]] return; }
L_00264108:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 2;
L_00264110:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002643DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002643DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00264140u) [[unlikely]] return; }
L_00264140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643DC; } }
L_00264148:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002643DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 164u)));  goto L_00264180; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002641C4; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_00264180:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264190u); set32(c.r[5], c.r[5].w[0] - 7786u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00264190u) [[unlikely]] return; }
L_00264190:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002641B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002641ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002641ACu) [[unlikely]] return; }
L_002641AC:
    st32((c.r[17].w[0] + 156u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002641B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002641BCu) [[unlikely]] return; }
L_002641BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643DC; } }
L_002641C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002641D0; }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_002641D0:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_002641D4:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_002641D8:
    set32(c.r[4], 0u + 20086u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002641ECu) [[unlikely]] return; }
L_002641EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x002641FCu) [[unlikely]] return; }
L_002641FC:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    st32((c.r[3].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 20;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00264250; }
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 1;
L_00264250:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026426Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x0026426Cu) [[unlikely]] return; }
L_0026426C:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_00264290; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026428Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0026428Cu) [[unlikely]] return; }
L_0026428C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.budget -= 1;
L_00264290:
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002643DC; } }
L_002642A4:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002642BC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002642D4; } }
L_002642BC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_002642D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 168u), c.f[1]);  if (t) { goto L_002643DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264310u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00264310u) [[unlikely]] return; }
L_00264310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643DC; } }
L_00264318:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0026431C:
    set32(c.r[4], 0u + 20087u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264330u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00264330u) [[unlikely]] return; }
L_00264330:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_00264354; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264350u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00264350u) [[unlikely]] return; }
L_00264350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.budget -= 1;
L_00264354:
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
L_00264364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00264380; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00264398; } }
L_00264380:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00264398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 168u), c.f[1]);  if (t) { goto L_002643DC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643DCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002643DCu) [[unlikely]] return; }
L_002643DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002643E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002643F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4111u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264408u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00264408u) [[unlikely]] return; }
L_00264408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026441Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 41u, depth + 1u); else { c.pc = 0x002644B0u; return; } if (c.pc != 0x0026441Cu) [[unlikely]] return; }
L_0026441C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026442Cu); set32(c.r[5], c.r[5].w[0] - 7744u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0026442Cu) [[unlikely]] return; }
L_0026442C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00264490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026446Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 42u, depth + 1u); else { c.pc = 0x002644D0u; return; } if (c.pc != 0x0026446Cu) [[unlikely]] return; }
L_0026446C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00264478u) [[unlikely]] return; }
L_00264478:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00264494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00264490u) [[unlikely]] return; }
L_00264490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00264494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002644B0:
    st32((c.r[4].w[0] + 212u), 0u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[4].w[0] + 216u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 220u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 224u), c.r[3].w[0]);  c.pc = t; return; }
L_002644D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002644FC; } }
L_002644EC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002644F8u); set32(c.r[4], ld32((c.r[2].w[0] + 152u)));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002644F8u) [[unlikely]] return; }
L_002644F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002644FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002644ECu | kUnwind; return; } goto L_002644EC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264518u); st32((c.r[17].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_0051(c, 75u, depth + 1u); else { c.pc = 0x00264920u; return; } if (c.pc != 0x00264518u) [[unlikely]] return; }
L_00264518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264554u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x00264554u) [[unlikely]] return; }
L_00264554:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00264568; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[17].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00264568:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00264624; }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026457Cu); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x0026457Cu) [[unlikely]] return; }
L_0026457C:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00264598; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264594u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00264594u) [[unlikely]] return; }
L_00264594:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00264598:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264624; } }
L_002645A4:
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645B4u); set32(c.r[20], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_0026(c, 26u, depth + 1u); else { c.pc = 0x001B81E0u; return; } if (c.pc != 0x002645B4u) [[unlikely]] return; }
L_002645B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002645C8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00264624; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002645C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645D0u);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002645D0u) [[unlikely]] return; }
L_002645D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 212u)));  goto L_002645F0; }
    set32(c.r[6], ld32((c.r[16].w[0] + 148u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645ECu); set32(c.r[5], c.r[5].w[0] - 7634u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x002645ECu) [[unlikely]] return; }
L_002645EC:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 1;
L_002645F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[19].w[0] + 212u), c.r[3].w[0]);  goto L_00264634; }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + 148u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264618u); set32(c.r[5], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00264618u) [[unlikely]] return; }
L_00264618:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 3;
L_00264624:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002645A4u | kUnwind; return; } goto L_002645A4; }
L_00264634:
    set32(c.r[4], ld32((c.r[19].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002646A0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264658u);  if (depth < kMaxDepth) unit_0025(c, 532u, depth + 1u); else { c.pc = 0x001B7F90u; return; } if (c.pc != 0x00264658u) [[unlikely]] return; }
L_00264658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026469C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026466Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 531u, depth + 1u); else { c.pc = 0x001B7F70u; return; } if (c.pc != 0x0026466Cu) [[unlikely]] return; }
L_0026466C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0026469C; } }
L_00264684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026468Cu);  if (depth < kMaxDepth) unit_0025(c, 533u, depth + 1u); else { c.pc = 0x001B7FA0u; return; } if (c.pc != 0x0026468Cu) [[unlikely]] return; }
L_0026468C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026469C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026469Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 75u, depth + 1u); else { c.pc = 0x00264920u; return; } if (c.pc != 0x0026469Cu) [[unlikely]] return; }
L_0026469C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002646A0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002646C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00264700; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646F8u); set32(c.r[5], c.r[5].w[0] - 7607u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002646F8u) [[unlikely]] return; }
L_002646F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026476C; } }
L_00264700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264708u);  if (depth < kMaxDepth) unit_0051(c, 79u, depth + 1u); else { c.pc = 0x002649A0u; return; } if (c.pc != 0x00264708u) [[unlikely]] return; }
L_00264708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00264718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026476C; } }
L_00264718:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264724u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00264724u) [[unlikely]] return; }
L_00264724:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 212u)));  goto L_00264744; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026473Cu); set32(c.r[5], c.r[5].w[0] - 7595u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0026473Cu) [[unlikely]] return; }
L_0026473C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026476C; } }
L_00264744:
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 10;
L_0026476C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00264790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026481C; } }
L_002647B8:
    set32(c.r[16], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_002647D4; }
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026481C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_002647D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647DCu);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002647DCu) [[unlikely]] return; }
L_002647DC:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[19].w[0] + 212u), c.r[3].w[0]);  goto L_00264818; }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + 148u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264808u); set32(c.r[5], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00264808u) [[unlikely]] return; }
L_00264808:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 212u), c.r[3].w[0]);  if (t) { goto L_0026481C; } }
L_00264818:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026481C:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002647B8u | kUnwind; return; } goto L_002647B8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00264850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00264888; } }
L_00264864:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00264888; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026487Cu); set32(c.r[4], ld32((c.r[3].w[0] + 152u)));  if (depth < kMaxDepth) unit_0026(c, 26u, depth + 1u); else { c.pc = 0x001B81E0u; return; } if (c.pc != 0x0026487Cu) [[unlikely]] return; }
L_0026487C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_00264898; } }
L_00264888:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00264864u | kUnwind; return; } goto L_00264864; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002648B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 75u, depth + 1u); else { c.pc = 0x00264920u; return; } if (c.pc != 0x002648D4u) [[unlikely]] return; }
L_002648D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x002648E4u) [[unlikely]] return; }
L_002648E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_00264904; } }
    c.f[12] = ld32((c.r[18].w[0] + 224u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 534u, depth + 1u); else { c.pc = 0x001B7FB0u; return; } if (c.pc != 0x002648F8u) [[unlikely]] return; }
L_002648F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00264904:
    set32(c.r[2], ld32((c.r[18].w[0] + 220u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00264920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0026494C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264944u);  if (depth < kMaxDepth) unit_0025(c, 530u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x00264944u) [[unlikely]] return; }
L_00264944:
    st32((c.r[16].w[0] + 220u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0026494C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 224u), c.f[12]);
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00264998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264994u); c.f[12] = ld32((c.r[3].w[0] + 224u));  if (depth < kMaxDepth) unit_0025(c, 534u, depth + 1u); else { c.pc = 0x001B7FB0u; return; } if (c.pc != 0x00264994u) [[unlikely]] return; }
L_00264994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00264998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002649A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002649B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x002649DCu) [[unlikely]] return; }
L_002649DC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00264A10; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00264A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00264A10u) [[unlikely]] return; }
L_00264A10:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_00264A68; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00264A2Cu) [[unlikely]] return; }
L_00264A2C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00264A58; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00264A48; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264A58; } }
L_00264A48:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00264A58u) [[unlikely]] return; }
L_00264A58:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 216u)));  if (t) { goto L_00264A6C; } }
L_00264A64:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_00264A68:
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 1;
L_00264A6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 31680u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A88u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x00264A88u) [[unlikely]] return; }
L_00264A88:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00264B04; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00264AB0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00264AB0u) [[unlikely]] return; }
L_00264AB0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264B04; } }
L_00264ABC:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264ACCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00264ACCu) [[unlikely]] return; }
L_00264ACC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 2;
L_00264AD4:
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00264AFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00264AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00264AFCu) [[unlikely]] return; }
L_00264AFC:
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00264B04:
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00264ABCu | kUnwind; return; } goto L_00264ABC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00264B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00264B84; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_00264B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00264BAC; } }
L_00264B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B78u);  if (depth < kMaxDepth) unit_00A7(c, 43u, depth + 1u); else { c.pc = 0x003BC7C0u; return; } if (c.pc != 0x00264B78u) [[unlikely]] return; }
L_00264B78:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_00264B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B8Cu);  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x003BC780u; return; } if (c.pc != 0x00264B8Cu) [[unlikely]] return; }
L_00264B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264BA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BA8u); st32((c.r[16].w[0] + 216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00264BA8u) [[unlikely]] return; }
L_00264BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00264BAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 68u, depth + 1u); else { c.pc = 0x00264850u; return; } if (c.pc != 0x00264BD8u) [[unlikely]] return; }
L_00264BD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00264C28; }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00264C1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BF8u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00264BF8u) [[unlikely]] return; }
L_00264BF8:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x00264C04u) [[unlikely]] return; }
L_00264C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264C18; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_00264C18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00264C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00264C24u) [[unlikely]] return; }
L_00264C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00264C28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264C40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[29].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264CCC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00264C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00264D40; } }
L_00264C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C88u);  if (depth < kMaxDepth) unit_0051(c, 42u, depth + 1u); else { c.pc = 0x002644D0u; return; } if (c.pc != 0x00264C88u) [[unlikely]] return; }
L_00264C88:
    set32(c.r[6], ld32((c.r[28].w[0] - 31680u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C98u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00264C98u) [[unlikely]] return; }
L_00264C98:
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[6].sd[0] < 0) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_00264CC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CB4u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x00264CB4u) [[unlikely]] return; }
L_00264CB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00264D3C; } }
L_00264CC4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00264CCC:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00264CDCu) [[unlikely]] return; }
L_00264CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 56u);  if (t) { goto L_00264D1C; } }
L_00264CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CECu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00264CECu) [[unlikely]] return; }
L_00264CEC:
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 59u, depth + 1u); else { c.pc = 0x002646C0u; return; } if (c.pc != 0x00264CFCu) [[unlikely]] return; }
L_00264CFC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D08u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00264D08u) [[unlikely]] return; }
L_00264D08:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 5;
L_00264D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D24u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00264D24u) [[unlikely]] return; }
L_00264D24:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00264CE4u | kUnwind; return; } goto L_00264CE4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00264D3Cu) [[unlikely]] return; }
L_00264D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00264D40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00264D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00264D68; } }
    c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_00264D7C; }
L_00264D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D74u); set32(c.r[4], c.r[4].w[0] - 7502u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00264D74u) [[unlikely]] return; }
L_00264D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264D8C; } }
L_00264D7C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15984u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00264D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00264DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00264DBC; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00264DBC:
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264DDC; } }
    c.r[1].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00264DDC; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);  goto L_00264DF0; }
L_00264DDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DE8u); set32(c.r[4], c.r[4].w[0] - 7483u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00264DE8u) [[unlikely]] return; }
L_00264DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00264E10; } }
L_00264DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 7576u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 160u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
L_00264E10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00264E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00264E38u) [[unlikely]] return; }
L_00264E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E4Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 123u, depth + 1u); else { c.pc = 0x00264EE0u; return; } if (c.pc != 0x00264E4Cu) [[unlikely]] return; }
L_00264E4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E5Cu); set32(c.r[5], c.r[5].w[0] - 7456u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x00264E5Cu) [[unlikely]] return; }
L_00264E5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00264EC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E9Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 124u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00264E9Cu) [[unlikely]] return; }
L_00264E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00264EA8u) [[unlikely]] return; }
L_00264EA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00264EC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00264EC0u) [[unlikely]] return; }
L_00264EC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00264EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), 0u);  c.pc = t; return; }
L_00264EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00264F24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00264F1Cu) [[unlikely]] return; }
L_00264F1C:
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00264F24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00264F40u) [[unlikely]] return; }
L_00264F40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264FF0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00264FF4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  goto L_00264FD4; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_00264F94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00265018; } }
L_00264F94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264FF0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_00264FC8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00264FC0u) [[unlikely]] return; }
L_00264FC0:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_00264FC8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00265014; } }
L_00264FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 171u, depth + 1u); else { c.pc = 0x001A61F0u; return; } if (c.pc != 0x00264FDCu) [[unlikely]] return; }
L_00264FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00265014; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_00264FF0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00264FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265000u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 124u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00265000u) [[unlikely]] return; }
L_00265000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 123u, depth + 1u); else { c.pc = 0x00264EE0u; return; } if (c.pc != 0x00265008u) [[unlikely]] return; }
L_00265008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00265014u) [[unlikely]] return; }
L_00265014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00265018:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002650D8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  goto L_0026505C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00265100; } }
L_0026505C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_00265084; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265070u); set32(c.r[5], c.r[5].w[0] - 7318u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00265070u) [[unlikely]] return; }
L_00265070:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026507Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0026507Cu) [[unlikely]] return; }
L_0026507C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002650FC; } }
L_00265084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026508Cu);  if (depth < kMaxDepth) unit_00B7(c, 277u, depth + 1u); else { c.pc = 0x003FF580u; return; } if (c.pc != 0x0026508Cu) [[unlikely]] return; }
L_0026508C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_002650B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650A4u); set32(c.r[5], c.r[5].w[0] - 7298u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002650A4u) [[unlikely]] return; }
L_002650A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002650B0u) [[unlikely]] return; }
L_002650B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002650FC; } }
L_002650B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650CCu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002650CCu) [[unlikely]] return; }
L_002650CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_002650D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002650FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002650FCu) [[unlikely]] return; }
L_002650FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00265100:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265130u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00265130u) [[unlikely]] return; }
L_00265130:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026513Cu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0026513Cu) [[unlikely]] return; }
L_0026513C:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002652F8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026528C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00265200; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002651CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 148u)));  goto L_00265180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00265320; } }
L_00265180:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_002651AC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265198u); set32(c.r[5], c.r[5].w[0] - 7281u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00265198u) [[unlikely]] return; }
L_00265198:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002651A4u) [[unlikely]] return; }
L_002651A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026531C; } }
L_002651AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4097ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002651BCu) [[unlikely]] return; }
L_002651BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_002651CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026531C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651F0u); c.r[5].d[0] = c.r[2].d[0] | 4102ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002651F0u) [[unlikely]] return; }
L_002651F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0026531C; } }
L_00265200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026531C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265218u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00265218u) [[unlikely]] return; }
L_00265218:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_00265248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026522Cu);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x0026522Cu) [[unlikely]] return; }
L_0026522C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265240u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x00265240u) [[unlikely]] return; }
L_00265240:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 2;
L_00265248:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x00265254u) [[unlikely]] return; }
L_00265254:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x00265260u) [[unlikely]] return; }
L_00265260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x00265268u) [[unlikely]] return; }
L_00265268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265270u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00265270u) [[unlikely]] return; }
L_00265270:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026527Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x0026527Cu) [[unlikely]] return; }
L_0026527C:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0026531C; } }
L_0026528C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265294u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00265294u) [[unlikely]] return; }
L_00265294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026529Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x0026529Cu) [[unlikely]] return; }
L_0026529C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026531C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4102ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002652B8u) [[unlikely]] return; }
L_002652B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002652CCu) [[unlikely]] return; }
L_002652CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652DCu); c.r[5].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002652DCu) [[unlikely]] return; }
L_002652DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652ECu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002652ECu) [[unlikely]] return; }
L_002652EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_002652F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026531C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026531Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0026531Cu) [[unlikely]] return; }
L_0026531C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00265320:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00265340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4113u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265358u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00265358u) [[unlikely]] return; }
L_00265358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 84u);
    set32(c.r[2], c.r[2].w[0] + 21104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026536Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026536Cu) [[unlikely]] return; }
L_0026536C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_00265384; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265380u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 211u, depth + 1u); else { c.pc = 0x001D6640u; return; } if (c.pc != 0x00265380u) [[unlikely]] return; }
L_00265380:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_00265384:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 320u);
    set32(c.r[7], 0u + 200u);
    set32(c.r[8], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653A0u); set32(c.r[9], 0u + 23u);  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001D67B0u; return; } if (c.pc != 0x002653A0u) [[unlikely]] return; }
L_002653A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002653C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00265408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653F0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x002653F0u) [[unlikely]] return; }
L_002653F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026540C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00265408u) [[unlikely]] return; }
L_00265408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026540C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] < 0; st32((c.r[29].w[0] + 60u), 0u);  if (t) { goto L_00265500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265448u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 111u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x00265448u) [[unlikely]] return; }
L_00265448:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265460u); set32(c.r[5], c.r[5].w[0] - 7264u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00265460u) [[unlikely]] return; }
L_00265460:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_00265470; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00265470:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265484; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00265484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002654C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00265494u) [[unlikely]] return; }
L_00265494:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002654C0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002654B0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002654C0; } }
L_002654B0:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002654C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002654C0u) [[unlikely]] return; }
L_002654C0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002654D4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002D(c, 225u, depth + 1u); else { c.pc = 0x001D6890u; return; } if (c.pc != 0x002654D4u) [[unlikely]] return; }
L_002654D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_002655C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002655BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002654F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002654F8u) [[unlikely]] return; }
L_002654F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002655BC; } }
L_00265500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265508u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 111u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x00265508u) [[unlikely]] return; }
L_00265508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], 0u - c.r[17].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265520u); set32(c.r[5], c.r[5].w[0] - 7257u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00265520u) [[unlikely]] return; }
L_00265520:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_00265530; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00265530:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265544; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00265544:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00265580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00265554u) [[unlikely]] return; }
L_00265554:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00265580; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00265570; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265580; } }
L_00265570:
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265580u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00265580u) [[unlikely]] return; }
L_00265580:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265598u); c.r[6].d[0] = c.r[2].d[0] | 33023ull;  if (depth < kMaxDepth) unit_002D(c, 225u, depth + 1u); else { c.pc = 0x001D6890u; return; } if (c.pc != 0x00265598u) [[unlikely]] return; }
L_00265598:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002655BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002655BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002655BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002655BCu) [[unlikely]] return; }
L_002655BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_002655C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002655E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002655E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002655E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002655E0u) [[unlikely]] return; }
L_002655E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002655E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00265600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] < 0; st32((c.r[29].w[0] + 76u), 0u);  if (t) { goto L_002656F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265630u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 111u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x00265630u) [[unlikely]] return; }
L_00265630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026563Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 111u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x0026563Cu) [[unlikely]] return; }
L_0026563C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265658u); set32(c.r[5], c.r[5].w[0] - 7250u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00265658u) [[unlikely]] return; }
L_00265658:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_00265668; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00265668:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026567C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0026567C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002656B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026568Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0026568Cu) [[unlikely]] return; }
L_0026568C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002656B8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002656A8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002656B8; } }
L_002656A8:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002656B8u) [[unlikely]] return; }
L_002656B8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656CCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002D(c, 225u, depth + 1u); else { c.pc = 0x001D6890u; return; } if (c.pc != 0x002656CCu) [[unlikely]] return; }
L_002656CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_002657C8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002657C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002656F0u) [[unlikely]] return; }
L_002656F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002657C4; } }
L_002656F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265700u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 111u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x00265700u) [[unlikely]] return; }
L_00265700:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026570Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 111u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x0026570Cu) [[unlikely]] return; }
L_0026570C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], 0u - c.r[18].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265728u); set32(c.r[5], c.r[5].w[0] - 7240u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00265728u) [[unlikely]] return; }
L_00265728:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_00265738; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00265738:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026574C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0026574C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00265788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026575Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0026575Cu) [[unlikely]] return; }
L_0026575C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00265788; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00265778; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265788; } }
L_00265778:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265788u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00265788u) [[unlikely]] return; }
L_00265788:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657A0u); c.r[6].d[0] = c.r[2].d[0] | 33023ull;  if (depth < kMaxDepth) unit_002D(c, 225u, depth + 1u); else { c.pc = 0x001D6890u; return; } if (c.pc != 0x002657A0u) [[unlikely]] return; }
L_002657A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002657C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002657C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002657C4u) [[unlikely]] return; }
L_002657C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_002657C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002657EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002657E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002657E8u) [[unlikely]] return; }
L_002657E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002657EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00265800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4114u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265818u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00265818u) [[unlikely]] return; }
L_00265818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026582Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 210u, depth + 1u); else { c.pc = 0x002658C0u; return; } if (c.pc != 0x0026582Cu) [[unlikely]] return; }
L_0026582C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026583Cu); set32(c.r[5], c.r[5].w[0] - 7216u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0026583Cu) [[unlikely]] return; }
L_0026583C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002658A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026587Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 211u, depth + 1u); else { c.pc = 0x002658D0u; return; } if (c.pc != 0x0026587Cu) [[unlikely]] return; }
L_0026587C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00265888u) [[unlikely]] return; }
L_00265888:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002658A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002658A0u) [[unlikely]] return; }
L_002658A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002658A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002658C0:
    st32((c.r[4].w[0] + 148u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 152u), 0u);  c.pc = t; return; }
L_002658D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00265904; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002658FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002658FCu) [[unlikely]] return; }
L_002658FC:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_00265904:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0026592C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), 0u);  goto L_00265928; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00265924u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00265924u) [[unlikely]] return; }
L_00265924:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_00265928:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0026592C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002659EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] & 16384ull;  goto L_00265984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002659F0; } }
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_00265984:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_002659E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265994u); set32(c.r[4], 0u + 4101u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00265994u) [[unlikely]] return; }
L_00265994:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659A0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_004D(c, 287u, depth + 1u); else { c.pc = 0x00256450u; return; } if (c.pc != 0x002659A0u) [[unlikely]] return; }
L_002659A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002659E0; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659E0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x002659E0u) [[unlikely]] return; }
L_002659E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_002659E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659ECu);  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x002659ECu) [[unlikely]] return; }
L_002659EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002659F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00265AB0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 92u);  goto L_00265A68; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00265A40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00265BAC; } }
L_00265A3C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00265A40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A54u); set32(c.r[5], c.r[5].w[0] - 7116u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00265A54u) [[unlikely]] return; }
L_00265A54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00265A60u) [[unlikely]] return; }
L_00265A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265BA8; } }
L_00265A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A70u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00265A70u) [[unlikely]] return; }
L_00265A70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_00265AA0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7101u);
    set32(c.r[7], c.r[7].w[0] - 7088u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A98u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 69u, depth + 1u); else { c.pc = 0x0020C950u; return; } if (c.pc != 0x00265A98u) [[unlikely]] return; }
L_00265A98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_00265AA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00265BA8; } }
L_00265AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00265BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265A3Cu | kUnwind; return; } goto L_00265A3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265A3Cu | kUnwind; return; } goto L_00265A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265AECu); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00265AECu) [[unlikely]] return; }
L_00265AEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  goto L_00265B04; }
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x00265B00u) [[unlikely]] return; }
L_00265B00:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_00265B04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x00265B10u) [[unlikely]] return; }
L_00265B10:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 4101u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    st32((c.r[2].w[0] + 284u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B4Cu); st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00265B4Cu) [[unlikely]] return; }
L_00265B4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B58u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_004D(c, 287u, depth + 1u); else { c.pc = 0x00256450u; return; } if (c.pc != 0x00265B58u) [[unlikely]] return; }
L_00265B58:
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B90u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x00265B90u) [[unlikely]] return; }
L_00265B90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00265BA8u) [[unlikely]] return; }
L_00265BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00265BAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 211u, depth + 1u); else { c.pc = 0x002658D0u; return; } if (c.pc != 0x00265BD4u) [[unlikely]] return; }
L_00265BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 210u, depth + 1u); else { c.pc = 0x002658C0u; return; } if (c.pc != 0x00265BDCu) [[unlikely]] return; }
L_00265BDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00265BE8u) [[unlikely]] return; }
L_00265BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 152u)));  goto L_00265C50; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 152u)));  goto L_00265C28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00265C7C; } }
L_00265C28:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[5].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 10;
L_00265C50:
    c.f[1] = ld32((c.r[5].w[0] + 344u));
    c.f[0] = ld32((c.r[5].w[0] + 356u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00265C68; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00265C68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00265C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00265C78u) [[unlikely]] return; }
L_00265C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00265C7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00265CACu) [[unlikely]] return; }
L_00265CAC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CB8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00265CB8u) [[unlikely]] return; }
L_00265CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28672u);
    set32(c.r[3], c.r[3].w[0] + 28728u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534D0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17235ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[28].w[0] - 30404u), c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + 13760u);
    st32((c.r[16].w[0] + 72u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D34u); st32((c.r[16].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00265D34u) [[unlikely]] return; }
L_00265D34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_00265D54; }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 208u, depth + 1u); else { c.pc = 0x00209C40u; return; } if (c.pc != 0x00265D50u) [[unlikely]] return; }
L_00265D50:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00265D54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_00265D7C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x00265D68u) [[unlikely]] return; }
L_00265D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D74u); set32(c.r[4], c.r[4].w[0] - 7056u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00265D74u) [[unlikely]] return; }
L_00265D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00265D98; } }
L_00265D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D84u); set32(c.r[4], c.r[4].w[0] - 7024u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00265D84u) [[unlikely]] return; }
L_00265D84:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00265D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30404u), 0u);  goto L_00265DEC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_00265DE8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00265DE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00265DE4u) [[unlikely]] return; }
L_00265DE4:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_00265DE8:
    st32((c.r[28].w[0] - 30404u), 0u);
    c.budget -= 1;
L_00265DEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[4].w[0] - 6976u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E08u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00265E08u) [[unlikely]] return; }
L_00265E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00265E54; }
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00265E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E50u);  if (depth < kMaxDepth) unit_006D(c, 222u, depth + 1u); else { c.pc = 0x002D69A0u; return; } if (c.pc != 0x00265E50u) [[unlikely]] return; }
L_00265E50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00265E54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00265E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00265E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E84u); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_003A(c, 222u, depth + 1u); else { c.pc = 0x0020A030u; return; } if (c.pc != 0x00265E84u) [[unlikely]] return; }
L_00265E84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00265E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00265E90:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00265EB0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00265F0C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));  goto L_00265EDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265F0C; } }
L_00265EDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_00265F00; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00265F00:
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.budget -= 3;
L_00265F0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00265F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002660BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002660C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0051[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00265F6C:
    c.r[2].d[0] = c.r[6].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] & 32ull;  goto L_00265FC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F80u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x00265F80u) [[unlikely]] return; }
L_00265F80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00265FA4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 13732u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265FFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00265FA4:
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x00265FC0u) [[unlikely]] return; }
L_00265FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265FFC; } }
L_00265FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FD8u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x00265FD8u) [[unlikely]] return; }
L_00265FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00265FFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x00265FFCu) [[unlikely]] return; }
L_00265FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266004u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x00266004u) [[unlikely]] return; }
L_00266004:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00266020; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266028; } }
L_00266020:
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_00266028:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026605C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_0026605C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00266068; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00266068:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002660A4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002660A0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00266090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002660BC; } }
L_00266090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266098u);  if (depth < kMaxDepth) unit_006E(c, 139u, depth + 1u); else { c.pc = 0x002D9F90u; return; } if (c.pc != 0x00266098u) [[unlikely]] return; }
L_00266098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002660BC; } }
L_002660A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002660A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660ACu);  if (depth < kMaxDepth) unit_006E(c, 150u, depth + 1u); else { c.pc = 0x002DA3A0u; return; } if (c.pc != 0x002660ACu) [[unlikely]] return; }
L_002660AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002660BC; } }
L_002660B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660BCu);  if (depth < kMaxDepth) unit_006E(c, 161u, depth + 1u); else { c.pc = 0x002DA6B0u; return; } if (c.pc != 0x002660BCu) [[unlikely]] return; }
L_002660BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002660C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002660D0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[2], c.r[8].w[0] << 2);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0] + 404u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266144u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00266144u) [[unlikely]] return; }
L_00266144:
    c.f[0] = ld32((c.r[20].w[0] + 1392u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1396u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1400u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1404u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026616Cu); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0026616Cu) [[unlikely]] return; }
L_0026616C:
    set32(c.r[4], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[3], 0u + 2u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00266320; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 192u);  goto L_002661A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266194u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00266194u) [[unlikely]] return; }
L_00266194:
    set32(c.r[4], c.r[20].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661A0u); set32(c.r[5], c.r[20].w[0] + 1280u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002661A0u) [[unlikely]] return; }
L_002661A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_002661B4; } }
L_002661A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661B0u); set32(c.r[5], c.r[20].w[0] + 1280u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002661B0u) [[unlikely]] return; }
L_002661B0:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002661B4:
    set32(c.r[6], c.r[21].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[20].w[0] + 1264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661C8u); set32(c.r[16], c.r[21].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002661C8u) [[unlikely]] return; }
L_002661C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002661D0u) [[unlikely]] return; }
L_002661D0:
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002661F8; }
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 32u));  goto L_00266228; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002661F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266200u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00266200u) [[unlikely]] return; }
L_00266200:
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));  goto L_00266270; }
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026626C; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_00266228:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 1264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266238u); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00266238u) [[unlikely]] return; }
L_00266238:
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[3] = ld32((c.r[29].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[4]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), c.f[0]);  if (t) { goto L_00266320; } }
L_0026626C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_00266270:
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 32u));  goto L_002662DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002662D8; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[20].w[0] + 1264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662A4u); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002662A4u) [[unlikely]] return; }
L_002662A4:
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[29].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[4]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), c.f[0]);  if (t) { goto L_00266320; } }
L_002662D8:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_002662DC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[20].w[0] + 1264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662ECu); c.f[12] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002662ECu) [[unlikely]] return; }
L_002662EC:
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[17], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[29].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[4]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.budget -= 13;
L_00266320:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00266348; } }
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_00266348:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002663B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266358u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00266358u) [[unlikely]] return; }
L_00266358:
    set32(c.r[5], c.r[20].w[0] + 1200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266364u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00266364u) [[unlikely]] return; }
L_00266364:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_00266380; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026637Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0026637Cu) [[unlikely]] return; }
L_0026637C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00266380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266388u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00266388u) [[unlikely]] return; }
L_00266388:
    c.f[0] = ld32((c.r[22].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663B0u); st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002663B0u) [[unlikely]] return; }
L_002663B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002663B4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002663E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 136u), c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026643C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026641Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0026641Cu) [[unlikely]] return; }
L_0026641C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026644C; } }
L_0026643C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.f[0] = c.f[20];
    c.budget -= 4;
L_0026644C:
    st32((c.r[18].w[0] + 168u), c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_0026647C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00266460u) [[unlikely]] return; }
L_00266460:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266480; } }
L_0026647C:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_00266480:
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002664B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00266494u) [[unlikely]] return; }
L_00266494:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002664B4; } }
L_002664B0:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_002664B4:
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002664E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002664C8u) [[unlikely]] return; }
L_002664C8:
    c.f[20] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 6;
L_002664E0:
    st32((c.r[17].w[0] + 224u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00266500:
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[3].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[3].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[3].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 216u), c.r[5].w[0]);  c.pc = t; return; }
L_00266530:
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.budget -= 3;
    { st32((c.r[4].w[0] + 128u), c.f[12]);  [[clang::musttail]] return unit_006D(c, 222u, depth); }
L_00266540:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 15;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00266718; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    st32((c.r[2].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002665A0u) [[unlikely]] return; }
L_002665A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00266714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665B4u); set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));  if (depth < kMaxDepth) unit_006E(c, 132u, depth + 1u); else { c.pc = 0x002D9DE0u; return; } if (c.pc != 0x002665B4u) [[unlikely]] return; }
L_002665B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));  goto L_002665DC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266714; } }
L_002665DC:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665ECu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x002665ECu) [[unlikely]] return; }
L_002665EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002665F4u) [[unlikely]] return; }
L_002665F4:
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1396u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1400u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1404u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00266714; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.f[24] = ld32((c.r[29].w[0] + 320u));
    st32((c.r[29].w[0] + 288u), 0u);
    c.f[25] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 272u), 0u);
    c.f[26] = ld32((c.r[29].w[0] + 328u));
    st32((c.r[29].w[0] + 276u), 0u);
    c.f[27] = ld32((c.r[29].w[0] + 332u));
    st32((c.r[29].w[0] + 280u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266670u); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00266670u) [[unlikely]] return; }
L_00266670:
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026668Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x0026668Cu) [[unlikely]] return; }
L_0026668C:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[21]);
    st32((c.r[29].w[0] + 104u), c.f[22]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666C0u); st32((c.r[29].w[0] + 108u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002666C0u) [[unlikely]] return; }
L_002666C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002666CC; } }
    set32(c.r[5], c.r[16].w[0] + 304u);
    c.budget -= 1;
L_002666CC:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666E0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002666E0u) [[unlikely]] return; }
L_002666E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0026670C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266704u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00266704u) [[unlikely]] return; }
L_00266704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266714; } }
L_0026670C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266714u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00266714u) [[unlikely]] return; }
L_00266714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00266718:
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00266750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00266774; }
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266770u); set32(c.r[4], ld32((c.r[28].w[0] - 30404u)));  if (depth < kMaxDepth) unit_006E(c, 132u, depth + 1u); else { c.pc = 0x002D9DE0u; return; } if (c.pc != 0x00266770u) [[unlikely]] return; }
L_00266770:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00266774:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00266780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026679Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 212u, depth + 1u); else { c.pc = 0x001BE220u; return; } if (c.pc != 0x0026679Cu) [[unlikely]] return; }
L_0026679C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 21336u);
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 176u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 178u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st8((c.r[17].w[0] + 180u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0] + 172u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002667E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00266830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026680Cu); st32((c.r[17].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 319u, depth + 1u); else { c.pc = 0x00266B90u; return; } if (c.pc != 0x0026680Cu) [[unlikely]] return; }
L_0026680C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 213u, depth + 1u); else { c.pc = 0x001BE240u; return; } if (c.pc != 0x00266818u) [[unlikely]] return; }
L_00266818:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00266834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00266830u) [[unlikely]] return; }
L_00266830:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00266834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026687C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_0026687C:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 180u)));
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[6].w[0] + 16u)));  if (t) { goto L_002668B8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002668A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_002668A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_002668BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_002668B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002668BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002668D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 176u)));  goto L_00266A1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_002668D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00266A18; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00266A18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266918; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00266910; }
    set32(c.r[17], ld32((c.r[2].w[0] + 368u)));
    c.budget -= 1;
L_00266910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266924; } }
L_00266918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266920u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00266920u) [[unlikely]] return; }
L_00266920:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00266924:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00266A18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00266970; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 168u)));  if (t) { goto L_0026695C; } }
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_0026695C:
    c.r[2].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_00266970:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00266A18; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 178u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00266A18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266990u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00266990u) [[unlikely]] return; }
L_00266990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 984u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 168u)));  goto L_002669D4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 1180u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002669D0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002669D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_002669D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 1;
L_002669D4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266A18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266A18; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266A50; } }
L_00266A18:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_00266A1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00266A38; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00266A38; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00266A38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00266A50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00266A50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00266A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00266A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A94u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 83u, depth + 1u); else { c.pc = 0x002F1530u; return; } if (c.pc != 0x00266A94u) [[unlikely]] return; }
L_00266A94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));  goto L_00266AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266AD0; } }
L_00266AA4:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00266AB0u) [[unlikely]] return; }
L_00266AB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  goto L_00266AC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266AD0; } }
L_00266AC0:
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00266AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266AF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00266B60; } }
L_00266B20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[19].d[0]; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00266B58; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[20].w[0] + 164u), c.r[16].w[0]);  goto L_00266B34; }
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00266B34:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B40u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 88u, depth + 1u); else { c.pc = 0x002F16D0u; return; } if (c.pc != 0x00266B40u) [[unlikely]] return; }
L_00266B40:
    set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00266B50u) [[unlikely]] return; }
L_00266B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00266B60; } }
L_00266B58:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00266B60:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00266B20u | kUnwind; return; } goto L_00266B20; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00266B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00266BD4; } }
L_00266BB0:
    st32((c.r[18].w[0] + 164u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 88u, depth + 1u); else { c.pc = 0x002F16D0u; return; } if (c.pc != 0x00266BC0u) [[unlikely]] return; }
L_00266BC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00266BD0u) [[unlikely]] return; }
L_00266BD0:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00266BD4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00266BB0u | kUnwind; return; } goto L_00266BB0; }
    st32((c.r[18].w[0] + 164u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00266C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00266C38; }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C34u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x00266C34u) [[unlikely]] return; }
L_00266C34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00266C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00266C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 33u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 168u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00266C7C; }
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x00266C78u) [[unlikely]] return; }
L_00266C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00266C7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00266C90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00266D1C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_00266D00; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] << 48;  goto L_00266CEC; }
    c.r[5].d[0] = c.r[16].d[0] << 48;
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CE4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x00266CE4u) [[unlikely]] return; }
L_00266CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266CFC; } }
L_00266CEC:
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CFCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 268u, depth + 1u); else { c.pc = 0x0018B0E0u; return; } if (c.pc != 0x00266CFCu) [[unlikely]] return; }
L_00266CFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_00266D00:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00266D20; }
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D1Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 67u, depth + 1u); else { c.pc = 0x002F12C0u; return; } if (c.pc != 0x00266D1Cu) [[unlikely]] return; }
L_00266D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00266D20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00266D40:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_00266DE4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] - 6896u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0051[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00266D68:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_00266DE4; } }
L_00266D74:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266DE4; } }
L_00266D84:
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266DE4; } }
L_00266D94:
    set32(c.r[3], 0u + 34u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266DE4; } }
L_00266DA4:
    set32(c.r[5], 0u + 66u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266DE4; } }
L_00266DB8:
    set32(c.r[3], 0u + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00266DE4; } }
L_00266DC8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_00266DE4; } }
L_00266DD8:
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00266DE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00266DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00266E0Cu) [[unlikely]] return; }
L_00266E0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E18u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00266E18u) [[unlikely]] return; }
L_00266E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E20u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0026(c, 401u, depth + 1u); else { c.pc = 0x001BB8B0u; return; } if (c.pc != 0x00266E20u) [[unlikely]] return; }
L_00266E20:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E2Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0027(c, 202u, depth + 1u); else { c.pc = 0x001BE0A0u; return; } if (c.pc != 0x00266E2Cu) [[unlikely]] return; }
L_00266E2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21232u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21308u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    st32((c.r[16].w[0] + 312u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17235ull;
    set32(c.r[4], c.r[4].w[0] - 6864u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + 84u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E90u); st32((c.r[2].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00266E90u) [[unlikely]] return; }
L_00266E90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 379u, depth + 1u); else { c.pc = 0x00267370u; return; } if (c.pc != 0x00266EC4u) [[unlikely]] return; }
L_00266EC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 6832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266ED8u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00266ED8u) [[unlikely]] return; }
L_00266ED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266F00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F44u); set32(c.r[4], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00266F44u) [[unlikely]] return; }
L_00266F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_00267164; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00266F5Cu) [[unlikely]] return; }
L_00266F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00267060; } }
L_00266F64:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_00266F8C; }
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_00266F8C:
    set32(c.r[3], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[4], c.r[19].w[0] << 3);
    set32(c.r[2], ld32((c.r[21].w[0] + 344u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00267060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FB8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00266FB8u) [[unlikely]] return; }
L_00266FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00267164; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FD4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00266FD4u) [[unlikely]] return; }
L_00266FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0026704C; } }
L_00266FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FE4u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00266FE4u) [[unlikely]] return; }
L_00266FE4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00267000; }
    set32(c.r[4], c.r[22].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x00266FFCu) [[unlikely]] return; }
L_00266FFC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00267000:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[3].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 19;
L_0026704C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266FDCu | kUnwind; return; } goto L_00266FDC; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00267060:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00266F64u | kUnwind; return; } goto L_00266F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00267124; } }
L_00267074:
    set32(c.r[3], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[2], c.r[4].w[0] - c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 4);  if (t) { goto L_00267110; } }
L_00267094:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[23].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  if (t) { goto L_002670BC; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_002670C4; }
L_002670BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002670CC; } }
L_002670C4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002670CC:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 128u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670E8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002670E8u) [[unlikely]] return; }
L_002670E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00267100; }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 2;
L_00267100:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026710Cu); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026710Cu) [[unlikely]] return; }
L_0026710C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00267110:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267094u | kUnwind; return; } goto L_00267094; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00267124:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267074u | kUnwind; return; } goto L_00267074; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267140u); st32((c.r[20].w[0] + 332u), 0u);  if (depth < kMaxDepth) unit_0051(c, 399u, depth + 1u); else { c.pc = 0x00267640u; return; } if (c.pc != 0x00267140u) [[unlikely]] return; }
L_00267140:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 6800u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026715Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0026715Cu) [[unlikely]] return; }
L_0026715C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026717C; } }
L_00267164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267170u); set32(c.r[4], c.r[4].w[0] - 6752u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00267170u) [[unlikely]] return; }
L_00267170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267178u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 366u, depth + 1u); else { c.pc = 0x002671B0u; return; } if (c.pc != 0x00267178u) [[unlikely]] return; }
L_00267178:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026717C:
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
L_002671B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026733C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671F0u); set32(c.r[5], ld32((c.r[16].w[0] + 332u)));  if (depth < kMaxDepth) unit_0051(c, 402u, depth + 1u); else { c.pc = 0x002676D0u; return; } if (c.pc != 0x002671F0u) [[unlikely]] return; }
L_002671F0:
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00267268; } }
L_00267208:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00267254; } }
L_00267218:
    set32(c.r[3], c.r[21].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267234u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0051(c, 406u, depth + 1u); else { c.pc = 0x00267770u; return; } if (c.pc != 0x00267234u) [[unlikely]] return; }
L_00267234:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 80u), 0u);
    set32(c.r[4], c.r[19].w[0] + 128u);
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267250u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x00267250u) [[unlikely]] return; }
L_00267250:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00267254:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267218u | kUnwind; return; } goto L_00267218; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00267268:
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267208u | kUnwind; return; } goto L_00267208; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002672F8; } }
L_0026727C:
    set32(c.r[3], c.r[21].w[0] << 3);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002672CC; } }
L_0026728C:
    set32(c.r[22], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002672CC; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_002672C0; }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002672B4u) [[unlikely]] return; }
L_002672B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002672BCu) [[unlikely]] return; }
L_002672BC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002672C0:
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_002672CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026728Cu | kUnwind; return; } goto L_0026728C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002672F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672F0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002672F0u) [[unlikely]] return; }
L_002672F0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_002672F8:
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026727Cu | kUnwind; return; } goto L_0026727C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00267320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267318u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00267318u) [[unlikely]] return; }
L_00267318:
    st32((c.r[16].w[0] + 320u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00267320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 6688u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026733Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0026733Cu) [[unlikely]] return; }
L_0026733C:
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
L_00267370:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002671B0u | kUnwind; return; } goto L_002671B0; }
L_00267380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00267458; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00267444; } }
L_002673B8:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673D4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002673D4u) [[unlikely]] return; }
L_002673D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00267444; }
    set32(c.r[4], ld32((c.r[2].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00267440; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[5].w[0] << 3);  goto L_00267404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026741C; } }
L_00267404:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    c.r[3].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 6;
L_0026741C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026742Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x002041E0u; return; } if (c.pc != 0x0026742Cu) [[unlikely]] return; }
L_0026742C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00267440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267440u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00267440u) [[unlikely]] return; }
L_00267440:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00267444:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002673B8u | kUnwind; return; } goto L_002673B8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00267458:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00267470:
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00267480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00267498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002674A4; } }
L_00267498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674A0u);  if (depth < kMaxDepth) unit_0051(c, 388u, depth + 1u); else { c.pc = 0x002674B0u; return; } if (c.pc != 0x002674A0u) [[unlikely]] return; }
L_002674A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002674A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002674B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002674D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674D0u); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0051(c, 390u, depth + 1u); else { c.pc = 0x002674E0u; return; } if (c.pc != 0x002674D0u) [[unlikely]] return; }
L_002674D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002674D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002674E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 332u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00267518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267508u);  if (depth < kMaxDepth) unit_0051(c, 402u, depth + 1u); else { c.pc = 0x002676D0u; return; } if (c.pc != 0x00267508u) [[unlikely]] return; }
L_00267508:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267514u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 399u, depth + 1u); else { c.pc = 0x00267640u; return; } if (c.pc != 0x00267514u) [[unlikely]] return; }
L_00267514:
    st32((c.r[17].w[0] + 332u), c.r[16].w[0]);
    c.budget -= 1;
L_00267518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 18;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002675AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267580u);  if (depth < kMaxDepth) unit_0051(c, 390u, depth + 1u); else { c.pc = 0x002674E0u; return; } if (c.pc != 0x00267580u) [[unlikely]] return; }
L_00267580:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00267598; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_00267598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002675A4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002675A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675ACu);  if (depth < kMaxDepth) unit_005B(c, 331u, depth + 1u); else { c.pc = 0x0028F5A0u; return; } if (c.pc != 0x002675ACu) [[unlikely]] return; }
L_002675AC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002675B8; } }
    set32(c.r[5], c.r[20].w[0] + 304u);
    c.budget -= 1;
L_002675B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675CCu); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002675CCu) [[unlikely]] return; }
L_002675CC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026760C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 390u, depth + 1u); else { c.pc = 0x002674E0u; return; } if (c.pc != 0x002675E0u) [[unlikely]] return; }
L_002675E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002675F8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_002675F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00267604; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00267604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026760Cu);  if (depth < kMaxDepth) unit_005B(c, 331u, depth + 1u); else { c.pc = 0x0028F5A0u; return; } if (c.pc != 0x0026760Cu) [[unlikely]] return; }
L_0026760C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00267640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[4], c.r[18].w[0] << 3);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00267698; } }
L_00267674:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267694u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0051(c, 405u, depth + 1u); else { c.pc = 0x00267750u; return; } if (c.pc != 0x00267694u) [[unlikely]] return; }
L_00267694:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00267698:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267674u | kUnwind; return; } goto L_00267674; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002676D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0026771C; } }
L_002676FC:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267718u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0051(c, 406u, depth + 1u); else { c.pc = 0x00267770u; return; } if (c.pc != 0x00267718u) [[unlikely]] return; }
L_00267718:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026771C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002676FCu | kUnwind; return; } goto L_002676FC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00267750:
    set32(c.r[2], ld32((c.r[4].w[0] + 308u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { set32(c.r[4], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE360u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 222u, depth); }
L_00267770:
    set32(c.r[2], ld32((c.r[4].w[0] + 308u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { set32(c.r[4], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE3B0u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 224u, depth); }
L_00267790:
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_002677A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002677D0; } }
L_002677A4:
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_002677C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002677D0; } }
L_002677C0:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 4;
L_002677D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002677E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00267874; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21232u);
    set32(c.r[2], c.r[2].w[0] + 21288u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21308u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21320u);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 207u, depth + 1u); else { c.pc = 0x001BE140u; return; } if (c.pc != 0x00267838u) [[unlikely]] return; }
L_00267838:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267844u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 406u, depth + 1u); else { c.pc = 0x001BB960u; return; } if (c.pc != 0x00267844u) [[unlikely]] return; }
L_00267844:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00267850u) [[unlikely]] return; }
L_00267850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026785Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0026785Cu) [[unlikely]] return; }
L_0026785C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00267878; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00267874u) [[unlikely]] return; }
L_00267874:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00267878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267890:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002677E0u | kUnwind; return; } goto L_002677E0; }
L_002678A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267480u | kUnwind; return; } goto L_00267480; }
L_002678B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002677E0u | kUnwind; return; } goto L_002677E0; }
L_002678C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002677E0u | kUnwind; return; } goto L_002677E0; }
L_002678D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002678E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002678FCu) [[unlikely]] return; }
L_002678FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267908u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00267908u) [[unlikely]] return; }
L_00267908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28784u);
    set32(c.r[3], c.r[3].w[0] + 28840u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53500000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19795ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 52u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 84u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 236u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679ACu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002679ACu) [[unlikely]] return; }
L_002679AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 6640u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[28].w[0] - 30264u), 0u);
    st32((c.r[28].w[0] - 30308u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679D8u); st32((c.r[28].w[0] - 30304u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002679D8u) [[unlikely]] return; }
L_002679D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002679F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 62u, depth + 1u); else { c.pc = 0x00268890u; return; } if (c.pc != 0x00267A04u) [[unlikely]] return; }
L_00267A04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A10u); set32(c.r[4], c.r[4].w[0] - 6608u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00267A10u) [[unlikely]] return; }
L_00267A10:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267A30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00267BF4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267BF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267BF0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_00267AA8; }
L_00267AA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30308u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));  goto L_00267AC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267ABCu);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00267ABCu) [[unlikely]] return; }
L_00267ABC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_00267AC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_00267AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267AECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00267AECu) [[unlikely]] return; }
L_00267AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00267B34; } }
L_00267AF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B0Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00267B0Cu) [[unlikely]] return; }
L_00267B0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267B30; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[7], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B30u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x00267B30u) [[unlikely]] return; }
L_00267B30:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00267B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 92u)));  if (t) { goto L_00267BE4; } }
L_00267B3C:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00267BE0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00267BDC; } }
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[6].w[0] + 16u);  goto L_00267B90; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00267BDC; } }
    set32(c.r[4], c.r[6].w[0] + 16u);
    c.budget -= 1;
L_00267B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B98u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00267B98u) [[unlikely]] return; }
L_00267B98:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);  if (t) { goto L_00267BCC; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_00267BD4; } }
L_00267BCC:
    c.f[12] = ld32((c.r[5].w[0] + 80u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_00267BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BDCu);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00267BDCu) [[unlikely]] return; }
L_00267BDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00267BE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 1;
L_00267BE4:
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267B3Cu | kUnwind; return; } goto L_00267B3C; }
L_00267BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00267BF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00267C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00267C84; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00267C88; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267C84; } }
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00267C70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C6Cu);  if (depth < kMaxDepth) unit_0070(c, 288u, depth + 1u); else { c.pc = 0x002E2D80u; return; } if (c.pc != 0x00267C6Cu) [[unlikely]] return; }
L_00267C6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00267C70:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 304u, depth + 1u); else { c.pc = 0x002E3080u; return; } if (c.pc != 0x00267C84u) [[unlikely]] return; }
L_00267C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00267C88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00267E04; }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267E00; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CF8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x00267CF8u) [[unlikely]] return; }
L_00267CF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 74u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00267D14u) [[unlikely]] return; }
L_00267D14:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 3000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D24u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0064(c, 73u, depth + 1u); else { c.pc = 0x002B08C0u; return; } if (c.pc != 0x00267D24u) [[unlikely]] return; }
L_00267D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D2Cu);  if (depth < kMaxDepth) unit_0064(c, 81u, depth + 1u); else { c.pc = 0x002B0960u; return; } if (c.pc != 0x00267D2Cu) [[unlikely]] return; }
L_00267D2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30308u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_00267D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D40u); st32((c.r[28].w[0] - 31604u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00267D40u) [[unlikely]] return; }
L_00267D40:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_00267D44:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D5Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0068(c, 190u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x00267D5Cu) [[unlikely]] return; }
L_00267D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00267DC0; } }
L_00267D64:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00267DC0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00267DBC; } }
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00267DB4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00267DBC; } }
L_00267DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DBCu);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00267DBCu) [[unlikely]] return; }
L_00267DBC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00267DC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267D64u | kUnwind; return; } goto L_00267D64; }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_00267DEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 295u, depth + 1u); else { c.pc = 0x002E2F40u; return; } if (c.pc != 0x00267DE8u) [[unlikely]] return; }
L_00267DE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00267DEC:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 310u, depth + 1u); else { c.pc = 0x002E3180u; return; } if (c.pc != 0x00267E00u) [[unlikely]] return; }
L_00267E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00267E04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00267EA4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267EA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E78u);  if (depth < kMaxDepth) unit_0064(c, 77u, depth + 1u); else { c.pc = 0x002B0910u; return; } if (c.pc != 0x00267E78u) [[unlikely]] return; }
L_00267E78:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00267E88u) [[unlikely]] return; }
L_00267E88:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EA0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x00267EA0u) [[unlikely]] return; }
L_00267EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00267EA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  [[clang::musttail]] return unit_0052(c, 6u, depth); }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = ld32((c.r[17].w[0] + 116u));  [[clang::musttail]] return unit_0052(c, 5u, depth); }
    set32(c.r[4], ld32((c.r[28].w[0] - 30308u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00267F7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F14u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00267F14u) [[unlikely]] return; }
L_00267F14:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267F7C; } }
L_00267F20:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00267F7C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 516u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267F78; } }
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267F70; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267F78; } }
L_00267F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F78u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00267F78u) [[unlikely]] return; }
L_00267F78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00267F7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267F20u | kUnwind; return; } goto L_00267F20; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_00267FA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267FA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 301u, depth + 1u); else { c.pc = 0x002E3010u; return; } if (c.pc != 0x00267FA4u) [[unlikely]] return; }
L_00267FA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00267FA8:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00267FC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267FBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 314u, depth + 1u); else { c.pc = 0x002E3200u; return; } if (c.pc != 0x00267FBCu) [[unlikely]] return; }
L_00267FBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00267FC0:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00267FFC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_00267FFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0052(c, 1u, depth);
}

}
