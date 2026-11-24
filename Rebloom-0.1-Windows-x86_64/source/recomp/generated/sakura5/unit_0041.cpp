#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0041[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93,
    0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0,
    255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0,
    0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0,
    373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0,
    0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0,
};

void unit_0041(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00224000;
    case 2u: goto L_00224014;
    case 3u: goto L_00224034;
    case 4u: goto L_00224058;
    case 5u: goto L_00224078;
    case 6u: goto L_0022409C;
    case 7u: goto L_002240BC;
    case 8u: goto L_002240E0;
    case 9u: goto L_00224100;
    case 10u: goto L_00224124;
    case 11u: goto L_00224144;
    case 12u: goto L_00224168;
    case 13u: goto L_00224184;
    case 14u: goto L_002241A8;
    case 15u: goto L_002241C4;
    case 16u: goto L_002241E8;
    case 17u: goto L_00224204;
    case 18u: goto L_00224228;
    case 19u: goto L_00224244;
    case 20u: goto L_00224268;
    case 21u: goto L_00224284;
    case 22u: goto L_002242A8;
    case 23u: goto L_002242C8;
    case 24u: goto L_002242EC;
    case 25u: goto L_0022430C;
    case 26u: goto L_00224330;
    case 27u: goto L_00224350;
    case 28u: goto L_00224374;
    case 29u: goto L_00224394;
    case 30u: goto L_002243B8;
    case 31u: goto L_002243D4;
    case 32u: goto L_002243F8;
    case 33u: goto L_00224414;
    case 34u: goto L_00224438;
    case 35u: goto L_00224458;
    case 36u: goto L_0022447C;
    case 37u: goto L_0022449C;
    case 38u: goto L_002244C0;
    case 39u: goto L_002244DC;
    case 40u: goto L_00224500;
    case 41u: goto L_00224520;
    case 42u: goto L_00224544;
    case 43u: goto L_00224560;
    case 44u: goto L_00224584;
    case 45u: goto L_002245A4;
    case 46u: goto L_002245C8;
    case 47u: goto L_002245E8;
    case 48u: goto L_0022460C;
    case 49u: goto L_0022462C;
    case 50u: goto L_00224650;
    case 51u: goto L_00224670;
    case 52u: goto L_00224694;
    case 53u: goto L_002246B4;
    case 54u: goto L_002246D8;
    case 55u: goto L_002246F8;
    case 56u: goto L_0022471C;
    case 57u: goto L_0022473C;
    case 58u: goto L_00224760;
    case 59u: goto L_00224780;
    case 60u: goto L_002247A4;
    case 61u: goto L_002247B0;
    case 62u: goto L_002247C0;
    case 63u: goto L_002247D8;
    case 64u: goto L_002247E0;
    case 65u: goto L_002247E8;
    case 66u: goto L_002247F0;
    case 67u: goto L_002247F8;
    case 68u: goto L_00224800;
    case 69u: goto L_00224820;
    case 70u: goto L_0022482C;
    case 71u: goto L_00224838;
    case 72u: goto L_00224840;
    case 73u: goto L_00224880;
    case 74u: goto L_00224898;
    case 75u: goto L_002248AC;
    case 76u: goto L_002248C0;
    case 77u: goto L_0022490C;
    case 78u: goto L_00224918;
    case 79u: goto L_00224924;
    case 80u: goto L_0022493C;
    case 81u: goto L_00224960;
    case 82u: goto L_00224978;
    case 83u: goto L_0022499C;
    case 84u: goto L_002249B0;
    case 85u: goto L_002249B8;
    case 86u: goto L_002249CC;
    case 87u: goto L_002249F8;
    case 88u: goto L_00224A04;
    case 89u: goto L_00224A30;
    case 90u: goto L_00224A38;
    case 91u: goto L_00224A5C;
    case 92u: goto L_00224A70;
    case 93u: goto L_00224A7C;
    case 94u: goto L_00224A88;
    case 95u: goto L_00224A90;
    case 96u: goto L_00224A98;
    case 97u: goto L_00224AAC;
    case 98u: goto L_00224AE0;
    case 99u: goto L_00224B20;
    case 100u: goto L_00224B34;
    case 101u: goto L_00224B40;
    case 102u: goto L_00224B60;
    case 103u: goto L_00224B74;
    case 104u: goto L_00224BE0;
    case 105u: goto L_00224C18;
    case 106u: goto L_00224C20;
    case 107u: goto L_00224C34;
    case 108u: goto L_00224C4C;
    case 109u: goto L_00224C7C;
    case 110u: goto L_00224C90;
    case 111u: goto L_00224CA8;
    case 112u: goto L_00224CD0;
    case 113u: goto L_00224CFC;
    case 114u: goto L_00224D0C;
    case 115u: goto L_00224D20;
    case 116u: goto L_00224D28;
    case 117u: goto L_00224D60;
    case 118u: goto L_00224D94;
    case 119u: goto L_00224DA4;
    case 120u: goto L_00224DB8;
    case 121u: goto L_00224DC0;
    case 122u: goto L_00224DF0;
    case 123u: goto L_00224E08;
    case 124u: goto L_00224E1C;
    case 125u: goto L_00224E30;
    case 126u: goto L_00224E48;
    case 127u: goto L_00224E5C;
    case 128u: goto L_00224E70;
    case 129u: goto L_00224E8C;
    case 130u: goto L_00224EA0;
    case 131u: goto L_00224EBC;
    case 132u: goto L_00224ED0;
    case 133u: goto L_00224EE8;
    case 134u: goto L_00224F04;
    case 135u: goto L_00224F14;
    case 136u: goto L_00224F30;
    case 137u: goto L_00224F5C;
    case 138u: goto L_00224F8C;
    case 139u: goto L_00224FBC;
    case 140u: goto L_00224FC8;
    case 141u: goto L_00224FE0;
    case 142u: goto L_00225000;
    case 143u: goto L_0022506C;
    case 144u: goto L_00225088;
    case 145u: goto L_002250B0;
    case 146u: goto L_002250DC;
    case 147u: goto L_002250F8;
    case 148u: goto L_00225120;
    case 149u: goto L_0022513C;
    case 150u: goto L_00225180;
    case 151u: goto L_002251AC;
    case 152u: goto L_002251CC;
    case 153u: goto L_002251EC;
    case 154u: goto L_0022520C;
    case 155u: goto L_0022522C;
    case 156u: goto L_0022524C;
    case 157u: goto L_00225274;
    case 158u: goto L_0022528C;
    case 159u: goto L_002252A4;
    case 160u: goto L_002252D0;
    case 161u: goto L_00225304;
    case 162u: goto L_00225320;
    case 163u: goto L_0022533C;
    case 164u: goto L_00225358;
    case 165u: goto L_00225368;
    case 166u: goto L_002253A4;
    case 167u: goto L_002253E0;
    case 168u: goto L_00225404;
    case 169u: goto L_00225428;
    case 170u: goto L_00225450;
    case 171u: goto L_00225478;
    case 172u: goto L_00225498;
    case 173u: goto L_002254BC;
    case 174u: goto L_002254E0;
    case 175u: goto L_0022559C;
    case 176u: goto L_002255BC;
    case 177u: goto L_002255CC;
    case 178u: goto L_002255F4;
    case 179u: goto L_00225640;
    case 180u: goto L_00225750;
    case 181u: goto L_00225788;
    case 182u: goto L_00225790;
    case 183u: goto L_00225798;
    case 184u: goto L_00225808;
    case 185u: goto L_00225814;
    case 186u: goto L_00225834;
    case 187u: goto L_00225A10;
    case 188u: goto L_00225A38;
    case 189u: goto L_00225A6C;
    case 190u: goto L_00225A88;
    case 191u: goto L_00225AB4;
    case 192u: goto L_00225AD0;
    case 193u: goto L_00225B00;
    case 194u: goto L_00225B2C;
    case 195u: goto L_00225B50;
    case 196u: goto L_00225B60;
    case 197u: goto L_00225B78;
    case 198u: goto L_00225BBC;
    case 199u: goto L_00225BD0;
    case 200u: goto L_00225BF8;
    case 201u: goto L_00225C70;
    case 202u: goto L_00225C78;
    case 203u: goto L_00225CC8;
    case 204u: goto L_00225D44;
    case 205u: goto L_00225D60;
    case 206u: goto L_00225D78;
    case 207u: goto L_00225DB4;
    case 208u: goto L_00225DD0;
    case 209u: goto L_00225DF4;
    case 210u: goto L_00225E10;
    case 211u: goto L_00225E24;
    case 212u: goto L_00225E30;
    case 213u: goto L_00225E70;
    case 214u: goto L_00225E90;
    case 215u: goto L_00225EA0;
    case 216u: goto L_00225EBC;
    case 217u: goto L_00225EE0;
    case 218u: goto L_00225EFC;
    case 219u: goto L_00225F08;
    case 220u: goto L_00225F28;
    case 221u: goto L_00225F70;
    case 222u: goto L_00225F98;
    case 223u: goto L_00225FD0;
    case 224u: goto L_00226014;
    case 225u: goto L_00226018;
    case 226u: goto L_00226024;
    case 227u: goto L_0022602C;
    case 228u: goto L_00226038;
    case 229u: goto L_00226040;
    case 230u: goto L_00226048;
    case 231u: goto L_00226050;
    case 232u: goto L_00226058;
    case 233u: goto L_00226088;
    case 234u: goto L_0022609C;
    case 235u: goto L_002260E4;
    case 236u: goto L_002260F4;
    case 237u: goto L_00226118;
    case 238u: goto L_0022612C;
    case 239u: goto L_00226160;
    case 240u: goto L_00226170;
    case 241u: goto L_00226188;
    case 242u: goto L_00226194;
    case 243u: goto L_002261A0;
    case 244u: goto L_002261B4;
    case 245u: goto L_002261C0;
    case 246u: goto L_002261CC;
    case 247u: goto L_002261E0;
    case 248u: goto L_00226200;
    case 249u: goto L_00226210;
    case 250u: goto L_00226234;
    case 251u: goto L_0022624C;
    case 252u: goto L_00226254;
    case 253u: goto L_00226260;
    case 254u: goto L_00226274;
    case 255u: goto L_00226280;
    case 256u: goto L_0022628C;
    case 257u: goto L_002262A0;
    case 258u: goto L_002262C0;
    case 259u: goto L_002262D0;
    case 260u: goto L_002262F4;
    case 261u: goto L_0022630C;
    case 262u: goto L_00226314;
    case 263u: goto L_00226320;
    case 264u: goto L_00226338;
    case 265u: goto L_00226344;
    case 266u: goto L_00226350;
    case 267u: goto L_00226368;
    case 268u: goto L_00226388;
    case 269u: goto L_00226398;
    case 270u: goto L_002263BC;
    case 271u: goto L_002263D4;
    case 272u: goto L_002263DC;
    case 273u: goto L_002263F4;
    case 274u: goto L_00226410;
    case 275u: goto L_00226418;
    case 276u: goto L_00226424;
    case 277u: goto L_00226438;
    case 278u: goto L_00226444;
    case 279u: goto L_00226458;
    case 280u: goto L_002264B4;
    case 281u: goto L_002264BC;
    case 282u: goto L_002264C8;
    case 283u: goto L_002264DC;
    case 284u: goto L_002264F8;
    case 285u: goto L_0022650C;
    case 286u: goto L_0022651C;
    case 287u: goto L_00226540;
    case 288u: goto L_00226548;
    case 289u: goto L_00226554;
    case 290u: goto L_00226568;
    case 291u: goto L_00226574;
    case 292u: goto L_0022658C;
    case 293u: goto L_002265A0;
    case 294u: goto L_002265BC;
    case 295u: goto L_002265C4;
    case 296u: goto L_002265E0;
    case 297u: goto L_002265FC;
    case 298u: goto L_00226620;
    case 299u: goto L_00226634;
    case 300u: goto L_00226640;
    case 301u: goto L_00226650;
    case 302u: goto L_0022669C;
    case 303u: goto L_002266A8;
    case 304u: goto L_002266BC;
    case 305u: goto L_002266D4;
    case 306u: goto L_002266E4;
    case 307u: goto L_00226718;
    case 308u: goto L_00226730;
    case 309u: goto L_00226740;
    case 310u: goto L_0022679C;
    case 311u: goto L_002267C8;
    case 312u: goto L_002267FC;
    case 313u: goto L_00226850;
    case 314u: goto L_002268C8;
    case 315u: goto L_00226958;
    case 316u: goto L_0022696C;
    case 317u: goto L_002269B0;
    case 318u: goto L_002269D0;
    case 319u: goto L_00226A0C;
    case 320u: goto L_00226A30;
    case 321u: goto L_00226A3C;
    case 322u: goto L_00226A94;
    case 323u: goto L_00226B4C;
    case 324u: goto L_00226B54;
    case 325u: goto L_00226B5C;
    case 326u: goto L_00226C14;
    case 327u: goto L_00226C1C;
    case 328u: goto L_00226C44;
    case 329u: goto L_00226C54;
    case 330u: goto L_00226C64;
    case 331u: goto L_00226C74;
    case 332u: goto L_00226C84;
    case 333u: goto L_00226C94;
    case 334u: goto L_00226CB0;
    case 335u: goto L_00226E3C;
    case 336u: goto L_00226E5C;
    case 337u: goto L_00226E74;
    case 338u: goto L_00226E90;
    case 339u: goto L_00226EB4;
    case 340u: goto L_00226EC4;
    case 341u: goto L_00226EDC;
    case 342u: goto L_00226EE8;
    case 343u: goto L_00226F00;
    case 344u: goto L_00226F18;
    case 345u: goto L_00226F30;
    case 346u: goto L_00226F64;
    case 347u: goto L_00226F90;
    case 348u: goto L_00226FFC;
    case 349u: goto L_00227034;
    case 350u: goto L_00227044;
    case 351u: goto L_00227068;
    case 352u: goto L_002270A8;
    case 353u: goto L_002270B8;
    case 354u: goto L_002270C8;
    case 355u: goto L_00227100;
    case 356u: goto L_00227124;
    case 357u: goto L_00227134;
    case 358u: goto L_0022715C;
    case 359u: goto L_00227164;
    case 360u: goto L_00227178;
    case 361u: goto L_002271B0;
    case 362u: goto L_002271C0;
    case 363u: goto L_002271D8;
    case 364u: goto L_002271E4;
    case 365u: goto L_00227208;
    case 366u: goto L_00227264;
    case 367u: goto L_0022727C;
    case 368u: goto L_0022729C;
    case 369u: goto L_002272B8;
    case 370u: goto L_002272C8;
    case 371u: goto L_002272E4;
    case 372u: goto L_002272F8;
    case 373u: goto L_00227300;
    case 374u: goto L_00227310;
    case 375u: goto L_00227320;
    case 376u: goto L_00227388;
    case 377u: goto L_0022740C;
    case 378u: goto L_00227484;
    case 379u: goto L_002274D0;
    case 380u: goto L_002274F0;
    case 381u: goto L_00227508;
    case 382u: goto L_00227514;
    case 383u: goto L_0022758C;
    case 384u: goto L_002275D8;
    case 385u: goto L_002275E8;
    case 386u: goto L_00227600;
    case 387u: goto L_0022760C;
    case 388u: goto L_00227684;
    case 389u: goto L_002276D0;
    case 390u: goto L_002276E0;
    case 391u: goto L_002276F0;
    case 392u: goto L_00227718;
    case 393u: goto L_00227728;
    case 394u: goto L_0022774C;
    case 395u: goto L_00227754;
    case 396u: goto L_00227770;
    case 397u: goto L_00227798;
    case 398u: goto L_002277A4;
    case 399u: goto L_002277B4;
    case 400u: goto L_00227808;
    case 401u: goto L_00227858;
    case 402u: goto L_0022788C;
    case 403u: goto L_002278F0;
    case 404u: goto L_00227914;
    case 405u: goto L_0022791C;
    case 406u: goto L_0022792C;
    case 407u: goto L_00227944;
    case 408u: goto L_00227960;
    case 409u: goto L_00227984;
    case 410u: goto L_002279CC;
    case 411u: goto L_00227A20;
    case 412u: goto L_00227A2C;
    case 413u: goto L_00227A7C;
    case 414u: goto L_00227AB0;
    case 415u: goto L_00227B1C;
    case 416u: goto L_00227B68;
    case 417u: goto L_00227B74;
    case 418u: goto L_00227B8C;
    case 419u: goto L_00227B94;
    case 420u: goto L_00227BB0;
    case 421u: goto L_00227BD8;
    case 422u: goto L_00227BE0;
    case 423u: goto L_00227BF4;
    case 424u: goto L_00227C0C;
    case 425u: goto L_00227C24;
    case 426u: goto L_00227C78;
    case 427u: goto L_00227CC8;
    case 428u: goto L_00227CFC;
    case 429u: goto L_00227D60;
    case 430u: goto L_00227D90;
    case 431u: goto L_00227DB8;
    case 432u: goto L_00227DE0;
    case 433u: goto L_00227E34;
    case 434u: goto L_00227E48;
    case 435u: goto L_00227E9C;
    case 436u: goto L_00227EEC;
    case 437u: goto L_00227F20;
    case 438u: goto L_00227F8C;
    case 439u: goto L_00227FD4;
    case 440u: goto L_00227FDC;
    case 441u: goto L_00227FF8;
    default: bad_entry(c, 0x00224000u); return;
    }
L_00224000:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 64u);
    set32(c.r[8], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224014u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 244u, depth + 1u); else { c.pc = 0x001FB390u; return; } if (c.pc != 0x00224014u) [[unlikely]] return; }
L_00224014:
    set32(c.r[2], 0u + 20u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 960u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 960u);
    st32((c.r[29].w[0] + 964u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224034u); st32((c.r[29].w[0] + 976u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224034u) [[unlikely]] return; }
L_00224034:
    set32(c.r[4], ld32((c.r[29].w[0] + 964u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 20u);  goto L_0022405C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224058u) [[unlikely]] return; }
L_00224058:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0022405C:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 928u), c.r[2].w[0]);
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], c.r[29].w[0] + 928u);
    st32((c.r[29].w[0] + 932u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224078u); st32((c.r[29].w[0] + 944u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224078u) [[unlikely]] return; }
L_00224078:
    set32(c.r[4], ld32((c.r[29].w[0] + 932u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 16u);  goto L_002240A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022409C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022409Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022409Cu) [[unlikely]] return; }
L_0022409C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002240A0:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 896u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 900u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240BCu); st32((c.r[29].w[0] + 912u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002240BCu) [[unlikely]] return; }
L_002240BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 900u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002240E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002240E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002240E0u) [[unlikely]] return; }
L_002240E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002240E4:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 864u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 864u);
    st32((c.r[29].w[0] + 868u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224100u); st32((c.r[29].w[0] + 880u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224100u) [[unlikely]] return; }
L_00224100:
    set32(c.r[4], ld32((c.r[29].w[0] + 868u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_00224128; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224124u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224124u) [[unlikely]] return; }
L_00224124:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00224128:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 832u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 832u);
    st32((c.r[29].w[0] + 836u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224144u); st32((c.r[29].w[0] + 848u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224144u) [[unlikely]] return; }
L_00224144:
    set32(c.r[4], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0022416C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224168u) [[unlikely]] return; }
L_00224168:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0022416C:
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[29].w[0] + 800u);
    st32((c.r[29].w[0] + 804u), 0u);
    st32((c.r[29].w[0] + 800u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224184u); st32((c.r[29].w[0] + 816u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224184u) [[unlikely]] return; }
L_00224184:
    set32(c.r[4], ld32((c.r[29].w[0] + 804u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_002241AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002241A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002241A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002241A8u) [[unlikely]] return; }
L_002241A8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002241AC:
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[29].w[0] + 768u);
    st32((c.r[29].w[0] + 772u), 0u);
    st32((c.r[29].w[0] + 768u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002241C4u); st32((c.r[29].w[0] + 784u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002241C4u) [[unlikely]] return; }
L_002241C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 772u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_002241EC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002241E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002241E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002241E8u) [[unlikely]] return; }
L_002241E8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002241EC:
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 736u);
    st32((c.r[29].w[0] + 740u), 0u);
    st32((c.r[29].w[0] + 736u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224204u); st32((c.r[29].w[0] + 752u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224204u) [[unlikely]] return; }
L_00224204:
    set32(c.r[4], ld32((c.r[29].w[0] + 740u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0022422C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224228u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224228u) [[unlikely]] return; }
L_00224228:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0022422C:
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 708u), 0u);
    st32((c.r[29].w[0] + 704u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224244u); st32((c.r[29].w[0] + 720u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224244u) [[unlikely]] return; }
L_00224244:
    set32(c.r[4], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0022426C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224268u) [[unlikely]] return; }
L_00224268:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0022426C:
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], c.r[29].w[0] + 672u);
    st32((c.r[29].w[0] + 676u), 0u);
    st32((c.r[29].w[0] + 672u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224284u); st32((c.r[29].w[0] + 688u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224284u) [[unlikely]] return; }
L_00224284:
    set32(c.r[4], ld32((c.r[29].w[0] + 676u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_002242AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002242A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002242A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002242A8u) [[unlikely]] return; }
L_002242A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002242AC:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[29].w[0] + 640u);
    st32((c.r[29].w[0] + 644u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002242C8u); st32((c.r[29].w[0] + 656u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002242C8u) [[unlikely]] return; }
L_002242C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 80u);  goto L_002242F0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002242EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002242ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002242ECu) [[unlikely]] return; }
L_002242EC:
    set32(c.r[2], 0u + 80u);
    c.budget -= 1;
L_002242F0:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 612u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022430Cu); st32((c.r[29].w[0] + 624u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0022430Cu) [[unlikely]] return; }
L_0022430C:
    set32(c.r[4], ld32((c.r[29].w[0] + 612u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00224334; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224330u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224330u) [[unlikely]] return; }
L_00224330:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00224334:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[29].w[0] + 576u);
    st32((c.r[29].w[0] + 580u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224350u); st32((c.r[29].w[0] + 592u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224350u) [[unlikely]] return; }
L_00224350:
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00224378; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224374u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224374u) [[unlikely]] return; }
L_00224374:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00224378:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], c.r[29].w[0] + 544u);
    st32((c.r[29].w[0] + 548u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224394u); st32((c.r[29].w[0] + 560u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224394u) [[unlikely]] return; }
L_00224394:
    set32(c.r[4], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_002243BC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002243B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002243B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002243B8u) [[unlikely]] return; }
L_002243B8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002243BC:
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 516u), 0u);
    st32((c.r[29].w[0] + 512u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002243D4u); st32((c.r[29].w[0] + 528u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002243D4u) [[unlikely]] return; }
L_002243D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_002243FC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002243F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002243F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002243F8u) [[unlikely]] return; }
L_002243F8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002243FC:
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], c.r[29].w[0] + 480u);
    st32((c.r[29].w[0] + 484u), 0u);
    st32((c.r[29].w[0] + 480u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224414u); st32((c.r[29].w[0] + 496u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224414u) [[unlikely]] return; }
L_00224414:
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0022443C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224438u) [[unlikely]] return; }
L_00224438:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0022443C:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 452u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224458u); st32((c.r[29].w[0] + 464u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224458u) [[unlikely]] return; }
L_00224458:
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_00224480; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022447C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022447Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022447Cu) [[unlikely]] return; }
L_0022447C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00224480:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    st32((c.r[29].w[0] + 420u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022449Cu); st32((c.r[29].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0022449Cu) [[unlikely]] return; }
L_0022449C:
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_002244C4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002244C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002244C0u) [[unlikely]] return; }
L_002244C0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002244C4:
    set32(c.r[5], 0u + 16u);
    st32((c.r[29].w[0] + 384u), c.r[4].w[0]);
    set32(c.r[6], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 388u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244DCu); st32((c.r[29].w[0] + 400u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002244DCu) [[unlikely]] return; }
L_002244DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00224504; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224500u) [[unlikely]] return; }
L_00224500:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00224504:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 356u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224520u); st32((c.r[29].w[0] + 368u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224520u) [[unlikely]] return; }
L_00224520:
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_00224548; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224544u) [[unlikely]] return; }
L_00224544:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00224548:
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 324u), 0u);
    st32((c.r[29].w[0] + 320u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224560u); st32((c.r[29].w[0] + 336u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224560u) [[unlikely]] return; }
L_00224560:
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 96u);  goto L_00224588; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224584u) [[unlikely]] return; }
L_00224584:
    set32(c.r[2], 0u + 96u);
    c.budget -= 1;
L_00224588:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 292u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002245A4u); st32((c.r[29].w[0] + 304u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002245A4u) [[unlikely]] return; }
L_002245A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 120u);  goto L_002245CC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002245C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002245C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002245C8u) [[unlikely]] return; }
L_002245C8:
    set32(c.r[2], 0u + 120u);
    c.budget -= 1;
L_002245CC:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002245E8u); st32((c.r[29].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002245E8u) [[unlikely]] return; }
L_002245E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 144u);  goto L_00224610; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022460C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022460Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022460Cu) [[unlikely]] return; }
L_0022460C:
    set32(c.r[2], 0u + 144u);
    c.budget -= 1;
L_00224610:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022462Cu); st32((c.r[29].w[0] + 240u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0022462Cu) [[unlikely]] return; }
L_0022462C:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 96u);  goto L_00224654; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224650u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224650u) [[unlikely]] return; }
L_00224650:
    set32(c.r[2], 0u + 96u);
    c.budget -= 1;
L_00224654:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224670u); st32((c.r[29].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224670u) [[unlikely]] return; }
L_00224670:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 60u);  goto L_00224698; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224694u) [[unlikely]] return; }
L_00224694:
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_00224698:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002246B4u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002246B4u) [[unlikely]] return; }
L_002246B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 60u);  goto L_002246DC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002246D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002246D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002246D8u) [[unlikely]] return; }
L_002246D8:
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_002246DC:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002246F8u); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002246F8u) [[unlikely]] return; }
L_002246F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 20u);  goto L_00224720; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022471C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022471Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022471Cu) [[unlikely]] return; }
L_0022471C:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00224720:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], 0u + 29u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022473Cu); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0022473Cu) [[unlikely]] return; }
L_0022473C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 20u);  goto L_00224764; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224760u) [[unlikely]] return; }
L_00224760:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00224764:
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224780u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00224780u) [[unlikely]] return; }
L_00224780:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_002247A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002247A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002247A4u) [[unlikely]] return; }
L_002247A4:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_002247A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002247B0u) [[unlikely]] return; }
L_002247B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002247C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 259u, depth + 1u); else { c.pc = 0x001EE420u; return; } if (c.pc != 0x002247C0u) [[unlikely]] return; }
L_002247C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 257u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247D8u); set32(c.r[6], c.r[6].w[0] + 18560u);  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001EE540u; return; } if (c.pc != 0x002247D8u) [[unlikely]] return; }
L_002247D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247E0u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0033(c, 295u, depth + 1u); else { c.pc = 0x001EE820u; return; } if (c.pc != 0x002247E0u) [[unlikely]] return; }
L_002247E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247E8u);  if (depth < kMaxDepth) unit_0029(c, 449u, depth + 1u); else { c.pc = 0x001C7430u; return; } if (c.pc != 0x002247E8u) [[unlikely]] return; }
L_002247E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247F0u);  if (depth < kMaxDepth) unit_004F(c, 396u, depth + 1u); else { c.pc = 0x0025FC80u; return; } if (c.pc != 0x002247F0u) [[unlikely]] return; }
L_002247F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x002247F8u) [[unlikely]] return; }
L_002247F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224800u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x00224800u) [[unlikely]] return; }
L_00224800:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224820u); set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x00224820u) [[unlikely]] return; }
L_00224820:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022482Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 36u, depth + 1u); else { c.pc = 0x00214570u; return; } if (c.pc != 0x0022482Cu) [[unlikely]] return; }
L_0022482C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224838u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 170u, depth + 1u); else { c.pc = 0x00219790u; return; } if (c.pc != 0x00224838u) [[unlikely]] return; }
L_00224838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224840u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x00224840u) [[unlikely]] return; }
L_00224840:
    st32((c.r[28].w[0] - 30536u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 18753ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 992u);  c.pc = t; return; }
L_00224880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224898u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00224898u) [[unlikely]] return; }
L_00224898:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002248B0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002248ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 135u, depth + 1u); else { c.pc = 0x001D53F0u; return; } if (c.pc != 0x002248ACu) [[unlikely]] return; }
L_002248AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002248B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002248C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022493C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18864u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00224910; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), 0u);  goto L_00224910; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022490Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022490Cu) [[unlikely]] return; }
L_0022490C:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_00224910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224918u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001EE830u; return; } if (c.pc != 0x00224918u) [[unlikely]] return; }
L_00224918:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00224924u) [[unlikely]] return; }
L_00224924:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00224940; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022493Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0022493Cu) [[unlikely]] return; }
L_0022493C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00224940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00224960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224978u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00224978u) [[unlikely]] return; }
L_00224978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54450000u);
    set32(c.r[3], c.r[3].w[0] + 18800u);
    c.r[2].d[0] = c.r[2].d[0] | 21313ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[28].w[0] - 30436u), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022499Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x0022499Cu) [[unlikely]] return; }
L_0022499C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002249B0u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_002C(c, 101u, depth + 1u); else { c.pc = 0x001D0F80u; return; } if (c.pc != 0x002249B0u) [[unlikely]] return; }
L_002249B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002249B8u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002249B8u) [[unlikely]] return; }
L_002249B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00224A38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002249CCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002249CCu) [[unlikely]] return; }
L_002249CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002249F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 12544u);
    set32(c.r[3], c.r[3].w[0] + 19536u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
L_002249F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002249F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x002249F8u) [[unlikely]] return; }
L_002249F8:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A04u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00224A04u) [[unlikely]] return; }
L_00224A04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00224A28; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 12544u);
    set32(c.r[3], c.r[3].w[0] + 19664u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
L_00224A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x00224A30u) [[unlikely]] return; }
L_00224A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00224A54; } }
L_00224A38:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224A38u | kUnwind; return; } goto L_00224A38; } }
L_00224A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A5Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00224A5Cu) [[unlikely]] return; }
L_00224A5C:
    set32(c.r[2], ld32((c.r[2].w[0] + 980u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 277u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A70u); st32((c.r[2].w[0] + 280u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00224A70u) [[unlikely]] return; }
L_00224A70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A7Cu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x00224A7Cu) [[unlikely]] return; }
L_00224A7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 156u, depth + 1u); else { c.pc = 0x001CD4E0u; return; } if (c.pc != 0x00224A88u) [[unlikely]] return; }
L_00224A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A90u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 3u, depth + 1u); else { c.pc = 0x00164070u; return; } if (c.pc != 0x00224A90u) [[unlikely]] return; }
L_00224A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A98u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00224A98u) [[unlikely]] return; }
L_00224A98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  goto L_00224AB0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224AACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 39u, depth + 1u); else { c.pc = 0x00254520u; return; } if (c.pc != 0x00224AACu) [[unlikely]] return; }
L_00224AAC:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00224AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00224AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00224BC4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00224B8C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00224B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224BC0; } }
L_00224B20:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 32464u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B34u); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00224B34u) [[unlikely]] return; }
L_00224B34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00224B40u) [[unlikely]] return; }
L_00224B40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00224B44:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00224B20u | kUnwind; return; } goto L_00224B20; }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_00224BC0; } }
L_00224B60:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 32464u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B74u); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00224B74u) [[unlikely]] return; }
L_00224B74:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00224B9C; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00224B8C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00224B60u | kUnwind; return; } goto L_00224B60; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00224B9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 9;
L_00224BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00224BC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00224BE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00224CA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C18u); st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 117u, depth + 1u); else { c.pc = 0x00224D60u; return; } if (c.pc != 0x00224C18u) [[unlikely]] return; }
L_00224C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C20u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00224C20u) [[unlikely]] return; }
L_00224C20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  goto L_00224C64; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00224C34:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 52u);  if (t) { goto L_00224C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 32u, depth + 1u); else { c.pc = 0x001FC430u; return; } if (c.pc != 0x00224C4Cu) [[unlikely]] return; }
L_00224C4C:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_00224C50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00224C34u | kUnwind; return; } goto L_00224C34; }
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_00224C64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00224C84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00224C7Cu) [[unlikely]] return; }
L_00224C7C:
    st32((c.r[19].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00224C84:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C90u); st32((c.r[28].w[0] - 30436u), 0u);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00224C90u) [[unlikely]] return; }
L_00224C90:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_00224CAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224CA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00224CA8u) [[unlikely]] return; }
L_00224CA8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00224CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00224CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00224D48; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224CFCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x00224CFCu) [[unlikely]] return; }
L_00224CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00224D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D0Cu);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x00224D0Cu) [[unlikely]] return; }
L_00224D0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D20u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_002C(c, 140u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x00224D20u) [[unlikely]] return; }
L_00224D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D28u);  if (depth < kMaxDepth) unit_0029(c, 328u, depth + 1u); else { c.pc = 0x001C6030u; return; } if (c.pc != 0x00224D28u) [[unlikely]] return; }
L_00224D28:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00224D4C; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_00224D48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00224D4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00224DE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x00224D94u) [[unlikely]] return; }
L_00224D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00224DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DA4u);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x00224DA4u) [[unlikely]] return; }
L_00224DA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DB8u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_002C(c, 143u, depth + 1u); else { c.pc = 0x001D1570u; return; } if (c.pc != 0x00224DB8u) [[unlikely]] return; }
L_00224DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DC0u);  if (depth < kMaxDepth) unit_0029(c, 330u, depth + 1u); else { c.pc = 0x001C6060u; return; } if (c.pc != 0x00224DC0u) [[unlikely]] return; }
L_00224DC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00224DE4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_00224DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00224DE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E08u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00224E08u) [[unlikely]] return; }
L_00224E08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00224E20; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 464u, depth + 1u); else { c.pc = 0x00223FA0u; return; } if (c.pc != 0x00224E1Cu) [[unlikely]] return; }
L_00224E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00224E20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E48u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00224E48u) [[unlikely]] return; }
L_00224E48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00224E60; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 81u, depth + 1u); else { c.pc = 0x00224960u; return; } if (c.pc != 0x00224E5Cu) [[unlikely]] return; }
L_00224E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00224E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30436u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00224E90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E8Cu);  if (depth < kMaxDepth) unit_0041(c, 112u, depth + 1u); else { c.pc = 0x00224CD0u; return; } if (c.pc != 0x00224E8Cu) [[unlikely]] return; }
L_00224E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00224E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30436u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00224EC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EBCu);  if (depth < kMaxDepth) unit_0041(c, 117u, depth + 1u); else { c.pc = 0x00224D60u; return; } if (c.pc != 0x00224EBCu) [[unlikely]] return; }
L_00224EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00224EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4096u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00224EE8u) [[unlikely]] return; }
L_00224EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18928u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F04u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0041(c, 142u, depth + 1u); else { c.pc = 0x00225000u; return; } if (c.pc != 0x00224F04u) [[unlikely]] return; }
L_00224F04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F14u); set32(c.r[5], c.r[5].w[0] + 32704u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x00224F14u) [[unlikely]] return; }
L_00224F14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00224FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F5Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 150u, depth + 1u); else { c.pc = 0x00225180u; return; } if (c.pc != 0x00224F5Cu) [[unlikely]] return; }
L_00224F5C:
    set32(c.r[2], c.r[17].w[0] + 188u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 184u);  goto L_00224F90; }
    set32(c.r[4], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00224F8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224F8Cu) [[unlikely]] return; }
L_00224F8C:
    set32(c.r[2], c.r[17].w[0] + 184u);
    c.budget -= 1;
L_00224F90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00224FC0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00224FBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00224FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00224FBCu) [[unlikely]] return; }
L_00224FBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00224FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00224FC8u) [[unlikely]] return; }
L_00224FC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00224FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00224FE0u) [[unlikely]] return; }
L_00224FE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00224FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00225000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 156u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 268u), 0u);
    st32((c.r[4].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 264u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022506C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0022506C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022506Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022506Cu) [[unlikely]] return; }
L_0022506C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 32518u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), 0u);  goto L_002250B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225088u); set32(c.r[4], c.r[4].w[0] - 32518u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00225088u) [[unlikely]] return; }
L_00225088:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] - 32518u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002250A0; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 184u);  goto L_002250A8; }
L_002250A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002250B4; } }
L_002250A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002250B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002250B0u) [[unlikely]] return; }
L_002250B0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002250B4:
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 1;
L_002250B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002250DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002250DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002250DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002250DCu) [[unlikely]] return; }
L_002250DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 32518u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 188u), 0u);  goto L_00225128; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002250F8u); set32(c.r[4], c.r[4].w[0] - 32518u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002250F8u) [[unlikely]] return; }
L_002250F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] - 32518u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00225110; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 188u);  goto L_00225118; }
L_00225110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00225124; } }
L_00225118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225120u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00225120u) [[unlikely]] return; }
L_00225120:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00225124:
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 1;
L_00225128:
    st32((c.r[16].w[0] + 192u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 196u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 200u), 0u);  if (t) { goto L_0022514C; } }
L_0022513C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 212u), 0u);
    c.budget -= 4;
L_0022514C:
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022513Cu | kUnwind; return; } goto L_0022513C; } }
    st32((c.r[16].w[0] + 252u), 0u);
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 168u)));  goto L_002251B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002251ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002251ACu) [[unlikely]] return; }
L_002251AC:
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 2;
L_002251B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_002251D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002251CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002251CCu) [[unlikely]] return; }
L_002251CC:
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 2;
L_002251D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  goto L_002251F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002251ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002251ECu) [[unlikely]] return; }
L_002251EC:
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 2;
L_002251F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  goto L_00225214; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022520Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022520Cu) [[unlikely]] return; }
L_0022520C:
    st32((c.r[16].w[0] + 256u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 2;
L_00225214:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  goto L_00225234; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022522Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022522Cu) [[unlikely]] return; }
L_0022522C:
    st32((c.r[16].w[0] + 260u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 2;
L_00225234:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  goto L_00225254; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022524Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022524Cu) [[unlikely]] return; }
L_0022524C:
    st32((c.r[16].w[0] + 264u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 2;
L_00225254:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 172u)));  goto L_0022527C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 192u), 0u);  goto L_00225278; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00225274u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00225274u) [[unlikely]] return; }
L_00225274:
    st32((c.r[16].w[0] + 192u), 0u);
    c.budget -= 1;
L_00225278:
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_0022527C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_00225294; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022528Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0022528Cu) [[unlikely]] return; }
L_0022528C:
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 2;
L_00225294:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002252AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002252A4u);  if (depth < kMaxDepth) unit_0025(c, 530u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x002252A4u) [[unlikely]] return; }
L_002252A4:
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_002252AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002252D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225304u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00225304u) [[unlikely]] return; }
L_00225304:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225320u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00225320u) [[unlikely]] return; }
L_00225320:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022533Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022533Cu) [[unlikely]] return; }
L_0022533C:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225358u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00225358u) [[unlikely]] return; }
L_00225358:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225368u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00225368u) [[unlikely]] return; }
L_00225368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[20] = ld32((c.r[3].w[0] + 32664u));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 208u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002253A4u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x002253A4u) [[unlikely]] return; }
L_002253A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[21] = ld32((c.r[3].w[0] + 32668u));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 212u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002253E0u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x002253E0u) [[unlikely]] return; }
L_002253E0:
    st32((c.r[2].w[0] + 224u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225404u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00225404u) [[unlikely]] return; }
L_00225404:
    st32((c.r[2].w[0] + 228u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225428u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00225428u) [[unlikely]] return; }
L_00225428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225450u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00225450u) [[unlikely]] return; }
L_00225450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225478u); set32(c.r[4], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00225478u) [[unlikely]] return; }
L_00225478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 292u)));
    set32(c.r[4], 0u + 4098u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225498u); st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225498u) [[unlikely]] return; }
L_00225498:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[7], c.r[7].w[0] - 8992u);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254BCu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002254BCu) [[unlikely]] return; }
L_002254BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002254E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00225740; }
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 196u));  goto L_0022552C; }
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), c.f[0]);  if (t) { goto L_00225540; } }
L_0022552C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 5;
L_00225540:
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00225560; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_00225560:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 196u), c.f[1]);  goto L_0022557C; }
    c.f[1] = c.f[0];
    st32((c.r[16].w[0] + 196u), c.f[1]);
    c.budget -= 2;
L_0022557C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1024u);  goto L_002255B4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022559Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0022559Cu) [[unlikely]] return; }
L_0022559C:
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_0022573C; } }
L_002255B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255BCu);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x002255BCu) [[unlikely]] return; }
L_002255BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002255D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255CCu); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x002255CCu) [[unlikely]] return; }
L_002255CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002256A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002255D8:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002256A8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255F4u); set32(c.r[6], 0u + 27u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002255F4u) [[unlikely]] return; }
L_002255F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00225608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0022561C; } }
L_00225608:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0022561C; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_0022561C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00225640; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00225640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225640u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00225640u) [[unlikely]] return; }
L_00225640:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002256A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00225664; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022567C; } }
L_00225664:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022567C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 152u), c.f[0]);  if (t) { goto L_00225700; } }
L_002256A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002256C4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002256DC; } }
L_002256C4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_002256DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.budget -= 9;
L_00225700:
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00225720; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_00225720:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 152u), c.f[1]);  goto L_0022573C; }
    c.f[1] = c.f[0];
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 2;
L_0022573C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00225740:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00225750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00225814; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225788u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x00225788u) [[unlikely]] return; }
L_00225788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225790u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00225790u) [[unlikely]] return; }
L_00225790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225798u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00225798u) [[unlikely]] return; }
L_00225798:
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002257D0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002257E8; } }
L_002257D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_002257E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225808u); set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00225808u) [[unlikely]] return; }
L_00225808:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225814u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x00225814u) [[unlikely]] return; }
L_00225814:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002259FC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225834u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00225834u) [[unlikely]] return; }
L_00225834:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 148u));
    c.f[2] = ld32((c.r[16].w[0] + 152u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0022587C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 160u)));  if (t) { goto L_00225894; } }
L_0022587C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[5], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 6;
L_00225894:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] << 24);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[2].w[0] + 208u), c.f[2]);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 252u));
    st32((c.r[2].w[0] + 212u), c.f[2]);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 612u)));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[5].w[0] + 612u), c.r[4].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 148u));
    c.f[2] = ld32((c.r[16].w[0] + 152u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 47;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] + 320u);  if (t) { goto L_00225960; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00225978; } }
L_00225960:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_00225978:
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[6], c.r[5].w[0] << 24);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 168u)));
    c.r[4].d[0] = c.r[4].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 172u)));
    c.r[4].d[0] = c.r[4].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 172u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[3].w[0] + 208u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 292u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 252u));
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 292u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 33;
L_002259FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00225A38u) [[unlikely]] return; }
L_00225A38:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00225A6C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00225A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00225A6Cu) [[unlikely]] return; }
L_00225A6C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_00225AC4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00225A88u) [[unlikely]] return; }
L_00225A88:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00225AB4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00225AA4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225AB4; } }
L_00225AA4:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225AB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00225AB4u) [[unlikely]] return; }
L_00225AB4:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 212u)));  if (t) { goto L_00225AC8; } }
L_00225AC0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00225AC4:
    set32(c.r[19], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 1;
L_00225AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225AD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00225AD0u) [[unlikely]] return; }
L_00225AD0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00225B00; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00225B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00225B00u) [[unlikely]] return; }
L_00225B00:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00225B30; }
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B2Cu); set32(c.r[6], c.r[6].w[0] - 32517u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00225B2Cu) [[unlikely]] return; }
L_00225B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00225B30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00225B50:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEC10u | kUnwind; return; } [[clang::musttail]] return unit_0033(c, 322u, depth); }
L_00225B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B78u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225B78u) [[unlikely]] return; }
L_00225B78:
    set32(c.r[5], ld32((c.r[16].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00225BA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00225BA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[3].w[0] + 8u));  if (t) { goto L_00225BA0; } }
L_00225BA0:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00225BC0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 988u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BBCu); st32((c.r[2].w[0] + 992u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_002A(c, 382u, depth + 1u); else { c.pc = 0x001CB240u; return; } if (c.pc != 0x00225BBCu) [[unlikely]] return; }
L_00225BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00225BC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00225CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BF8u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225BF8u) [[unlikely]] return; }
L_00225BF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[17].w[0] + 160u));  if (t) { goto L_00225C18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00225C34; } }
L_00225C18:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00225C34:
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] + 27140u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[5].sd[0] <= 0; st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_00225C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C70u); set32(c.r[4], c.r[17].w[0] + 204u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001E6A40u; return; } if (c.pc != 0x00225C70u) [[unlikely]] return; }
L_00225C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C78u); set32(c.r[4], c.r[17].w[0] + 204u);  if (depth < kMaxDepth) unit_0031(c, 254u, depth + 1u); else { c.pc = 0x001E6A00u; return; } if (c.pc != 0x00225C78u) [[unlikely]] return; }
L_00225C78:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 268u)));  goto L_00225C90; }
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 268u)));
    c.budget -= 2;
L_00225C90:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u - 2u);  goto L_00225CB8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00225CB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[3].w[0] + 8u));  if (t) { goto L_00225CB4; } }
L_00225CB4:
    set32(c.r[3], 0u - 2u);
    c.budget -= 1;
L_00225CB8:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00225D48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 382u, depth + 1u); else { c.pc = 0x001CB240u; return; } if (c.pc != 0x00225CC8u) [[unlikely]] return; }
L_00225CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225D44; } }
L_00225CD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00225CEC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00225D04; } }
L_00225CEC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00225D04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_00225D44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225D44u); st32((c.r[17].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0041(c, 196u, depth + 1u); else { c.pc = 0x00225B60u; return; } if (c.pc != 0x00225D44u) [[unlikely]] return; }
L_00225D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00225D48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00225D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225D78u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225D78u) [[unlikely]] return; }
L_00225D78:
    set32(c.r[5], ld32((c.r[16].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00225DA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00225DA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[3].w[0] + 8u));  if (t) { goto L_00225DA0; } }
L_00225DA0:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00225DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DB4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 382u, depth + 1u); else { c.pc = 0x001CB240u; return; } if (c.pc != 0x00225DB4u) [[unlikely]] return; }
L_00225DB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00225DB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00225DFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DF4u);  if (depth < kMaxDepth) unit_0025(c, 530u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x00225DF4u) [[unlikely]] return; }
L_00225DF4:
    st32((c.r[16].w[0] + 200u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00225DFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 4102u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225E24u) [[unlikely]] return; }
L_00225E24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E30u); set32(c.r[4], 0u + 4105u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225E30u) [[unlikely]] return; }
L_00225E30:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00225E48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00225E54; } }
L_00225E48:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_00225E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E90u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 131u, depth + 1u); else { c.pc = 0x00424F10u; return; } if (c.pc != 0x00225E90u) [[unlikely]] return; }
L_00225E90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00225ED8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225EA0u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_006B(c, 2u, depth + 1u); else { c.pc = 0x002CC010u; return; } if (c.pc != 0x00225EA0u) [[unlikely]] return; }
L_00225EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225EB4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00225F58; } }
L_00225EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225EBCu);  if (depth < kMaxDepth) unit_006B(c, 4u, depth + 1u); else { c.pc = 0x002CC080u; return; } if (c.pc != 0x00225EBCu) [[unlikely]] return; }
L_00225EBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 4u);  goto L_00225ED0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00225F58; } }
L_00225ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00225F58; } }
L_00225ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225EE0u);  if (depth < kMaxDepth) unit_00C1(c, 133u, depth + 1u); else { c.pc = 0x00424F50u; return; } if (c.pc != 0x00225EE0u) [[unlikely]] return; }
L_00225EE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00225EF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_00225F58; } }
L_00225EF0:
    set32(c.r[4], 0u + 261u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225EFCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225EFCu) [[unlikely]] return; }
L_00225EFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00225F4C; } }
L_00225F08:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 32672u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 333u, depth + 1u); else { c.pc = 0x001CAC20u; return; } if (c.pc != 0x00225F28u) [[unlikely]] return; }
L_00225F28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00225F4C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00225F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_00225F58; } }
L_00225F48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00225F4C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00225F08u | kUnwind; return; } goto L_00225F08; }
L_00225F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 4099u);  goto L_00225F90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00225FBC; } }
L_00225F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F98u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00225F98u) [[unlikely]] return; }
L_00225F98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00225FBC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00225FBC; } }
L_00225FB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00225FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00225FD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002265FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 32672u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0041[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00226014:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00226018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226024u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 150u, depth + 1u); else { c.pc = 0x00225180u; return; } if (c.pc != 0x00226024u) [[unlikely]] return; }
L_00226024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022602Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 142u, depth + 1u); else { c.pc = 0x00225000u; return; } if (c.pc != 0x0022602Cu) [[unlikely]] return; }
L_0022602C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226038u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00226038u) [[unlikely]] return; }
L_00226038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00226600; } }
L_00226040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226048u);  if (depth < kMaxDepth) unit_0041(c, 150u, depth + 1u); else { c.pc = 0x00225180u; return; } if (c.pc != 0x00226048u) [[unlikely]] return; }
L_00226048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 142u, depth + 1u); else { c.pc = 0x00225000u; return; } if (c.pc != 0x00226050u) [[unlikely]] return; }
L_00226050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226058u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00226058u) [[unlikely]] return; }
L_00226058:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 168u), c.r[4].w[0]);  goto L_00226090; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 32512u);
    set32(c.r[7], c.r[7].w[0] - 32496u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226088u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00226088u) [[unlikely]] return; }
L_00226088:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    c.budget -= 2;
L_00226090:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0022609C:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002265FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002260D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_002260EC; }
L_002260D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002260E4u); set32(c.r[5], c.r[5].w[0] - 32480u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002260E4u) [[unlikely]] return; }
L_002260E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226018u | kUnwind; return; } goto L_00226018; } }
L_002260EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002260F4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002260F4u) [[unlikely]] return; }
L_002260F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 256u), c.r[4].w[0]);  goto L_00226120; }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226118u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x00226118u) [[unlikely]] return; }
L_00226118:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 256u), c.r[4].w[0]);
    c.budget -= 2;
L_00226120:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0022612C:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002265FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 432u);  goto L_00226168; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00226160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00226160u) [[unlikely]] return; }
L_00226160:
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], 0u + 432u);
    c.budget -= 2;
L_00226168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226170u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00226170u) [[unlikely]] return; }
L_00226170:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  goto L_0022618C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226188u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0033(c, 344u, depth + 1u); else { c.pc = 0x001EEF40u; return; } if (c.pc != 0x00226188u) [[unlikely]] return; }
L_00226188:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_0022618C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226194u); set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226194u) [[unlikely]] return; }
L_00226194:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261A0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x002261A0u) [[unlikely]] return; }
L_002261A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 20562ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261B4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002261B4u) [[unlikely]] return; }
L_002261B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261C0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x002261C0u) [[unlikely]] return; }
L_002261C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261CCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x002261CCu) [[unlikely]] return; }
L_002261CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 17752ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002261E0u) [[unlikely]] return; }
L_002261E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002261F0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_00226208; }
L_002261F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226200u); set32(c.r[5], c.r[5].w[0] - 32465u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00226200u) [[unlikely]] return; }
L_00226200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226014u | kUnwind; return; } goto L_00226014; } }
L_00226208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226210u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00226210u) [[unlikely]] return; }
L_00226210:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_00226238; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226234u); set32(c.r[8], c.r[8].w[0] - 32518u);  if (depth < kMaxDepth) unit_0034(c, 57u, depth + 1u); else { c.pc = 0x001F08A0u; return; } if (c.pc != 0x00226234u) [[unlikely]] return; }
L_00226234:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00226238:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022624Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0022624Cu) [[unlikely]] return; }
L_0022624C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226254u); set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226254u) [[unlikely]] return; }
L_00226254:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226260u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00226260u) [[unlikely]] return; }
L_00226260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 17473ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226274u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00226274u) [[unlikely]] return; }
L_00226274:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226280u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226280u) [[unlikely]] return; }
L_00226280:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022628Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x0022628Cu) [[unlikely]] return; }
L_0022628C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 21075ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002262A0u) [[unlikely]] return; }
L_002262A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002262B0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_002262C8; }
L_002262B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262C0u); set32(c.r[5], c.r[5].w[0] - 32465u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002262C0u) [[unlikely]] return; }
L_002262C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226014u | kUnwind; return; } goto L_00226014; } }
L_002262C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262D0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002262D0u) [[unlikely]] return; }
L_002262D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_002262F8; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262F4u); set32(c.r[8], c.r[8].w[0] - 32518u);  if (depth < kMaxDepth) unit_0034(c, 7u, depth + 1u); else { c.pc = 0x001F00E0u; return; } if (c.pc != 0x002262F4u) [[unlikely]] return; }
L_002262F4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002262F8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022630Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0022630Cu) [[unlikely]] return; }
L_0022630C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226314u); set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226314u) [[unlikely]] return; }
L_00226314:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226320u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00226320u) [[unlikely]] return; }
L_00226320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 17473ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226338u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x00226338u) [[unlikely]] return; }
L_00226338:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226344u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226344u) [[unlikely]] return; }
L_00226344:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226350u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00226350u) [[unlikely]] return; }
L_00226350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 21075ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226368u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x00226368u) [[unlikely]] return; }
L_00226368:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00226378; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_00226390; }
L_00226378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226388u); set32(c.r[5], c.r[5].w[0] - 32465u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00226388u) [[unlikely]] return; }
L_00226388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226014u | kUnwind; return; } goto L_00226014; } }
L_00226390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226398u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00226398u) [[unlikely]] return; }
L_00226398:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_002263C0; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263BCu); set32(c.r[8], c.r[8].w[0] - 32518u);  if (depth < kMaxDepth) unit_0034(c, 7u, depth + 1u); else { c.pc = 0x001F00E0u; return; } if (c.pc != 0x002263BCu) [[unlikely]] return; }
L_002263BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002263C0:
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263D4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x002263D4u) [[unlikely]] return; }
L_002263D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263DCu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002263DCu) [[unlikely]] return; }
L_002263DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  goto L_002263F8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263F4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_002D(c, 149u, depth + 1u); else { c.pc = 0x001D5640u; return; } if (c.pc != 0x002263F4u) [[unlikely]] return; }
L_002263F4:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_002263F8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226410u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x00226410u) [[unlikely]] return; }
L_00226410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226418u); set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226418u) [[unlikely]] return; }
L_00226418:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226424u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00226424u) [[unlikely]] return; }
L_00226424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 20545ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226438u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00226438u) [[unlikely]] return; }
L_00226438:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226444u); set32(c.r[4], 0u + 1008u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00226444u) [[unlikely]] return; }
L_00226444:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 180u), c.r[2].w[0]);  goto L_0022645C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226458u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 347u, depth + 1u); else { c.pc = 0x001E2E80u; return; } if (c.pc != 0x00226458u) [[unlikely]] return; }
L_00226458:
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_0022645C:
    set32(c.r[3], 0u + 64u);
    st32((c.r[2].w[0] + 604u), c.r[3].w[0]);
    set32(c.r[8], 0u + 3u);
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01120000u);
    c.r[6].d[0] = c.r[2].d[0] | 4096ull;
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[7], 0u + 15u);
    set32(c.r[2], ld32((c.r[3].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[2].w[0] + 600u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 31728u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 21u, depth + 1u); else { c.pc = 0x001D0320u; return; } if (c.pc != 0x002264B4u) [[unlikely]] return; }
L_002264B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264BCu); set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x002264BCu) [[unlikely]] return; }
L_002264BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264C8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x002264C8u) [[unlikely]] return; }
L_002264C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 21324ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264DCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002264DCu) [[unlikely]] return; }
L_002264DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x002264F8u) [[unlikely]] return; }
L_002264F8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022650Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0022650Cu) [[unlikely]] return; }
L_0022650C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002265FC; } }
L_0022651C:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002265FC; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00226540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226548u); set32(c.r[4], ld32((c.r[16].w[0] + 256u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00226548u) [[unlikely]] return; }
L_00226548:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226554u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00226554u) [[unlikely]] return; }
L_00226554:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 20545ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226568u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00226568u) [[unlikely]] return; }
L_00226568:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226574u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00226574u) [[unlikely]] return; }
L_00226574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00226590; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022658Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x0022658Cu) [[unlikely]] return; }
L_0022658C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00226590:
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002265A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x002265A0u) [[unlikely]] return; }
L_002265A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002265BCu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 359u, depth + 1u); else { c.pc = 0x001EF0E0u; return; } if (c.pc != 0x002265BCu) [[unlikely]] return; }
L_002265BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002265C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 160u, depth + 1u); else { c.pc = 0x002252D0u; return; } if (c.pc != 0x002265C4u) [[unlikely]] return; }
L_002265C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002265E8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002265E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002265E0u) [[unlikely]] return; }
L_002265E0:
    st32((c.r[16].w[0] + 256u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_002265E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002265FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002265FCu) [[unlikely]] return; }
L_002265FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00226600:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00226620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 150u, depth + 1u); else { c.pc = 0x00225180u; return; } if (c.pc != 0x00226634u) [[unlikely]] return; }
L_00226634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226640u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00226640u) [[unlikely]] return; }
L_00226640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00226650:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00226728; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_0022667C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00226734; } }
L_0022667C:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022669Cu); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0022669Cu) [[unlikely]] return; }
L_0022669C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002266A8u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002266A8u) [[unlikely]] return; }
L_002266A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002266BCu); st32((c.r[16].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 87u, depth + 1u); else { c.pc = 0x00228A40u; return; } if (c.pc != 0x002266BCu) [[unlikely]] return; }
L_002266BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] - 32517u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002266D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x002266D4u) [[unlikely]] return; }
L_002266D4:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002266E4u); st64((c.r[29].w[0] + 56u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x002266E4u) [[unlikely]] return; }
L_002266E4:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_0022671C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[5].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[7], c.r[5].w[0] + 136u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226718u); st32((c.r[5].w[0] + 140u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x00226718u) [[unlikely]] return; }
L_00226718:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_0022671C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00226730; } }
L_00226728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00226730u) [[unlikely]] return; }
L_00226730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00226734:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00226740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022697C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00226884; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_0022677C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002269B4; } }
L_0022677C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002267A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002267A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022679Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0022679Cu) [[unlikely]] return; }
L_0022679C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002269B0; } }
L_002267A4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002267D4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002267D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002267C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002267C8u) [[unlikely]] return; }
L_002267C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002269B0; } }
L_002267D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002267D4:
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 60u));  goto L_00226854; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002267FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002267FCu) [[unlikely]] return; }
L_002267FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00226814; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00226828; } }
L_00226814:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00226824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 48u));  if (t) { goto L_00226828; } }
L_00226824:
    c.f[0] = 0u;
    c.budget -= 1;
L_00226828:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00226850; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00226850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00226850u) [[unlikely]] return; }
L_00226850:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 1;
L_00226854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 60u));  goto L_00226874; }
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 2;
L_00226874:
    st32((c.r[16].w[0] + 156u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_00226884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_002268A0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002268B8; } }
L_002268A0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_002268B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002268C8u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x002268C8u) [[unlikely]] return; }
L_002268C8:
    c.f[2] = ld32((c.r[16].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 156u), c.f[0]);  if (t) { goto L_002268EC; } }
    st32((c.r[16].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_002268EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 156u));  goto L_00226920; }
    c.f[2] = ld32((c.r[16].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 148u), c.f[0]);  if (t) { goto L_0022692C; } }
L_00226920:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 3;
L_0022692C:
    c.f[1] = ld32((c.r[16].w[0] + 156u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002269B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_00226970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226958u); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00226958u) [[unlikely]] return; }
L_00226958:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022696Cu); c.r[6].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x0022696Cu) [[unlikely]] return; }
L_0022696C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_00226970:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002269B0; } }
L_0022697C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00226998; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002269A4; } }
L_00226998:
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002269A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002269B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002269B0u) [[unlikely]] return; }
L_002269B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002269B4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002269D0:
    set32(c.r[29], c.r[29].w[0] - 848u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226A0Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00226A0Cu) [[unlikely]] return; }
L_00226A0C:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[21].d[0] = 0ull + 0ull;  goto L_00226A1C; }
    set32(c.r[21], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_00226A1C:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00226A40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226A30u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00226A30u) [[unlikely]] return; }
L_00226A30:
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226A3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x00226A3Cu) [[unlikely]] return; }
L_00226A3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00226A40:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], 0u - 1u);  goto L_00226A54; }
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00226A54:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st128((c.r[29].w[0] + 176u) & ~15u, c.r[0]);  goto L_00226A64; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00226A64:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_00226A74; }
    set32(c.r[22], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 1;
L_00226A74:
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_00226A84; }
    set32(c.r[30], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_00226A84:
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226A94u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00226A94u) [[unlikely]] return; }
L_00226A94:
    set32(c.r[3], ld32((c.r[29].w[0] + 752u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00226AA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 736u)));  if (t) { goto L_00226ABC; } }
L_00226AA8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00226ABC; }
    c.f[0] = ld32((c.r[29].w[0] + 736u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00226ABC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[19].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 740u)));  goto L_00226B2C; }
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00226B0C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] ^ 255ull;  if (t) { goto L_00226B24; } }
L_00226B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 255ull;
    c.budget -= 6;
L_00226B24:
    c.r[19].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 740u)));
    c.budget -= 2;
L_00226B2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 704u);  goto L_00226B50; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00226B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00226B4Cu) [[unlikely]] return; }
L_00226B4C:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 1;
L_00226B50:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00226B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B5Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00226B5Cu) [[unlikely]] return; }
L_00226B5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 720u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00226B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 704u)));  if (t) { goto L_00226B84; } }
L_00226B70:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00226B84; }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00226B84:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 708u)));  goto L_00226BF4; }
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00226BD4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] ^ 255ull;  if (t) { goto L_00226BEC; } }
L_00226BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 255ull;
    c.budget -= 6;
L_00226BEC:
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 2;
L_00226BF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00226C14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00226C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00226C14u) [[unlikely]] return; }
L_00226C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C1Cu);  if (depth < kMaxDepth) unit_0030(c, 326u, depth + 1u); else { c.pc = 0x001E2B20u; return; } if (c.pc != 0x00226C1Cu) [[unlikely]] return; }
L_00226C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226CA8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00226CA8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C44u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00226C44u) [[unlikely]] return; }
L_00226C44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_00226CA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C54u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00226C54u) [[unlikely]] return; }
L_00226C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C64u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00226C64u) [[unlikely]] return; }
L_00226C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C74u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00226C74u) [[unlikely]] return; }
L_00226C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C84u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00226C84u) [[unlikely]] return; }
L_00226C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C94u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00226C94u) [[unlikely]] return; }
L_00226C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226CA8; } }
L_00226C9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_00226CA0:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00226CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226CB0u);  if (depth < kMaxDepth) unit_0030(c, 326u, depth + 1u); else { c.pc = 0x001E2B20u; return; } if (c.pc != 0x00226CB0u) [[unlikely]] return; }
L_00226CB0:
    c.r[23].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[23].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 88u)));  goto L_00226CD0; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[23].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 5;
L_00226CD0:
    set32(c.r[4], 0u + 41u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 180u)));  [[clang::musttail]] return unit_0042(c, 51u, depth); }
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 40u);  [[clang::musttail]] return unit_0042(c, 47u, depth); }
    set32(c.r[4], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  [[clang::musttail]] return unit_0042(c, 45u, depth); }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0042(c, 41u, depth); } }
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0042(c, 36u, depth); } }
    set32(c.r[4], 0u + 34u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 264u)));  [[clang::musttail]] return unit_0042(c, 25u, depth); }
    set32(c.r[4], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0042(c, 20u, depth); } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0042(c, 11u, depth); } }
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  [[clang::musttail]] return unit_0042(c, 7u, depth); }
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00227FC8; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_00227FB4; }
    set32(c.r[4], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00227EA8; } }
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 260u)));  goto L_00227D88; }
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00227C88; }
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 20u);  goto L_00227B80; }
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_00227B44; }
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00227A3C; }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 4099u);  goto L_0022793C; }
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00227818; }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00227740; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 6u);  goto L_0022720C; }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 5u);  goto L_002271F0; }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00227058; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 180u)));  goto L_0022700C; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 200u)));  goto L_00226F54; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00226E4C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], ld32((c.r[20].w[0] + 4u)));  goto L_00226E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { [[clang::musttail]] return unit_0042(c, 57u, depth); } }
L_00226E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[2].d[0] | 4097ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 200u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226E3Cu); st32((c.r[20].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x00226E3Cu) [[unlikely]] return; }
L_00226E3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00226E4C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00226EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226E5Cu);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x00226E5Cu) [[unlikely]] return; }
L_00226E5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226EB4; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226E74u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 293u, depth + 1u); else { c.pc = 0x001FBA60u; return; } if (c.pc != 0x00226E74u) [[unlikely]] return; }
L_00226E74:
    st32((c.r[29].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], c.r[29].w[0] + 672u);
    st32((c.r[29].w[0] + 676u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226E90u); st32((c.r[29].w[0] + 688u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00226E90u) [[unlikely]] return; }
L_00226E90:
    set32(c.r[4], ld32((c.r[29].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00226EB4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00226EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226EB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00226EB4u) [[unlikely]] return; }
L_00226EB4:
    c.budget -= 2;
    if (c.r[22].sd[0] <= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_00226F48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226EC4u);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x00226EC4u) [[unlikely]] return; }
L_00226EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226F44; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226EDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x00226EDCu) [[unlikely]] return; }
L_00226EDC:
    st32((c.r[20].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226EE8u); set32(c.r[4], 0u + 279u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00226EE8u) [[unlikely]] return; }
L_00226EE8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00226F00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226F00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 301u, depth + 1u); else { c.pc = 0x001CE6A0u; return; } if (c.pc != 0x00226F00u) [[unlikely]] return; }
L_00226F00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[22].d[0] + 0ull;  goto L_00226F20; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226F18u); set32(c.r[5], c.r[5].w[0] - 32453u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00226F18u) [[unlikely]] return; }
L_00226F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226F44; } }
L_00226F20:
    set32(c.r[4], c.r[20].w[0] + 204u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226F30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 249u, depth + 1u); else { c.pc = 0x001E68A0u; return; } if (c.pc != 0x00226F30u) [[unlikely]] return; }
L_00226F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226F44; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00226F44:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_00226F48:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 3;
L_00226F54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 184u)));  goto L_00226F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226F64u);  if (depth < kMaxDepth) unit_0025(c, 532u, depth + 1u); else { c.pc = 0x001B7F90u; return; } if (c.pc != 0x00226F64u) [[unlikely]] return; }
L_00226F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    c.budget -= 1;
L_00226F70:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 188u)));  goto L_00226F94; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00226F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00226F90u) [[unlikely]] return; }
L_00226F90:
    set32(c.r[4], ld32((c.r[20].w[0] + 188u)));
    c.budget -= 1;
L_00226F94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 184u), c.r[4].w[0]);  goto L_00226FAC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 184u), c.r[4].w[0]);
    c.budget -= 4;
L_00226FAC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00226FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + 12u);  if (t) { goto L_00226FC8; } }
L_00226FC4:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_00226FC8:
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[21].d[0] << 32;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[10].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[9].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01120000u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226FFCu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 415u, depth + 1u); else { c.pc = 0x001CFBB0u; return; } if (c.pc != 0x00226FFCu) [[unlikely]] return; }
L_00226FFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 4;
L_0022700C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[4], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 180u)));  goto L_00227038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 531u, depth + 1u); else { c.pc = 0x001B7F70u; return; } if (c.pc != 0x00227034u) [[unlikely]] return; }
L_00227034:
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 1;
L_00227038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01120000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227044u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00227044u) [[unlikely]] return; }
L_00227044:
    st32((c.r[20].w[0] + 160u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00227058:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 200u)));  goto L_00227080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227068u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00227068u) [[unlikely]] return; }
L_00227068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022707C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 46u, depth); } }
L_0022707C:
    set32(c.r[2], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 1;
L_00227080:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 180u)));  goto L_00227108; }
    set32(c.r[3], ld32((c.r[20].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_002270B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002270A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x002270A8u) [[unlikely]] return; }
L_002270A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002271EC; } }
L_002270B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002270B8u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x002270B8u) [[unlikely]] return; }
L_002270B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002270E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002270C8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x002270C8u) [[unlikely]] return; }
L_002270C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002270E0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002271DC; }
L_002270E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002271D8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 180u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227100u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00227100u) [[unlikely]] return; }
L_00227100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002271EC; } }
L_00227108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  goto L_0022712C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227124u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 199u, depth + 1u); else { c.pc = 0x00225BD0u; return; } if (c.pc != 0x00227124u) [[unlikely]] return; }
L_00227124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002271EC; } }
L_0022712C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227134u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00227134u) [[unlikely]] return; }
L_00227134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_00227170; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0022716C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 180u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022715Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x0022715Cu) [[unlikely]] return; }
L_0022715C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227164u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00227164u) [[unlikely]] return; }
L_00227164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002271EC; } }
L_0022716C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_00227170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227178u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00227178u) [[unlikely]] return; }
L_00227178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227190; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002271B8; } }
L_00227190:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002271B8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 180u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002271B0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 199u, depth + 1u); else { c.pc = 0x00225BD0u; return; } if (c.pc != 0x002271B0u) [[unlikely]] return; }
L_002271B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002271EC; } }
L_002271B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002271C0u);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x002271C0u) [[unlikely]] return; }
L_002271C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002271D8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002271D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002271D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x002271D8u) [[unlikely]] return; }
L_002271D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002271DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002271E4u);  if (depth < kMaxDepth) unit_0041(c, 199u, depth + 1u); else { c.pc = 0x00225BD0u; return; } if (c.pc != 0x002271E4u) [[unlikely]] return; }
L_002271E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_002271EC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002271F0:
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 156u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00227208:
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_0022720C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[20].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_00227274; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00227270; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00227270; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 812u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227264u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00227264u) [[unlikely]] return; }
L_00227264:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00227270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_00227274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022727Cu);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022727Cu) [[unlikely]] return; }
L_0022727C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 200u)));  goto L_002272A8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002272A4; } }
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022729Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022729Cu) [[unlikely]] return; }
L_0022729C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 46u, depth); } }
L_002272A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 1;
L_002272A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002272B8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x002272B8u) [[unlikely]] return; }
L_002272B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002272D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002272C8u);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x002272C8u) [[unlikely]] return; }
L_002272C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 200u)));  goto L_002272DC; }
L_002272D0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002272F0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 1;
L_002272DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002272E4u);  if (depth < kMaxDepth) unit_0025(c, 533u, depth + 1u); else { c.pc = 0x001B7FA0u; return; } if (c.pc != 0x002272E4u) [[unlikely]] return; }
L_002272E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00227308; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002272F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002272F8u);  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x002272F8u) [[unlikely]] return; }
L_002272F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227300u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00227300u) [[unlikely]] return; }
L_00227300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227310; } }
L_00227308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227310u);  if (depth < kMaxDepth) unit_0041(c, 199u, depth + 1u); else { c.pc = 0x00225BD0u; return; } if (c.pc != 0x00227310u) [[unlikely]] return; }
L_00227310:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 200u)));  goto L_0022732C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227320u);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x00227320u) [[unlikely]] return; }
L_00227320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 8192u);  goto L_00227404; }
    set32(c.r[2], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 1;
L_0022732C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00227350; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227368; } }
L_00227350:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00227368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227388u); st32((c.r[20].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 318u, depth + 1u); else { c.pc = 0x001E2990u; return; } if (c.pc != 0x00227388u) [[unlikely]] return; }
L_00227388:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00227718; } }
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002273D8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_002273F0; } }
L_002273D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 255u);
    c.budget -= 6;
L_002273F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 46u, depth); } }
L_00227400:
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_00227404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022740Cu);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022740Cu) [[unlikely]] return; }
L_0022740C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 4096u);  goto L_0022750C; }
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00227454; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_0022746C; } }
L_00227454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 255u);
    c.budget -= 6;
L_0022746C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227508; } }
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227484u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227484u) [[unlikely]] return; }
L_00227484:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00227498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 640u)));  if (t) { goto L_002274AC; } }
L_00227498:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002274AC; }
    c.f[0] = ld32((c.r[29].w[0] + 640u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002274AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002274D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002274D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002274D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002274D0u) [[unlikely]] return; }
L_002274D0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_002274FC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002274F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002274F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 210u, depth + 1u); else { c.pc = 0x00225E10u; return; } if (c.pc != 0x002274F0u) [[unlikely]] return; }
L_002274F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022773C; } }
L_002274F8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002274FC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00227508u) [[unlikely]] return; }
L_00227508:
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_0022750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227514u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00227514u) [[unlikely]] return; }
L_00227514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 128u);  goto L_00227604; }
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0022755C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_00227574; } }
L_0022755C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 255u);
    c.budget -= 6;
L_00227574:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227600; } }
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022758Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0022758Cu) [[unlikely]] return; }
L_0022758C:
    set32(c.r[3], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002275A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_002275B4; } }
L_002275A0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002275B4; }
    c.f[0] = ld32((c.r[29].w[0] + 608u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002275B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002275D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002275D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002275D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002275D8u) [[unlikely]] return; }
L_002275D8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_002275F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002275E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 210u, depth + 1u); else { c.pc = 0x00225E10u; return; } if (c.pc != 0x002275E8u) [[unlikely]] return; }
L_002275E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227B7C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_002275F4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227600u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00227600u) [[unlikely]] return; }
L_00227600:
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_00227604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022760Cu);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022760Cu) [[unlikely]] return; }
L_0022760C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227718; } }
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00227654; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0022766C; } }
L_00227654:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 255u);
    c.budget -= 6;
L_0022766C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227718; } }
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227684u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227684u) [[unlikely]] return; }
L_00227684:
    set32(c.r[3], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00227698; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 576u)));  if (t) { goto L_002276AC; } }
L_00227698:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002276AC; }
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002276AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002276D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002276D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002276D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002276D0u) [[unlikely]] return; }
L_002276D0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_0022770C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002276E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 210u, depth + 1u); else { c.pc = 0x00225E10u; return; } if (c.pc != 0x002276E0u) [[unlikely]] return; }
L_002276E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002276F0u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x002276F0u) [[unlikely]] return; }
L_002276F0:
    set32(c.r[4], 0u + 1000u);
    set32(c.r[3], 0u + 2u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00227FC4; } }
L_00227708:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0022770C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227718u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00227718u) [[unlikely]] return; }
L_00227718:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227728u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00227728u) [[unlikely]] return; }
L_00227728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 46u, depth); } }
L_0022773C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00227740:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022774Cu); st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x0022774Cu) [[unlikely]] return; }
L_0022774C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227754u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00227754u) [[unlikely]] return; }
L_00227754:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 804u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227770u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00227770u) [[unlikely]] return; }
L_00227770:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[4], 0u + 4099u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227798u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227798u) [[unlikely]] return; }
L_00227798:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002277A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x002277A4u) [[unlikely]] return; }
L_002277A4:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002277B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002277B4u) [[unlikely]] return; }
L_002277B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002277CC; }
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002277E0; } }
L_002277CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002277DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 544u));  if (t) { goto L_002277E0; } }
L_002277DC:
    c.f[0] = 0u;
    c.budget -= 1;
L_002277E0:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 88u)));  goto L_0022780C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00227808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227808u) [[unlikely]] return; }
L_00227808:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_0022780C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00227818:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00227830; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227848; } }
L_00227830:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00227848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227858u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x00227858u) [[unlikely]] return; }
L_00227858:
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 156u), c.f[0]);  if (t) { goto L_0022787C; } }
    st32((c.r[20].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_0022787C:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022788Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0022788Cu) [[unlikely]] return; }
L_0022788C:
    set32(c.r[4], ld32((c.r[29].w[0] + 528u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002278A4; }
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002278B8; } }
L_002278A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002278B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 512u));  if (t) { goto L_002278B8; } }
L_002278B4:
    c.f[1] = 0u;
    c.budget -= 1;
L_002278B8:
    c.f[0] = ld32((c.r[20].w[0] + 156u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 156u));  goto L_002278F4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002278F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002278F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002278F0u) [[unlikely]] return; }
L_002278F0:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.budget -= 1;
L_002278F4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227914u); set32(c.r[4], c.r[2].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 278u, depth + 1u); else { c.pc = 0x0020EF80u; return; } if (c.pc != 0x00227914u) [[unlikely]] return; }
L_00227914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022791Cu); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022791Cu) [[unlikely]] return; }
L_0022791C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022792Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0022792Cu) [[unlikely]] return; }
L_0022792C:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_0022793C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227944u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227944u) [[unlikely]] return; }
L_00227944:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 261u);  goto L_0022797C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227960u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227960u) [[unlikely]] return; }
L_00227960:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002279A8; } }
L_0022797C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227984u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227984u) [[unlikely]] return; }
L_00227984:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_002279A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002279CCu) [[unlikely]] return; }
L_002279CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002279E4; }
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002279F8; } }
L_002279E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002279F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 480u));  if (t) { goto L_002279F8; } }
L_002279F4:
    c.f[0] = 0u;
    c.budget -= 1;
L_002279F8:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 180u)));  goto L_00227A24; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00227A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227A20u) [[unlikely]] return; }
L_00227A20:
    set32(c.r[2], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 1;
L_00227A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A2Cu); set32(c.r[4], c.r[2].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 279u, depth + 1u); else { c.pc = 0x0020EF90u; return; } if (c.pc != 0x00227A2Cu) [[unlikely]] return; }
L_00227A2C:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00227A3C:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00227A54; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227A6C; } }
L_00227A54:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00227A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A7Cu); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x00227A7Cu) [[unlikely]] return; }
L_00227A7C:
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 156u), c.f[0]);  if (t) { goto L_00227AA0; } }
    st32((c.r[20].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_00227AA0:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227AB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227AB0u) [[unlikely]] return; }
L_00227AB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00227AC8; }
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227ADC; } }
L_00227AC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[29].w[0] + 448u));  if (t) { goto L_00227ADC; } }
L_00227AD8:
    c.f[2] = 0u;
    c.budget -= 1;
L_00227ADC:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 156u));  goto L_00227B20; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00227B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227B1Cu) [[unlikely]] return; }
L_00227B1C:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.budget -= 1;
L_00227B20:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00227B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], 0u + 4099u);
    set32(c.r[2], 0u - 16385u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B68u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227B68u) [[unlikely]] return; }
L_00227B68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B74u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00227B74u) [[unlikely]] return; }
L_00227B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227208u | kUnwind; return; } goto L_00227208; } }
L_00227B7C:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00227B80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B8Cu); st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x00227B8Cu) [[unlikely]] return; }
L_00227B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00227B94u) [[unlikely]] return; }
L_00227B94:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 796u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BB0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00227BB0u) [[unlikely]] return; }
L_00227BB0:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 840u);
    set32(c.r[6], c.r[29].w[0] + 844u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BD8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 213u, depth + 1u); else { c.pc = 0x00225E70u; return; } if (c.pc != 0x00227BD8u) [[unlikely]] return; }
L_00227BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BE0u); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00227BE0u) [[unlikely]] return; }
L_00227BE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 416u);  goto L_00227C14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BF4u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00227BF4u) [[unlikely]] return; }
L_00227BF4:
    set32(c.r[7], ld32((c.r[29].w[0] + 840u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 844u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C0Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 220u, depth + 1u); else { c.pc = 0x00415DE0u; return; } if (c.pc != 0x00227C0Cu) [[unlikely]] return; }
L_00227C0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 2;
L_00227C14:
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C24u); st32((c.r[20].w[0] + 260u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227C24u) [[unlikely]] return; }
L_00227C24:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00227C3C; }
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227C50; } }
L_00227C3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 416u));  if (t) { goto L_00227C50; } }
L_00227C4C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00227C50:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 88u)));  goto L_00227C7C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00227C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227C78u) [[unlikely]] return; }
L_00227C78:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_00227C7C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
L_00227C88:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00227CA0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227CB8; } }
L_00227CA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00227CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227CC8u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x00227CC8u) [[unlikely]] return; }
L_00227CC8:
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 156u), c.f[0]);  if (t) { goto L_00227CEC; } }
    st32((c.r[20].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_00227CEC:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227CFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227CFCu) [[unlikely]] return; }
L_00227CFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00227D14; }
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227D28; } }
L_00227D14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 384u));  if (t) { goto L_00227D28; } }
L_00227D24:
    c.f[1] = 0u;
    c.budget -= 1;
L_00227D28:
    c.f[0] = ld32((c.r[20].w[0] + 156u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 156u));  goto L_00227D64; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00227D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227D60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227D60u) [[unlikely]] return; }
L_00227D60:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.budget -= 1;
L_00227D64:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 260u)));
    c.budget -= 4;
L_00227D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227D90u);  if (depth < kMaxDepth) unit_00BD(c, 362u, depth + 1u); else { c.pc = 0x004172D0u; return; } if (c.pc != 0x00227D90u) [[unlikely]] return; }
L_00227D90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 261u);  goto L_00227DD8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DB8u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227DB8u) [[unlikely]] return; }
L_00227DB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00227E04; } }
L_00227DD4:
    set32(c.r[4], 0u + 261u);
    c.budget -= 1;
L_00227DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DE0u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00227DE0u) [[unlikely]] return; }
L_00227DE0:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_00227E04:
    set32(c.r[4], ld32((c.r[20].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 352u);  goto L_00227E3C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00227E34u) [[unlikely]] return; }
L_00227E34:
    st32((c.r[20].w[0] + 260u), 0u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 2;
L_00227E3C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227E48u) [[unlikely]] return; }
L_00227E48:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00227E60; }
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227E74; } }
L_00227E60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 352u));  if (t) { goto L_00227E74; } }
L_00227E70:
    c.f[0] = 0u;
    c.budget -= 1;
L_00227E74:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_00227EA0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00227E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227E9Cu) [[unlikely]] return; }
L_00227E9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_00227EA0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00227EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00227EC4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227EDC; } }
L_00227EC4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00227EDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EECu); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x00227EECu) [[unlikely]] return; }
L_00227EEC:
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 156u), c.f[0]);  if (t) { goto L_00227F10; } }
    st32((c.r[20].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_00227F10:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00227F20u) [[unlikely]] return; }
L_00227F20:
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00227F38; }
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00227F4C; } }
L_00227F38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[29].w[0] + 320u));  if (t) { goto L_00227F4C; } }
L_00227F48:
    c.f[2] = 0u;
    c.budget -= 1;
L_00227F4C:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 156u));  goto L_00227F90; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00227F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00227F8Cu) [[unlikely]] return; }
L_00227F8C:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.budget -= 1;
L_00227F90:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0042(c, 56u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
L_00227FB4:
    set32(c.r[3], 0u - 16385u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227208u | kUnwind; return; } goto L_00227208; } }
L_00227FC4:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00227FC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227FD4u); st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x00227FD4u) [[unlikely]] return; }
L_00227FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227FDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00227FDCu) [[unlikely]] return; }
L_00227FDC:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 788u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227FF8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00227FF8u) [[unlikely]] return; }
L_00227FF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0042(c, 1u, depth);
}

}
