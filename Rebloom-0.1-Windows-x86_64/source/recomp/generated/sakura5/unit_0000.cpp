#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0000[4096] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0,
    134, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148,
    149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 262, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0000(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00120008;
    case 2u: goto L_0012012C;
    case 3u: goto L_00120158;
    case 4u: goto L_00120178;
    case 5u: goto L_001201CC;
    case 6u: goto L_001201E8;
    case 7u: goto L_001201F0;
    case 8u: goto L_001201F8;
    case 9u: goto L_00120210;
    case 10u: goto L_00120218;
    case 11u: goto L_00120220;
    case 12u: goto L_00120228;
    case 13u: goto L_00120230;
    case 14u: goto L_00120254;
    case 15u: goto L_0012026C;
    case 16u: goto L_00120280;
    case 17u: goto L_0012029C;
    case 18u: goto L_001202B0;
    case 19u: goto L_001202CC;
    case 20u: goto L_001202E4;
    case 21u: goto L_00120300;
    case 22u: goto L_00120310;
    case 23u: goto L_0012032C;
    case 24u: goto L_00120344;
    case 25u: goto L_00120360;
    case 26u: goto L_0012037C;
    case 27u: goto L_00120390;
    case 28u: goto L_001203AC;
    case 29u: goto L_001203C0;
    case 30u: goto L_001203D4;
    case 31u: goto L_001203EC;
    case 32u: goto L_00120400;
    case 33u: goto L_00120410;
    case 34u: goto L_00120420;
    case 35u: goto L_00120430;
    case 36u: goto L_00120450;
    case 37u: goto L_00120460;
    case 38u: goto L_00120470;
    case 39u: goto L_0012048C;
    case 40u: goto L_0012049C;
    case 41u: goto L_001204C0;
    case 42u: goto L_001204D8;
    case 43u: goto L_0012052C;
    case 44u: goto L_00120554;
    case 45u: goto L_00120578;
    case 46u: goto L_001205C8;
    case 47u: goto L_001205D0;
    case 48u: goto L_001205F8;
    case 49u: goto L_00120610;
    case 50u: goto L_00120638;
    case 51u: goto L_001206A8;
    case 52u: goto L_001206B8;
    case 53u: goto L_001206CC;
    case 54u: goto L_001206E8;
    case 55u: goto L_00120718;
    case 56u: goto L_00120770;
    case 57u: goto L_001207A0;
    case 58u: goto L_00120810;
    case 59u: goto L_00120828;
    case 60u: goto L_00120840;
    case 61u: goto L_0012085C;
    case 62u: goto L_00120888;
    case 63u: goto L_001208B8;
    case 64u: goto L_001208D0;
    case 65u: goto L_001208DC;
    case 66u: goto L_001208E8;
    case 67u: goto L_001208F0;
    case 68u: goto L_001208F8;
    case 69u: goto L_00120908;
    case 70u: goto L_00120928;
    case 71u: goto L_00120958;
    case 72u: goto L_00120960;
    case 73u: goto L_0012098C;
    case 74u: goto L_001209A8;
    case 75u: goto L_001209E8;
    case 76u: goto L_00120A00;
    case 77u: goto L_00120A24;
    case 78u: goto L_00120A40;
    case 79u: goto L_00120A50;
    case 80u: goto L_00120A78;
    case 81u: goto L_00120AB8;
    case 82u: goto L_00120AC4;
    case 83u: goto L_00120AE4;
    case 84u: goto L_00120AF4;
    case 85u: goto L_00120B10;
    case 86u: goto L_00120B18;
    case 87u: goto L_00120B38;
    case 88u: goto L_00120B4C;
    case 89u: goto L_00120B6C;
    case 90u: goto L_00120B78;
    case 91u: goto L_00120BD8;
    case 92u: goto L_00120C2C;
    case 93u: goto L_00120C48;
    case 94u: goto L_00120C70;
    case 95u: goto L_00120C84;
    case 96u: goto L_00120CF8;
    case 97u: goto L_00120D10;
    case 98u: goto L_00120D28;
    case 99u: goto L_00120D40;
    case 100u: goto L_00120D78;
    case 101u: goto L_00120D88;
    case 102u: goto L_00120D98;
    case 103u: goto L_00120DB8;
    case 104u: goto L_00120DC4;
    case 105u: goto L_00120DF0;
    case 106u: goto L_00120E08;
    case 107u: goto L_00120E1C;
    case 108u: goto L_00120E2C;
    case 109u: goto L_00120E40;
    case 110u: goto L_00120E48;
    case 111u: goto L_00120E68;
    case 112u: goto L_00120E7C;
    case 113u: goto L_00120EA0;
    case 114u: goto L_00120EA8;
    case 115u: goto L_00120EF0;
    case 116u: goto L_00120F04;
    case 117u: goto L_00120F44;
    case 118u: goto L_00120F58;
    case 119u: goto L_00120F74;
    case 120u: goto L_00120F88;
    case 121u: goto L_00120FB4;
    case 122u: goto L_00120FC0;
    case 123u: goto L_00120FC8;
    case 124u: goto L_00120FDC;
    case 125u: goto L_00121008;
    case 126u: goto L_00121028;
    case 127u: goto L_00121030;
    case 128u: goto L_0012103C;
    case 129u: goto L_00121040;
    case 130u: goto L_00121050;
    case 131u: goto L_00121058;
    case 132u: goto L_00121060;
    case 133u: goto L_00121068;
    case 134u: goto L_00121080;
    case 135u: goto L_00121084;
    case 136u: goto L_00121098;
    case 137u: goto L_001210B8;
    case 138u: goto L_001210C0;
    case 139u: goto L_001210C4;
    case 140u: goto L_001210F0;
    case 141u: goto L_00121100;
    case 142u: goto L_00121108;
    case 143u: goto L_0012111C;
    case 144u: goto L_0012112C;
    case 145u: goto L_00121140;
    case 146u: goto L_00121148;
    case 147u: goto L_00121168;
    case 148u: goto L_0012117C;
    case 149u: goto L_00121180;
    case 150u: goto L_001211A0;
    case 151u: goto L_001211A8;
    case 152u: goto L_001211C0;
    case 153u: goto L_001212A0;
    case 154u: goto L_001212D8;
    case 155u: goto L_001212EC;
    case 156u: goto L_00121360;
    case 157u: goto L_00121374;
    case 158u: goto L_00121394;
    case 159u: goto L_001213A0;
    case 160u: goto L_001213DC;
    case 161u: goto L_00121408;
    case 162u: goto L_00121428;
    case 163u: goto L_0012143C;
    case 164u: goto L_00121508;
    case 165u: goto L_00121510;
    case 166u: goto L_00121540;
    case 167u: goto L_00121548;
    case 168u: goto L_00121588;
    case 169u: goto L_001215CC;
    case 170u: goto L_001215D4;
    case 171u: goto L_001215EC;
    case 172u: goto L_001215F4;
    case 173u: goto L_00121600;
    case 174u: goto L_00121614;
    case 175u: goto L_00121624;
    case 176u: goto L_00121640;
    case 177u: goto L_00121648;
    case 178u: goto L_00121668;
    case 179u: goto L_0012167C;
    case 180u: goto L_0012169C;
    case 181u: goto L_001216A8;
    case 182u: goto L_001216F8;
    case 183u: goto L_00121724;
    case 184u: goto L_00121738;
    case 185u: goto L_0012175C;
    case 186u: goto L_00121770;
    case 187u: goto L_001217A0;
    case 188u: goto L_001217E0;
    case 189u: goto L_001217E8;
    case 190u: goto L_001217F4;
    case 191u: goto L_0012180C;
    case 192u: goto L_00121820;
    case 193u: goto L_00121830;
    case 194u: goto L_0012183C;
    case 195u: goto L_00121840;
    case 196u: goto L_00121854;
    case 197u: goto L_00121868;
    case 198u: goto L_00121880;
    case 199u: goto L_00121888;
    case 200u: goto L_00121890;
    case 201u: goto L_001218C0;
    case 202u: goto L_001218D0;
    case 203u: goto L_001218E4;
    case 204u: goto L_001218FC;
    case 205u: goto L_00121900;
    case 206u: goto L_0012192C;
    case 207u: goto L_00121940;
    case 208u: goto L_00121960;
    case 209u: goto L_00121968;
    case 210u: goto L_00121980;
    case 211u: goto L_00121994;
    case 212u: goto L_001219C0;
    case 213u: goto L_00121A00;
    case 214u: goto L_00121A10;
    case 215u: goto L_00121A24;
    case 216u: goto L_00121A3C;
    case 217u: goto L_00121ABC;
    case 218u: goto L_00121AC0;
    case 219u: goto L_00121AD0;
    case 220u: goto L_00121ADC;
    case 221u: goto L_00121AE8;
    case 222u: goto L_00121AFC;
    case 223u: goto L_00121B40;
    case 224u: goto L_00121B5C;
    case 225u: goto L_00121B78;
    case 226u: goto L_00121BA0;
    case 227u: goto L_00121BC0;
    case 228u: goto L_00121BD4;
    case 229u: goto L_00121BEC;
    case 230u: goto L_00121C34;
    case 231u: goto L_00121C3C;
    case 232u: goto L_00121C50;
    case 233u: goto L_00121C70;
    case 234u: goto L_00121C84;
    case 235u: goto L_00121CC4;
    case 236u: goto L_00121CD8;
    case 237u: goto L_00121CF4;
    case 238u: goto L_00121D08;
    case 239u: goto L_00121D20;
    case 240u: goto L_00121D6C;
    case 241u: goto L_00121D80;
    case 242u: goto L_00121DA8;
    case 243u: goto L_00121DC0;
    case 244u: goto L_00121DF0;
    case 245u: goto L_00121E10;
    case 246u: goto L_00121E3C;
    case 247u: goto L_00121E44;
    case 248u: goto L_00121E58;
    case 249u: goto L_00121E74;
    case 250u: goto L_00121E98;
    case 251u: goto L_00121EBC;
    case 252u: goto L_00121EFC;
    case 253u: goto L_00121F10;
    case 254u: goto L_00121F4C;
    case 255u: goto L_00121F68;
    case 256u: goto L_00121F90;
    case 257u: goto L_00121FAC;
    case 258u: goto L_00121FEC;
    case 259u: goto L_00122000;
    case 260u: goto L_0012201C;
    case 261u: goto L_00122038;
    case 262u: goto L_0012203C;
    case 263u: goto L_00122040;
    case 264u: goto L_0012204C;
    case 265u: goto L_00122060;
    case 266u: goto L_0012207C;
    case 267u: goto L_00122080;
    case 268u: goto L_001220BC;
    case 269u: goto L_001220C0;
    case 270u: goto L_001220D0;
    case 271u: goto L_00122100;
    case 272u: goto L_00122104;
    case 273u: goto L_00122120;
    case 274u: goto L_00122140;
    case 275u: goto L_00122150;
    case 276u: goto L_00122160;
    case 277u: goto L_00122168;
    case 278u: goto L_00122190;
    case 279u: goto L_001221D0;
    case 280u: goto L_001221E0;
    case 281u: goto L_001221E8;
    case 282u: goto L_00122218;
    case 283u: goto L_00122240;
    case 284u: goto L_00122250;
    case 285u: goto L_00122278;
    case 286u: goto L_001222A0;
    case 287u: goto L_001222D8;
    case 288u: goto L_0012233C;
    case 289u: goto L_00122344;
    case 290u: goto L_00122380;
    case 291u: goto L_0012243C;
    case 292u: goto L_00122480;
    case 293u: goto L_001225A8;
    case 294u: goto L_001225C4;
    case 295u: goto L_001225D0;
    case 296u: goto L_00122610;
    case 297u: goto L_00122634;
    case 298u: goto L_00122640;
    case 299u: goto L_00122688;
    case 300u: goto L_001226AC;
    case 301u: goto L_001226B8;
    case 302u: goto L_00122700;
    case 303u: goto L_00122714;
    case 304u: goto L_00122748;
    case 305u: goto L_0012276C;
    case 306u: goto L_00122778;
    case 307u: goto L_001227C8;
    case 308u: goto L_001227EC;
    case 309u: goto L_001227F8;
    case 310u: goto L_0012283C;
    case 311u: goto L_00122840;
    case 312u: goto L_00122848;
    case 313u: goto L_00122870;
    case 314u: goto L_00122880;
    case 315u: goto L_001228A4;
    case 316u: goto L_001228B8;
    case 317u: goto L_001228D0;
    case 318u: goto L_00122900;
    case 319u: goto L_00122938;
    case 320u: goto L_00122940;
    case 321u: goto L_00122968;
    case 322u: goto L_001229DC;
    case 323u: goto L_00122A14;
    case 324u: goto L_00122A2C;
    case 325u: goto L_00122A38;
    case 326u: goto L_00122A88;
    case 327u: goto L_00122AC0;
    case 328u: goto L_00122AF8;
    case 329u: goto L_00122B08;
    case 330u: goto L_00122B70;
    case 331u: goto L_00122B94;
    case 332u: goto L_00122BB0;
    case 333u: goto L_00122BCC;
    case 334u: goto L_00122BE0;
    case 335u: goto L_00122BEC;
    case 336u: goto L_00122C10;
    case 337u: goto L_00122C18;
    case 338u: goto L_00122C20;
    case 339u: goto L_00122C3C;
    case 340u: goto L_00122C74;
    case 341u: goto L_00122C94;
    case 342u: goto L_00122CB0;
    case 343u: goto L_00122F68;
    case 344u: goto L_00122F98;
    case 345u: goto L_00122FAC;
    case 346u: goto L_0012303C;
    case 347u: goto L_00123040;
    case 348u: goto L_00123058;
    case 349u: goto L_00123080;
    case 350u: goto L_00123088;
    case 351u: goto L_00123100;
    case 352u: goto L_00123120;
    case 353u: goto L_001231B0;
    case 354u: goto L_001231E4;
    case 355u: goto L_00123308;
    case 356u: goto L_00123410;
    case 357u: goto L_00123448;
    case 358u: goto L_001234BC;
    case 359u: goto L_001234F8;
    case 360u: goto L_00123554;
    case 361u: goto L_0012357C;
    case 362u: goto L_00123598;
    case 363u: goto L_001235B4;
    case 364u: goto L_001235D0;
    case 365u: goto L_00123618;
    case 366u: goto L_00123648;
    case 367u: goto L_001236EC;
    case 368u: goto L_00123790;
    case 369u: goto L_001237B8;
    case 370u: goto L_001237C8;
    case 371u: goto L_001237D8;
    case 372u: goto L_001237F0;
    case 373u: goto L_00123804;
    case 374u: goto L_0012381C;
    case 375u: goto L_0012383C;
    case 376u: goto L_00123840;
    case 377u: goto L_00123858;
    case 378u: goto L_00123888;
    case 379u: goto L_001238C0;
    case 380u: goto L_00123900;
    case 381u: goto L_00123950;
    case 382u: goto L_00123980;
    case 383u: goto L_001239C0;
    case 384u: goto L_00123A24;
    case 385u: goto L_00123A3C;
    case 386u: goto L_00123A54;
    case 387u: goto L_00123A6C;
    case 388u: goto L_00123A84;
    case 389u: goto L_00123A9C;
    case 390u: goto L_00123AB4;
    case 391u: goto L_00123AC0;
    case 392u: goto L_00123ACC;
    case 393u: goto L_00123AE4;
    case 394u: goto L_00123AFC;
    case 395u: goto L_00123B14;
    case 396u: goto L_00123BA0;
    case 397u: goto L_00123CE0;
    case 398u: goto L_00123D7C;
    case 399u: goto L_00123DB4;
    case 400u: goto L_00123E04;
    case 401u: goto L_00123E3C;
    case 402u: goto L_00123E70;
    case 403u: goto L_00123EBC;
    case 404u: goto L_00123F08;
    case 405u: goto L_00123F2C;
    case 406u: goto L_00123F34;
    case 407u: goto L_00123FC8;
    default: bad_entry(c, 0x00120000u); return;
    }
L_00120008:
    mmi::padduw(c.r[1], c.r[0], c.r[0]);
    mmi::padduw(c.r[2], c.r[0], c.r[0]);
    mmi::padduw(c.r[3], c.r[0], c.r[0]);
    mmi::padduw(c.r[4], c.r[0], c.r[0]);
    mmi::padduw(c.r[5], c.r[0], c.r[0]);
    mmi::padduw(c.r[6], c.r[0], c.r[0]);
    mmi::padduw(c.r[7], c.r[0], c.r[0]);
    mmi::padduw(c.r[8], c.r[0], c.r[0]);
    mmi::padduw(c.r[9], c.r[0], c.r[0]);
    mmi::padduw(c.r[10], c.r[0], c.r[0]);
    mmi::padduw(c.r[11], c.r[0], c.r[0]);
    mmi::padduw(c.r[12], c.r[0], c.r[0]);
    mmi::padduw(c.r[13], c.r[0], c.r[0]);
    mmi::padduw(c.r[14], c.r[0], c.r[0]);
    mmi::padduw(c.r[15], c.r[0], c.r[0]);
    mmi::padduw(c.r[16], c.r[0], c.r[0]);
    mmi::padduw(c.r[17], c.r[0], c.r[0]);
    mmi::padduw(c.r[18], c.r[0], c.r[0]);
    mmi::padduw(c.r[19], c.r[0], c.r[0]);
    mmi::padduw(c.r[20], c.r[0], c.r[0]);
    mmi::padduw(c.r[21], c.r[0], c.r[0]);
    mmi::padduw(c.r[22], c.r[0], c.r[0]);
    mmi::padduw(c.r[23], c.r[0], c.r[0]);
    mmi::padduw(c.r[24], c.r[0], c.r[0]);
    mmi::padduw(c.r[25], c.r[0], c.r[0]);
    mmi::padduw(c.r[28], c.r[0], c.r[0]);
    mmi::padduw(c.r[29], c.r[0], c.r[0]);
    mmi::padduw(c.r[30], c.r[0], c.r[0]);
    mmi::padduw(c.r[31], c.r[0], c.r[0]);
    c.hi.d[0] = 0ull;
    c.hi.d[1] = 0ull;
    c.lo.d[0] = 0ull;
    c.lo.d[1] = 0ull;
    c.sa = ((0u ^ 0u) & 7u) * 2u;
    c.f[0] = 0u;
    c.f[1] = 0u;
    c.f[2] = 0u;
    c.f[3] = 0u;
    c.f[4] = 0u;
    c.f[5] = 0u;
    c.f[6] = 0u;
    c.f[7] = 0u;
    c.f[8] = 0u;
    c.f[9] = 0u;
    c.f[10] = 0u;
    c.f[11] = 0u;
    c.f[12] = 0u;
    c.f[13] = 0u;
    c.f[14] = 0u;
    c.f[15] = 0u;
    c.f[16] = 0u;
    c.f[17] = 0u;
    c.f[18] = 0u;
    c.f[19] = 0u;
    c.f[20] = 0u;
    c.f[21] = 0u;
    c.f[22] = 0u;
    c.f[23] = 0u;
    c.f[24] = 0u;
    c.f[25] = 0u;
    c.f[26] = 0u;
    c.f[27] = 0u;
    c.f[28] = 0u;
    c.f[29] = 0u;
    c.f[30] = 0u;
    c.f[31] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    ctc1(c, 31u, 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], c.r[2].w[0] + 17792u);
    set32(c.r[3], c.r[3].w[0] - 16384u);
    c.budget -= 73;
L_0012012C:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012014C; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012012Cu | kUnwind; return; } goto L_0012012C; }
L_0012014C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65520ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 3;
L_00120158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00120178; } }
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 6;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120158u | kUnwind; return; } goto L_00120158; }
L_00120178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00120198; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120178u | kUnwind; return; } goto L_00120178; }
L_00120198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], c.r[4].w[0] - 16272u);
    set32(c.r[5], c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1088u);
    set32(c.r[8], c.r[8].w[0] + 544u);
    c.r[28].d[0] = c.r[4].d[0] | 0ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 12;
    c.pc = 0x001201CCu; syscall(c, 0x001201C8u); if (c.pc != 0x001201CCu) return;
    c.budget -= 1;
L_001201CC:
    c.r[29].d[0] = c.r[2].d[0] | 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00000000u);
    set32(c.r[4], c.r[4].w[0] - 16384u);
    set32(c.r[5], c.r[5].w[0] + 16384u);
    set32(c.r[3], 0u + 61u);
    c.budget -= 6;
    c.pc = 0x001201E8u; syscall(c, 0x001201E4u); if (c.pc != 0x001201E8u) return;
    c.budget -= 1;
L_001201E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001201F0u);  if (depth < kMaxDepth) unit_0003(c, 312u, depth + 1u); else { c.pc = 0x0012F2D8u; return; } if (c.pc != 0x001201F0u) [[unlikely]] return; }
L_001201F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001201F8u); c.r[4].d[0] = 0ull | 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x001201F8u) [[unlikely]] return; }
L_001201F8:
    set_interrupts(c, true);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 1088u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120210u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 291u, depth + 1u); else { c.pc = 0x0014FDF0u; return; } if (c.pc != 0x00120210u) [[unlikely]] return; }
L_00120210:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[2].d[0] | 0ull;  [[clang::musttail]] return unit_0008(c, 317u, depth); }
L_00120218:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0003(c, 363u, depth); }
L_00120220:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x00120228u; syscall(c, 0x00120224u); if (c.pc != 0x00120228u) return;
    c.budget -= 1;
L_00120228:
    c.budget -= 2;
L_00120230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00120248; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00120248:
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120254u); set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00120254u) [[unlikely]] return; }
L_00120254:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00120270; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012026Cu); set32(c.r[4], c.r[4].w[0] + 19840u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0012026Cu) [[unlikely]] return; }
L_0012026C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00120270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00120280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012029C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012029Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0012029Cu) [[unlikely]] return; }
L_0012029C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001202B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001202CCu); set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x001202CCu) [[unlikely]] return; }
L_001202CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001202E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001202E4u); set32(c.r[4], c.r[4].w[0] + 19928u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001202E4u) [[unlikely]] return; }
L_001202E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001202E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00120300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_00120310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012032Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0012032Cu) [[unlikely]] return; }
L_0012032C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00120348; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120344u); set32(c.r[4], c.r[4].w[0] + 19928u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00120344u) [[unlikely]] return; }
L_00120344:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00120348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00120360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[31].w[0] - 8u);  if (t) { goto L_0012037C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012037Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0012037Cu) [[unlikely]] return; }
L_0012037C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[31].w[0] - 8u);  if (t) { goto L_001203AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001203ACu); set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x001203ACu) [[unlikely]] return; }
L_001203AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001203C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001203DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001203D4u);  if (depth < kMaxDepth) unit_000B(c, 20u, depth + 1u); else { c.pc = 0x0014DA88u; return; } if (c.pc != 0x001203D4u) [[unlikely]] return; }
L_001203D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001203F4; } }
L_001203DC:
    c.r[3].d[0] = c.r[4].d[0] >> 1;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001203ECu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000B(c, 20u, depth + 1u); else { c.pc = 0x0014DA88u; return; } if (c.pc != 0x001203ECu) [[unlikely]] return; }
L_001203EC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001203F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120410u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00120410u) [[unlikely]] return; }
L_00120410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120430u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00120430u) [[unlikely]] return; }
L_00120430:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120460u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00120460u) [[unlikely]] return; }
L_00120460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012048Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 120u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0012048Cu) [[unlikely]] return; }
L_0012048C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001204C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012049Cu);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012049Cu) [[unlikely]] return; }
L_0012049C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 19200u)));
    st32((c.r[3].w[0] + 19200u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 19204u), c.r[28].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001204C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001204C0u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001204C0u) [[unlikely]] return; }
L_001204C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001204C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001204D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] - 23456u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 23456u)));
    st32((c.r[4].w[0] - 23452u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] - 23456u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120520; } }
    st32((c.r[16].w[0] - 23456u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 23500u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012056C; } }
L_00120520:
    set32(c.r[4], ld32((c.r[2].w[0] - 23512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012052Cu);  if (depth < kMaxDepth) unit_0001(c, 137u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x0012052Cu) [[unlikely]] return; }
L_0012052C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23532u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0012055C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 19200u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012055C; } }
    set32(c.r[4], ld32((c.r[2].w[0] - 23520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120554u);  if (depth < kMaxDepth) unit_0001(c, 137u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00120554u) [[unlikely]] return; }
L_00120554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00120564; } }
L_0012055C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 23500u), 0u);
    c.budget -= 2;
L_00120564:
    st32((c.r[16].w[0] - 23456u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0012056C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00120578:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 20;
L_001205C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001205D0u); set32(c.r[4], ld32((c.r[2].w[0] - 23520u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x001205D0u) [[unlikely]] return; }
L_001205D0:
    set32(c.r[3], ld32((c.r[20].w[0] - 23456u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[23].w[0] - 23536u)));  if (t) { goto L_001205FC; } }
    st32((c.r[19].w[0] - 23500u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[20].w[0] - 23456u), 0u);
    st32((c.r[2].w[0] - 23532u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001205F8u); st32((c.r[30].w[0] + 19220u), 0u);  if (depth < kMaxDepth) unit_0001(c, 103u, depth + 1u); else { c.pc = 0x00124DA0u; return; } if (c.pc != 0x001205F8u) [[unlikely]] return; }
L_001205F8:
    set32(c.r[2], ld32((c.r[23].w[0] - 23536u)));
    c.budget -= 1;
L_001205FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[22].w[0] + 19976u);  if (t) { goto L_00120610; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 19200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120610u); set32(c.r[6], ld32((c.r[17].w[0] - 23452u)));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120610u) [[unlikely]] return; }
L_00120610:
    set32(c.r[3], ld32((c.r[18].w[0] + 19200u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012063C; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 23452u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012063C; } }
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[21].w[0] + 19204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00120638u); set32(c.r[4], ld32((c.r[17].w[0] - 23452u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00120638u) [[unlikely]] return; }
L_00120638:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012063C:
    st32((c.r[19].w[0] - 23500u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001205C8u | kUnwind; return; } goto L_001205C8; } }
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] - 23532u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_001206C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 19224u);
    set32(c.r[3], c.r[3].w[0] + 1400u);
    set32(c.r[5], c.r[5].w[0] + 20016u);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001206A8u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0001(c, 97u, depth + 1u); else { c.pc = 0x00124D60u; return; } if (c.pc != 0x001206A8u) [[unlikely]] return; }
L_001206A8:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] - 23532u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001206B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001206B8u) [[unlikely]] return; }
L_001206B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001206D0; } }
L_001206C0:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001206CCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x001206CCu) [[unlikely]] return; }
L_001206CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001206D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001206E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00120748; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[5].d[0];  if (t) { goto L_00120748; } }
    set32(c.r[8], c.r[7].w[0] + 16u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_00120718:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120718u | kUnwind; return; } goto L_00120718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 4u)));  if (t) { goto L_00120750; } }
L_00120748:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 2;
L_00120750:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00120798; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[2].d[0];  if (t) { goto L_00120798; } }
    set32(c.r[8], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_00120770:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120770u | kUnwind; return; } goto L_00120770; } }
L_00120798:
    c.budget -= 2;
    { set32(c.r[4], c.r[11].w[0] - 23456u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001204D8u | kUnwind; return; } goto L_001204D8; }
L_001207A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] - 23512u)));
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_001207E8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 23508u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_001207EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] - 23504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00120870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_001207F4; } }
L_001207E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 1;
L_001207EC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 2;
L_001207F4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 20040u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120810u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x00120810u) [[unlikely]] return; }
L_00120810:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[17].w[0] - 23512u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20056u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120828u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x00120828u) [[unlikely]] return; }
L_00120828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] - 23508u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20072u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120840u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x00120840u) [[unlikely]] return; }
L_00120840:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[18].w[0] - 23504u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20088u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012085Cu); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x0012085Cu) [[unlikely]] return; }
L_0012085C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] - 23520u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 23500u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_00120870:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00120888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23532u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_001208C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] - 23456u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208B8u); set32(c.r[4], ld32((c.r[16].w[0] - 23520u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x001208B8u) [[unlikely]] return; }
L_001208B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_001208C8; } }
L_001208C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 2;
L_001208C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208D0u); set32(c.r[4], ld32((c.r[2].w[0] - 23512u)));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x001208D0u) [[unlikely]] return; }
L_001208D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208DCu); set32(c.r[4], ld32((c.r[3].w[0] - 23508u)));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x001208DCu) [[unlikely]] return; }
L_001208DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208E8u); set32(c.r[4], ld32((c.r[3].w[0] - 23504u)));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x001208E8u) [[unlikely]] return; }
L_001208E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208F0u); set32(c.r[4], ld32((c.r[16].w[0] - 23520u)));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x001208F0u) [[unlikely]] return; }
L_001208F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208F8u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001208F8u) [[unlikely]] return; }
L_001208F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120908u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_0002(c, 8u, depth + 1u); else { c.pc = 0x00128120u; return; } if (c.pc != 0x00120908u) [[unlikely]] return; }
L_00120908:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012091C; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_0012091C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00120928:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 23480u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_00120958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120958u);  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00120A00u; return; } if (c.pc != 0x00120958u) [[unlikely]] return; }
L_00120958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120960u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00120960u) [[unlikely]] return; }
L_00120960:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], ld32((c.r[5].w[0] + 19208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[4].w[0] + 19216u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 19208u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 19212u), c.r[28].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00120990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012098Cu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012098Cu) [[unlikely]] return; }
L_0012098C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00120990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001209A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19208u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_001209EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23516u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001209F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] + 19212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001209E8u); set32(c.r[4], ld32((c.r[3].w[0] + 19216u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001209E8u) [[unlikely]] return; }
L_001209E8:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001209EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001209F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00120A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120A24u); st32((c.r[17].w[0] - 23516u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00120A24u) [[unlikely]] return; }
L_00120A24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2472u);
    c.r[4].d[0] = c.r[4].d[0] | 18ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120A40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 6u, depth + 1u); else { c.pc = 0x001280A8u; return; } if (c.pc != 0x00120A40u) [[unlikely]] return; }
L_00120A40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120A50u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00120A50u) [[unlikely]] return; }
L_00120A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 1;
L_00120A54:
    st32((c.r[17].w[0] - 23516u), 0u);
    st32((c.r[2].w[0] - 23480u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00120A78:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120AB8u); st32((c.r[29].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001207A0u; return; } if (c.pc != 0x00120AB8u) [[unlikely]] return; }
L_00120AB8:
    set32(c.r[4], ld32((c.r[22].w[0] - 23512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120AC4u);  if (depth < kMaxDepth) unit_0001(c, 141u, depth + 1u); else { c.pc = 0x00124FB0u; return; } if (c.pc != 0x00120AC4u) [[unlikely]] return; }
L_00120AC4:
    set32(c.r[3], ld32((c.r[22].w[0] - 23512u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120D44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 23524u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120AE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 120u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x00120AE4u) [[unlikely]] return; }
L_00120AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00120C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120AF4u); c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x00120AF4u) [[unlikely]] return; }
L_00120AF4:
    set32(c.r[2], ld32((c.r[17].w[0] - 23476u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00120BAC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00120B34; } }
L_00120B10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00120B18:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120B18u | kUnwind; return; } goto L_00120B18; } }
L_00120B34:
    set32(c.r[16], c.r[23].w[0] + 19712u);
    c.budget -= 1;
L_00120B38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1431ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120B4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00120B4Cu) [[unlikely]] return; }
L_00120B4C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00120B9C; }
    set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00120B70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120B6Cu); set32(c.r[4], c.r[4].w[0] + 20112u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120B6Cu) [[unlikely]] return; }
L_00120B6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00120B70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00120B78:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120B78u | kUnwind; return; } goto L_00120B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[23].w[0] + 19712u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120B38u | kUnwind; return; } goto L_00120B38; } }
L_00120B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120B10u | kUnwind; return; } goto L_00120B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 23476u), 0u);  if (t) { goto L_00120BB8; } }
L_00120BAC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
L_00120BB8:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[21].w[0] + 19328u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00120BFC; } }
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00120BD8:
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_00120BFC; } }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120BD8u | kUnwind; return; } goto L_00120BD8; }
L_00120BFC:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));  if (t) { goto L_00120C14; } }
    set32(c.r[2], c.r[21].w[0] + 19328u);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));
    c.budget -= 3;
L_00120C14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00120C2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] + 20144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C2Cu); set32(c.r[5], c.r[5].w[0] + 19364u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120C2Cu) [[unlikely]] return; }
L_00120C2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[16], c.r[21].w[0] + 19328u);
    set32(c.r[5], 0u + 300u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C48u); st32((c.r[16].w[0] + 292u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00120C48u) [[unlikely]] return; }
L_00120C48:
    set32(c.r[4], c.r[23].w[0] + 19712u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 300u);
    set32(c.r[9], c.r[30].w[0] + 19648u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C70u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00120C70u) [[unlikely]] return; }
L_00120C70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00120C8C; } }
L_00120C78:
    set32(c.r[4], ld32((c.r[22].w[0] - 23512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C84u);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00120C84u) [[unlikely]] return; }
L_00120C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120D44; } }
L_00120C8C:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[4], (c.r[2].w[0] + 15u));
    ldr(c.r[4], (c.r[2].w[0] + 8u));
    ldl(c.r[5], (c.r[2].w[0] + 23u));
    ldr(c.r[5], (c.r[2].w[0] + 16u));
    ldl(c.r[6], (c.r[2].w[0] + 31u));
    ldr(c.r[6], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 7u));
    sdr(c.r[3], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[19].w[0] + 15u));
    sdr(c.r[4], (c.r[19].w[0] + 8u));
    sdl(c.r[5], (c.r[19].w[0] + 23u));
    sdr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[6], (c.r[19].w[0] + 31u));
    sdr(c.r[6], (c.r[19].w[0] + 24u));
    lwl(c.r[3], (c.r[2].w[0] + 35u));
    lwr(c.r[3], (c.r[2].w[0] + 32u));
    swl(c.r[3], (c.r[19].w[0] + 35u));
    swr(c.r[3], (c.r[19].w[0] + 32u));
    set32(c.r[3], ld32((c.r[20].w[0] - 23536u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00120D28; } }
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120CF8u); set32(c.r[4], c.r[4].w[0] + 20168u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120CF8u) [[unlikely]] return; }
L_00120CF8:
    set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00120D28; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120D10u); set32(c.r[4], c.r[4].w[0] + 20184u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120D10u) [[unlikely]] return; }
L_00120D10:
    set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00120D28; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120D28u); set32(c.r[4], c.r[4].w[0] + 20200u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120D28u) [[unlikely]] return; }
L_00120D28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[30].w[0] + 19648u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] - 23512u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120D40u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00120D40u) [[unlikely]] return; }
L_00120D40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00120D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00120D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120D88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 80u, depth + 1u); else { c.pc = 0x00120A78u; return; } if (c.pc != 0x00120D88u) [[unlikely]] return; }
L_00120D88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120D98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120DB8u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001207A0u; return; } if (c.pc != 0x00120DB8u) [[unlikely]] return; }
L_00120DB8:
    set32(c.r[4], ld32((c.r[16].w[0] - 23512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120DC4u);  if (depth < kMaxDepth) unit_0001(c, 141u, depth + 1u); else { c.pc = 0x00124FB0u; return; } if (c.pc != 0x00120DC4u) [[unlikely]] return; }
L_00120DC4:
    set32(c.r[3], ld32((c.r[16].w[0] - 23512u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120DF8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120E1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 23524u)));
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120DF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120DF0u) [[unlikely]] return; }
L_00120DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120ED8; } }
L_00120DF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120E08u); st32((c.r[2].w[0] - 23524u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 120u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x00120E08u) [[unlikely]] return; }
L_00120E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00120E24; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 23512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120E1Cu);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00120E1Cu) [[unlikely]] return; }
L_00120E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120ED8; } }
L_00120E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120E2Cu); c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x00120E2Cu) [[unlikely]] return; }
L_00120E2C:
    set32(c.r[2], ld32((c.r[18].w[0] - 23492u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00120ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120E64; } }
L_00120E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00120E48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120E48u | kUnwind; return; } goto L_00120E48; } }
L_00120E64:
    set32(c.r[16], c.r[17].w[0] - 18992u);
    c.budget -= 1;
L_00120E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1429ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120E7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00120E7Cu) [[unlikely]] return; }
L_00120E7C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00120ECC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00120EA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120EA0u); set32(c.r[4], c.r[4].w[0] + 20264u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120EA0u) [[unlikely]] return; }
L_00120EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00120EA4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00120EA8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120EA8u | kUnwind; return; } goto L_00120EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 18992u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120E68u | kUnwind; return; } goto L_00120E68; } }
L_00120ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120E40u | kUnwind; return; } goto L_00120E40; } }
    st32((c.r[18].w[0] - 23492u), 0u);
    c.budget -= 1;
L_00120ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00120EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120F04u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 102u, depth + 1u); else { c.pc = 0x00120D98u; return; } if (c.pc != 0x00120F04u) [[unlikely]] return; }
L_00120F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120F14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120F78; } }
L_00120F14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[2].w[0] - 23424u);
    set32(c.r[4], c.r[4].w[0] - 18992u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120F44u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00120F44u) [[unlikely]] return; }
L_00120F44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120F60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120F58u); set32(c.r[4], ld32((c.r[2].w[0] - 23512u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00120F58u) [[unlikely]] return; }
L_00120F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120F78; } }
L_00120F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 23512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120F74u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00120F74u) [[unlikely]] return; }
L_00120F74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00120F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00120F88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00120FEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00120FB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120FB4u); set32(c.r[4], c.r[4].w[0] + 20288u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00120FB4u) [[unlikely]] return; }
L_00120FB4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00120FC8; } }
L_00120FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120FC8u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_0001(c, 275u, depth + 1u); else { c.pc = 0x00125FD8u; return; } if (c.pc != 0x00120FC8u) [[unlikely]] return; }
L_00120FC8:
    set32(c.r[2], ld32((c.r[17].w[0] - 23500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120FC0u | kUnwind; return; } goto L_00120FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120FDCu); set32(c.r[4], c.r[16].w[0] - 18992u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x00120FDCu) [[unlikely]] return; }
L_00120FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120FC0u | kUnwind; return; } goto L_00120FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00121018; } }
L_00120FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23500u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00121014; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121008u); set32(c.r[4], c.r[4].w[0] - 18992u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x00121008u) [[unlikely]] return; }
L_00121008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00121014; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00121014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00121018:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00121028:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 2;
L_00121030:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00121078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 1;
L_0012103C:
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 1;
L_00121040:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00121050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121050u); set32(c.r[4], c.r[4].w[0] + 20304u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121050u) [[unlikely]] return; }
L_00121050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121060; } }
L_00121058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121060u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_0001(c, 275u, depth + 1u); else { c.pc = 0x00125FD8u; return; } if (c.pc != 0x00121060u) [[unlikely]] return; }
L_00121060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121068u); set32(c.r[4], c.r[16].w[0] - 16512u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x00121068u) [[unlikely]] return; }
L_00121068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121058u | kUnwind; return; } goto L_00121058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00121088; } }
L_00121078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121084u); set32(c.r[4], c.r[4].w[0] - 16512u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x00121084u) [[unlikely]] return; }
    goto L_00121084;
L_00121080:
    set32(c.r[4], c.r[4].w[0] - 16512u);
    c.budget -= 1;
L_00121084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00121088:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00121098:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001210B8u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001207A0u; return; } if (c.pc != 0x001210B8u) [[unlikely]] return; }
L_001210B8:
    set32(c.r[4], ld32((c.r[16].w[0] - 23508u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001210C4u);  if (depth < kMaxDepth) unit_0001(c, 141u, depth + 1u); else { c.pc = 0x00124FB0u; return; } if (c.pc != 0x001210C4u) [[unlikely]] return; }
    goto L_001210C4;
L_001210C0:
    c.budget -= 1;
L_001210C4:
    set32(c.r[3], ld32((c.r[16].w[0] - 23508u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_001210F8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012111C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 23528u)));
    set32(c.r[4], c.r[4].w[0] + 20320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001210F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001210F0u) [[unlikely]] return; }
L_001210F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001211D8; } }
L_001210F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00121100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121108u); st32((c.r[2].w[0] - 23528u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 126u, depth + 1u); else { c.pc = 0x00121028u; return; } if (c.pc != 0x00121108u) [[unlikely]] return; }
L_00121108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00121124; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 23508u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012111Cu);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x0012111Cu) [[unlikely]] return; }
L_0012111C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001211D8; } }
L_00121124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012112Cu); c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x0012112Cu) [[unlikely]] return; }
L_0012112C:
    set32(c.r[2], ld32((c.r[18].w[0] - 23468u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001211D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121164; } }
L_00121140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00121148:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121148u | kUnwind; return; } goto L_00121148; } }
L_00121164:
    set32(c.r[16], c.r[17].w[0] - 16512u);
    c.budget -= 1;
L_00121168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1427ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012117Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x0012117Cu) [[unlikely]] return; }
L_0012117C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001211CC; }
    goto L_00121184;
L_00121180:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00121184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_001211A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001211A0u); set32(c.r[4], c.r[4].w[0] + 20360u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001211A0u) [[unlikely]] return; }
L_001211A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_001211A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001211A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001211A8u | kUnwind; return; } goto L_001211A8; } }
    goto L_001211C4;
L_001211C0:
    c.budget -= 1;
L_001211C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 16512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121168u | kUnwind; return; } goto L_00121168; } }
L_001211CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121140u | kUnwind; return; } goto L_00121140; } }
    st32((c.r[18].w[0] - 23468u), 0u);
    c.budget -= 1;
L_001211D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001212A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001212D8u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 126u, depth + 1u); else { c.pc = 0x00121028u; return; } if (c.pc != 0x001212D8u) [[unlikely]] return; }
L_001212D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121558; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001212ECu); c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x001212ECu) [[unlikely]] return; }
L_001212EC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] - 23516u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], ld32((c.r[21].w[0] - 23460u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 23480u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[5].w[0] - 23476u), c.r[3].w[0]);
    st32((c.r[6].w[0] - 23492u), c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 19752u);
    st32((c.r[7].w[0] - 23468u), c.r[3].w[0]);
    set32(c.r[18], c.r[16].w[0] + 19840u);
    st32((c.r[9].w[0] - 23472u), c.r[3].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[8].w[0] - 23496u), 0u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[21].w[0] - 23460u), c.r[4].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[20].w[0] - 23464u), c.r[3].w[0]);
    c.budget -= 29;
L_00121360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1426ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121374u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00121374u) [[unlikely]] return; }
L_00121374:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_001213C4; }
    set32(c.r[2], ld32((c.r[23].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[21].w[0] - 23460u)));  if (t) { goto L_00121394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121394u); set32(c.r[4], c.r[22].w[0] + 20384u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121394u) [[unlikely]] return; }
L_00121394:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_001213A0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001213A0u | kUnwind; return; } goto L_001213A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121360u | kUnwind; return; } goto L_00121360; } }
L_001213C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0012141C; } }
    st32((c.r[16].w[0] + 19840u), c.r[19].w[0]);
    st32((c.r[20].w[0] - 23464u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001213DCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x001213DCu) [[unlikely]] return; }
L_001213DC:
    set32(c.r[16], c.r[30].w[0] - 18944u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121408u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121408u) [[unlikely]] return; }
L_00121408:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012144C; } }
    st32((c.r[2].w[0] - 23516u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121558; } }
L_0012141C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_00121428:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
L_0012143C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121428u | kUnwind; return; } goto L_00121428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121360u | kUnwind; return; } goto L_00121360; } }
L_0012144C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_001214D4; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_00121498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 23536u), c.r[16].w[0]);  if (t) { goto L_001214D4; } }
L_00121498:
    set32(c.r[2], c.r[5].w[0] + 255u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_001214D4; }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_001214D8; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001214D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 1;
L_001214D8:
    st32((c.r[3].w[0] - 23516u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00121538; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00121538; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121538; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00121508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121508u); set32(c.r[4], c.r[4].w[0] + 20416u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121508u) [[unlikely]] return; }
L_00121508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121510u);  if (depth < kMaxDepth) unit_0000(c, 62u, depth + 1u); else { c.pc = 0x00120888u; return; } if (c.pc != 0x00121510u) [[unlikely]] return; }
L_00121510:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 23512u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] - 23508u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 23520u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 23484u), 0u);  if (t) { goto L_00121554; } }
L_00121538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121540u);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001207A0u; return; } if (c.pc != 0x00121540u) [[unlikely]] return; }
L_00121540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121548u);  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00120A00u; return; } if (c.pc != 0x00121548u) [[unlikely]] return; }
L_00121548:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 23484u), c.r[2].w[0]);
    c.budget -= 3;
L_00121554:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00121588:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 23536u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_001215CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001215CCu); set32(c.r[4], c.r[4].w[0] + 20432u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001215CCu) [[unlikely]] return; }
L_001215CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001215D4u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001215D4u) [[unlikely]] return; }
L_001215D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] - 23488u), c.r[3].w[0]);  if (t) { goto L_001215EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001215ECu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001215ECu) [[unlikely]] return; }
L_001215EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001215F4u); c.r[19].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001207A0u; return; } if (c.pc != 0x001215F4u) [[unlikely]] return; }
L_001215F4:
    set32(c.r[4], ld32((c.r[19].w[0] - 23508u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121600u);  if (depth < kMaxDepth) unit_0001(c, 141u, depth + 1u); else { c.pc = 0x00124FB0u; return; } if (c.pc != 0x00121600u) [[unlikely]] return; }
L_00121600:
    set32(c.r[3], ld32((c.r[19].w[0] - 23508u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00121774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121614u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 126u, depth + 1u); else { c.pc = 0x00121028u; return; } if (c.pc != 0x00121614u) [[unlikely]] return; }
L_00121614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012172C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121624u); c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x00121624u) [[unlikely]] return; }
L_00121624:
    set32(c.r[2], ld32((c.r[17].w[0] - 23472u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_001216DC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121664; } }
    c.budget -= 1;
L_00121640:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00121648:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121648u | kUnwind; return; } goto L_00121648; } }
L_00121664:
    set32(c.r[16], c.r[21].w[0] + 19792u);
    c.budget -= 1;
L_00121668:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1434ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012167Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x0012167Cu) [[unlikely]] return; }
L_0012167C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001216CC; }
    set32(c.r[2], ld32((c.r[22].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_001216A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012169Cu); set32(c.r[4], c.r[4].w[0] + 20456u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0012169Cu) [[unlikely]] return; }
L_0012169C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_001216A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001216A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001216A8u | kUnwind; return; } goto L_001216A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 19792u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121668u | kUnwind; return; } goto L_00121668; } }
L_001216CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121640u | kUnwind; return; } goto L_00121640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 23472u), 0u);  if (t) { goto L_001216E4; } }
L_001216DC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 2;
L_001216E4:
    set32(c.r[16], c.r[20].w[0] + 19856u);
    st32((c.r[20].w[0] + 19856u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001216F8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x001216F8u) [[unlikely]] return; }
L_001216F8:
    set32(c.r[17], c.r[23].w[0] - 18944u);
    set32(c.r[4], c.r[21].w[0] + 19792u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121724u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121724u) [[unlikely]] return; }
L_00121724:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 23536u)));  goto L_0012174C; }
L_0012172C:
    set32(c.r[4], ld32((c.r[19].w[0] - 23508u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121738u);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121738u) [[unlikely]] return; }
L_00121738:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00121774; } }
L_0012174C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0012175C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012175Cu); set32(c.r[4], c.r[4].w[0] + 20488u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0012175Cu) [[unlikely]] return; }
L_0012175C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 23508u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121770u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121770u) [[unlikely]] return; }
L_00121770:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001217A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 23536u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_001217E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001217E0u); set32(c.r[4], c.r[4].w[0] + 20512u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001217E0u) [[unlikely]] return; }
L_001217E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001217E8u); c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001207A0u; return; } if (c.pc != 0x001217E8u) [[unlikely]] return; }
L_001217E8:
    set32(c.r[4], ld32((c.r[20].w[0] - 23504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001217F4u);  if (depth < kMaxDepth) unit_0001(c, 141u, depth + 1u); else { c.pc = 0x00124FB0u; return; } if (c.pc != 0x001217F4u) [[unlikely]] return; }
L_001217F4:
    set32(c.r[3], ld32((c.r[20].w[0] - 23504u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] ^ 8ull;  if (t) { goto L_00121944; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012180Cu); c.r[19].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x0012180Cu) [[unlikely]] return; }
L_0012180C:
    set32(c.r[2], ld32((c.r[19].w[0] - 23472u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001218C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00121850; } }
L_00121820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_00121954; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_00121830:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
L_0012183C:
    c.budget -= 1;
L_00121840:
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121830u | kUnwind; return; } goto L_00121830; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00121850:
    set32(c.r[16], c.r[21].w[0] + 19792u);
    c.budget -= 1;
L_00121854:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1436ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121868u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00121868u) [[unlikely]] return; }
L_00121868:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_001218B4; }
    set32(c.r[2], ld32((c.r[22].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0012188C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_00121880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121888u); set32(c.r[4], c.r[4].w[0] + 20456u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121888u) [[unlikely]] return; }
L_00121888:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0012188C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00121890:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121890u | kUnwind; return; } goto L_00121890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 19792u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121854u | kUnwind; return; } goto L_00121854; } }
L_001218B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121820u | kUnwind; return; } goto L_00121820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] - 23472u), 0u);  if (t) { goto L_001218C8; } }
    goto L_001218C4;
L_001218C0:
    st32((c.r[19].w[0] - 23472u), 0u);
    c.budget -= 1;
L_001218C4:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 1;
L_001218C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001218D0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001218D0u) [[unlikely]] return; }
L_001218D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 23488u), 0u);  if (t) { goto L_001218E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001218E4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001218E4u) [[unlikely]] return; }
L_001218E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] + 19856u);
    st32((c.r[2].w[0] + 19856u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001218FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x001218FCu) [[unlikely]] return; }
L_001218FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 1;
L_00121900:
    set32(c.r[4], c.r[21].w[0] + 19792u);
    set32(c.r[17], c.r[2].w[0] - 16768u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012192Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x0012192Cu) [[unlikely]] return; }
L_0012192C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 23536u)));  goto L_00121970; }
    set32(c.r[4], ld32((c.r[20].w[0] - 23504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121940u);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121940u) [[unlikely]] return; }
L_00121940:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    c.budget -= 1;
L_00121944:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00121998; } }
L_00121954:
    set32(c.r[4], ld32((c.r[20].w[0] - 23504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121960u);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121960u) [[unlikely]] return; }
L_00121960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121968u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 168u, depth + 1u); else { c.pc = 0x00121588u; return; } if (c.pc != 0x00121968u) [[unlikely]] return; }
L_00121968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0012199C; } }
L_00121970:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00121980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121980u); set32(c.r[4], c.r[4].w[0] + 20488u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121980u) [[unlikely]] return; }
L_00121980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[20].w[0] - 23504u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121994u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121994u) [[unlikely]] return; }
L_00121994:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0012199C:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001219C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] - 23496u)));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] - 23296u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
L_00121A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00121A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121A10u);  if (depth < kMaxDepth) unit_0000(c, 115u, depth + 1u); else { c.pc = 0x00120EF0u; return; } if (c.pc != 0x00121A10u) [[unlikely]] return; }
L_00121A10:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121B7C; } }
L_00121A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121A24u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 102u, depth + 1u); else { c.pc = 0x00120D98u; return; } if (c.pc != 0x00121A24u) [[unlikely]] return; }
L_00121A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121B5C; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 4;
L_00121A3C:
    set32(c.r[4], c.r[19].w[0] - 19200u);
    set32(c.r[5], c.r[8].w[0] - 19008u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00121A90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] << 11);  if (t) { goto L_00121AA0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2340u);  if (t) { goto L_00121A9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00121AA0; } }
L_00121A90:
    set32(c.r[2], 0u + 2328u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (t) { goto L_00121AA0; } }
L_00121A9C:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00121AA0:
    set32(c.r[2], ld32((c.r[21].w[0] - 23496u)));
    set32(c.r[16], c.r[8].w[0] - 19008u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[8].w[0] - 19008u), 0u);  if (t) { goto L_00121ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121ABCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121ABCu) [[unlikely]] return; }
L_00121ABC:
    set32(c.r[19], c.r[19].w[0] - 19200u);
    c.budget -= 1;
L_00121AC0:
    set32(c.r[5], 0u + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121AD0u); c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121AD0u) [[unlikely]] return; }
L_00121AD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121ADCu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121ADCu) [[unlikely]] return; }
L_00121ADC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121AE8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121AE8u) [[unlikely]] return; }
L_00121AE8:
    set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00121AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121AFCu); set32(c.r[4], c.r[4].w[0] + 20536u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121AFCu) [[unlikely]] return; }
L_00121AFC:
    set32(c.r[2], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] - 23456u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st32((c.r[17].w[0] - 23500u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18992u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] + 1768u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 24u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121B40u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121B40u) [[unlikely]] return; }
L_00121B40:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] - 23536u)));  goto L_00121B64; }
    st32((c.r[16].w[0] - 23456u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[17].w[0] - 23500u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121B5Cu); set32(c.r[4], ld32((c.r[2].w[0] - 23512u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121B5Cu) [[unlikely]] return; }
L_00121B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121B7C; } }
L_00121B64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00121B7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121B78u); set32(c.r[4], c.r[4].w[0] + 20560u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00121B78u) [[unlikely]] return; }
L_00121B78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00121B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00121BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121BC0u); c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0000(c, 115u, depth + 1u); else { c.pc = 0x00120EF0u; return; } if (c.pc != 0x00121BC0u) [[unlikely]] return; }
L_00121BC0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[17].w[0] - 23296u);  if (t) { goto L_00121C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121BD4u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0000(c, 102u, depth + 1u); else { c.pc = 0x00120D98u; return; } if (c.pc != 0x00121BD4u) [[unlikely]] return; }
L_00121BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00121C50; } }
    st32((c.r[17].w[0] - 23296u), c.r[16].w[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121BECu); c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121BECu) [[unlikely]] return; }
L_00121BEC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[16].w[0] - 23456u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] - 23456u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18992u);
    st32((c.r[17].w[0] - 23500u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] + 1240u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121C34u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121C34u) [[unlikely]] return; }
L_00121C34:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_00121C54; }
L_00121C3C:
    st32((c.r[16].w[0] - 23456u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[17].w[0] - 23500u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121C50u); set32(c.r[4], ld32((c.r[2].w[0] - 23512u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121C50u) [[unlikely]] return; }
L_00121C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00121C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00121C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121C84u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00121098u; return; } if (c.pc != 0x00121C84u) [[unlikely]] return; }
L_00121C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00121CF8; } }
L_00121C94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[2].w[0] - 18944u);
    set32(c.r[4], c.r[4].w[0] - 16512u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121CC4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121CC4u) [[unlikely]] return; }
L_00121CC4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121CE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121CD8u); set32(c.r[4], ld32((c.r[2].w[0] - 23508u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121CD8u) [[unlikely]] return; }
L_00121CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00121CF8; } }
L_00121CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 23508u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121CF4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121CF4u) [[unlikely]] return; }
L_00121CF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00121D08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 30u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121D20u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00121098u; return; } if (c.pc != 0x00121D20u) [[unlikely]] return; }
L_00121D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121DAC; } }
L_00121D30:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[17], c.r[2].w[0] - 18944u);
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] - 23456u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 16512u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121D6Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121D6Cu) [[unlikely]] return; }
L_00121D6C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121D8C; } }
    set32(c.r[4], ld32((c.r[2].w[0] - 23508u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121D80u);  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121D80u) [[unlikely]] return; }
L_00121D80:
    st32((c.r[16].w[0] - 23456u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121DAC; } }
L_00121D8C:
    st32((c.r[16].w[0] - 23456u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 23508u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121DA8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121DA8u) [[unlikely]] return; }
L_00121DA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00121DC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[19].w[0] - 17856u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121DF0u); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00121098u; return; } if (c.pc != 0x00121DF0u) [[unlikely]] return; }
L_00121DF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] - 17856u), c.r[18].w[0]);  goto L_00121E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121E78; } }
L_00121E00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121E10u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121E10u) [[unlikely]] return; }
L_00121E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[2].w[0] - 18944u);
    set32(c.r[4], c.r[4].w[0] - 16512u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 37u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 8u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
L_00121E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121E44u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121E44u) [[unlikely]] return; }
L_00121E44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121E58u); set32(c.r[4], ld32((c.r[2].w[0] - 23508u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121E58u) [[unlikely]] return; }
L_00121E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121E78; } }
L_00121E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 23508u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121E74u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121E74u) [[unlikely]] return; }
L_00121E74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00121E98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121EBCu); set32(c.r[4], 0u + 39u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00121098u; return; } if (c.pc != 0x00121EBCu) [[unlikely]] return; }
L_00121EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00121ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121F50; } }
L_00121ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[2].w[0] - 18944u);
    set32(c.r[4], c.r[4].w[0] - 16512u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 39u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 12u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121EFCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121EFCu) [[unlikely]] return; }
L_00121EFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00121F18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121F10u); set32(c.r[4], ld32((c.r[2].w[0] - 23508u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121F10u) [[unlikely]] return; }
L_00121F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00121F50; } }
L_00121F18:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 8u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[16].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] - 23508u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121F4Cu); set32(c.r[16], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00121F4Cu) [[unlikely]] return; }
L_00121F4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00121F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00121F68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] - 17856u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121F90u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00121098u; return; } if (c.pc != 0x00121F90u) [[unlikely]] return; }
L_00121F90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] - 17856u), c.r[16].w[0]);  goto L_00121FA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00122020; } }
L_00121FA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121FACu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 24u, depth + 1u); else { c.pc = 0x00128470u; return; } if (c.pc != 0x00121FACu) [[unlikely]] return; }
L_00121FAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[8], ld32((c.r[4].w[0] - 16468u)));
    set32(c.r[16], c.r[2].w[0] - 18944u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[10], ld32((c.r[6].w[0] - 16464u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 16472u)));
    set32(c.r[4], c.r[4].w[0] - 16512u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121FECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00121FECu) [[unlikely]] return; }
L_00121FEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00122008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122000u); set32(c.r[4], ld32((c.r[2].w[0] - 23508u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00122000u) [[unlikely]] return; }
L_00122000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00122020; } }
L_00122008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 23508u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012201Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x0012201Cu) [[unlikely]] return; }
L_0012201C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00122020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00122038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_0012203C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_00122040:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012204Cu); set32(c.r[4], c.r[4].w[0] + 20576u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0012204Cu) [[unlikely]] return; }
L_0012204C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00122060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012207Cu); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00121098u; return; } if (c.pc != 0x0012207Cu) [[unlikely]] return; }
L_0012207C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0012208C; } }
    goto L_00122084;
L_00122080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 1;
L_00122084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00122108; } }
L_0012208C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[2].w[0] - 18944u);
    set32(c.r[4], c.r[4].w[0] - 16512u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001220BCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x001220BCu) [[unlikely]] return; }
L_001220BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_001220D8; } }
    goto L_001220C4;
L_001220C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_001220C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001220D0u); set32(c.r[4], ld32((c.r[2].w[0] - 23508u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x001220D0u) [[unlikely]] return; }
L_001220D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00122108; } }
L_001220D8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    ldl(c.r[4], (c.r[2].w[0] + 7u));
    ldr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[17].w[0] + 7u));
    c.r[3].d[0] = c.r[16].d[0] | c.r[3].d[0];
    sdr(c.r[4], (c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] - 23508u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122104u); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00124F80u; return; } if (c.pc != 0x00122104u) [[unlikely]] return; }
    goto L_00122104;
L_00122100:
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00122104:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00122108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00122120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_00122140:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00122178; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00122150:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00122168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122160u); set32(c.r[4], c.r[18].w[0] + 20616u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00122160u) [[unlikely]] return; }
L_00122160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x001228B8u; return; } if (c.pc != 0x00122168u) [[unlikely]] return; }
L_00122168:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122150u | kUnwind; return; } goto L_00122150; } }
L_00122178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00122190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_001221F8; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 2;
L_001221D0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001221E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001221E0u); set32(c.r[4], c.r[19].w[0] + 20616u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001221E0u) [[unlikely]] return; }
L_001221E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001221E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x001228B8u; return; } if (c.pc != 0x001221E8u) [[unlikely]] return; }
L_001221E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001221D0u | kUnwind; return; } goto L_001221D0; } }
L_001221F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00122218:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[4].w[0] >> 28);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00122238; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
L_00122238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00122240:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0012226C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00122250:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122250u | kUnwind; return; } goto L_00122250; } }
L_0012226C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00122278:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00122298; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 16440u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_00122298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001222A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 16440u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + 20640u);
    set32(c.r[4], 0u + 9u);
    c.r[17].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 14;
L_001222D8:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  goto L_00122304; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
L_00122304:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001222D8u | kUnwind; return; } goto L_001222D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = 0ull | 65311ull;
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF1F0000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012233Cu); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 283u, depth + 1u); else { c.pc = 0x00122240u; return; } if (c.pc != 0x0012233Cu) [[unlikely]] return; }
L_0012233C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122344u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 290u, depth + 1u); else { c.pc = 0x00122380u; return; } if (c.pc != 0x00122344u) [[unlikely]] return; }
L_00122344:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00122368; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_00122368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00122380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 57392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 20;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 1u));  goto L_001223D8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001223D8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 2u));  goto L_001223EC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 2u);  c.pc = t; return; }
L_001223EC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[11].d[0] = ld8((c.r[9].w[0] + 3u));  goto L_00122400; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 3u);  c.pc = t; return; }
L_00122400:
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00122414; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 4u);  c.pc = t; return; }
L_00122414:
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] + 20680u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20696u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    c.budget -= 10;
L_0012243C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 20712u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65343ull;
    set32(c.r[6], c.r[6].w[0] << 6);
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65523ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 17;
L_00122480:
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001224B0; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | 2ull;
    c.r[2].d[0] = c.r[2].d[0] | 64767ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001224BC; } }
L_001224B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_001224BC:
    c.r[2].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = ld16((c.r[9].w[0] + 6u));
    c.r[4].d[0] = c.r[4].d[0] | 57344ull;
    c.r[5].d[0] = ld16((c.r[9].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[8], ld32((c.r[9].w[0] + 16u)));
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[7].d[0] = ld16((c.r[9].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 57392ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[3].w[0] + 19864u);
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    ldl(c.r[4], (c.r[9].w[0] + 15u));
    ldr(c.r[4], (c.r[9].w[0] + 8u));
    set32(c.r[5], ld32((c.r[9].w[0] + 16u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    sdl(c.r[4], (c.r[6].w[0] + 15u));
    sdr(c.r[4], (c.r[6].w[0] + 8u));
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001225A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001225C4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 282u, depth + 1u); else { c.pc = 0x00122218u; return; } if (c.pc != 0x001225C4u) [[unlikely]] return; }
L_001225C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001225D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x001225D0u) [[unlikely]] return; }
L_001225D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_001225E4; }
L_001225E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 261ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00122610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122634u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 282u, depth + 1u); else { c.pc = 0x00122218u; return; } if (c.pc != 0x00122634u) [[unlikely]] return; }
L_00122634:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x00122640u) [[unlikely]] return; }
L_00122640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00122654; }
L_00122654:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00122688:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001226ACu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 282u, depth + 1u); else { c.pc = 0x00122218u; return; } if (c.pc != 0x001226ACu) [[unlikely]] return; }
L_001226AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001226B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x001226B8u) [[unlikely]] return; }
L_001226B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_001226CC; }
L_001226CC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 265ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00122700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x00122714u) [[unlikely]] return; }
L_00122714:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00122748:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012276Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 282u, depth + 1u); else { c.pc = 0x00122218u; return; } if (c.pc != 0x0012276Cu) [[unlikely]] return; }
L_0012276C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x00122778u) [[unlikely]] return; }
L_00122778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_0012278C; }
L_0012278C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001227C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001227ECu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 282u, depth + 1u); else { c.pc = 0x00122218u; return; } if (c.pc != 0x001227ECu) [[unlikely]] return; }
L_001227EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001227F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x001227F8u) [[unlikely]] return; }
L_001227F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_0012280C; }
L_0012280C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 12;
L_0012283C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00122840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00122848:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00122868; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_00122874; } }
L_00122868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122870u);  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00122120u; return; } if (c.pc != 0x00122870u) [[unlikely]] return; }
L_00122870:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00122874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00122880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012289C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_001228A8; } }
L_0012289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001228A4u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 278u, depth + 1u); else { c.pc = 0x00122190u; return; } if (c.pc != 0x001228A4u) [[unlikely]] return; }
L_001228A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001228A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001228B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001228D0u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001228D0u) [[unlikely]] return; }
L_001228D0:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 62752ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00122900; } }
    c.r[3].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 62864ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 4;
L_00122900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[4].d[0] = c.r[4].d[0] | 65279ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 62864ull;
    c.r[4].d[0] = c.r[16].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012293C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122938u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00122938u) [[unlikely]] return; }
L_00122938:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012293C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00122940:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00122968:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));  if (t) { goto L_00122A68; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_001229C4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001229D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00122AE4; } }
L_001229C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00122A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00122AE4; } }
L_001229D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001229DCu);  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x001229DCu) [[unlikely]] return; }
L_001229DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = 0ull | 65280ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122A14u); st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0001(c, 155u, depth + 1u); else { c.pc = 0x001252A0u; return; } if (c.pc != 0x00122A14u) [[unlikely]] return; }
L_00122A14:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00122A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122A2Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 226u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x00122A2Cu) [[unlikely]] return; }
L_00122A2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122A38u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 73u, depth + 1u); else { c.pc = 0x00124C60u; return; } if (c.pc != 0x00122A38u) [[unlikely]] return; }
L_00122A38:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_00122A40:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0001(c, 61u, depth); }
L_00122A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00122AE0; } }
L_00122A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122A88u);  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x00122A88u) [[unlikely]] return; }
L_00122A88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[6].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 14;
L_00122AC0:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0001(c, 61u, depth); }
L_00122AE0:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00122AE4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00122AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 16384u);  c.pc = t; return; }
L_00122B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15376ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15392ull;
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], cfc2(c, 28u));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    ctc2(c, 28u, c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = c.r[6].d[0] | 20480ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[7].w[0]);  c.pc = t; return; }
L_00122B70:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20728u);
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122B94u); st64((c.r[29].w[0] + 256u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 247u, depth + 1u); else { c.pc = 0x0012A2E8u; return; } if (c.pc != 0x00122B94u) [[unlikely]] return; }
L_00122B94:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00122BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00122BF8; } }
L_00122BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00122BB4; } }
L_00122BB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00122BB4:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00122BD8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122BCCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 295u, depth + 1u); else { c.pc = 0x0012A930u; return; } if (c.pc != 0x00122BCCu) [[unlikely]] return; }
L_00122BCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122BB0u | kUnwind; return; } goto L_00122BB0; } }
L_00122BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122BE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0012A578u; return; } if (c.pc != 0x00122BE0u) [[unlikely]] return; }
L_00122BE0:
    set32(c.r[4], c.r[17].w[0] - 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122BECu); set32(c.r[4], c.r[29].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0008(c, 176u, depth + 1u); else { c.pc = 0x00142110u; return; } if (c.pc != 0x00122BECu) [[unlikely]] return; }
L_00122BEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01310000u);
    c.r[3].d[0] = c.r[3].d[0] | 22128ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00122BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00122C10:
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
    c.pc = 0x00122C18u; syscall(c, 0x00122C14u); if (c.pc != 0x00122C18u) return;
    c.budget -= 1;
L_00122C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00122C20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 7;
L_00122C3C:
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122C74u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x00122C74u) [[unlikely]] return; }
L_00122C74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 12u), 0u);  goto L_00122CC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122C94u);  if (depth < kMaxDepth) unit_0000(c, 330u, depth + 1u); else { c.pc = 0x00122B70u; return; } if (c.pc != 0x00122C94u) [[unlikely]] return; }
L_00122C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00122CB8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122CB0u); c.r[8].d[0] = c.r[29].d[0] | 12ull;  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x00122C10u; return; } if (c.pc != 0x00122CB0u) [[unlikely]] return; }
L_00122CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (t) { goto L_00122CCC; } }
L_00122CB8:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 2;
L_00122CC0:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 3;
L_00122CCC:
    set32(c.r[3], 0u + 102u);
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00122CF4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00122CF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00122CF4:
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[16].w[0] + 63u);
    c.r[3].d[0] = c.r[22].d[0] & 15ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] << 9;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 2u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st64((c.r[19].w[0] + 16u), c.r[3].d[0]);  if (t) { goto L_00122DD0; } }
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_00122DA4; } }
    set32(c.r[3], c.r[16].w[0] + 2559u);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00122D44u);  goto L_00122D48; }
L_00122D48:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[7].d[0] = c.r[2].d[0] << 12;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[21].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] << 23;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & 4095ull;  if (t) { goto L_00122E58; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00122E60; } }
L_00122DA4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00122DA8u);  goto L_00122DAC; }
L_00122DAC:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[7], c.r[18].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[7].d[0] << 44;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25u);  if (t) { goto L_00122EA0; } }
L_00122DD0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 80u);  if (t) { goto L_00122EE4; } }
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_00122E78; } }
    set32(c.r[3], c.r[16].w[0] + 2559u);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00122DF8u);  goto L_00122DFC; }
L_00122DFC:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[7].d[0] = c.r[2].d[0] << 12;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[21].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] << 23;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & 4095ull;  if (t) { goto L_00122E58; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00122E60; } }
L_00122E58:
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_00122E60:
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_00122F68; } }
L_00122E78:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00122E7Cu);  goto L_00122E80; }
L_00122E80:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[7], c.r[18].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[7].d[0] << 44;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 36u);
    c.budget -= 8;
L_00122EA0:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] << 12;
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 23;
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_00122F68; } }
L_00122EE4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00122F60; } }
    set32(c.r[2], 0u + 720u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(232ll);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] + c.r[7].d[0];
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] + 35u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 12;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[3].d[0]);  if (t) { goto L_00122F68; } }
L_00122F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122F68u); set32(c.r[4], c.r[4].w[0] + 20744u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00122F68u) [[unlikely]] return; }
L_00122F68:
    st64((c.r[19].w[0] + 32u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00122F98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122FACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x00122FACu) [[unlikely]] return; }
L_00122FAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld64((c.r[16].w[0]));  if (t) { goto L_00122FFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 112ull;
    c.r[6].d[0] = c.r[6].d[0] | 128ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 192ull;
    st64((c.r[3].w[0]), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00123048; } }
L_00122FFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[6].d[0] = c.r[6].d[0] | 144ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 160ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 224ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.budget -= 16;
L_0012303C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_00123040:
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00123048:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00123058:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[16], c.r[5].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
L_00123080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123088u); set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x00123088u) [[unlikely]] return; }
L_00123088:
    set32(c.r[3], c.r[16].w[0] + 63u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 126u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));  if (t) { goto L_001230C4; } }
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[3], c.r[18].w[0] + 126u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_001230D8; } }
L_001230C4:
    set32(c.r[2], c.r[18].w[0] + 31u);
    set32(c.r[3], c.r[18].w[0] + 62u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 5;
L_001230D8:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00123100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 16);  if (t) { goto L_00123104; } }
L_00123100:
    set32(c.r[2], c.r[2].w[0] << 17);
    c.budget -= 1;
L_00123104:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00123120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[20].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], 0u + 76u);
    set32(c.r[4], 0u + 78u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 32;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[4].d[0]);  if (t) { goto L_001231D4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001231B0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00123058u; return; } if (c.pc != 0x001231B0u) [[unlikely]] return; }
L_001231B0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001231F8; } }
L_001231D4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001231E4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00123058u; return; } if (c.pc != 0x001231E4u) [[unlikely]] return; }
L_001231E4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001231F8:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 64u);
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 39;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_001232A0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_001232AC; } }
L_001232A0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_001232AC:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_001232D0; } }
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001232D4; } }
L_001232D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_001232D4:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00123308:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 16);
    c.r[12].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[3].d[0] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[2].d[0] = 0ull | 65024ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 24;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], 0u + 71u);
    set32(c.r[5], 0u + 5u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[13].d[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[6].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 32u), c.r[10].d[0]);
    st64((c.r[6].w[0] + 48u), c.r[7].d[0]);
    st64((c.r[6].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 64u), c.r[9].d[0]);
    st64((c.r[6].w[0] + 88u), c.r[4].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[4].d[0]);
    st64((c.r[6].w[0]), c.r[11].d[0]);
    st64((c.r[6].w[0] + 24u), 0ull);
    c.budget -= 55;
    { const bool t = c.r[8].d[0] == 0ull; st64((c.r[6].w[0] + 56u), c.r[5].d[0]);  if (t) { goto L_001233FC; } }
    c.r[2].d[0] = c.r[8].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 80u), c.r[2].d[0]);  if (t) { goto L_00123400; } }
L_001233FC:
    st64((c.r[6].w[0] + 80u), c.r[11].d[0]);
    c.budget -= 1;
L_00123400:
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_00123410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00123464; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00123448:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_001234B0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123448u | kUnwind; return; } goto L_00123448; } }
L_00123464:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_001234C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001234D4; } }
L_001234B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001234BCu); set32(c.r[4], c.r[4].w[0] + 20800u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001234BCu) [[unlikely]] return; }
L_001234BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001234EC; } }
L_001234C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_001234D4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_001234EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001234F8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 176u), c.r[30].d[0]);
    set32(c.r[16], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 160u), c.r[23].d[0]);
    set32(c.r[10], c.r[10].w[0] << 16);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    set32(c.r[17], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123554u); set32(c.r[30], c.r[7].w[0] << 16);  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x00123554u) [[unlikely]] return; }
L_00123554:
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 16));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012357Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 338u, depth + 1u); else { c.pc = 0x00122C20u; return; } if (c.pc != 0x0012357Cu) [[unlikely]] return; }
L_0012357C:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123598u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 338u, depth + 1u); else { c.pc = 0x00122C20u; return; } if (c.pc != 0x00123598u) [[unlikely]] return; }
L_00123598:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001235B4u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x00123120u; return; } if (c.pc != 0x001235B4u) [[unlikely]] return; }
L_001235B4:
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 336u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001235D0u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x00123120u; return; } if (c.pc != 0x001235D0u) [[unlikely]] return; }
L_001235D0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 17));  if (t) { goto L_00123648; } }
    set32(c.r[16], 0u + 2048u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 17));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[17], c.r[16].w[0] - c.r[17].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 224u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123618u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 355u, depth + 1u); else { c.pc = 0x00123308u; return; } if (c.pc != 0x00123618u) [[unlikely]] return; }
L_00123618:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], c.r[18].w[0] + 464u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123648u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 355u, depth + 1u); else { c.pc = 0x00123308u; return; } if (c.pc != 0x00123648u) [[unlikely]] return; }
L_00123648:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[9], 0u + 14u);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[5], 0u - 32768u);
    st128((c.r[18].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 80u));
    set32(c.r[2], 0u + 8u);
    c.r[6].d[0] = ld64((c.r[18].w[0] + 320u));
    if (c.r[23].d[0] != 0) c.r[2].d[0] = c.r[9].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    if (c.r[23].d[0] != 0) c.r[3].d[0] = c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = ld64((c.r[18].w[0] + 88u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[8].d[0] = ld64((c.r[18].w[0] + 328u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    set32(c.r[5], 0u - 16u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    st64((c.r[18].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 320u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[18].w[0] + 88u), c.r[7].d[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001236ECu); st64((c.r[18].w[0] + 328u), c.r[8].d[0]);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00123058u; return; } if (c.pc != 0x001236ECu) [[unlikely]] return; }
L_001236EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_00123728; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_00123764; } }
L_00123728:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    c.r[4].d[0] = ld64((c.r[18].w[0] + 56u));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 96u));
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[5], 0u - 512u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 511ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st64((c.r[18].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 56u), c.r[4].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 15;
L_00123764:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00123790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[4], 0u + 40u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001237B8u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 344u, depth + 1u); else { c.pc = 0x00122F98u; return; } if (c.pc != 0x001237B8u) [[unlikely]] return; }
L_001237B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001237D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001237C8u); set32(c.r[4], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 356u, depth + 1u); else { c.pc = 0x00123410u; return; } if (c.pc != 0x001237C8u) [[unlikely]] return; }
L_001237C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001237DC; } }
L_001237D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001237D8u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 356u, depth + 1u); else { c.pc = 0x00123410u; return; } if (c.pc != 0x001237D8u) [[unlikely]] return; }
L_001237D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001237DC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001237F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123804u);  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x00123804u) [[unlikely]] return; }
L_00123804:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00123850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012381Cu);  if (depth < kMaxDepth) unit_0001(c, 180u, depth + 1u); else { c.pc = 0x001253F0u; return; } if (c.pc != 0x0012381Cu) [[unlikely]] return; }
L_0012381C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00123878; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.budget -= 4;
L_0012383C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 1;
L_00123840:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012387C; } }
L_00123850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123858u);  if (depth < kMaxDepth) unit_0001(c, 185u, depth + 1u); else { c.pc = 0x00125480u; return; } if (c.pc != 0x00123858u) [[unlikely]] return; }
L_00123858:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00123878; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_00123878:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012387C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00123888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00123B1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001238DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_001238C0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001239E4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001238C0u | kUnwind; return; } goto L_001238C0; } }
L_001238DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0012391C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00123900:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001239F0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123900u | kUnwind; return; } goto L_00123900; } }
L_0012391C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[4].d[0] = c.r[4].d[0] | 3ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);  if (t) { goto L_0012396C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
L_00123950:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001239FC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123950u | kUnwind; return; } goto L_00123950; } }
L_0012396C:
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_0012399C; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00123980:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00123A08; } }
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123980u | kUnwind; return; } goto L_00123980; } }
L_0012399C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001239DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_001239C0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00123A14; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001239C0u | kUnwind; return; } goto L_001239C0; } }
L_001239DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00123B90; } }
L_001239E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 20848u);  if (t) { goto L_00123A1C; } }
L_001239F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 21072u);  if (t) { goto L_00123A1C; } }
L_001239FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 21120u);  if (t) { goto L_00123A1C; } }
L_00123A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 21168u);  if (t) { goto L_00123A1C; } }
L_00123A14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + 21208u);
    c.budget -= 2;
L_00123A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A24u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123A24u) [[unlikely]] return; }
L_00123A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[4], c.r[4].w[0] + 20896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A3Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123A3Cu) [[unlikely]] return; }
L_00123A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 36912ull;
    set32(c.r[4], c.r[4].w[0] + 20912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A54u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123A54u) [[unlikely]] return; }
L_00123A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 36880ull;
    set32(c.r[4], c.r[4].w[0] + 20928u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A6Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123A6Cu) [[unlikely]] return; }
L_00123A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 36896ull;
    set32(c.r[4], c.r[4].w[0] + 20944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A84u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123A84u) [[unlikely]] return; }
L_00123A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[4], c.r[4].w[0] + 20960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A9Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123A9Cu) [[unlikely]] return; }
L_00123A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 41008ull;
    set32(c.r[4], c.r[4].w[0] + 20976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AB4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123AB4u) [[unlikely]] return; }
L_00123AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 40976ull;
    c.budget -= 3;
L_00123AC0:
    set32(c.r[4], c.r[4].w[0] + 20992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123ACCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123ACCu) [[unlikely]] return; }
L_00123ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    set32(c.r[4], c.r[4].w[0] + 21008u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AE4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123AE4u) [[unlikely]] return; }
L_00123AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    set32(c.r[4], c.r[4].w[0] + 21024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AFCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123AFCu) [[unlikely]] return; }
L_00123AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[4], c.r[4].w[0] + 21048u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123B14u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00123B14u) [[unlikely]] return; }
L_00123B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00123B90; } }
L_00123B1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[5].d[0] = c.r[5].d[0] | 40960ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | 4ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[6], cfc2(c, 29u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 16ull;
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 29;
L_00123B90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00123BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], 0u - 32768u);
    set32(c.r[7], c.r[7].w[0] << 16);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 16u));
    set32(c.r[8], c.r[8].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[13].d[0] = ld64((c.r[4].w[0] + 24u));
    set32(c.r[2], 0u + 5u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], 0u - 16u);
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[13].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[9], c.r[9].w[0] << 16);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 24);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 16);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    set32(c.r[14], 0u + 14u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x06000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[6].d[0] = c.r[6].d[0] | 6ull;
    set32(c.r[9], 0u + 80u);
    set32(c.r[11], 0u + 81u);
    set32(c.r[14], 0u + 82u);
    set32(c.r[15], 0u + 97u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 83u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st64((c.r[4].w[0] + 104u), c.r[2].d[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st64((c.r[4].w[0] + 16u), c.r[12].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[13].d[0]);
    st64((c.r[4].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[4].w[0] + 40u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 56u), c.r[11].d[0]);
    st64((c.r[4].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[4].w[0] + 72u), c.r[14].d[0]);
    st64((c.r[4].w[0] + 88u), c.r[15].d[0]);
    st64((c.r[4].w[0] + 96u), c.r[16].d[0]);
    st32((c.r[4].w[0]), 0u);
    st64((c.r[4].w[0] + 80u), 0ull);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 7u);
    c.budget -= 80;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00123CE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[2].d[0] = ld64((c.r[20].w[0] + 32u));
    c.r[4].d[0] = c.r[9].d[0] & 4095ull;
    c.r[3].d[0] = c.r[9].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 24;
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00123EBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 21472u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0000[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00123D7C:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65528ull;
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_00123E94; } }
    set32(c.r[2], c.r[7].w[0] + 3u);
    c.r[5].d[0] = c.r[2].d[0] & 8188ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00123EB0; } }
L_00123DB4:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65528ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_00123E94; } }
    set32(c.r[2], c.r[7].w[0] + 15u);
    c.r[5].d[0] = c.r[2].d[0] & 8176ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] - 1u);  if (t) { goto L_00123EBC; } }
L_00123E04:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65528ull;
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_00123E94; } }
    set32(c.r[2], c.r[7].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00123EB0; } }
L_00123E3C:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65528ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_00123E94; } }
    set32(c.r[2], c.r[7].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00123EB0; } }
L_00123E70:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65528ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_00123EA0; } }
L_00123E94:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00123EBC; } }
L_00123EA0:
    set32(c.r[2], c.r[7].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 4;
L_00123EB0:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[22], c.r[2].w[0] - 1u);
    c.budget -= 3;
L_00123EBC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[3].d[0] = c.r[9].d[0] & 4095ull;  if (t) { goto L_00123EE4; } }
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[20].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 8;
L_00123EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00123F24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00123F08:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_0001(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123F08u | kUnwind; return; } goto L_00123F08; } }
L_00123F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F2Cu);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00125280u; return; } if (c.pc != 0x00123F2Cu) [[unlikely]] return; }
L_00123F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F34u); c.r[4].d[0] = c.r[2].d[0] | 512ull;  if (depth < kMaxDepth) unit_0001(c, 155u, depth + 1u); else { c.pc = 0x001252A0u; return; } if (c.pc != 0x00123F34u) [[unlikely]] return; }
L_00123F34:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = c.r[3].d[0] | 36896ull;
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], 0u + 7u);
    c.r[2].d[0] = c.r[20].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00123F84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00123F94; } }
L_00123F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00123F94:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00123FE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00123FC8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_0001(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123FC8u | kUnwind; return; } goto L_00123FC8; } }
L_00123FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { [[clang::musttail]] return unit_0001(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0001(c, 1u, depth);
}

}
