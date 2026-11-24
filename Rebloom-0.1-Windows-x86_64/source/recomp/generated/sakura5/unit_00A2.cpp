#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A2[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 45, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238,
    0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0,
    0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
};

void unit_00A2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A8000;
    case 2u: goto L_003A8018;
    case 3u: goto L_003A8034;
    case 4u: goto L_003A8040;
    case 5u: goto L_003A8054;
    case 6u: goto L_003A8088;
    case 7u: goto L_003A8098;
    case 8u: goto L_003A80B4;
    case 9u: goto L_003A80E4;
    case 10u: goto L_003A80F0;
    case 11u: goto L_003A8108;
    case 12u: goto L_003A8124;
    case 13u: goto L_003A815C;
    case 14u: goto L_003A8178;
    case 15u: goto L_003A8194;
    case 16u: goto L_003A81CC;
    case 17u: goto L_003A81E8;
    case 18u: goto L_003A81F8;
    case 19u: goto L_003A8210;
    case 20u: goto L_003A8258;
    case 21u: goto L_003A8278;
    case 22u: goto L_003A82A0;
    case 23u: goto L_003A82C8;
    case 24u: goto L_003A82D4;
    case 25u: goto L_003A82E4;
    case 26u: goto L_003A8318;
    case 27u: goto L_003A832C;
    case 28u: goto L_003A8358;
    case 29u: goto L_003A8370;
    case 30u: goto L_003A8390;
    case 31u: goto L_003A8398;
    case 32u: goto L_003A83A8;
    case 33u: goto L_003A83C8;
    case 34u: goto L_003A840C;
    case 35u: goto L_003A8428;
    case 36u: goto L_003A8450;
    case 37u: goto L_003A8458;
    case 38u: goto L_003A8460;
    case 39u: goto L_003A8468;
    case 40u: goto L_003A8470;
    case 41u: goto L_003A8478;
    case 42u: goto L_003A8480;
    case 43u: goto L_003A8488;
    case 44u: goto L_003A8490;
    case 45u: goto L_003A8498;
    case 46u: goto L_003A849C;
    case 47u: goto L_003A84A8;
    case 48u: goto L_003A84E0;
    case 49u: goto L_003A84F4;
    case 50u: goto L_003A8508;
    case 51u: goto L_003A8520;
    case 52u: goto L_003A8550;
    case 53u: goto L_003A8574;
    case 54u: goto L_003A8584;
    case 55u: goto L_003A85D8;
    case 56u: goto L_003A85E8;
    case 57u: goto L_003A8610;
    case 58u: goto L_003A8634;
    case 59u: goto L_003A8648;
    case 60u: goto L_003A8658;
    case 61u: goto L_003A8668;
    case 62u: goto L_003A8680;
    case 63u: goto L_003A8690;
    case 64u: goto L_003A86C0;
    case 65u: goto L_003A86D4;
    case 66u: goto L_003A86DC;
    case 67u: goto L_003A86F0;
    case 68u: goto L_003A8720;
    case 69u: goto L_003A8734;
    case 70u: goto L_003A8758;
    case 71u: goto L_003A876C;
    case 72u: goto L_003A8798;
    case 73u: goto L_003A87D8;
    case 74u: goto L_003A8820;
    case 75u: goto L_003A8890;
    case 76u: goto L_003A88A4;
    case 77u: goto L_003A88B8;
    case 78u: goto L_003A88E8;
    case 79u: goto L_003A8960;
    case 80u: goto L_003A8970;
    case 81u: goto L_003A8988;
    case 82u: goto L_003A899C;
    case 83u: goto L_003A89AC;
    case 84u: goto L_003A89F8;
    case 85u: goto L_003A8A00;
    case 86u: goto L_003A8A54;
    case 87u: goto L_003A8A68;
    case 88u: goto L_003A8A8C;
    case 89u: goto L_003A8AA4;
    case 90u: goto L_003A8AC8;
    case 91u: goto L_003A8AD8;
    case 92u: goto L_003A8AEC;
    case 93u: goto L_003A8AF8;
    case 94u: goto L_003A8B18;
    case 95u: goto L_003A8B38;
    case 96u: goto L_003A8B48;
    case 97u: goto L_003A8B74;
    case 98u: goto L_003A8B88;
    case 99u: goto L_003A8BAC;
    case 100u: goto L_003A8BC0;
    case 101u: goto L_003A8BD4;
    case 102u: goto L_003A8BE4;
    case 103u: goto L_003A8BF8;
    case 104u: goto L_003A8C0C;
    case 105u: goto L_003A8C24;
    case 106u: goto L_003A8C3C;
    case 107u: goto L_003A8C50;
    case 108u: goto L_003A8C7C;
    case 109u: goto L_003A8C98;
    case 110u: goto L_003A8CB0;
    case 111u: goto L_003A8CC4;
    case 112u: goto L_003A8CD8;
    case 113u: goto L_003A8CEC;
    case 114u: goto L_003A8D00;
    case 115u: goto L_003A8D20;
    case 116u: goto L_003A8D38;
    case 117u: goto L_003A8D4C;
    case 118u: goto L_003A8D60;
    case 119u: goto L_003A8D78;
    case 120u: goto L_003A8D94;
    case 121u: goto L_003A8DA4;
    case 122u: goto L_003A8DB8;
    case 123u: goto L_003A8DCC;
    case 124u: goto L_003A8DD4;
    case 125u: goto L_003A8DE4;
    case 126u: goto L_003A8DF0;
    case 127u: goto L_003A8E18;
    case 128u: goto L_003A8E64;
    case 129u: goto L_003A8EA8;
    case 130u: goto L_003A8ED0;
    case 131u: goto L_003A8F14;
    case 132u: goto L_003A8F50;
    case 133u: goto L_003A8F64;
    case 134u: goto L_003A8F74;
    case 135u: goto L_003A8F84;
    case 136u: goto L_003A8F94;
    case 137u: goto L_003A8FC0;
    case 138u: goto L_003A8FF4;
    case 139u: goto L_003A9014;
    case 140u: goto L_003A9030;
    case 141u: goto L_003A9070;
    case 142u: goto L_003A9080;
    case 143u: goto L_003A9090;
    case 144u: goto L_003A90F8;
    case 145u: goto L_003A9140;
    case 146u: goto L_003A9150;
    case 147u: goto L_003A9194;
    case 148u: goto L_003A91B8;
    case 149u: goto L_003A91CC;
    case 150u: goto L_003A91E0;
    case 151u: goto L_003A91F4;
    case 152u: goto L_003A9218;
    case 153u: goto L_003A922C;
    case 154u: goto L_003A9250;
    case 155u: goto L_003A92C0;
    case 156u: goto L_003A92D8;
    case 157u: goto L_003A9304;
    case 158u: goto L_003A9314;
    case 159u: goto L_003A9334;
    case 160u: goto L_003A9348;
    case 161u: goto L_003A9370;
    case 162u: goto L_003A93D8;
    case 163u: goto L_003A93E8;
    case 164u: goto L_003A9418;
    case 165u: goto L_003A9488;
    case 166u: goto L_003A94C0;
    case 167u: goto L_003A9524;
    case 168u: goto L_003A9588;
    case 169u: goto L_003A9590;
    case 170u: goto L_003A9598;
    case 171u: goto L_003A95A0;
    case 172u: goto L_003A95A8;
    case 173u: goto L_003A95B8;
    case 174u: goto L_003A95C8;
    case 175u: goto L_003A95D4;
    case 176u: goto L_003A95E4;
    case 177u: goto L_003A9600;
    case 178u: goto L_003A9608;
    case 179u: goto L_003A9610;
    case 180u: goto L_003A9648;
    case 181u: goto L_003A9664;
    case 182u: goto L_003A96B0;
    case 183u: goto L_003A96CC;
    case 184u: goto L_003A9700;
    case 185u: goto L_003A9708;
    case 186u: goto L_003A9710;
    case 187u: goto L_003A9728;
    case 188u: goto L_003A9738;
    case 189u: goto L_003A9760;
    case 190u: goto L_003A9768;
    case 191u: goto L_003A9774;
    case 192u: goto L_003A9798;
    case 193u: goto L_003A97CC;
    case 194u: goto L_003A97E4;
    case 195u: goto L_003A9800;
    case 196u: goto L_003A9834;
    case 197u: goto L_003A984C;
    case 198u: goto L_003A9868;
    case 199u: goto L_003A9880;
    case 200u: goto L_003A9894;
    case 201u: goto L_003A98C0;
    case 202u: goto L_003A98C8;
    case 203u: goto L_003A98D0;
    case 204u: goto L_003A98D8;
    case 205u: goto L_003A98E8;
    case 206u: goto L_003A9920;
    case 207u: goto L_003A9948;
    case 208u: goto L_003A995C;
    case 209u: goto L_003A9988;
    case 210u: goto L_003A999C;
    case 211u: goto L_003A99B0;
    case 212u: goto L_003A99C8;
    case 213u: goto L_003A99D8;
    case 214u: goto L_003A99F4;
    case 215u: goto L_003A9A00;
    case 216u: goto L_003A9A14;
    case 217u: goto L_003A9A40;
    case 218u: goto L_003A9A58;
    case 219u: goto L_003A9A80;
    case 220u: goto L_003A9A94;
    case 221u: goto L_003A9A9C;
    case 222u: goto L_003A9AA8;
    case 223u: goto L_003A9AC0;
    case 224u: goto L_003A9AD0;
    case 225u: goto L_003A9AE0;
    case 226u: goto L_003A9B14;
    case 227u: goto L_003A9B40;
    case 228u: goto L_003A9B88;
    case 229u: goto L_003A9BEC;
    case 230u: goto L_003A9C40;
    case 231u: goto L_003A9C50;
    case 232u: goto L_003A9C58;
    case 233u: goto L_003A9D18;
    case 234u: goto L_003A9D24;
    case 235u: goto L_003A9D40;
    case 236u: goto L_003A9D4C;
    case 237u: goto L_003A9D68;
    case 238u: goto L_003A9D7C;
    case 239u: goto L_003A9D8C;
    case 240u: goto L_003A9D9C;
    case 241u: goto L_003A9DB0;
    case 242u: goto L_003A9DC8;
    case 243u: goto L_003A9DD8;
    case 244u: goto L_003A9DEC;
    case 245u: goto L_003A9DFC;
    case 246u: goto L_003A9E14;
    case 247u: goto L_003A9E28;
    case 248u: goto L_003A9E40;
    case 249u: goto L_003A9E78;
    case 250u: goto L_003A9E8C;
    case 251u: goto L_003A9E98;
    case 252u: goto L_003A9EA4;
    case 253u: goto L_003A9EB4;
    case 254u: goto L_003A9EC0;
    case 255u: goto L_003A9ED8;
    case 256u: goto L_003A9F10;
    case 257u: goto L_003A9F2C;
    case 258u: goto L_003A9F80;
    case 259u: goto L_003A9FA4;
    case 260u: goto L_003AA000;
    case 261u: goto L_003AA01C;
    case 262u: goto L_003AA058;
    case 263u: goto L_003AA070;
    case 264u: goto L_003AA090;
    case 265u: goto L_003AA0A0;
    case 266u: goto L_003AA0B0;
    case 267u: goto L_003AA0E0;
    case 268u: goto L_003AA0F4;
    case 269u: goto L_003AA10C;
    case 270u: goto L_003AA134;
    case 271u: goto L_003AA14C;
    case 272u: goto L_003AA170;
    case 273u: goto L_003AA18C;
    case 274u: goto L_003AA1BC;
    case 275u: goto L_003AA200;
    case 276u: goto L_003AA224;
    case 277u: goto L_003AA25C;
    case 278u: goto L_003AA278;
    case 279u: goto L_003AA2AC;
    case 280u: goto L_003AA2C8;
    case 281u: goto L_003AA2E4;
    case 282u: goto L_003AA314;
    case 283u: goto L_003AA360;
    case 284u: goto L_003AA3B8;
    case 285u: goto L_003AA3D4;
    case 286u: goto L_003AA418;
    case 287u: goto L_003AA430;
    case 288u: goto L_003AA464;
    case 289u: goto L_003AA49C;
    case 290u: goto L_003AA4B8;
    case 291u: goto L_003AA4F8;
    case 292u: goto L_003AA538;
    case 293u: goto L_003AA58C;
    case 294u: goto L_003AA5C8;
    case 295u: goto L_003AA660;
    case 296u: goto L_003AA6C4;
    case 297u: goto L_003AA6D8;
    case 298u: goto L_003AA708;
    case 299u: goto L_003AA770;
    case 300u: goto L_003AA7A0;
    case 301u: goto L_003AA7D4;
    case 302u: goto L_003AA838;
    case 303u: goto L_003AA878;
    case 304u: goto L_003AA898;
    case 305u: goto L_003AA8B8;
    case 306u: goto L_003AA8C4;
    case 307u: goto L_003AA8E0;
    case 308u: goto L_003AA8FC;
    case 309u: goto L_003AA904;
    case 310u: goto L_003AA950;
    case 311u: goto L_003AA98C;
    case 312u: goto L_003AA9CC;
    case 313u: goto L_003AAA08;
    case 314u: goto L_003AAA24;
    case 315u: goto L_003AAA60;
    case 316u: goto L_003AAA7C;
    case 317u: goto L_003AAAC0;
    case 318u: goto L_003AAAD4;
    case 319u: goto L_003AAB08;
    case 320u: goto L_003AAB90;
    case 321u: goto L_003AABD8;
    case 322u: goto L_003AABFC;
    case 323u: goto L_003AAC20;
    case 324u: goto L_003AAC6C;
    case 325u: goto L_003AAC84;
    case 326u: goto L_003AAC94;
    case 327u: goto L_003AACD4;
    case 328u: goto L_003AACE8;
    case 329u: goto L_003AAD60;
    case 330u: goto L_003AAD88;
    case 331u: goto L_003AADB0;
    case 332u: goto L_003AADC4;
    case 333u: goto L_003AAE08;
    case 334u: goto L_003AAE30;
    case 335u: goto L_003AAE44;
    case 336u: goto L_003AAE88;
    case 337u: goto L_003AAE98;
    case 338u: goto L_003AAEA8;
    case 339u: goto L_003AAEC8;
    case 340u: goto L_003AAEFC;
    case 341u: goto L_003AAF18;
    case 342u: goto L_003AAF44;
    case 343u: goto L_003AAF88;
    case 344u: goto L_003AAFBC;
    case 345u: goto L_003AAFD4;
    case 346u: goto L_003AAFE8;
    case 347u: goto L_003AB008;
    case 348u: goto L_003AB028;
    case 349u: goto L_003AB060;
    case 350u: goto L_003AB080;
    case 351u: goto L_003AB0BC;
    case 352u: goto L_003AB0D4;
    case 353u: goto L_003AB0E8;
    case 354u: goto L_003AB108;
    case 355u: goto L_003AB128;
    case 356u: goto L_003AB18C;
    case 357u: goto L_003AB1C0;
    case 358u: goto L_003AB1E0;
    case 359u: goto L_003AB21C;
    case 360u: goto L_003AB234;
    case 361u: goto L_003AB250;
    case 362u: goto L_003AB268;
    case 363u: goto L_003AB2B8;
    case 364u: goto L_003AB2D4;
    case 365u: goto L_003AB310;
    case 366u: goto L_003AB328;
    case 367u: goto L_003AB34C;
    case 368u: goto L_003AB390;
    case 369u: goto L_003AB3B0;
    case 370u: goto L_003AB3CC;
    case 371u: goto L_003AB408;
    case 372u: goto L_003AB420;
    case 373u: goto L_003AB43C;
    case 374u: goto L_003AB480;
    case 375u: goto L_003AB4B0;
    case 376u: goto L_003AB4E8;
    case 377u: goto L_003AB570;
    case 378u: goto L_003AB5B8;
    case 379u: goto L_003AB628;
    case 380u: goto L_003AB640;
    case 381u: goto L_003AB658;
    case 382u: goto L_003AB66C;
    case 383u: goto L_003AB684;
    case 384u: goto L_003AB698;
    case 385u: goto L_003AB6C8;
    case 386u: goto L_003AB6E8;
    case 387u: goto L_003AB720;
    case 388u: goto L_003AB730;
    case 389u: goto L_003AB750;
    case 390u: goto L_003AB788;
    case 391u: goto L_003AB794;
    case 392u: goto L_003AB7AC;
    case 393u: goto L_003AB7D8;
    case 394u: goto L_003AB7FC;
    case 395u: goto L_003AB828;
    case 396u: goto L_003AB84C;
    case 397u: goto L_003AB878;
    case 398u: goto L_003AB8B4;
    case 399u: goto L_003AB8DC;
    case 400u: goto L_003AB900;
    case 401u: goto L_003AB948;
    case 402u: goto L_003AB97C;
    case 403u: goto L_003AB9A0;
    case 404u: goto L_003AB9B0;
    case 405u: goto L_003AB9CC;
    case 406u: goto L_003ABA88;
    case 407u: goto L_003ABAA4;
    case 408u: goto L_003ABAD4;
    case 409u: goto L_003ABB20;
    case 410u: goto L_003ABB3C;
    case 411u: goto L_003ABB6C;
    case 412u: goto L_003ABBB0;
    case 413u: goto L_003ABC28;
    case 414u: goto L_003ABC4C;
    case 415u: goto L_003ABC88;
    case 416u: goto L_003ABCA8;
    case 417u: goto L_003ABCD8;
    case 418u: goto L_003ABCFC;
    case 419u: goto L_003ABD70;
    case 420u: goto L_003ABD80;
    case 421u: goto L_003ABD88;
    case 422u: goto L_003ABDB0;
    case 423u: goto L_003ABDC4;
    case 424u: goto L_003ABDD4;
    case 425u: goto L_003ABDD8;
    case 426u: goto L_003ABDE8;
    case 427u: goto L_003ABDF8;
    case 428u: goto L_003ABE0C;
    case 429u: goto L_003ABE18;
    case 430u: goto L_003ABE24;
    case 431u: goto L_003ABE34;
    case 432u: goto L_003ABE40;
    case 433u: goto L_003ABE4C;
    case 434u: goto L_003ABE58;
    case 435u: goto L_003ABE68;
    case 436u: goto L_003ABE98;
    case 437u: goto L_003ABED0;
    case 438u: goto L_003ABFA8;
    case 439u: goto L_003ABFCC;
    case 440u: goto L_003ABFF0;
    default: bad_entry(c, 0x003A8000u); return;
    }
L_003A8000:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8034u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x003A8034u) [[unlikely]] return; }
L_003A8034:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8054u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A8054u) [[unlikely]] return; }
L_003A8054:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 323ull;  if (t) { goto L_003A8078; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A8078:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003A8088; }
L_003A8088:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_003A8098:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A80B4u) [[unlikely]] return; }
L_003A80B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A80D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 324ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A80D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 137u, depth + 1u); else { c.pc = 0x003AD910u; return; } if (c.pc != 0x003A80E4u) [[unlikely]] return; }
L_003A80E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 367u, depth + 1u); else { c.pc = 0x0039AAA0u; return; } if (c.pc != 0x003A80F0u) [[unlikely]] return; }
L_003A80F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8108:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8124u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A8124u) [[unlikely]] return; }
L_003A8124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 325ull;  if (t) { goto L_003A8150; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A8150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A815Cu); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x003A815Cu) [[unlikely]] return; }
L_003A815C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8194u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A8194u) [[unlikely]] return; }
L_003A8194:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 326ull;  if (t) { goto L_003A81C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A81C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81CCu); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x003A81CCu) [[unlikely]] return; }
L_003A81CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A81E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81F8u);  if (depth < kMaxDepth) unit_00A2(c, 19u, depth + 1u); else { c.pc = 0x003A8210u; return; } if (c.pc != 0x003A81F8u) [[unlikely]] return; }
L_003A81F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 10436u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5A5A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 17040u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] | 23130ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A8248; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 513ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A8248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 4u, depth); }
L_003A8278:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8294; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003A8294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A82A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 10364u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 10;
L_003A82C8:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A82D4u) [[unlikely]] return; }
L_003A82D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A82EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82E4u);  if (depth < kMaxDepth) unit_00A2(c, 21u, depth + 1u); else { c.pc = 0x003A8278u; return; } if (c.pc != 0x003A82E4u) [[unlikely]] return; }
L_003A82E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A8304; } }
L_003A82EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A82C8u | kUnwind; return; } goto L_003A82C8; }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003A8304:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A832Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A832Cu) [[unlikely]] return; }
L_003A832C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 312ull;  if (t) { goto L_003A8350; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A8350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8358u);  if (depth < kMaxDepth) unit_00A2(c, 33u, depth + 1u); else { c.pc = 0x003A83C8u; return; } if (c.pc != 0x003A8358u) [[unlikely]] return; }
L_003A8358:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 10364u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    c.budget -= 8;
L_003A8390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8398u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A8398u) [[unlikely]] return; }
L_003A8398:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003A83AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83A8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 33u, depth + 1u); else { c.pc = 0x003A83C8u; return; } if (c.pc != 0x003A83A8u) [[unlikely]] return; }
L_003A83A8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003A83AC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8390u | kUnwind; return; } goto L_003A8390; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003A9218; }
L_003A83C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A84C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A84C8; }
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A840Cu);  if (depth < kMaxDepth) unit_00A4(c, 334u, depth + 1u); else { c.pc = 0x003B3D58u; return; } if (c.pc != 0x003A840Cu) [[unlikely]] return; }
L_003A840C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 72u)));  goto L_003A842C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 48u, depth + 1u); else { c.pc = 0x003A84E0u; return; } if (c.pc != 0x003A8428u) [[unlikely]] return; }
L_003A8428:
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_003A842C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), c.r[16].w[0]);  goto L_003A84A0; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 17072u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A8000u < 16384u) { entry = entries_00A2[(t - 0x003A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A8450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 51u, depth + 1u); else { c.pc = 0x003A8520u; return; } if (c.pc != 0x003A8458u) [[unlikely]] return; }
L_003A8458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A849C; } }
L_003A8460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 52u, depth + 1u); else { c.pc = 0x003A8550u; return; } if (c.pc != 0x003A8468u) [[unlikely]] return; }
L_003A8468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A849C; } }
L_003A8470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 78u, depth + 1u); else { c.pc = 0x003A88E8u; return; } if (c.pc != 0x003A8478u) [[unlikely]] return; }
L_003A8478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A849C; } }
L_003A8480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8488u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x003A8988u; return; } if (c.pc != 0x003A8488u) [[unlikely]] return; }
L_003A8488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A849C; } }
L_003A8490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x003A89F8u; return; } if (c.pc != 0x003A8498u) [[unlikely]] return; }
L_003A8498:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A849C:
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 1;
L_003A84A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A84A8u); set32(c.r[16], c.r[17].w[0] + 14168u);  if (depth < kMaxDepth) unit_00A4(c, 334u, depth + 1u); else { c.pc = 0x003B3D58u; return; } if (c.pc != 0x003A84A8u) [[unlikely]] return; }
L_003A84A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] - c.r[18].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 140u, depth); }
L_003A84C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A84E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A84F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 50u, depth + 1u); else { c.pc = 0x003A8508u; return; } if (c.pc != 0x003A84F4u) [[unlikely]] return; }
L_003A84F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AABD8; }
L_003A8508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 189u, depth); }
L_003A8520:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003A8548; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_003A8548; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 2u);  goto L_003A8548; }
L_003A8548:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003A8550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8574u); set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_00A2(c, 57u, depth + 1u); else { c.pc = 0x003A8610u; return; } if (c.pc != 0x003A8574u) [[unlikely]] return; }
L_003A8574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003A85F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x003A86C0u; return; } if (c.pc != 0x003A8584u) [[unlikely]] return; }
L_003A8584:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003A85F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A85B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A85C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A85FC; } }
    c.budget -= 1;
L_003A85B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003A85D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A85D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A85FC; } }
L_003A85C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_003A85F4; } }
L_003A85D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 85u, depth + 1u); else { c.pc = 0x003A8A00u; return; } if (c.pc != 0x003A85D8u) [[unlikely]] return; }
L_003A85D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A85F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85E8u); set32(c.r[18], 0u + 4u);  if (depth < kMaxDepth) unit_00A2(c, 213u, depth + 1u); else { c.pc = 0x003A99D8u; return; } if (c.pc != 0x003A85E8u) [[unlikely]] return; }
L_003A85E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A85F8; } }
L_003A85F0:
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_003A85F4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003A85F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A85FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8634u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8634u) [[unlikely]] return; }
L_003A8634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003A8660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8648u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x003A8648u) [[unlikely]] return; }
L_003A8648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8658u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003A8658u) [[unlikely]] return; }
L_003A8658:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003A8660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8668u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8668u) [[unlikely]] return; }
L_003A8668:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003A8694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8680u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x003A8680u) [[unlikely]] return; }
L_003A8680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8690u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003A8690u) [[unlikely]] return; }
L_003A8690:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_003A8694:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A86A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A86A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A86A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A86C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A86D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 67u, depth + 1u); else { c.pc = 0x003A86F0u; return; } if (c.pc != 0x003A86D4u) [[unlikely]] return; }
L_003A86D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A86DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 72u, depth + 1u); else { c.pc = 0x003A8798u; return; } if (c.pc != 0x003A86DCu) [[unlikely]] return; }
L_003A86DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003A8820; }
L_003A86F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2564u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003A8740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8720u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A8720u) [[unlikely]] return; }
L_003A8720:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003A8740; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8734u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 483u, depth + 1u); else { c.pc = 0x0039BC70u; return; } if (c.pc != 0x003A8734u) [[unlikely]] return; }
L_003A8734:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_003A873C; }
L_003A873C:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_003A8740:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  goto L_003A8780; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8758u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A8758u) [[unlikely]] return; }
L_003A8758:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003A877C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A876Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 483u, depth + 1u); else { c.pc = 0x0039BC70u; return; } if (c.pc != 0x003A876Cu) [[unlikely]] return; }
L_003A876C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003A877C; }
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A877C:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003A8780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AABA8; }
L_003A8798:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2564u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003A87DC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003A87DC; }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A87D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003A87D8u) [[unlikely]] return; }
L_003A87D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003A87DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A8810; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A8810; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 15u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AB7D8; }
L_003A8810:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[17].w[0] + 2564u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[7].d[0];
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    c.r[2].d[0] = c.r[5].d[0] | 2ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[16], 0u + 2u);  if (t) { goto L_003A88C4; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003A8880; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_003A88C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003A88C4; } }
L_003A8880:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 3u);  if (t) { goto L_003A88C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8890u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8890u) [[unlikely]] return; }
L_003A8890:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A88C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88A4u);  if (depth < kMaxDepth) unit_00A4(c, 335u, depth + 1u); else { c.pc = 0x003B3E80u; return; } if (c.pc != 0x003A88A4u) [[unlikely]] return; }
L_003A88A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 3u);  goto L_003A88C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88B8u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A88B8u) [[unlikely]] return; }
L_003A88B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A88C8; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_003A88C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A88C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 25u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AB7D8; }
L_003A88E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_003A8950; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A8930; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A8978; } }
    c.budget -= 1;
L_003A8930:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003A8958; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A8978; } }
L_003A8948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_003A8970; } }
L_003A8950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_003A8970; } }
L_003A8958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 85u, depth + 1u); else { c.pc = 0x003A8A00u; return; } if (c.pc != 0x003A8960u) [[unlikely]] return; }
L_003A8960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8970u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_00A2(c, 213u, depth + 1u); else { c.pc = 0x003A99D8u; return; } if (c.pc != 0x003A8970u) [[unlikely]] return; }
L_003A8970:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003A8978:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8988:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A899Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 132u, depth + 1u); else { c.pc = 0x003A8F50u; return; } if (c.pc != 0x003A899Cu) [[unlikely]] return; }
L_003A899C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A89B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89ACu);  if (depth < kMaxDepth) unit_00A2(c, 87u, depth + 1u); else { c.pc = 0x003A8A68u; return; } if (c.pc != 0x003A89ACu) [[unlikely]] return; }
L_003A89AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_003A89C0; }
L_003A89B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_003A89E8; } }
    c.budget -= 1;
L_003A89C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003A89E4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A89E8; } }
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_003A89E4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003A89E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A89F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_003A8A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[5].w[0] + 2564u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 3368u);  if (t) { goto L_003A8A58; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003A8A5C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003A8A5C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 716u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003A8A5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A54u);  if (depth < kMaxDepth) unit_00A2(c, 140u, depth + 1u); else { c.pc = 0x003A9030u; return; } if (c.pc != 0x003A8A54u) [[unlikely]] return; }
L_003A8A54:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A8A58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A8A5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8A68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 2384u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A8Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A8A8Cu) [[unlikely]] return; }
L_003A8A8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AA4u);  if (depth < kMaxDepth) unit_00A2(c, 94u, depth + 1u); else { c.pc = 0x003A8B18u; return; } if (c.pc != 0x003A8AA4u) [[unlikely]] return; }
L_003A8AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003A8AF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AC8u); st32((c.r[17].w[0] + 32u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 358u, depth + 1u); else { c.pc = 0x003A7F20u; return; } if (c.pc != 0x003A8AC8u) [[unlikely]] return; }
L_003A8AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A8AF0; } }
L_003A8AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 109u, depth + 1u); else { c.pc = 0x003A8C98u; return; } if (c.pc != 0x003A8AD8u) [[unlikely]] return; }
L_003A8AD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A8AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AECu); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 358u, depth + 1u); else { c.pc = 0x003A7F20u; return; } if (c.pc != 0x003A8AECu) [[unlikely]] return; }
L_003A8AEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AF8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A8AF8u) [[unlikely]] return; }
L_003A8AF8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8B18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 67u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B38u); set32(c.r[17], c.r[16].w[0] + 2384u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8B38u) [[unlikely]] return; }
L_003A8B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B48u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8B48u) [[unlikely]] return; }
L_003A8B48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A8C84; }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C80; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A8C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 119u, depth + 1u); else { c.pc = 0x003A8D78u; return; } if (c.pc != 0x003A8B74u) [[unlikely]] return; }
L_003A8B74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A8C80; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B88u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8B88u) [[unlikely]] return; }
L_003A8B88:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8BA4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A8BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BACu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8BACu) [[unlikely]] return; }
L_003A8BAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009F(c, 8u, depth + 1u); else { c.pc = 0x0039C470u; return; } if (c.pc != 0x003A8BC0u) [[unlikely]] return; }
L_003A8BC0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A8BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003A8BD4u) [[unlikely]] return; }
L_003A8BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 8u, depth + 1u); else { c.pc = 0x0039C470u; return; } if (c.pc != 0x003A8BE4u) [[unlikely]] return; }
L_003A8BE4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C80; } }
L_003A8BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BF8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8BF8u) [[unlikely]] return; }
L_003A8BF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_003A8C18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 127u, depth + 1u); else { c.pc = 0x003A8E18u; return; } if (c.pc != 0x003A8C0Cu) [[unlikely]] return; }
L_003A8C0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C80; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003A8C18:
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 42u, depth + 1u); else { c.pc = 0x003AC6E0u; return; } if (c.pc != 0x003A8C24u) [[unlikely]] return; }
L_003A8C24:
    set32(c.r[3], c.r[16].w[0] + 3368u);
    set32(c.r[17], ld32((c.r[3].w[0] + 648u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 68u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C3Cu); set32(c.r[16], ld32((c.r[3].w[0] + 644u)));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8C3Cu) [[unlikely]] return; }
L_003A8C3C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C50u); c.r[6].d[0] = c.r[6].d[0] | 16960ull;  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003A8C50u) [[unlikely]] return; }
L_003A8C50:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_003A8C64; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003A8C70; } }
L_003A8C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C80; } }
    c.budget -= 1;
L_003A8C70:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C7Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 65u, depth + 1u); else { c.pc = 0x003ACAD8u; return; } if (c.pc != 0x003A8C7Cu) [[unlikely]] return; }
L_003A8C7C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003A8C80:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A8C84:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8C98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CB0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 119u, depth + 1u); else { c.pc = 0x003A8D78u; return; } if (c.pc != 0x003A8CB0u) [[unlikely]] return; }
L_003A8CB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003A8D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CC4u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8CC4u) [[unlikely]] return; }
L_003A8CC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CD8u);  if (depth < kMaxDepth) unit_00A2(c, 127u, depth + 1u); else { c.pc = 0x003A8E18u; return; } if (c.pc != 0x003A8CD8u) [[unlikely]] return; }
L_003A8CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8D64; } }
L_003A8CE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CECu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8CECu) [[unlikely]] return; }
L_003A8CEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D00u);  if (depth < kMaxDepth) unit_00A2(c, 130u, depth + 1u); else { c.pc = 0x003A8ED0u; return; } if (c.pc != 0x003A8D00u) [[unlikely]] return; }
L_003A8D00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_003A8D14; }
L_003A8D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8D64; } }
L_003A8D10:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003A8D14:
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 42u, depth + 1u); else { c.pc = 0x003AC6E0u; return; } if (c.pc != 0x003A8D20u) [[unlikely]] return; }
L_003A8D20:
    set32(c.r[3], c.r[17].w[0] + 3368u);
    set32(c.r[16], ld32((c.r[3].w[0] + 648u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D38u); set32(c.r[17], ld32((c.r[3].w[0] + 644u)));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8D38u) [[unlikely]] return; }
L_003A8D38:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D4Cu); c.r[6].d[0] = c.r[6].d[0] | 16960ull;  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003A8D4Cu) [[unlikely]] return; }
L_003A8D4C:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D60u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 65u, depth + 1u); else { c.pc = 0x003ACAD8u; return; } if (c.pc != 0x003A8D60u) [[unlikely]] return; }
L_003A8D60:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A8D64:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8D78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D94u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8D94u) [[unlikely]] return; }
L_003A8D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DA4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003A8DA4u) [[unlikely]] return; }
L_003A8DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8E00; } }
L_003A8DAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DB8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8DB8u) [[unlikely]] return; }
L_003A8DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A8DE0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DCCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003A8DCCu) [[unlikely]] return; }
L_003A8DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A8DE0; } }
L_003A8DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8E00; } }
    c.budget -= 1;
L_003A8DE0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A8DE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x003A8DF0u) [[unlikely]] return; }
L_003A8DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8DD4u | kUnwind; return; } goto L_003A8DD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8DE4u | kUnwind; return; } goto L_003A8DE4; } }
L_003A8E00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8E18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8128u)));
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4888u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8E64u) [[unlikely]] return; }
L_003A8E64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], 0u + 70u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003A8E80u);  goto L_003A8E84; }
L_003A8E84:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003A8EB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8EA8u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A8EA8u) [[unlikely]] return; }
L_003A8EA8:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8EB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A8EB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8196u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4888u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8F14u) [[unlikely]] return; }
L_003A8F14:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x003A8F24u);  goto L_003A8F28; }
L_003A8F28:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 137u, depth + 1u); else { c.pc = 0x003A8FC0u; return; } if (c.pc != 0x003A8F64u) [[unlikely]] return; }
L_003A8F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F74u);  if (depth < kMaxDepth) unit_00A2(c, 140u, depth + 1u); else { c.pc = 0x003A9030u; return; } if (c.pc != 0x003A8F74u) [[unlikely]] return; }
L_003A8F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F84u);  if (depth < kMaxDepth) unit_00A2(c, 144u, depth + 1u); else { c.pc = 0x003A90F8u; return; } if (c.pc != 0x003A8F84u) [[unlikely]] return; }
L_003A8F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F94u);  if (depth < kMaxDepth) unit_00A2(c, 146u, depth + 1u); else { c.pc = 0x003A9150u; return; } if (c.pc != 0x003A8F94u) [[unlikely]] return; }
L_003A8F94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A8FB0; }
L_003A8F9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003A91E0; }
L_003A8FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] + 2564u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[5], 0u - 4u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; set32(c.r[17], ld32((c.r[3].w[0] + 84u)));  if (t) { goto L_003A9018; } }
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8FF4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 42u, depth + 1u); else { c.pc = 0x003AC6E0u; return; } if (c.pc != 0x003A8FF4u) [[unlikely]] return; }
L_003A8FF4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003A9018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9014u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0098(c, 42u, depth + 1u); else { c.pc = 0x00381AF0u; return; } if (c.pc != 0x003A9014u) [[unlikely]] return; }
L_003A9014:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003A9018:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[16].w[0] + 2564u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003A9068; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A90E0; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_003A9068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003A9070u) [[unlikely]] return; }
L_003A9070:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9080u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003A9080u) [[unlikely]] return; }
L_003A9080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9090u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A9090u) [[unlikely]] return; }
L_003A9090:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A90C8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] & c.r[18].d[0];  goto L_003A90DC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003A90D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A90D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A90E4; } }
    c.budget -= 1;
L_003A90C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A90DC; } }
L_003A90D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A90DC; } }
L_003A90D8:
    c.r[4].d[0] = c.r[17].d[0] | c.r[18].d[0];
    c.budget -= 1;
L_003A90DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003A90E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A90E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A90F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2384u);  if (t) { goto L_003A9130; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9144; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A9138; } }
L_003A9130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9144; } }
L_003A9138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9140u);  if (depth < kMaxDepth) unit_00A3(c, 20u, depth + 1u); else { c.pc = 0x003AC380u; return; } if (c.pc != 0x003A9140u) [[unlikely]] return; }
L_003A9140:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A9144:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 2384u);  if (t) { goto L_003A919C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A91D0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A919C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9194u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A3(c, 35u, depth + 1u); else { c.pc = 0x003AC5A0u; return; } if (c.pc != 0x003A9194u) [[unlikely]] return; }
L_003A9194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003A91A8; } }
L_003A919C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A91D0; } }
    c.budget -= 1;
L_003A91A8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A91D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91B8u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A91B8u) [[unlikely]] return; }
L_003A91B8:
    set32(c.r[5], 0u + 1000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91CCu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 65u, depth + 1u); else { c.pc = 0x003ACAD8u; return; } if (c.pc != 0x003A91CCu) [[unlikely]] return; }
L_003A91CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A91D0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A91E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 225u, depth + 1u); else { c.pc = 0x003A9AE0u; return; } if (c.pc != 0x003A91F4u) [[unlikely]] return; }
L_003A91F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A9208; }
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003A9208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9218:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A922Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003A922Cu) [[unlikely]] return; }
L_003A922C:
    st32((c.r[29].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[6], c.r[2].w[0] + 10364u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 9;
L_003A9250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_003A928C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A9278; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[16], 0u + 2u);  if (t) { goto L_003A9278; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_003A9278; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_003A9278:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003A928C:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9250u | kUnwind; return; } goto L_003A9250; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003A92B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[16], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 3;
L_003A92B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92C0u); st32((c.r[2].w[0] + 10256u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003A92C0u) [[unlikely]] return; }
L_003A92C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A92D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9304u); set32(c.r[19], c.r[2].w[0] + 10364u);  if (depth < kMaxDepth) unit_00A2(c, 161u, depth + 1u); else { c.pc = 0x003A9370u; return; } if (c.pc != 0x003A9304u) [[unlikely]] return; }
L_003A9304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9314u);  if (depth < kMaxDepth) unit_00A2(c, 162u, depth + 1u); else { c.pc = 0x003A93D8u; return; } if (c.pc != 0x003A9314u) [[unlikely]] return; }
L_003A9314:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A9340; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9334u); c.r[5].d[0] = c.r[5].d[0] | 518ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A9334u) [[unlikely]] return; }
L_003A9334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9354; } }
    c.budget -= 1;
L_003A9340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9348u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 164u, depth + 1u); else { c.pc = 0x003A9418u; return; } if (c.pc != 0x003A9348u) [[unlikely]] return; }
L_003A9348:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003A9354:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A93A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 516ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A93A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14248ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A93C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 517ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A93C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A93D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + 10364u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
L_003A93E8:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_003A9410; } }
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A93E8u | kUnwind; return; } goto L_003A93E8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A9410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9418:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] >> 2);  if (t) { goto L_003A9624; } }
    set32(c.r[3], c.r[7].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(28496ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A9628; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[8].w[0] + 10432u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A947C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A9628; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A947C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9488u); st32((c.r[8].w[0] + 10432u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x003A9488u) [[unlikely]] return; }
L_003A9488:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] + 31u);
    set32(c.r[4], 0u - 32u);
    c.r[5].d[0] = c.r[18].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A9520; } }
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_003A94C0:
    ldl(c.r[5], (c.r[2].w[0] + 7u));
    ldr(c.r[5], (c.r[2].w[0]));
    ldl(c.r[6], (c.r[2].w[0] + 15u));
    ldr(c.r[6], (c.r[2].w[0] + 8u));
    ldl(c.r[7], (c.r[2].w[0] + 23u));
    ldr(c.r[7], (c.r[2].w[0] + 16u));
    ldl(c.r[8], (c.r[2].w[0] + 31u));
    ldr(c.r[8], (c.r[2].w[0] + 24u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A94C0u | kUnwind; return; } goto L_003A94C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9558; } }
    c.budget -= 1;
L_003A9520:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_003A9524:
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.r[6].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[5].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9524u | kUnwind; return; } goto L_003A9524; } }
L_003A9558:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[19], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[16], c.r[16].w[0] + 9848u);
    st32((c.r[17].w[0] + 68u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9588u); st32((c.r[17].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_009F(c, 133u, depth + 1u); else { c.pc = 0x0039D880u; return; } if (c.pc != 0x003A9588u) [[unlikely]] return; }
L_003A9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9590u); set32(c.r[4], c.r[17].w[0] + 2316u);  if (depth < kMaxDepth) unit_00A2(c, 180u, depth + 1u); else { c.pc = 0x003A9648u; return; } if (c.pc != 0x003A9590u) [[unlikely]] return; }
L_003A9590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9598u); set32(c.r[4], c.r[17].w[0] + 2384u);  if (depth < kMaxDepth) unit_00A2(c, 182u, depth + 1u); else { c.pc = 0x003A96B0u; return; } if (c.pc != 0x003A9598u) [[unlikely]] return; }
L_003A9598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95A0u); set32(c.r[4], c.r[17].w[0] + 14008u);  if (depth < kMaxDepth) unit_00A2(c, 188u, depth + 1u); else { c.pc = 0x003A9738u; return; } if (c.pc != 0x003A95A0u) [[unlikely]] return; }
L_003A95A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95A8u); set32(c.r[4], c.r[17].w[0] + 2544u);  if (depth < kMaxDepth) unit_009F(c, 248u, depth + 1u); else { c.pc = 0x0039E568u; return; } if (c.pc != 0x003A95A8u) [[unlikely]] return; }
L_003A95A8:
    set32(c.r[4], c.r[17].w[0] + 2564u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95B8u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A95B8u) [[unlikely]] return; }
L_003A95B8:
    set32(c.r[4], c.r[17].w[0] + 2964u);
    set32(c.r[6], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A95C8u) [[unlikely]] return; }
L_003A95C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95D4u); set32(c.r[5], c.r[17].w[0] + 3368u);  if (depth < kMaxDepth) unit_00A2(c, 421u, depth + 1u); else { c.pc = 0x003ABD88u; return; } if (c.pc != 0x003A95D4u) [[unlikely]] return; }
L_003A95D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 4872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95E4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 409u, depth + 1u); else { c.pc = 0x0039AE80u; return; } if (c.pc != 0x003A95E4u) [[unlikely]] return; }
L_003A95E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A9624; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9600u); set32(c.r[5], c.r[17].w[0] + 7976u);  if (depth < kMaxDepth) unit_00A3(c, 145u, depth + 1u); else { c.pc = 0x003ADAB0u; return; } if (c.pc != 0x003A9600u) [[unlikely]] return; }
L_003A9600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9608u); set32(c.r[4], c.r[17].w[0] + 13992u);  if (depth < kMaxDepth) unit_00A2(c, 303u, depth + 1u); else { c.pc = 0x003AA878u; return; } if (c.pc != 0x003A9608u) [[unlikely]] return; }
L_003A9608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9610u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 198u, depth + 1u); else { c.pc = 0x003A9868u; return; } if (c.pc != 0x003A9610u) [[unlikely]] return; }
L_003A9610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9624; } }
    st32((c.r[17].w[0] + 72u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[19].w[0]);
    c.budget -= 3;
L_003A9624:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A9628:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x003A9664u) [[unlikely]] return; }
L_003A9664:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A96B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A96CCu); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x003A96CCu) [[unlikely]] return; }
L_003A96CC:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9700u); st32((c.r[16].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 187u, depth + 1u); else { c.pc = 0x003A9728u; return; } if (c.pc != 0x003A9700u) [[unlikely]] return; }
L_003A9700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9708u); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_00A2(c, 187u, depth + 1u); else { c.pc = 0x003A9728u; return; } if (c.pc != 0x003A9708u) [[unlikely]] return; }
L_003A9708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9710u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A2(c, 187u, depth + 1u); else { c.pc = 0x003A9728u; return; } if (c.pc != 0x003A9710u) [[unlikely]] return; }
L_003A9710:
    set32(c.r[4], c.r[16].w[0] + 120u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003A9728; }
L_003A9728:
    st64((c.r[4].w[0] + 16u), 0ull);
    st64((c.r[4].w[0]), 0ull);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 8u), 0ull);  c.pc = t; return; }
L_003A9738:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9760u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x003A9760u) [[unlikely]] return; }
L_003A9760:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003A9768:
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9774u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00A3(c, 139u, depth + 1u); else { c.pc = 0x003AD920u; return; } if (c.pc != 0x003A9774u) [[unlikely]] return; }
L_003A9774:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9768u | kUnwind; return; } goto L_003A9768; } }
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 139u, depth); }
L_003A9798:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2384u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 36u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97CCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A97CCu) [[unlikely]] return; }
L_003A97CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A97E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A97E4u) [[unlikely]] return; }
L_003A97E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2384u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 37u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9834u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A9834u) [[unlikely]] return; }
L_003A9834:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A984C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A984Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A984Cu) [[unlikely]] return; }
L_003A984C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 189u, depth); }
L_003A9880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A9894u) [[unlikely]] return; }
L_003A9894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_003A98B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 305ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A98B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 218u, depth + 1u); else { c.pc = 0x003A9A58u; return; } if (c.pc != 0x003A98C0u) [[unlikely]] return; }
L_003A98C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98C8u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_009F(c, 134u, depth + 1u); else { c.pc = 0x0039D898u; return; } if (c.pc != 0x003A98C8u) [[unlikely]] return; }
L_003A98C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 427u, depth + 1u); else { c.pc = 0x0039B150u; return; } if (c.pc != 0x003A98D0u) [[unlikely]] return; }
L_003A98D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 206u, depth + 1u); else { c.pc = 0x003A9920u; return; } if (c.pc != 0x003A98D8u) [[unlikely]] return; }
L_003A98D8:
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + 10364u);
    c.budget -= 4;
L_003A98E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[3].w[0]), 0u);  goto L_003A98F4; }
L_003A98F4:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A98E8u | kUnwind; return; } goto L_003A98E8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[2].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 72u), 0u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 189u, depth); }
L_003A9948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A995Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A995Cu) [[unlikely]] return; }
L_003A995C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 306ull;  if (t) { goto L_003A9980; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A9980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9988u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A9988u) [[unlikely]] return; }
L_003A9988:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A99A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A999Cu);  if (depth < kMaxDepth) unit_00A2(c, 6u, depth + 1u); else { c.pc = 0x003A8088u; return; } if (c.pc != 0x003A999Cu) [[unlikely]] return; }
L_003A999C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A99B4; } }
    c.budget -= 1;
L_003A99A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99B0u);  if (depth < kMaxDepth) unit_00A2(c, 212u, depth + 1u); else { c.pc = 0x003A99C8u; return; } if (c.pc != 0x003A99B0u) [[unlikely]] return; }
L_003A99B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003A99B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A99C8:
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_003A99D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x003A99F4u) [[unlikely]] return; }
L_003A99F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A9A14u) [[unlikely]] return; }
L_003A9A14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 307ull;  if (t) { goto L_003A9A38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A9A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A40u);  if (depth < kMaxDepth) unit_00A2(c, 218u, depth + 1u); else { c.pc = 0x003A9A58u; return; } if (c.pc != 0x003A9A40u) [[unlikely]] return; }
L_003A9A40:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9A58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A80u);  if (depth < kMaxDepth) unit_00A2(c, 225u, depth + 1u); else { c.pc = 0x003A9AE0u; return; } if (c.pc != 0x003A9A80u) [[unlikely]] return; }
L_003A9A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003A9AAC; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A94u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 223u, depth + 1u); else { c.pc = 0x003A9AC0u; return; } if (c.pc != 0x003A9A94u) [[unlikely]] return; }
L_003A9A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 227u, depth + 1u); else { c.pc = 0x003A9B40u; return; } if (c.pc != 0x003A9A9Cu) [[unlikely]] return; }
L_003A9A9C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AA8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 223u, depth + 1u); else { c.pc = 0x003A9AC0u; return; } if (c.pc != 0x003A9AA8u) [[unlikely]] return; }
L_003A9AA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A9AAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 10356u), c.r[4].w[0]);  c.pc = t; return; }
L_003A9AD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 10356u)));  c.pc = t; return; }
L_003A9AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_003A9B20; }
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B14u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x003A9B14u) [[unlikely]] return; }
L_003A9B14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A9B30; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003A9B20:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003A9B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9B40:
    set32(c.r[29], c.r[29].w[0] - 736u);
    st64((c.r[29].w[0] + 656u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    st64((c.r[29].w[0] + 664u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 672u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 680u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 688u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 704u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 712u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 720u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 728u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 592u), 0u);  if (t) { goto L_003A9BE8; } }
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_003A9B88:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B88u | kUnwind; return; } goto L_003A9B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9C20; } }
    c.budget -= 1;
L_003A9BE8:
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_003A9BEC:
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9BECu | kUnwind; return; } goto L_003A9BEC; } }
L_003A9C20:
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[16].w[0] + 2596u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003A9C48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C40u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00A2(c, 256u, depth + 1u); else { c.pc = 0x003A9F10u; return; } if (c.pc != 0x003A9C40u) [[unlikely]] return; }
L_003A9C40:
    set32(c.r[8], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[29].w[0] + 592u), c.r[8].w[0]);
    c.budget -= 2;
L_003A9C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C50u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_009F(c, 134u, depth + 1u); else { c.pc = 0x0039D898u; return; } if (c.pc != 0x003A9C50u) [[unlikely]] return; }
L_003A9C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 427u, depth + 1u); else { c.pc = 0x0039B150u; return; } if (c.pc != 0x003A9C58u) [[unlikely]] return; }
L_003A9C58:
    set32(c.r[22], ld32((c.r[16].w[0] + 2544u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2548u)));
    ldl(c.r[2], (c.r[16].w[0] + 4831u));
    ldr(c.r[2], (c.r[16].w[0] + 4824u));
    set32(c.r[3], ld32((c.r[16].w[0] + 4832u)));
    sdl(c.r[2], (c.r[29].w[0] + 583u));
    sdr(c.r[2], (c.r[29].w[0] + 576u));
    st32((c.r[29].w[0] + 584u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 13992u)));
    st32((c.r[29].w[0] + 596u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4108u)));
    set32(c.r[23], ld32((c.r[16].w[0] + 3384u)));
    set32(c.r[30], ld32((c.r[16].w[0] + 4092u)));
    st32((c.r[29].w[0] + 600u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 4112u)));
    st32((c.r[29].w[0] + 604u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 3392u)));
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4052u)));
    c.budget -= 21;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 612u), c.r[3].w[0]);  if (t) { goto L_003A9CD8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 3536u)));
    st32((c.r[29].w[0] + 616u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 3524u)));
    st32((c.r[29].w[0] + 620u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 3528u)));
    st32((c.r[29].w[0] + 624u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 3532u)));
    st32((c.r[29].w[0] + 628u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 3540u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 632u), c.r[8].w[0]);  if (t) { goto L_003A9CEC; } }
L_003A9CD8:
    st32((c.r[29].w[0] + 632u), 0u);
    st32((c.r[29].w[0] + 628u), 0u);
    st32((c.r[29].w[0] + 624u), 0u);
    st32((c.r[29].w[0] + 620u), 0u);
    st32((c.r[29].w[0] + 616u), 0u);
    c.budget -= 5;
L_003A9CEC:
    set32(c.r[3], c.r[16].w[0] + 5044u);
    set32(c.r[20], c.r[29].w[0] + 512u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D18u); st32((c.r[29].w[0] + 636u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A0(c, 83u, depth + 1u); else { c.pc = 0x003A0D20u; return; } if (c.pc != 0x003A9D18u) [[unlikely]] return; }
L_003A9D18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D24u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 206u, depth + 1u); else { c.pc = 0x003A9920u; return; } if (c.pc != 0x003A9D24u) [[unlikely]] return; }
L_003A9D24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  goto L_003A9EE0; }
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 2964u);
    set32(c.r[6], 0u + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A9D40u) [[unlikely]] return; }
L_003A9D40:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D4Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 164u, depth + 1u); else { c.pc = 0x003A9418u; return; } if (c.pc != 0x003A9D4Cu) [[unlikely]] return; }
L_003A9D4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2564u);  if (t) { goto L_003A9D70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D68u); c.r[5].d[0] = c.r[5].d[0] | 514ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A9D68u) [[unlikely]] return; }
L_003A9D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  if (t) { goto L_003A9EE0; } }
L_003A9D70:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D7Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A9D7Cu) [[unlikely]] return; }
L_003A9D7C:
    set32(c.r[4], c.r[16].w[0] + 2964u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D8Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A9D8Cu) [[unlikely]] return; }
L_003A9D8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D9Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 86u, depth + 1u); else { c.pc = 0x003A0DA8u; return; } if (c.pc != 0x003A9D9Cu) [[unlikely]] return; }
L_003A9D9C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003A9DD8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DB0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00A2(c, 256u, depth + 1u); else { c.pc = 0x003A9F10u; return; } if (c.pc != 0x003A9DB0u) [[unlikely]] return; }
L_003A9DB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  goto L_003A9EE0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DC8u); set32(c.r[5], ld32((c.r[29].w[0] + 592u)));  if (depth < kMaxDepth) unit_00A2(c, 258u, depth + 1u); else { c.pc = 0x003A9F80u; return; } if (c.pc != 0x003A9DC8u) [[unlikely]] return; }
L_003A9DC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  goto L_003A9EE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 260u, depth + 1u); else { c.pc = 0x003AA000u; return; } if (c.pc != 0x003A9DD8u) [[unlikely]] return; }
L_003A9DD8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 596u)));  if (t) { goto L_003A9DEC; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 254u, depth + 1u); else { c.pc = 0x0039E630u; return; } if (c.pc != 0x003A9DECu) [[unlikely]] return; }
L_003A9DEC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003A9DFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 66u, depth + 1u); else { c.pc = 0x003ACAF0u; return; } if (c.pc != 0x003A9DFCu) [[unlikely]] return; }
L_003A9DFC:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 600u)));  if (t) { goto L_003A9E14; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x003ACB78u; return; } if (c.pc != 0x003A9E14u) [[unlikely]] return; }
L_003A9E14:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 63u, depth + 1u); else { c.pc = 0x003ACA80u; return; } if (c.pc != 0x003A9E28u) [[unlikely]] return; }
L_003A9E28:
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[2], 0u + 1000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003A9E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 7u, depth + 1u); else { c.pc = 0x003A8098u; return; } if (c.pc != 0x003A9E40u) [[unlikely]] return; }
L_003A9E40:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003A9E78; } }
    ldl(c.r[4], (c.r[29].w[0] + 583u));
    ldr(c.r[4], (c.r[29].w[0] + 576u));
    set32(c.r[5], ld32((c.r[29].w[0] + 584u)));
    sdl(c.r[4], (c.r[16].w[0] + 4831u));
    sdr(c.r[4], (c.r[16].w[0] + 4824u));
    st32((c.r[16].w[0] + 4832u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 10424u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[29].w[0] + 576u);  if (t) { goto L_003A9E78; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E78u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9E78u) [[unlikely]] return; }
L_003A9E78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 636u)));  if (t) { goto L_003A9EC4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 313u, depth + 1u); else { c.pc = 0x003AAA08u; return; } if (c.pc != 0x003A9E8Cu) [[unlikely]] return; }
L_003A9E8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E98u); set32(c.r[5], ld32((c.r[29].w[0] + 616u)));  if (depth < kMaxDepth) unit_00A2(c, 369u, depth + 1u); else { c.pc = 0x003AB3B0u; return; } if (c.pc != 0x003A9E98u) [[unlikely]] return; }
L_003A9E98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EA4u); set32(c.r[5], ld32((c.r[29].w[0] + 620u)));  if (depth < kMaxDepth) unit_00A2(c, 363u, depth + 1u); else { c.pc = 0x003AB2B8u; return; } if (c.pc != 0x003A9EA4u) [[unlikely]] return; }
L_003A9EA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EB4u); set32(c.r[6], ld32((c.r[29].w[0] + 628u)));  if (depth < kMaxDepth) unit_00A2(c, 366u, depth + 1u); else { c.pc = 0x003AB328u; return; } if (c.pc != 0x003A9EB4u) [[unlikely]] return; }
L_003A9EB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EC0u); set32(c.r[5], ld32((c.r[29].w[0] + 632u)));  if (depth < kMaxDepth) unit_00A2(c, 372u, depth + 1u); else { c.pc = 0x003AB420u; return; } if (c.pc != 0x003A9EC0u) [[unlikely]] return; }
L_003A9EC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 636u)));
    c.budget -= 1;
L_003A9EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 640u)));  if (t) { goto L_003A9ED8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9ED8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 287u, depth + 1u); else { c.pc = 0x003AA430u; return; } if (c.pc != 0x003A9ED8u) [[unlikely]] return; }
L_003A9ED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));
    c.budget -= 2;
L_003A9EE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 664u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 696u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 704u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 712u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 720u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 728u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_003A9F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F2Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A9F2Cu) [[unlikely]] return; }
L_003A9F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 308ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003A9F60; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A9F60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 193u, depth); }
L_003A9F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FA4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A9FA4u) [[unlikely]] return; }
L_003A9FA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 309ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_003A9FE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A9FE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 193u, depth); }
L_003AA000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA01Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA01Cu) [[unlikely]] return; }
L_003AA01C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 309ull;  if (t) { goto L_003AA048; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA048:
    set32(c.r[16], ld32((c.r[17].w[0] + 7996u)));
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA058u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x003AA058u) [[unlikely]] return; }
L_003AA058:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_003AA074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA070u);  if (depth < kMaxDepth) unit_009F(c, 6u, depth + 1u); else { c.pc = 0x0039C430u; return; } if (c.pc != 0x003AA070u) [[unlikely]] return; }
L_003AA070:
    st32((c.r[17].w[0] + 68u), c.r[18].w[0]);
    c.budget -= 1;
L_003AA074:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA0A0u); set32(c.r[5], ld32((c.r[4].w[0] + 7996u)));  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x003AA0A0u) [[unlikely]] return; }
L_003AA0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA0E0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA0E0u) [[unlikely]] return; }
L_003AA0E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AA100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA0F4u); c.r[5].d[0] = c.r[5].d[0] | 314ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003AA0F4u) [[unlikely]] return; }
L_003AA0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA154; } }
    c.budget -= 1;
L_003AA100:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA10Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 283u, depth + 1u); else { c.pc = 0x003AA360u; return; } if (c.pc != 0x003AA10Cu) [[unlikely]] return; }
L_003AA10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003AA120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA154; } }
    c.budget -= 1;
L_003AA120:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA134u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x003AA134u) [[unlikely]] return; }
L_003AA134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 10436u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AA14C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA14Cu); set32(c.r[5], ld32((c.r[17].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA14Cu) [[unlikely]] return; }
L_003AA14C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003AA154:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA18Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA18Cu) [[unlikely]] return; }
L_003AA18C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AA1B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 315ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA1B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA1BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A2(c, 283u, depth + 1u); else { c.pc = 0x003AA360u; return; } if (c.pc != 0x003AA1BCu) [[unlikely]] return; }
L_003AA1BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003AA1E8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 193u, depth); }
L_003AA1E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA224u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA224u) [[unlikely]] return; }
L_003AA224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AA250; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 310ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA250:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA25Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 283u, depth + 1u); else { c.pc = 0x003AA360u; return; } if (c.pc != 0x003AA25Cu) [[unlikely]] return; }
L_003AA25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003AA2B0; } }
    set32(c.r[6], 0u + 11u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA278u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x003AA278u) [[unlikely]] return; }
L_003AA278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AA294; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 2408u), c.r[2].w[0]);
    c.budget -= 2;
L_003AA294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 10436u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003AA2B0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA2ACu) [[unlikely]] return; }
L_003AA2AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AA2B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA2C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA2E4u) [[unlikely]] return; }
L_003AA2E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AA308; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 311ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA314u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 283u, depth + 1u); else { c.pc = 0x003AA360u; return; } if (c.pc != 0x003AA314u) [[unlikely]] return; }
L_003AA314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003AA348; } }
    st32((c.r[16].w[0] + 2408u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 193u, depth); }
L_003AA348:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AA388; } }
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA3A8; } }
    c.budget -= 1;
L_003AA388:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA3A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 519ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA3B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3D4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA3D4u) [[unlikely]] return; }
L_003AA3D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AA3F8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 313ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA3F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B478u | kUnwind; return; } [[clang::musttail]] return unit_009E(c, 441u, depth); }
L_003AA418:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_003AA430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003AA49C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA464u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AA464u) [[unlikely]] return; }
L_003AA464:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 357ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AA490; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA490:
    set32(c.r[4], c.r[18].w[0] + 5044u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA49Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 290u, depth + 1u); else { c.pc = 0x003AA4B8u; return; } if (c.pc != 0x003AA49Cu) [[unlikely]] return; }
L_003AA49C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA4A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA4B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] + 7u);
    set32(c.r[2], 0u - 8u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[6].w[0] - c.r[3].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA4F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AA4F8u) [[unlikely]] return; }
L_003AA4F8:
    set32(c.r[3], c.r[16].w[0] + 15u);
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003AA5B4; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4928u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003AA5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA58Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 294u, depth + 1u); else { c.pc = 0x003AA5C8u; return; } if (c.pc != 0x003AA58Cu) [[unlikely]] return; }
L_003AA58C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[5].d[0] | 1057ull;  if (t) { goto L_003AA5B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AA5B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA5B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA5C8:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AA5F0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[9].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003AA5F0:
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + 1u);
    st64((c.r[3].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[8].w[0] + 8u));
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_003AA62C; } }
    set32(c.r[6], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003AA62C:
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[7].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003AA650; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.r[2].w[0]);  if (t) { goto L_003AA654; } }
L_003AA650:
    st32((c.r[9].w[0]), 0u);
    c.budget -= 1;
L_003AA654:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AA660:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + 4872u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[7].w[0]), c.r[4].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003AA6C8; } }
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    c.r[2].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA6C4u); if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[9].d[0];  if (depth < kMaxDepth) unit_00A2(c, 297u, depth + 1u); else { c.pc = 0x003AA6D8u; return; } if (c.pc != 0x003AA6C4u) [[unlikely]] return; }
L_003AA6C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003AA75C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA708u);  if (depth < kMaxDepth) unit_00A2(c, 299u, depth + 1u); else { c.pc = 0x003AA770u; return; } if (c.pc != 0x003AA708u) [[unlikely]] return; }
L_003AA708:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AA760; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[17].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 17;
L_003AA75C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AA760:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA770:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[12], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[9], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_003AA830; } }
    set32(c.r[15], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.r[5].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[9].w[0] << 4);
    c.budget -= 6;
L_003AA7A0:
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[8].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[12].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003AA7E0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + 1u);  if (t) { goto L_003AA80C; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[9].w[0] + 1u);  goto L_003AA80C; }
L_003AA7D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[10].d[0] + 0ull;  c.pc = t; return; }
L_003AA7E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AA7F0; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA7D4u | kUnwind; return; } goto L_003AA7D4; } }
L_003AA7F0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + 1u);  if (t) { goto L_003AA80C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA7D4u | kUnwind; return; } goto L_003AA7D4; } }
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_003AA80C:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_003AA820; } }
    set32(c.r[2], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_003AA820:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[10].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA7A0u | kUnwind; return; } goto L_003AA7A0; }
L_003AA830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003AA838:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4928u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA870; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_003AA870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AA878:
    set32(c.r[3], c.r[4].w[0] + 4u);
    set32(c.r[5], 0u - 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_003AA898:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003AA8CC; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003AA8B8:
    set32(c.r[17], c.r[17].w[0] + 3544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8C4u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00A2(c, 307u, depth + 1u); else { c.pc = 0x003AA8E0u; return; } if (c.pc != 0x003AA8C4u) [[unlikely]] return; }
L_003AA8C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA8B8u | kUnwind; return; } goto L_003AA8B8; } }
L_003AA8CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8FCu); set32(c.r[6], 0u + 886u);  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x003AA8FCu) [[unlikely]] return; }
L_003AA8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 310u, depth + 1u); else { c.pc = 0x003AA950u; return; } if (c.pc != 0x003AA904u) [[unlikely]] return; }
L_003AA904:
    st32((c.r[16].w[0] + 3496u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u - 8u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 3540u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3528u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3532u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 3500u), 0u);
    st32((c.r[16].w[0] + 3504u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3508u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 3512u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3516u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3520u), 0u);
    st32((c.r[16].w[0] + 3524u), 0u);
    st32((c.r[16].w[0] + 3536u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 2208u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 3340u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 2768u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA98Cu); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_009F(c, 133u, depth + 1u); else { c.pc = 0x0039D880u; return; } if (c.pc != 0x003AA98Cu) [[unlikely]] return; }
L_003AA98C:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 2780u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st64((c.r[17].w[0] + 24u), 0ull);
    st32((c.r[19].w[0] + 8u), 0u);
    st64((c.r[17].w[0] + 32u), 0ull);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA9CCu); st32((c.r[19].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003AA9CCu) [[unlikely]] return; }
L_003AA9CC:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AAA08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA24u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AAA24u) [[unlikely]] return; }
L_003AAA24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AAA48; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 337ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AAA48:
    st32((c.r[16].w[0] + 13992u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AAA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA7Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AAA7Cu) [[unlikely]] return; }
L_003AAA7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AAAA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 338ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AAAA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 13992u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 3520u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AAAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAAD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AAAD4u) [[unlikely]] return; }
L_003AAAD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 339ull;  if (t) { goto L_003AAB00; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AAB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB08u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003AAB08u) [[unlikely]] return; }
L_003AAB08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8088u | kUnwind; return; } goto L_003A8088; }
L_003AAB90:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003AABA8:
    set32(c.r[3], ld32((c.r[4].w[0] + 13992u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AABCC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 3512u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[3].w[0] + 3512u), c.r[5].w[0]);  goto L_003AABC0; }
L_003AABC0:
    set32(c.r[2], ld32((c.r[3].w[0] + 3516u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[3].w[0] + 3516u), c.r[6].w[0]);  goto L_003AABCC; }
L_003AABCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AABD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AAC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AABFCu);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x003AAC20u; return; } if (c.pc != 0x003AABFCu) [[unlikely]] return; }
L_003AABFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AB480; }
L_003AAC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AAC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 13992u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[16].w[0] + 12u);
    set32(c.r[20], c.r[16].w[0] + 2208u);
    set32(c.r[17], c.r[16].w[0] + 2768u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 3340u);  if (t) { goto L_003AAD60; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC6Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 330u, depth + 1u); else { c.pc = 0x003AAD88u; return; } if (c.pc != 0x003AAC6Cu) [[unlikely]] return; }
L_003AAC6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003AAD64; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC84u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A2(c, 333u, depth + 1u); else { c.pc = 0x003AAE08u; return; } if (c.pc != 0x003AAC84u) [[unlikely]] return; }
L_003AAC84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003AAD64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC94u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x003AAE88u; return; } if (c.pc != 0x003AAC94u) [[unlikely]] return; }
L_003AAC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AAD20; } }
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_003AAD14; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003AACE0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 3524u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[6], ld32((c.r[19].w[0] + 52u)));  if (t) { goto L_003AACD4; } }
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_003AAD14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACD4u); set32(c.r[5], 0u + 1000u);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AACD4u) [[unlikely]] return; }
L_003AACD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AAD14; } }
    c.budget -= 1;
L_003AACE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACE8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 220u, depth + 1u); else { c.pc = 0x0039E2F0u; return; } if (c.pc != 0x003AACE8u) [[unlikely]] return; }
L_003AACE8:
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_003AAD14; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u + 2018u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AAD00u);  goto L_003AAD04; }
L_003AAD04:
    set32(c.r[2], c.r[2].w[0] << 11);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_003AAD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_003AAD48; } }
    c.budget -= 1;
L_003AAD20:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003AAD38; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_003AAD48; } }
L_003AAD38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003AAD64; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_003AAD48:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAD60u); st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 378u, depth + 1u); else { c.pc = 0x003AB5B8u; return; } if (c.pc != 0x003AAD60u) [[unlikely]] return; }
L_003AAD60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AAD64:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AAD88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AADB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003AADB0u) [[unlikely]] return; }
L_003AADB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003AADE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AADC4u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AADC4u) [[unlikely]] return; }
L_003AADC4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_003AADEC; }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003AADF0; } }
    c.budget -= 1;
L_003AADE8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003AADEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AADF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AAE08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE30u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003AAE30u) [[unlikely]] return; }
L_003AAE30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003AAE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE44u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AAE44u) [[unlikely]] return; }
L_003AAE44:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_003AAE6C; }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003AAE70; } }
    c.budget -= 1;
L_003AAE68:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003AAE6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AAE70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AAE88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003AAE98u) [[unlikely]] return; }
L_003AAE98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AAEA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEC8u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AAEC8u) [[unlikely]] return; }
L_003AAEC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AAEF0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 341ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AAEF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 13992u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 341u, depth + 1u); else { c.pc = 0x003AAF18u; return; } if (c.pc != 0x003AAEFCu) [[unlikely]] return; }
L_003AAEFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AAF18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003AAF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF44u);  if (depth < kMaxDepth) unit_00A2(c, 320u, depth + 1u); else { c.pc = 0x003AAB90u; return; } if (c.pc != 0x003AAF44u) [[unlikely]] return; }
L_003AAF44:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003AAF74; }
    set32(c.r[2], ld32((c.r[16].w[0] + 3520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AAF6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 3496u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AAF74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AAF6C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AAF70:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AAF74:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AAF88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 13992u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAFBCu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AAFBCu) [[unlikely]] return; }
L_003AAFBC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003AAFE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAFD4u); c.r[5].d[0] = c.r[5].d[0] | 342ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003AAFD4u) [[unlikely]] return; }
L_003AAFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AB010; } }
    c.budget -= 1;
L_003AAFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAFE8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 341u, depth + 1u); else { c.pc = 0x003AAF18u; return; } if (c.pc != 0x003AAFE8u) [[unlikely]] return; }
L_003AAFE8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AB00C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB008u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 348u, depth + 1u); else { c.pc = 0x003AB028u; return; } if (c.pc != 0x003AB008u) [[unlikely]] return; }
L_003AB008:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB00C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AB010:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AB028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 3520u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AB058; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AB078; }
L_003AB058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB060u); set32(c.r[4], ld32((c.r[3].w[0] + 3496u)));  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AB060u) [[unlikely]] return; }
L_003AB060:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AB078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_003AB080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0BCu); set32(c.r[16], c.r[2].w[0] + 13992u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB0BCu) [[unlikely]] return; }
L_003AB0BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003AB0E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0D4u); c.r[5].d[0] = c.r[5].d[0] | 343ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003AB0D4u) [[unlikely]] return; }
L_003AB0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AB110; } }
    c.budget -= 1;
L_003AB0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0E8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 341u, depth + 1u); else { c.pc = 0x003AAF18u; return; } if (c.pc != 0x003AB0E8u) [[unlikely]] return; }
L_003AB0E8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AB10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB108u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 355u, depth + 1u); else { c.pc = 0x003AB128u; return; } if (c.pc != 0x003AB108u) [[unlikely]] return; }
L_003AB108:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB10C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AB110:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AB128:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 3520u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AB168; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AB1B0; }
L_003AB168:
    set32(c.r[2], ld32((c.r[3].w[0] + 3496u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AB180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003AB190; } }
    c.budget -= 1;
L_003AB180:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB18Cu); set32(c.r[5], 0u + 1000u);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AB18Cu) [[unlikely]] return; }
L_003AB18C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AB190:
    set32(c.r[2], 0u + 1000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB1B0:
    set32(c.r[2], 0u + 1000u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003AB1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB1E0u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB1E0u) [[unlikely]] return; }
L_003AB1E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB208; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 344ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB208:
    set32(c.r[17], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AB2A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB21Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 218u, depth + 1u); else { c.pc = 0x003A9A58u; return; } if (c.pc != 0x003AB21Cu) [[unlikely]] return; }
L_003AB21C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AB2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB234u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003AB234u) [[unlikely]] return; }
L_003AB234:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 3512u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AB250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB250u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003AB250u) [[unlikely]] return; }
L_003AB250:
    set32(c.r[2], ld32((c.r[17].w[0] + 3516u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AB268; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB268u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003AB268u) [[unlikely]] return; }
L_003AB268:
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    sdl(c.r[2], (c.r[16].w[0] + 14003u));
    sdr(c.r[2], (c.r[16].w[0] + 13996u));
    st32((c.r[16].w[0] + 14004u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 13u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 189u, depth); }
L_003AB2A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AB2A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB2B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB2D4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB2D4u) [[unlikely]] return; }
L_003AB2D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB2F8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 345ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB2F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AB318; }
    st32((c.r[3].w[0] + 3524u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB310u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 378u, depth + 1u); else { c.pc = 0x003AB5B8u; return; } if (c.pc != 0x003AB310u) [[unlikely]] return; }
L_003AB310:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003AB318:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB328:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB34Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB34Cu) [[unlikely]] return; }
L_003AB34C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 346ull;  if (t) { goto L_003AB378; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB378:
    set32(c.r[3], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AB394; } }
    st32((c.r[3].w[0] + 3532u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB390u); st32((c.r[3].w[0] + 3528u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 378u, depth + 1u); else { c.pc = 0x003AB5B8u; return; } if (c.pc != 0x003AB390u) [[unlikely]] return; }
L_003AB390:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB394:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB3CCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB3CCu) [[unlikely]] return; }
L_003AB3CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB3F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 347ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB3F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AB410; }
    st32((c.r[3].w[0] + 3536u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 378u, depth + 1u); else { c.pc = 0x003AB5B8u; return; } if (c.pc != 0x003AB408u) [[unlikely]] return; }
L_003AB408:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003AB410:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB43Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB43Cu) [[unlikely]] return; }
L_003AB43C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB460; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 348ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB460:
    set32(c.r[4], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { st32((c.r[4].w[0] + 3540u), c.r[17].w[0]);  goto L_003AB46C; }
L_003AB46C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[18].w[0] + 3516u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[18].w[0] + 13996u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB4B0u); set32(c.r[16], ld32((c.r[18].w[0] + 13992u)));  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0039C710u; return; } if (c.pc != 0x003AB4B0u) [[unlikely]] return; }
L_003AB4B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AB554; }
    set32(c.r[2], ld32((c.r[16].w[0] + 3500u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003AB500; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003AB4D8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 3540u)));
    c.budget -= 1;
L_003AB4D8:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[2], ld32((c.r[16].w[0] + 3504u)));  goto L_003AB504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB4E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 377u, depth + 1u); else { c.pc = 0x003AB570u; return; } if (c.pc != 0x003AB4E8u) [[unlikely]] return; }
L_003AB4E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003AB500; } }
    set32(c.r[19], 0u + 1u);
    st32((c.r[16].w[0] + 3500u), c.r[2].w[0]);
    c.budget -= 2;
L_003AB500:
    set32(c.r[2], ld32((c.r[16].w[0] + 3504u)));
    c.budget -= 1;
L_003AB504:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003AB528; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003AB528; } }
    st32((c.r[16].w[0] + 3504u), c.r[2].w[0]);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    st32((c.r[16].w[0] + 3508u), c.r[2].w[0]);
    c.budget -= 4;
L_003AB528:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AB550; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003AB5B8; }
L_003AB550:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AB554:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AB570:
    set32(c.r[5], c.r[4].w[0] + 7976u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4952u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];  c.pc = t; return; }
L_003AB5B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 13992u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3536u)));
    c.budget -= 7;
    if (c.r[2].sd[0] > 0) { st32((c.r[16].w[0] + 3496u), c.r[2].w[0]);  goto L_003AB62C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 3524u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 3528u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[5], ld32((c.r[16].w[0] + 3532u)));  if (t) { goto L_003AB5EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_003AB620; } }
L_003AB5EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st32((c.r[16].w[0] + 3496u), c.r[2].w[0]);  goto L_003AB62C; }
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 3500u)));  goto L_003AB600; }
L_003AB600:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_003AB610; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 3504u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 3508u)));
    c.budget -= 2;
L_003AB610:
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { st32((c.r[16].w[0] + 3496u), c.r[2].w[0]);  goto L_003AB62C; }
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { st32((c.r[16].w[0] + 3496u), c.r[2].w[0]);  goto L_003AB62C; }
L_003AB620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB628u);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AB628u) [[unlikely]] return; }
L_003AB628:
    st32((c.r[16].w[0] + 3496u), c.r[2].w[0]);
    c.budget -= 1;
L_003AB62C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AB640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9218u | kUnwind; return; } goto L_003A9218; }
L_003AB658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB66Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB66Cu) [[unlikely]] return; }
L_003AB66C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 273ull;  if (t) { goto L_003AB684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB684u);  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003AB684u) [[unlikely]] return; }
L_003AB684:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AB698:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003AB6E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 389u, depth + 1u); else { c.pc = 0x003AB750u; return; } if (c.pc != 0x003AB6C8u) [[unlikely]] return; }
L_003AB6C8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 9848u), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AB734; } }
L_003AB6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6E8u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB6E8u) [[unlikely]] return; }
L_003AB6E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB710; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 274ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB710:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB720u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003AB720u) [[unlikely]] return; }
L_003AB720:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB730u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 395u, depth + 1u); else { c.pc = 0x003AB828u; return; } if (c.pc != 0x003AB730u) [[unlikely]] return; }
L_003AB730:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AB734:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] + 10364u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 14;
L_003AB788:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB794u) [[unlikely]] return; }
L_003AB794:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AB7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7ACu);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003AB7ACu) [[unlikely]] return; }
L_003AB7AC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { set32(c.r[16], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB788u | kUnwind; return; } goto L_003AB788; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AB7D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7FCu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 397u, depth + 1u); else { c.pc = 0x003AB878u; return; } if (c.pc != 0x003AB7FCu) [[unlikely]] return; }
L_003AB7FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] << 2);  if (t) { goto L_003AB80C; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 2564u), c.r[17].w[0]);
    c.budget -= 2;
L_003AB80C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB828:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB84Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 397u, depth + 1u); else { c.pc = 0x003AB878u; return; } if (c.pc != 0x003AB84Cu) [[unlikely]] return; }
L_003AB84C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] << 2);  if (t) { goto L_003AB85C; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 2964u), c.r[17].w[0]);
    c.budget -= 2;
L_003AB85C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003AB8BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_003AB8C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB8B4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003AB8B4u) [[unlikely]] return; }
L_003AB8B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AB8EC; }
L_003AB8BC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003AB8C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AB8E8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AB8EC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB8DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003AB8DCu) [[unlikely]] return; }
L_003AB8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AB8EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AB8E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AB8EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_003AB940; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 9848u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003AB980; } }
    c.budget -= 1;
L_003AB940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB948u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB948u) [[unlikely]] return; }
L_003AB948:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB970; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 275ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB970:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB97Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AB97Cu) [[unlikely]] return; }
L_003AB97C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AB980:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB9A0:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 2564u)));  c.pc = t; return; }
L_003AB9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9CCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AB9CCu) [[unlikely]] return; }
L_003AB9CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB9F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 276ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AB9F0:
    ldl(c.r[3], (c.r[16].w[0] + 2323u));
    ldr(c.r[3], (c.r[16].w[0] + 2316u));
    ldl(c.r[4], (c.r[16].w[0] + 2331u));
    ldr(c.r[4], (c.r[16].w[0] + 2324u));
    ldl(c.r[5], (c.r[16].w[0] + 2339u));
    ldr(c.r[5], (c.r[16].w[0] + 2332u));
    ldl(c.r[6], (c.r[16].w[0] + 2347u));
    ldr(c.r[6], (c.r[16].w[0] + 2340u));
    sdl(c.r[3], (c.r[17].w[0] + 7u));
    sdr(c.r[3], (c.r[17].w[0]));
    sdl(c.r[4], (c.r[17].w[0] + 15u));
    sdr(c.r[4], (c.r[17].w[0] + 8u));
    sdl(c.r[5], (c.r[17].w[0] + 23u));
    sdr(c.r[5], (c.r[17].w[0] + 16u));
    sdl(c.r[6], (c.r[17].w[0] + 31u));
    sdr(c.r[6], (c.r[17].w[0] + 24u));
    ldl(c.r[3], (c.r[16].w[0] + 2355u));
    ldr(c.r[3], (c.r[16].w[0] + 2348u));
    ldl(c.r[4], (c.r[16].w[0] + 2363u));
    ldr(c.r[4], (c.r[16].w[0] + 2356u));
    ldl(c.r[5], (c.r[16].w[0] + 2371u));
    ldr(c.r[5], (c.r[16].w[0] + 2364u));
    ldl(c.r[6], (c.r[16].w[0] + 2379u));
    ldr(c.r[6], (c.r[16].w[0] + 2372u));
    sdl(c.r[3], (c.r[17].w[0] + 39u));
    sdr(c.r[3], (c.r[17].w[0] + 32u));
    sdl(c.r[4], (c.r[17].w[0] + 47u));
    sdr(c.r[4], (c.r[17].w[0] + 40u));
    sdl(c.r[5], (c.r[17].w[0] + 55u));
    sdr(c.r[5], (c.r[17].w[0] + 48u));
    sdl(c.r[6], (c.r[17].w[0] + 63u));
    sdr(c.r[6], (c.r[17].w[0] + 56u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABA88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABAA4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ABAA4u) [[unlikely]] return; }
L_003ABAA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003ABAC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 281ull;
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ABAC8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 2544u);
    set32(c.r[4], c.r[16].w[0] + 2384u);
    c.budget -= 3;
L_003ABAD4:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABAD4u | kUnwind; return; } goto L_003ABAD4; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB3Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ABB3Cu) [[unlikely]] return; }
L_003ABB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003ABB60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 282ull;
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ABB60:
    set32(c.r[3], c.r[17].w[0] + 14200u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 14008u);
    c.budget -= 3;
L_003ABB6C:
    c.r[5].d[0] = ld64((c.r[4].w[0]));
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[2].w[0]), c.r[5].d[0]);
    st64((c.r[2].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[2].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[2].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABB6Cu | kUnwind; return; } goto L_003ABB6C; } }
    set32(c.r[12], c.r[16].w[0] + 8u);
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[9], c.r[16].w[0] + 48u);
    c.budget -= 4;
L_003ABBB0:
    c.r[3].d[0] = ld64((c.r[9].w[0] - 16u));
    set32(c.r[6], c.r[10].w[0] << 5);
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.r[8].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = ld64((c.r[11].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    st64((c.r[12].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = ld64((c.r[9].w[0]));
    set32(c.r[9], c.r[9].w[0] + 32u);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 24;
    { const bool t = c.r[8].d[0] != 0ull; st64((c.r[16].w[0] + 16u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABBB0u | kUnwind; return; } goto L_003ABBB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABC28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC4Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ABC4Cu) [[unlikely]] return; }
L_003ABC4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 279ull;  if (t) { goto L_003ABC80; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ABC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 416u, depth + 1u); else { c.pc = 0x003ABCA8u; return; } if (c.pc != 0x003ABC88u) [[unlikely]] return; }
L_003ABC88:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABCA8:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 7984u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0])));  goto L_003ABCD0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), 0u);  c.pc = t; return; }
L_003ABCD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003ABCD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCFCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ABCFCu) [[unlikely]] return; }
L_003ABCFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 284ull;  if (t) { goto L_003ABD28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ABD28:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 268u);  if (t) { goto L_003ABD48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003ABD50; } }
    c.budget -= 1;
L_003ABD48:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_003ABD50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABD70:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_003ABD80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ABD88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] - 14320u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ABDB0u) [[unlikely]] return; }
L_003ABDB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 14248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ABDC4u) [[unlikely]] return; }
L_003ABDC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDD4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ABDD4u) [[unlikely]] return; }
L_003ABDD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 1;
L_003ABDD8:
    set32(c.r[5], c.r[5].w[0] - 14152u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ABDE8u) [[unlikely]] return; }
L_003ABDE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDF8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ABDF8u) [[unlikely]] return; }
L_003ABDF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 14120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ABE0Cu) [[unlikely]] return; }
L_003ABE0C:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE18u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00A2(c, 440u, depth + 1u); else { c.pc = 0x003ABFF0u; return; } if (c.pc != 0x003ABE18u) [[unlikely]] return; }
L_003ABE18:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003ABE24u) [[unlikely]] return; }
L_003ABE24:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE34u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003ABE34u) [[unlikely]] return; }
L_003ABE34:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003ABE40u) [[unlikely]] return; }
L_003ABE40:
    set32(c.r[4], c.r[17].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003ABE4Cu) [[unlikely]] return; }
L_003ABE4C:
    set32(c.r[4], c.r[17].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003ABE58u) [[unlikely]] return; }
L_003ABE58:
    set32(c.r[4], c.r[17].w[0] + 280u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE68u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003ABE68u) [[unlikely]] return; }
L_003ABE68:
    st32((c.r[17].w[0] + 324u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 328u), 0u);
    st32((c.r[17].w[0] + 352u), 0u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[3], 0u + 31u);
    st32((c.r[17].w[0] + 360u), 0u);
    st64((c.r[17].w[0] + 344u), c.r[2].d[0]);
    st64((c.r[17].w[0] + 336u), c.r[2].d[0]);
    set32(c.r[2], c.r[17].w[0] + 488u);
    c.budget -= 12;
L_003ABE98:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABE98u | kUnwind; return; } goto L_003ABE98; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 496u), 0u);
    st32((c.r[17].w[0] + 500u), 0u);
    set32(c.r[3], 0u + 31u);
    st32((c.r[17].w[0] + 504u), 0u);
    st32((c.r[17].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 620u);
    c.budget -= 7;
L_003ABED0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABED0u | kUnwind; return; } goto L_003ABED0; } }
    set32(c.r[7], 0u - 1u);
    st32((c.r[17].w[0] + 680u), 0u);
    st32((c.r[17].w[0] + 716u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[8], ld32((c.r[17].w[0] + 680u)));
    set32(c.r[2], 0u - 5u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], 0u + 1000u);
    set32(c.r[4], 0u + 100u);
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 672u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 732u), 0u);
    st32((c.r[17].w[0] + 684u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 736u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 700u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 712u), c.f[0]);
    st32((c.r[17].w[0] + 720u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 1464u), 0u);
    st32((c.r[17].w[0] + 740u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 636u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 640u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 644u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 648u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 652u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 656u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 660u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 664u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 668u), 0u);
    st32((c.r[17].w[0] + 676u), 0u);
    st32((c.r[17].w[0] + 688u), 0u);
    st32((c.r[17].w[0] + 692u), 0u);
    st32((c.r[17].w[0] + 696u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 704u), c.f[0]);
    st32((c.r[17].w[0] + 708u), 0u);
    st32((c.r[17].w[0] + 724u), 0u);
    st32((c.r[17].w[0] + 744u), 0u);
    st32((c.r[17].w[0] + 1456u), 0u);
    st32((c.r[17].w[0] + 1460u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABFA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABFCCu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00A2(c, 440u, depth + 1u); else { c.pc = 0x003ABFF0u; return; } if (c.pc != 0x003ABFCCu) [[unlikely]] return; }
L_003ABFCC:
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABFF0:
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 4;
    [[clang::musttail]] return unit_00A3(c, 1u, depth);
}

}
