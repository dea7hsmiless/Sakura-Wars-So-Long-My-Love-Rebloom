#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0064[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69,
    0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132,
    0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218,
    0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0,
    226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 259, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0,
};

void unit_0064(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B0000;
    case 2u: goto L_002B0004;
    case 3u: goto L_002B0008;
    case 4u: goto L_002B0020;
    case 5u: goto L_002B007C;
    case 6u: goto L_002B00C0;
    case 7u: goto L_002B00DC;
    case 8u: goto L_002B0110;
    case 9u: goto L_002B0130;
    case 10u: goto L_002B0170;
    case 11u: goto L_002B017C;
    case 12u: goto L_002B0194;
    case 13u: goto L_002B01B0;
    case 14u: goto L_002B0204;
    case 15u: goto L_002B0230;
    case 16u: goto L_002B0280;
    case 17u: goto L_002B0290;
    case 18u: goto L_002B02A0;
    case 19u: goto L_002B02B0;
    case 20u: goto L_002B02C0;
    case 21u: goto L_002B02D0;
    case 22u: goto L_002B02E0;
    case 23u: goto L_002B02F0;
    case 24u: goto L_002B0300;
    case 25u: goto L_002B0310;
    case 26u: goto L_002B0320;
    case 27u: goto L_002B0330;
    case 28u: goto L_002B0380;
    case 29u: goto L_002B03D0;
    case 30u: goto L_002B0408;
    case 31u: goto L_002B0414;
    case 32u: goto L_002B044C;
    case 33u: goto L_002B0470;
    case 34u: goto L_002B04A0;
    case 35u: goto L_002B04AC;
    case 36u: goto L_002B04E4;
    case 37u: goto L_002B0530;
    case 38u: goto L_002B0568;
    case 39u: goto L_002B0580;
    case 40u: goto L_002B05B8;
    case 41u: goto L_002B05D0;
    case 42u: goto L_002B05E4;
    case 43u: goto L_002B0610;
    case 44u: goto L_002B062C;
    case 45u: goto L_002B064C;
    case 46u: goto L_002B0670;
    case 47u: goto L_002B068C;
    case 48u: goto L_002B06B0;
    case 49u: goto L_002B06E0;
    case 50u: goto L_002B06F0;
    case 51u: goto L_002B070C;
    case 52u: goto L_002B0718;
    case 53u: goto L_002B0740;
    case 54u: goto L_002B0760;
    case 55u: goto L_002B077C;
    case 56u: goto L_002B0794;
    case 57u: goto L_002B07BC;
    case 58u: goto L_002B07CC;
    case 59u: goto L_002B07DC;
    case 60u: goto L_002B07EC;
    case 61u: goto L_002B07FC;
    case 62u: goto L_002B080C;
    case 63u: goto L_002B081C;
    case 64u: goto L_002B082C;
    case 65u: goto L_002B083C;
    case 66u: goto L_002B084C;
    case 67u: goto L_002B085C;
    case 68u: goto L_002B086C;
    case 69u: goto L_002B087C;
    case 70u: goto L_002B088C;
    case 71u: goto L_002B089C;
    case 72u: goto L_002B08AC;
    case 73u: goto L_002B08C0;
    case 74u: goto L_002B08D0;
    case 75u: goto L_002B08E4;
    case 76u: goto L_002B08F4;
    case 77u: goto L_002B0910;
    case 78u: goto L_002B0920;
    case 79u: goto L_002B0934;
    case 80u: goto L_002B0944;
    case 81u: goto L_002B0960;
    case 82u: goto L_002B097C;
    case 83u: goto L_002B0988;
    case 84u: goto L_002B0990;
    case 85u: goto L_002B0998;
    case 86u: goto L_002B09A8;
    case 87u: goto L_002B09D0;
    case 88u: goto L_002B0A14;
    case 89u: goto L_002B0A24;
    case 90u: goto L_002B0A50;
    case 91u: goto L_002B0A74;
    case 92u: goto L_002B0AB0;
    case 93u: goto L_002B0AC4;
    case 94u: goto L_002B0AD0;
    case 95u: goto L_002B0AE0;
    case 96u: goto L_002B0B20;
    case 97u: goto L_002B0B2C;
    case 98u: goto L_002B0B44;
    case 99u: goto L_002B0B60;
    case 100u: goto L_002B0B70;
    case 101u: goto L_002B0B80;
    case 102u: goto L_002B0BA0;
    case 103u: goto L_002B0BAC;
    case 104u: goto L_002B0C0C;
    case 105u: goto L_002B0C5C;
    case 106u: goto L_002B0C70;
    case 107u: goto L_002B0C98;
    case 108u: goto L_002B0CBC;
    case 109u: goto L_002B0CCC;
    case 110u: goto L_002B0CEC;
    case 111u: goto L_002B0CF4;
    case 112u: goto L_002B0D18;
    case 113u: goto L_002B0D28;
    case 114u: goto L_002B0D50;
    case 115u: goto L_002B0D74;
    case 116u: goto L_002B0D84;
    case 117u: goto L_002B0DAC;
    case 118u: goto L_002B0DD0;
    case 119u: goto L_002B0DD8;
    case 120u: goto L_002B0DE0;
    case 121u: goto L_002B0E08;
    case 122u: goto L_002B0E2C;
    case 123u: goto L_002B0E54;
    case 124u: goto L_002B0E68;
    case 125u: goto L_002B0EA0;
    case 126u: goto L_002B0EDC;
    case 127u: goto L_002B0F04;
    case 128u: goto L_002B0F2C;
    case 129u: goto L_002B0F44;
    case 130u: goto L_002B0F54;
    case 131u: goto L_002B0F6C;
    case 132u: goto L_002B0F7C;
    case 133u: goto L_002B0F8C;
    case 134u: goto L_002B0F94;
    case 135u: goto L_002B0F9C;
    case 136u: goto L_002B0FA4;
    case 137u: goto L_002B0FAC;
    case 138u: goto L_002B0FCC;
    case 139u: goto L_002B0FE4;
    case 140u: goto L_002B1010;
    case 141u: goto L_002B1024;
    case 142u: goto L_002B1050;
    case 143u: goto L_002B1070;
    case 144u: goto L_002B109C;
    case 145u: goto L_002B10A4;
    case 146u: goto L_002B10BC;
    case 147u: goto L_002B10D4;
    case 148u: goto L_002B10EC;
    case 149u: goto L_002B10FC;
    case 150u: goto L_002B1114;
    case 151u: goto L_002B1144;
    case 152u: goto L_002B1160;
    case 153u: goto L_002B1170;
    case 154u: goto L_002B1178;
    case 155u: goto L_002B1190;
    case 156u: goto L_002B11A8;
    case 157u: goto L_002B11C8;
    case 158u: goto L_002B11E0;
    case 159u: goto L_002B1208;
    case 160u: goto L_002B121C;
    case 161u: goto L_002B1238;
    case 162u: goto L_002B1248;
    case 163u: goto L_002B1280;
    case 164u: goto L_002B1290;
    case 165u: goto L_002B12A0;
    case 166u: goto L_002B12B0;
    case 167u: goto L_002B12B8;
    case 168u: goto L_002B12CC;
    case 169u: goto L_002B12D0;
    case 170u: goto L_002B1324;
    case 171u: goto L_002B1338;
    case 172u: goto L_002B1344;
    case 173u: goto L_002B137C;
    case 174u: goto L_002B1388;
    case 175u: goto L_002B13C8;
    case 176u: goto L_002B13D8;
    case 177u: goto L_002B13F8;
    case 178u: goto L_002B1420;
    case 179u: goto L_002B144C;
    case 180u: goto L_002B1460;
    case 181u: goto L_002B1484;
    case 182u: goto L_002B1498;
    case 183u: goto L_002B14A4;
    case 184u: goto L_002B14D0;
    case 185u: goto L_002B14F0;
    case 186u: goto L_002B1514;
    case 187u: goto L_002B1538;
    case 188u: goto L_002B154C;
    case 189u: goto L_002B1584;
    case 190u: goto L_002B15D0;
    case 191u: goto L_002B15D8;
    case 192u: goto L_002B1630;
    case 193u: goto L_002B1648;
    case 194u: goto L_002B165C;
    case 195u: goto L_002B1674;
    case 196u: goto L_002B16A0;
    case 197u: goto L_002B16B4;
    case 198u: goto L_002B16D4;
    case 199u: goto L_002B1700;
    case 200u: goto L_002B1728;
    case 201u: goto L_002B174C;
    case 202u: goto L_002B1770;
    case 203u: goto L_002B1784;
    case 204u: goto L_002B17E0;
    case 205u: goto L_002B17F8;
    case 206u: goto L_002B180C;
    case 207u: goto L_002B1824;
    case 208u: goto L_002B1840;
    case 209u: goto L_002B1858;
    case 210u: goto L_002B1868;
    case 211u: goto L_002B1880;
    case 212u: goto L_002B18BC;
    case 213u: goto L_002B1954;
    case 214u: goto L_002B1A60;
    case 215u: goto L_002B1AB4;
    case 216u: goto L_002B1AC8;
    case 217u: goto L_002B1AF0;
    case 218u: goto L_002B1AFC;
    case 219u: goto L_002B1B08;
    case 220u: goto L_002B1B20;
    case 221u: goto L_002B1B40;
    case 222u: goto L_002B1B48;
    case 223u: goto L_002B1B5C;
    case 224u: goto L_002B1B64;
    case 225u: goto L_002B1B78;
    case 226u: goto L_002B1B80;
    case 227u: goto L_002B1B94;
    case 228u: goto L_002B1BA4;
    case 229u: goto L_002B1BD0;
    case 230u: goto L_002B1BE0;
    case 231u: goto L_002B1C30;
    case 232u: goto L_002B1C4C;
    case 233u: goto L_002B1C74;
    case 234u: goto L_002B1C9C;
    case 235u: goto L_002B1CB4;
    case 236u: goto L_002B1CC4;
    case 237u: goto L_002B1CDC;
    case 238u: goto L_002B1CEC;
    case 239u: goto L_002B1D08;
    case 240u: goto L_002B1D38;
    case 241u: goto L_002B1D50;
    case 242u: goto L_002B1D6C;
    case 243u: goto L_002B1D74;
    case 244u: goto L_002B1DA0;
    case 245u: goto L_002B1DDC;
    case 246u: goto L_002B1DE4;
    case 247u: goto L_002B1E30;
    case 248u: goto L_002B1E38;
    case 249u: goto L_002B1E70;
    case 250u: goto L_002B1E90;
    case 251u: goto L_002B1EB0;
    case 252u: goto L_002B1ED0;
    case 253u: goto L_002B1F00;
    case 254u: goto L_002B1F34;
    case 255u: goto L_002B1F80;
    case 256u: goto L_002B1F98;
    case 257u: goto L_002B1FD0;
    case 258u: goto L_002B2000;
    case 259u: goto L_002B2020;
    case 260u: goto L_002B2024;
    case 261u: goto L_002B2068;
    case 262u: goto L_002B2090;
    case 263u: goto L_002B20AC;
    case 264u: goto L_002B20BC;
    case 265u: goto L_002B20E0;
    case 266u: goto L_002B2100;
    case 267u: goto L_002B2110;
    case 268u: goto L_002B2174;
    case 269u: goto L_002B218C;
    case 270u: goto L_002B21C0;
    case 271u: goto L_002B21E4;
    case 272u: goto L_002B21F4;
    case 273u: goto L_002B2204;
    case 274u: goto L_002B2220;
    case 275u: goto L_002B223C;
    case 276u: goto L_002B2250;
    case 277u: goto L_002B2258;
    case 278u: goto L_002B2270;
    case 279u: goto L_002B2294;
    case 280u: goto L_002B22A4;
    case 281u: goto L_002B22B4;
    case 282u: goto L_002B22D0;
    case 283u: goto L_002B22EC;
    case 284u: goto L_002B2300;
    case 285u: goto L_002B2308;
    case 286u: goto L_002B2320;
    case 287u: goto L_002B2344;
    case 288u: goto L_002B235C;
    case 289u: goto L_002B2380;
    case 290u: goto L_002B23C0;
    case 291u: goto L_002B23CC;
    case 292u: goto L_002B23E4;
    case 293u: goto L_002B2400;
    case 294u: goto L_002B2410;
    case 295u: goto L_002B2420;
    case 296u: goto L_002B243C;
    case 297u: goto L_002B247C;
    case 298u: goto L_002B2498;
    case 299u: goto L_002B24D0;
    case 300u: goto L_002B2618;
    case 301u: goto L_002B2650;
    case 302u: goto L_002B266C;
    case 303u: goto L_002B2690;
    case 304u: goto L_002B2718;
    case 305u: goto L_002B2734;
    case 306u: goto L_002B2758;
    case 307u: goto L_002B2770;
    case 308u: goto L_002B279C;
    case 309u: goto L_002B27CC;
    case 310u: goto L_002B27E8;
    case 311u: goto L_002B280C;
    case 312u: goto L_002B2820;
    case 313u: goto L_002B284C;
    case 314u: goto L_002B287C;
    case 315u: goto L_002B2898;
    case 316u: goto L_002B28BC;
    case 317u: goto L_002B28D0;
    case 318u: goto L_002B296C;
    case 319u: goto L_002B2988;
    case 320u: goto L_002B29AC;
    case 321u: goto L_002B29C0;
    case 322u: goto L_002B2A30;
    case 323u: goto L_002B2A4C;
    case 324u: goto L_002B2A70;
    case 325u: goto L_002B2A80;
    case 326u: goto L_002B2ADC;
    case 327u: goto L_002B2AF8;
    case 328u: goto L_002B2B1C;
    case 329u: goto L_002B2B98;
    case 330u: goto L_002B2BB4;
    case 331u: goto L_002B2BD8;
    case 332u: goto L_002B2BF0;
    case 333u: goto L_002B2C4C;
    case 334u: goto L_002B2C68;
    case 335u: goto L_002B2C8C;
    case 336u: goto L_002B2D0C;
    case 337u: goto L_002B2D28;
    case 338u: goto L_002B2D4C;
    case 339u: goto L_002B2D60;
    case 340u: goto L_002B2DDC;
    case 341u: goto L_002B2DFC;
    case 342u: goto L_002B2E2C;
    case 343u: goto L_002B2E48;
    case 344u: goto L_002B2E6C;
    case 345u: goto L_002B2E80;
    case 346u: goto L_002B2EDC;
    case 347u: goto L_002B2EF8;
    case 348u: goto L_002B2F1C;
    case 349u: goto L_002B2F30;
    case 350u: goto L_002B2F60;
    case 351u: goto L_002B2F7C;
    case 352u: goto L_002B2FA0;
    case 353u: goto L_002B2FB0;
    case 354u: goto L_002B300C;
    case 355u: goto L_002B3028;
    case 356u: goto L_002B304C;
    case 357u: goto L_002B3060;
    case 358u: goto L_002B3090;
    case 359u: goto L_002B30AC;
    case 360u: goto L_002B30D0;
    case 361u: goto L_002B30E0;
    case 362u: goto L_002B3140;
    case 363u: goto L_002B315C;
    case 364u: goto L_002B3180;
    case 365u: goto L_002B3208;
    case 366u: goto L_002B3224;
    case 367u: goto L_002B3248;
    case 368u: goto L_002B3260;
    case 369u: goto L_002B32C0;
    case 370u: goto L_002B32DC;
    case 371u: goto L_002B3300;
    case 372u: goto L_002B3388;
    case 373u: goto L_002B33A4;
    case 374u: goto L_002B33C8;
    case 375u: goto L_002B33E0;
    case 376u: goto L_002B343C;
    case 377u: goto L_002B3458;
    case 378u: goto L_002B347C;
    case 379u: goto L_002B3550;
    case 380u: goto L_002B356C;
    case 381u: goto L_002B3590;
    case 382u: goto L_002B35A0;
    case 383u: goto L_002B35FC;
    case 384u: goto L_002B3618;
    case 385u: goto L_002B363C;
    case 386u: goto L_002B3710;
    case 387u: goto L_002B372C;
    case 388u: goto L_002B3750;
    case 389u: goto L_002B3760;
    case 390u: goto L_002B37BC;
    case 391u: goto L_002B37D8;
    case 392u: goto L_002B37FC;
    case 393u: goto L_002B387C;
    case 394u: goto L_002B38AC;
    case 395u: goto L_002B38C8;
    case 396u: goto L_002B38EC;
    case 397u: goto L_002B3900;
    case 398u: goto L_002B395C;
    case 399u: goto L_002B3978;
    case 400u: goto L_002B399C;
    case 401u: goto L_002B39E4;
    case 402u: goto L_002B3A14;
    case 403u: goto L_002B3A30;
    case 404u: goto L_002B3A54;
    case 405u: goto L_002B3A70;
    case 406u: goto L_002B3ACC;
    case 407u: goto L_002B3AE8;
    case 408u: goto L_002B3B0C;
    case 409u: goto L_002B3B1C;
    case 410u: goto L_002B3B4C;
    case 411u: goto L_002B3B68;
    case 412u: goto L_002B3B8C;
    case 413u: goto L_002B3BA0;
    case 414u: goto L_002B3BFC;
    case 415u: goto L_002B3C18;
    case 416u: goto L_002B3C3C;
    case 417u: goto L_002B3C84;
    case 418u: goto L_002B3CBC;
    case 419u: goto L_002B3CD8;
    case 420u: goto L_002B3CFC;
    case 421u: goto L_002B3D10;
    case 422u: goto L_002B3DAC;
    case 423u: goto L_002B3DC8;
    case 424u: goto L_002B3DEC;
    case 425u: goto L_002B3E00;
    case 426u: goto L_002B3E5C;
    case 427u: goto L_002B3E78;
    case 428u: goto L_002B3E9C;
    case 429u: goto L_002B3EE4;
    case 430u: goto L_002B3F14;
    case 431u: goto L_002B3F30;
    case 432u: goto L_002B3F54;
    case 433u: goto L_002B3F70;
    case 434u: goto L_002B3FCC;
    case 435u: goto L_002B3FE8;
    default: bad_entry(c, 0x002B0000u); return;
    }
L_002B0000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B0004:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B0008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002B008C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002B0064; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002B005C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B00B4; } }
L_002B005C:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002B0064:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B007Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002B007Cu) [[unlikely]] return; }
L_002B007C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002B00B0; } }
L_002B008C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1188u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B00B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002B00B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B00B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B00C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 15u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B00DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002B00DCu) [[unlikely]] return; }
L_002B00DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25548u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D410000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20289ull;
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0110u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002B0110u) [[unlikely]] return; }
L_002B0110:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B0194; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25548u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0170u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002B0170u) [[unlikely]] return; }
L_002B0170:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B017Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002B017Cu) [[unlikely]] return; }
L_002B017C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B0198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002B0194u) [[unlikely]] return; }
L_002B0194:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B0198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B01B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002B0240; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002B01F4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002B01EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B0270; } }
L_002B01EC:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 2;
L_002B01F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0204u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B0204u) [[unlikely]] return; }
L_002B0204:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 14u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[3].w[0] + 3024u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[3].w[0] + 3028u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0230u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002B0230u) [[unlikely]] return; }
L_002B0230:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002B026C; } }
L_002B0240:
    set32(c.r[3], 0u + 14u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B026C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 7;
L_002B026C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B0270:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B02A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B02B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF0F0u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 277u, depth); }
L_002B02C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF280u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 286u, depth); }
L_002B02D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF4E0u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 298u, depth); }
L_002B02E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFAF0u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 328u, depth); }
L_002B02F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFC80u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 337u, depth); }
L_002B0300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFE10u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 346u, depth); }
L_002B0310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFFA0u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 355u, depth); }
L_002B0320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0130u | kUnwind; return; } goto L_002B0130; }
L_002B0330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].d[0] = c.r[2].d[0] | 16706ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002B0378; } }
    set32(c.r[5], c.r[5].w[0] + 52u);
    c.budget -= 1;
L_002B0378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0380u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0380u) [[unlikely]] return; }
L_002B0380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25920u);
    set32(c.r[3], c.r[3].w[0] + 25932u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D410000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20051ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B03D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B044C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25920u);
    set32(c.r[2], c.r[2].w[0] + 25932u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0408u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0064(c, 43u, depth + 1u); else { c.pc = 0x002B0610u; return; } if (c.pc != 0x002B0408u) [[unlikely]] return; }
L_002B0408:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002B0414u) [[unlikely]] return; }
L_002B0414:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002B0438; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_002B0438:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B0450; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B044Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002B044Cu) [[unlikely]] return; }
L_002B044C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B0450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002B04F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B0514; } }
L_002B04A0:
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B04ACu) [[unlikely]] return; }
L_002B04AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B04F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 40u)));  if (t) { goto L_002B04E8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), 0u);  goto L_002B04E8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B04E4u) [[unlikely]] return; }
L_002B04E4:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_002B04E8:
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002B04F0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B04A0u | kUnwind; return; } goto L_002B04A0; }
L_002B04F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B0510; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002B0510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B0514:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002B056C; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B0568; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0568u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0568u) [[unlikely]] return; }
L_002B0568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B056C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002B05BC; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B05B8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B05B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B05B8u) [[unlikely]] return; }
L_002B05B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B05BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B05D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B05E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 43u, depth + 1u); else { c.pc = 0x002B0610u; return; } if (c.pc != 0x002B05E4u) [[unlikely]] return; }
L_002B05E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 44u)));  if (t) { goto L_002B0650; } }
L_002B062C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 40u)));  if (t) { goto L_002B064C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002B0650; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B064Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B064Cu) [[unlikely]] return; }
L_002B064C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B0650:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B062Cu | kUnwind; return; } goto L_002B062C; } }
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B068Cu); set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));  if (depth < kMaxDepth) unit_0063(c, 181u, depth + 1u); else { c.pc = 0x002ADDD0u; return; } if (c.pc != 0x002B068Cu) [[unlikely]] return; }
L_002B068C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002B06A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B06D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_002B06A0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 40u)));  goto L_002B06B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_002B06D0; } }
L_002B06B0:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 2;
L_002B06B8:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B06B0u | kUnwind; return; } goto L_002B06B0; } }
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_002B06D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B06E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03D0u | kUnwind; return; } goto L_002B03D0; }
L_002B06F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B070Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002B070Cu) [[unlikely]] return; }
L_002B070C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0718u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0718u) [[unlikely]] return; }
L_002B0718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[2], c.r[2].w[0] + 26008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30308u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0740u); st32((c.r[28].w[0] - 30304u), 0u);  if (depth < kMaxDepth) unit_0064(c, 54u, depth + 1u); else { c.pc = 0x002B0760u; return; } if (c.pc != 0x002B0740u) [[unlikely]] return; }
L_002B0740:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B077Cu); st32((c.r[28].w[0] - 30300u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 271u, depth + 1u); else { c.pc = 0x003C6A70u; return; } if (c.pc != 0x002B077Cu) [[unlikely]] return; }
L_002B077C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B08B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0794u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003C5FC0u; return; } if (c.pc != 0x002B0794u) [[unlikely]] return; }
L_002B0794:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002B0834; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002B07B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B08AC; } }
L_002B07B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B07BCu) [[unlikely]] return; }
L_002B07BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B07CCu) [[unlikely]] return; }
L_002B07CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B07DCu) [[unlikely]] return; }
L_002B07DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B07ECu) [[unlikely]] return; }
L_002B07EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B07FCu) [[unlikely]] return; }
L_002B07FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B080Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B080Cu) [[unlikely]] return; }
L_002B080C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B081Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B081Cu) [[unlikely]] return; }
L_002B081C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B082Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B082Cu) [[unlikely]] return; }
L_002B082C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B08AC; } }
L_002B0834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B083Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B083Cu) [[unlikely]] return; }
L_002B083C:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B084Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B084Cu) [[unlikely]] return; }
L_002B084C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B085Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B085Cu) [[unlikely]] return; }
L_002B085C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B086Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B086Cu) [[unlikely]] return; }
L_002B086C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B087Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B087Cu) [[unlikely]] return; }
L_002B087C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B088Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B088Cu) [[unlikely]] return; }
L_002B088C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B089Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B089Cu) [[unlikely]] return; }
L_002B089C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B08ACu) [[unlikely]] return; }
L_002B08AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B08B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B08C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A9(c, 271u, depth + 1u); else { c.pc = 0x003C6A70u; return; } if (c.pc != 0x002B08D0u) [[unlikely]] return; }
L_002B08D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B08F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 199u, depth + 1u); else { c.pc = 0x003C6050u; return; } if (c.pc != 0x002B08E4u) [[unlikely]] return; }
L_002B08E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B08F4u) [[unlikely]] return; }
L_002B08F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B08F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0920u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A9(c, 271u, depth + 1u); else { c.pc = 0x003C6A70u; return; } if (c.pc != 0x002B0920u) [[unlikely]] return; }
L_002B0920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B0948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 202u, depth + 1u); else { c.pc = 0x003C6100u; return; } if (c.pc != 0x002B0934u) [[unlikely]] return; }
L_002B0934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0944u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 209u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x002B0944u) [[unlikely]] return; }
L_002B0944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B0948:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B097Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x002B097Cu) [[unlikely]] return; }
L_002B097C:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0988u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x002B0988u) [[unlikely]] return; }
L_002B0988:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 2;
L_002B0990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x002B0998u) [[unlikely]] return; }
L_002B0998:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B09A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x002B09A8u) [[unlikely]] return; }
L_002B09A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0990u | kUnwind; return; } goto L_002B0990; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B09D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002B0A34; } }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002B0A2C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B0A1C; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_002B0A0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002B0A3C; } }
L_002B0A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A14u);  if (depth < kMaxDepth) unit_0064(c, 54u, depth + 1u); else { c.pc = 0x002B0760u; return; } if (c.pc != 0x002B0A14u) [[unlikely]] return; }
L_002B0A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0A38; } }
L_002B0A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A24u);  if (depth < kMaxDepth) unit_0064(c, 54u, depth + 1u); else { c.pc = 0x002B0760u; return; } if (c.pc != 0x002B0A24u) [[unlikely]] return; }
L_002B0A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0A38; } }
L_002B0A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30300u), c.r[3].w[0]);  if (t) { goto L_002B0A38; } }
L_002B0A34:
    st32((c.r[28].w[0] - 30300u), 0u);
    c.budget -= 1;
L_002B0A38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B0A3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B0AD4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A74u); st32((c.r[28].w[0] - 31604u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002B0A74u) [[unlikely]] return; }
L_002B0A74:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B0AD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 36u)));  if (t) { goto L_002B0AD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B0AD0; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[3].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AB0u); set32(c.r[6], c.r[3].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002B0AB0u) [[unlikely]] return; }
L_002B0AB0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AC4u); st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002B0AC4u) [[unlikely]] return; }
L_002B0AC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AD0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 443u, depth + 1u); else { c.pc = 0x0015BB90u; return; } if (c.pc != 0x002B0AD0u) [[unlikely]] return; }
L_002B0AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B0AD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B0AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B0B44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[2], c.r[2].w[0] + 26008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002B0B20u) [[unlikely]] return; }
L_002B0B20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002B0B2Cu) [[unlikely]] return; }
L_002B0B2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B0B48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002B0B44u) [[unlikely]] return; }
L_002B0B44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B0B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0B60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0AE0u | kUnwind; return; } goto L_002B0AE0; }
L_002B0B70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B09D0u | kUnwind; return; } goto L_002B09D0; }
L_002B0B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BA0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002B0BA0u) [[unlikely]] return; }
L_002B0BA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BACu); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0BACu) [[unlikely]] return; }
L_002B0BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26032u);
    set32(c.r[3], c.r[3].w[0] + 26088u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53560000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17747ull;
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30296u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 24;
L_002B0C0C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0C0Cu | kUnwind; return; } goto L_002B0C0C; } }
    st32((c.r[17].w[0] + 148u), 0u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C5Cu); st32((c.r[2].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B0C5Cu) [[unlikely]] return; }
L_002B0C5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B0E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C70u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B0C70u) [[unlikely]] return; }
L_002B0C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B0CB0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0C84; } }
    set32(c.r[5], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002B0C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C98u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0C98u) [[unlikely]] return; }
L_002B0C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26256u);
    set32(c.r[2], c.r[2].w[0] + 26276u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_002B0CB0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x002B0CBCu) [[unlikely]] return; }
L_002B0CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002B0E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CCCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B0CCCu) [[unlikely]] return; }
L_002B0CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B0D0C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0CE0; } }
    set32(c.r[5], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002B0CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 3;
L_002B0CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CF4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0CF4u) [[unlikely]] return; }
L_002B0CF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26352u);
    set32(c.r[2], c.r[2].w[0] + 26372u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_002B0D0C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x002B0D18u) [[unlikely]] return; }
L_002B0D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_002B0E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D28u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B0D28u) [[unlikely]] return; }
L_002B0D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B0D68; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0D3C; } }
    set32(c.r[5], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002B0D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D50u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0D50u) [[unlikely]] return; }
L_002B0D50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26160u);
    set32(c.r[2], c.r[2].w[0] + 26180u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_002B0D68:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x002B0D74u) [[unlikely]] return; }
L_002B0D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_002B0E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D84u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B0D84u) [[unlikely]] return; }
L_002B0D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B0DC4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0D98; } }
    set32(c.r[5], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002B0D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DACu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0DACu) [[unlikely]] return; }
L_002B0DAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27296u);
    set32(c.r[2], c.r[2].w[0] + 27316u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_002B0DC4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x002B0DD0u) [[unlikely]] return; }
L_002B0DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_002B0E5C; } }
L_002B0DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DE0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B0DE0u) [[unlikely]] return; }
L_002B0DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B0E20; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0DF4; } }
    set32(c.r[5], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002B0DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E08u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B0E08u) [[unlikely]] return; }
L_002B0E08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27968u);
    set32(c.r[2], c.r[2].w[0] + 27988u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_002B0E20:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x002B0E2Cu) [[unlikely]] return; }
L_002B0E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_002B0E5C; } }
L_002B0E34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B0E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[2], c.r[2].w[0] + 8448u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
L_002B0E48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E54u); set32(c.r[4], c.r[4].w[0] + 12576u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002B0E54u) [[unlikely]] return; }
L_002B0E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0E7C; } }
L_002B0E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E68u); set32(c.r[4], c.r[4].w[0] + 12608u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002B0E68u) [[unlikely]] return; }
L_002B0E68:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002B0E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B0EA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 112u)));  goto L_002B0EE4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 88u), 0u);  goto L_002B0EE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0EDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0EDCu) [[unlikely]] return; }
L_002B0EDC:
    st32((c.r[18].w[0] + 88u), 0u);
    c.budget -= 1;
L_002B0EE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 1;
L_002B0EE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 116u)));  goto L_002B0F0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 112u), 0u);  goto L_002B0F08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F04u) [[unlikely]] return; }
L_002B0F04:
    st32((c.r[18].w[0] + 112u), 0u);
    c.budget -= 1;
L_002B0F08:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 1;
L_002B0F0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 120u)));  goto L_002B0F34; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 116u), 0u);  goto L_002B0F30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F2Cu) [[unlikely]] return; }
L_002B0F2C:
    st32((c.r[18].w[0] + 116u), 0u);
    c.budget -= 1;
L_002B0F30:
    set32(c.r[16], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 1;
L_002B0F34:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 124u)));  goto L_002B0F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F44u);  if (depth < kMaxDepth) unit_0013(c, 316u, depth + 1u); else { c.pc = 0x0016F550u; return; } if (c.pc != 0x002B0F44u) [[unlikely]] return; }
L_002B0F44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B0F54u) [[unlikely]] return; }
L_002B0F54:
    st32((c.r[18].w[0] + 120u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 2;
L_002B0F5C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002B0F84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F6Cu);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00160A40u; return; } if (c.pc != 0x002B0F6Cu) [[unlikely]] return; }
L_002B0F6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B0F7Cu) [[unlikely]] return; }
L_002B0F7C:
    st32((c.r[18].w[0] + 124u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002B0F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F8Cu);  if (depth < kMaxDepth) unit_0064(c, 241u, depth + 1u); else { c.pc = 0x002B1D50u; return; } if (c.pc != 0x002B0F8Cu) [[unlikely]] return; }
L_002B0F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 262u, depth + 1u); else { c.pc = 0x002B2090u; return; } if (c.pc != 0x002B0F94u) [[unlikely]] return; }
L_002B0F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 204u, depth + 1u); else { c.pc = 0x002B17E0u; return; } if (c.pc != 0x002B0F9Cu) [[unlikely]] return; }
L_002B0F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 192u, depth + 1u); else { c.pc = 0x002B1630u; return; } if (c.pc != 0x002B0FA4u) [[unlikely]] return; }
L_002B0FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FACu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B0FACu) [[unlikely]] return; }
L_002B0FAC:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
L_002B0FCC:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002B0FE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 32u, depth + 1u); else { c.pc = 0x001FC430u; return; } if (c.pc != 0x002B0FE4u) [[unlikely]] return; }
L_002B0FE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B0FE8:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0FCCu | kUnwind; return; } goto L_002B0FCC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B1014; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1010u) [[unlikely]] return; }
L_002B1010:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_002B1014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[28].w[0] - 30296u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1024u); set32(c.r[4], c.r[4].w[0] + 12656u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002B1024u) [[unlikely]] return; }
L_002B1024:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B1050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1070u); st32((c.r[2].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0064(c, 241u, depth + 1u); else { c.pc = 0x002B1D50u; return; } if (c.pc != 0x002B1070u) [[unlikely]] return; }
L_002B1070:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  goto L_002B12D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 12688u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_0064[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B109C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10A4u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002B10A4u) [[unlikely]] return; }
L_002B10A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[17].w[0]);  goto L_002B10DC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10BCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005C(c, 35u, depth + 1u); else { c.pc = 0x00290620u; return; } if (c.pc != 0x002B10BCu) [[unlikely]] return; }
L_002B10BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10D4u); set32(c.r[7], c.r[3].w[0] + 28u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002B10D4u) [[unlikely]] return; }
L_002B10D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    c.budget -= 2;
L_002B10DC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  goto L_002B13B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10ECu);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x002B10ECu) [[unlikely]] return; }
L_002B10EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002B10FCu) [[unlikely]] return; }
L_002B10FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 6;
L_002B1114:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B12D0; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1144u); set32(c.r[6], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0064(c, 199u, depth + 1u); else { c.pc = 0x002B1700u; return; } if (c.pc != 0x002B1144u) [[unlikely]] return; }
L_002B1144:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 6u);  goto L_002B1168; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1160u) [[unlikely]] return; }
L_002B1160:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[3], 0u + 6u);
    c.budget -= 2;
L_002B1168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002B12D0; } }
L_002B1170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1178u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002B1178u) [[unlikely]] return; }
L_002B1178:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[17].w[0]);  goto L_002B11B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1190u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005C(c, 35u, depth + 1u); else { c.pc = 0x00290620u; return; } if (c.pc != 0x002B1190u) [[unlikely]] return; }
L_002B1190:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11A8u); set32(c.r[7], c.r[3].w[0] + 28u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002B11A8u) [[unlikely]] return; }
L_002B11A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    c.budget -= 2;
L_002B11B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B13B4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30360u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002B11C8u) [[unlikely]] return; }
L_002B11C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 6;
L_002B11E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B12D0; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[16].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1208u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_003E(c, 396u, depth + 1u); else { c.pc = 0x0021BF80u; return; } if (c.pc != 0x002B1208u) [[unlikely]] return; }
L_002B1208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B13B4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B121Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_003F(c, 129u, depth + 1u); else { c.pc = 0x0021DA60u; return; } if (c.pc != 0x002B121Cu) [[unlikely]] return; }
L_002B121C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_002B1240; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1238u) [[unlikely]] return; }
L_002B1238:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_002B1240:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_002B1248:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B12D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1280u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1280u) [[unlikely]] return; }
L_002B1280:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002B12D0; } }
L_002B1290:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12A0u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0064(c, 204u, depth + 1u); else { c.pc = 0x002B17E0u; return; } if (c.pc != 0x002B12A0u) [[unlikely]] return; }
L_002B12A0:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12B0u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 305u, depth + 1u); else { c.pc = 0x002BF130u; return; } if (c.pc != 0x002B12B0u) [[unlikely]] return; }
L_002B12B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12B8u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002B12B8u) [[unlikely]] return; }
L_002B12B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_002B12D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12CCu);  if (depth < kMaxDepth) unit_0040(c, 85u, depth + 1u); else { c.pc = 0x002209C0u; return; } if (c.pc != 0x002B12CCu) [[unlikely]] return; }
L_002B12CC:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_002B12D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_002B12D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 152u)));  goto L_002B1328; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002B1308; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B1314; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002B1308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002B1314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1324u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_003E(c, 345u, depth + 1u); else { c.pc = 0x0021B500u; return; } if (c.pc != 0x002B1324u) [[unlikely]] return; }
L_002B1324:
    set32(c.r[17], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_002B1328:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 160u)));  goto L_002B136C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1338u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B1338u) [[unlikely]] return; }
L_002B1338:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1344u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x002B1344u) [[unlikely]] return; }
L_002B1344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1368; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1368; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_002B1368:
    set32(c.r[16], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_002B136C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B1404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B137Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B137Cu) [[unlikely]] return; }
L_002B137C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1388u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x002B1388u) [[unlikely]] return; }
L_002B1388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1400; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1400; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1400; } }
L_002B13B4:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002B13B8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002B13E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13C8u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x002B13C8u) [[unlikely]] return; }
L_002B13C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B13D8u) [[unlikely]] return; }
L_002B13D8:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_002B13E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_002B1400; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B13F8u) [[unlikely]] return; }
L_002B13F8:
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 2;
L_002B1400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B1404:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002B1450; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B144C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B144Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 363u, depth + 1u); else { c.pc = 0x0021B880u; return; } if (c.pc != 0x002B144Cu) [[unlikely]] return; }
L_002B144C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B1450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 160u)));  goto L_002B1488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1484u);  if (depth < kMaxDepth) unit_003E(c, 372u, depth + 1u); else { c.pc = 0x0021BA60u; return; } if (c.pc != 0x002B1484u) [[unlikely]] return; }
L_002B1484:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_002B1488:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B14B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1498u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B1498u) [[unlikely]] return; }
L_002B1498:
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x002B14A4u) [[unlikely]] return; }
L_002B14A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B14B4; } }
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_002B14B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B14B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B14D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B14F0u) [[unlikely]] return; }
L_002B14F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B1610; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1514u); st32((c.r[18].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0036(c, 317u, depth + 1u); else { c.pc = 0x001FBCD0u; return; } if (c.pc != 0x002B1514u) [[unlikely]] return; }
L_002B1514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_002B160C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 12720u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1538u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 322u, depth + 1u); else { c.pc = 0x001FBD20u; return; } if (c.pc != 0x002B1538u) [[unlikely]] return; }
L_002B1538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_002B160C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B154Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x002B154Cu) [[unlikely]] return; }
L_002B154C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B160C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_002B1578; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
L_002B1578:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1584u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002B1584u) [[unlikely]] return; }
L_002B1584:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B1598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_002B15AC; } }
L_002B1598:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002B15AC; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002B15AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B15D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B15D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B15D0u) [[unlikely]] return; }
L_002B15D0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002B15F8; }
L_002B15D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002B1604; } }
L_002B15F8:
    set32(c.r[2], 0u - 4097u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002B1604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B1610; } }
L_002B160C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B1630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1648u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B1648u) [[unlikely]] return; }
L_002B1648:
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B1660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B165Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x002B165Cu) [[unlikely]] return; }
L_002B165C:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_002B1660:
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002B167C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 321u, depth + 1u); else { c.pc = 0x001FBD10u; return; } if (c.pc != 0x002B1674u) [[unlikely]] return; }
L_002B1674:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_002B167C:
    st32((c.r[3].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B16A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B16B4u) [[unlikely]] return; }
L_002B16B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B16EC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B16E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16D4u); set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x002B16D4u) [[unlikely]] return; }
L_002B16D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B16E8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002B16E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B16EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1728u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B1728u) [[unlikely]] return; }
L_002B1728:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B17C4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B174Cu); st32((c.r[16].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0036(c, 317u, depth + 1u); else { c.pc = 0x001FBCD0u; return; } if (c.pc != 0x002B174Cu) [[unlikely]] return; }
L_002B174C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_002B17C0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 12720u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1770u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 322u, depth + 1u); else { c.pc = 0x001FBD20u; return; } if (c.pc != 0x002B1770u) [[unlikely]] return; }
L_002B1770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_002B17C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1784u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x002B1784u) [[unlikely]] return; }
L_002B1784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B17C0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_002B17AC; }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_002B17AC:
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002B17C4; } }
L_002B17C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B17C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B17E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B17F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002B17F8u) [[unlikely]] return; }
L_002B17F8:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B1810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B180Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x002B180Cu) [[unlikely]] return; }
L_002B180C:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_002B1810:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 84u)));  goto L_002B182C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 321u, depth + 1u); else { c.pc = 0x001FBD10u; return; } if (c.pc != 0x002B1824u) [[unlikely]] return; }
L_002B1824:
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_002B182C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 80u)));  goto L_002B1848; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1840u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B1840u) [[unlikely]] return; }
L_002B1840:
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 2;
L_002B1848:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B1870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1858u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x002B1858u) [[unlikely]] return; }
L_002B1858:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1868u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B1868u) [[unlikely]] return; }
L_002B1868:
    st32((c.r[17].w[0] + 80u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002B1870:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 81u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B1A38; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B1A28; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B1A18; }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B1A08; }
L_002B18BC:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B19F8; }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_002B19E4; }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B19D4; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));  goto L_002B199C; }
    set32(c.r[3], 0u + 62u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B1970; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002B1960; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002B194C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002B1924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B1A4C; } }
L_002B1924:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B1A48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B1A48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 680u), c.r[4].w[0]);  if (t) { goto L_002B1A48; } }
L_002B194C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1954u);  if (depth < kMaxDepth) unit_0064(c, 262u, depth + 1u); else { c.pc = 0x002B2090u; return; } if (c.pc != 0x002B1954u) [[unlikely]] return; }
L_002B1954:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B1960:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B1970:
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1A48; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B1A48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B199C:
    set32(c.r[3], ld32((c.r[5].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1A48; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 24u)));  goto L_002B19C8; }
    c.r[3].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1A48; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 1;
L_002B19C8:
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B19D4:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B19E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B1A48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 680u), 0u);  if (t) { goto L_002B1A48; } }
L_002B19F8:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B1A08:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B1A18:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B1A28:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B1A48; } }
L_002B1A38:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_002B1A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B1A4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002B1A9C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B1AAC; } }
L_002B1A9C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002B1AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AB4u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B1AB4u) [[unlikely]] return; }
L_002B1AB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 88u), c.r[4].w[0]);  goto L_002B1AD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AC8u);  if (depth < kMaxDepth) unit_003E(c, 332u, depth + 1u); else { c.pc = 0x0021B320u; return; } if (c.pc != 0x002B1AC8u) [[unlikely]] return; }
L_002B1AC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 88u), c.r[4].w[0]);
    c.budget -= 2;
L_002B1AD0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002B1BB4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B1AE8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 1;
L_002B1AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AF0u);  if (depth < kMaxDepth) unit_0056(c, 181u, depth + 1u); else { c.pc = 0x00279860u; return; } if (c.pc != 0x002B1AF0u) [[unlikely]] return; }
L_002B1AF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AFCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 267u, depth + 1u); else { c.pc = 0x002B2110u; return; } if (c.pc != 0x002B1AFCu) [[unlikely]] return; }
L_002B1AFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B08u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005C(c, 35u, depth + 1u); else { c.pc = 0x00290620u; return; } if (c.pc != 0x002B1B08u) [[unlikely]] return; }
L_002B1B08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 31u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B20u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x002B1B20u) [[unlikely]] return; }
L_002B1B20:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 8416u);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B40u); st32((c.r[2].w[0] + 212u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0064(c, 229u, depth + 1u); else { c.pc = 0x002B1BD0u; return; } if (c.pc != 0x002B1B40u) [[unlikely]] return; }
L_002B1B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B48u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002B1B48u) [[unlikely]] return; }
L_002B1B48:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B5Cu); set32(c.r[7], 0u + 10000u);  if (depth < kMaxDepth) unit_003F(c, 143u, depth + 1u); else { c.pc = 0x0021DCD0u; return; } if (c.pc != 0x002B1B5Cu) [[unlikely]] return; }
L_002B1B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B64u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002B1B64u) [[unlikely]] return; }
L_002B1B64:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B78u); set32(c.r[7], 0u + 10000u);  if (depth < kMaxDepth) unit_003F(c, 143u, depth + 1u); else { c.pc = 0x0021DCD0u; return; } if (c.pc != 0x002B1B78u) [[unlikely]] return; }
L_002B1B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B80u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002B1B80u) [[unlikely]] return; }
L_002B1B80:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B94u); set32(c.r[7], 0u + 10000u);  if (depth < kMaxDepth) unit_003F(c, 143u, depth + 1u); else { c.pc = 0x0021DCD0u; return; } if (c.pc != 0x002B1B94u) [[unlikely]] return; }
L_002B1B94:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1BA4u); set32(c.r[4], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x002B1BA4u) [[unlikely]] return; }
L_002B1BA4:
    st32((c.r[19].w[0] + 108u), c.r[17].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
L_002B1BB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B1BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30452u), c.r[4].w[0]);  c.pc = t; return; }
L_002B1BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B1C0C; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_002B1C0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_002B1C38; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_002B1C34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1C30u) [[unlikely]] return; }
L_002B1C30:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_002B1C34:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_002B1C38:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_002B1C54; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B1C4Cu) [[unlikely]] return; }
L_002B1C4C:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 2;
L_002B1C54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_002B1C7C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), 0u);  goto L_002B1C78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1C74u) [[unlikely]] return; }
L_002B1C74:
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 1;
L_002B1C78:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_002B1C7C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 120u)));  goto L_002B1CA4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), 0u);  goto L_002B1CA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1C9Cu) [[unlikely]] return; }
L_002B1C9C:
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 1;
L_002B1CA0:
    set32(c.r[17], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_002B1CA4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 124u)));  goto L_002B1CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CB4u);  if (depth < kMaxDepth) unit_0013(c, 316u, depth + 1u); else { c.pc = 0x0016F550u; return; } if (c.pc != 0x002B1CB4u) [[unlikely]] return; }
L_002B1CB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B1CC4u) [[unlikely]] return; }
L_002B1CC4:
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 2;
L_002B1CCC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_002B1CF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CDCu);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00160A40u; return; } if (c.pc != 0x002B1CDCu) [[unlikely]] return; }
L_002B1CDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002B1CECu) [[unlikely]] return; }
L_002B1CEC:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 2;
L_002B1CF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B1D00; }
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 1;
L_002B1D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D08u);  if (depth < kMaxDepth) unit_0056(c, 181u, depth + 1u); else { c.pc = 0x00279860u; return; } if (c.pc != 0x002B1D08u) [[unlikely]] return; }
L_002B1D08:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D38u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1D38u) [[unlikely]] return; }
L_002B1D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  if (t) { goto L_002B1D78; } }
L_002B1D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D74u); set32(c.r[16], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002B1D74u) [[unlikely]] return; }
L_002B1D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B1D78:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1D6Cu | kUnwind; return; } goto L_002B1D6C; } }
    st32((c.r[17].w[0] + 92u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1DA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DDCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 258u, depth + 1u); else { c.pc = 0x002B2000u; return; } if (c.pc != 0x002B1DDCu) [[unlikely]] return; }
L_002B1DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DE4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B1DE4u) [[unlikely]] return; }
L_002B1DE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 92u)));  goto L_002B1DF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B1E10; } }
L_002B1DF4:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[20]);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_002B1E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B1E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 92u)));  if (t) { goto L_002B1E58; } }
L_002B1E38:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_002B1E58; }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002B1E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B1E64; } }
L_002B1E54:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002B1E58:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1E38u | kUnwind; return; } goto L_002B1E38; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1E64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1E70:
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B1E88; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002B1E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EB0u); set32(c.r[4], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x002B1EB0u) [[unlikely]] return; }
L_002B1EB0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1ED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002B1F24; } }
L_002B1F00:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_002B1F24; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002B1F20; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B1F5C; } }
L_002B1F20:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002B1F24:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1F00u | kUnwind; return; } goto L_002B1F00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F34u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B1F34u) [[unlikely]] return; }
L_002B1F34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 96u)));  goto L_002B1F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B1F5C; } }
L_002B1F44:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_002B1F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B1F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002B1FE0; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 1;
L_002B1F98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[7], ld32((c.r[9].w[0])));  if (t) { goto L_002B1FD8; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[8].d[0] = c.r[9].d[0] + 0ull;  goto L_002B1FDC; }
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { st32((c.r[8].w[0]), c.r[7].w[0]);  goto L_002B1FC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[7].w[0]);  if (t) { goto L_002B1FC0; } }
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_002B1FC0:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002B1FEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1FD0u); c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002B1FD0u) [[unlikely]] return; }
L_002B1FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1FE8; } }
L_002B1FD8:
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_002B1FDC:
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002B1FE0:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[3], ld32((c.r[9].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1F98u | kUnwind; return; } goto L_002B1F98; }
L_002B1FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B1FEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002B206C; } }
    goto L_002B2024;
L_002B2020:
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002B2024:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_002B206C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B2068; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_002B204C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_002B2050; } }
L_002B204C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2050:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2068u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002B2068u) [[unlikely]] return; }
L_002B2068:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002B206C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2024u | kUnwind; return; } goto L_002B2024; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (t) { goto L_002B20C0; } }
L_002B20AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_002B20BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20BCu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002B20BCu) [[unlikely]] return; }
L_002B20BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B20C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B20ACu | kUnwind; return; } goto L_002B20AC; } }
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B20E0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30296u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1DA0u | kUnwind; return; } goto L_002B1DA0; }
L_002B2100:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0980u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 115u, depth); }
L_002B2110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B2360; } }
L_002B2138:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12416u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002B2190; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B216C; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002B216C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2174u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x002B2174u) [[unlikely]] return; }
L_002B2174:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B218Cu); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B218Cu) [[unlikely]] return; }
L_002B218C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002B2190:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_002B21C4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002B21AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_002B21AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21C0u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B21C0u) [[unlikely]] return; }
L_002B21C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002B21C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_002B2270; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B21DC; } }
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002B21DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21E4u);  if (depth < kMaxDepth) unit_0013(c, 316u, depth + 1u); else { c.pc = 0x0016F550u; return; } if (c.pc != 0x002B21E4u) [[unlikely]] return; }
L_002B21E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002B21F4u) [[unlikely]] return; }
L_002B21F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_002B2244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2204u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B2204u) [[unlikely]] return; }
L_002B2204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  goto L_002B2224; }
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2220u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x002B2220u) [[unlikely]] return; }
L_002B2220:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_002B2224:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B223Cu); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B223Cu) [[unlikely]] return; }
L_002B223C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_002B2274; } }
L_002B2244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2250u); set32(c.r[4], c.r[4].w[0] + 12736u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002B2250u) [[unlikely]] return; }
L_002B2250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2258u);  if (depth < kMaxDepth) unit_0013(c, 316u, depth + 1u); else { c.pc = 0x0016F550u; return; } if (c.pc != 0x002B2258u) [[unlikely]] return; }
L_002B2258:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2270u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B2270u) [[unlikely]] return; }
L_002B2270:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_002B2274:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { goto L_002B2320; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B228C; } }
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002B228C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2294u);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00160A40u; return; } if (c.pc != 0x002B2294u) [[unlikely]] return; }
L_002B2294:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002B22A4u) [[unlikely]] return; }
L_002B22A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_002B22F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22B4u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B22B4u) [[unlikely]] return; }
L_002B22B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  goto L_002B22D4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22D0u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x002B22D0u) [[unlikely]] return; }
L_002B22D0:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_002B22D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22ECu); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B22ECu) [[unlikely]] return; }
L_002B22EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_002B2324; } }
L_002B22F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2300u); set32(c.r[4], c.r[4].w[0] + 12800u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002B2300u) [[unlikely]] return; }
L_002B2300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2308u);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00160A40u; return; } if (c.pc != 0x002B2308u) [[unlikely]] return; }
L_002B2308:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2320u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B2320u) [[unlikely]] return; }
L_002B2320:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_002B2324:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2360; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B233C; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_002B233C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2344u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002B2344u) [[unlikely]] return; }
L_002B2344:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B235Cu); set32(c.r[4], c.r[3].w[0] + 48u);  if (depth < kMaxDepth) unit_0040(c, 27u, depth + 1u); else { c.pc = 0x00220260u; return; } if (c.pc != 0x002B235Cu) [[unlikely]] return; }
L_002B235C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B2360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B23E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26032u);
    set32(c.r[2], c.r[2].w[0] + 26088u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B23C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002B23C0u) [[unlikely]] return; }
L_002B23C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B23CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002B23CCu) [[unlikely]] return; }
L_002B23CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B23E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B23E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002B23E4u) [[unlikely]] return; }
L_002B23E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B23E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2400:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2380u | kUnwind; return; } goto L_002B2380; }
L_002B2410:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1880u | kUnwind; return; } goto L_002B1880; }
L_002B2420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B243Cu); set32(c.r[4], 0u + 728u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002B243Cu) [[unlikely]] return; }
L_002B243C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B24B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B2450; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_002B2450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 16128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B247Cu); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x002B247Cu) [[unlikely]] return; }
L_002B247C:
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 668u), 0u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    st32((c.r[16].w[0] + 684u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2498u); st32((c.r[16].w[0] + 688u), 0u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002B2498u) [[unlikely]] return; }
L_002B2498:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26112u);
    set32(c.r[2], c.r[2].w[0] + 26140u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 6;
L_002B24B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B24D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B26A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_002B2510; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_002B2524; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_002B2510:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_002B2524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_002B2524; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_002B2524:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002B2570; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_002B2570; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B2554:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2570; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2570; } }
L_002B2570:
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  goto L_002B25B8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002B25B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B2594:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002B25B4; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B25B4; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B25B4:
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_002B25B8:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002B25FC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B25D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002B25F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B25D8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_002B25F8; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B25F8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B25F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002B25FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B2610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2610; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2618u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 214u, depth + 1u); else { c.pc = 0x002B1A60u; return; } if (c.pc != 0x002B2618u) [[unlikely]] return; }
L_002B2618:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 724u)));  goto L_002B269C; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002B2650; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2650u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2650u) [[unlikely]] return; }
L_002B2650:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B266Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B266Cu) [[unlikely]] return; }
L_002B266C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B275C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2690u) [[unlikely]] return; }
L_002B2690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2758; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002B269C:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002B2758; } }
L_002B26A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B26C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_002B26C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B26C0:
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B26E0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_002B26E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B26E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2758; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_002B2718; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2718u) [[unlikely]] return; }
L_002B2718:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2734u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2734u) [[unlikely]] return; }
L_002B2734:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2758; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2758u) [[unlikely]] return; }
L_002B2758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B275C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B2770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2794; } }
L_002B2790:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B279Cu);  if (depth < kMaxDepth) unit_0064(c, 230u, depth + 1u); else { c.pc = 0x002B1BE0u; return; } if (c.pc != 0x002B279Cu) [[unlikely]] return; }
L_002B279C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B27CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B27CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B27CCu) [[unlikely]] return; }
L_002B27CC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27E8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B27E8u) [[unlikely]] return; }
L_002B27E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B2810; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B280C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B280Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B280Cu) [[unlikely]] return; }
L_002B280C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2810:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2844; } }
L_002B2840:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B284Cu);  if (depth < kMaxDepth) unit_0064(c, 230u, depth + 1u); else { c.pc = 0x002B1BE0u; return; } if (c.pc != 0x002B284Cu) [[unlikely]] return; }
L_002B284C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B287C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B287C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B287Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B287Cu) [[unlikely]] return; }
L_002B287C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2898u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2898u) [[unlikely]] return; }
L_002B2898:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B28C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B28BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B28BCu) [[unlikely]] return; }
L_002B28BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B28C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B28D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B28F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B2908; } }
L_002B28F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B2908; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_002B2908:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B2918; }
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 1;
L_002B2918:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002B2930; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B293C; } }
L_002B2930:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002B293C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B296C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B296C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B296Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B296Cu) [[unlikely]] return; }
L_002B296C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2988u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2988u) [[unlikely]] return; }
L_002B2988:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B29B0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B29AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B29ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B29ACu) [[unlikely]] return; }
L_002B29AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B29B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B29C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B29EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B29F0; } }
L_002B29EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B29F0:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B2A08; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_002B2A08:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B2A30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2A30u) [[unlikely]] return; }
L_002B2A30:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A4Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2A4Cu) [[unlikely]] return; }
L_002B2A4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B2A74; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2A70u) [[unlikely]] return; }
L_002B2A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2A74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2A80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2AA4; } }
L_002B2AA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2AA4:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002B2B28; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B2ADC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2ADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2ADCu) [[unlikely]] return; }
L_002B2ADC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AF8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2AF8u) [[unlikely]] return; }
L_002B2AF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B2BDC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2B1Cu) [[unlikely]] return; }
L_002B2B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2BD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B2B28:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B2B5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B2B3C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B2B5C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[5].w[0]);  if (t) { goto L_002B2B60; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2B5C:
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 1;
L_002B2B60:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    st32((c.r[3].w[0] + 212u), c.r[5].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B2B98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2B98u) [[unlikely]] return; }
L_002B2B98:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2BB4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2BB4u) [[unlikely]] return; }
L_002B2BB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2BD8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2BD8u) [[unlikely]] return; }
L_002B2BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2BDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B2BF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2C14; } }
L_002B2C10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2C14:
    set32(c.r[5], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002B2C98; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B2C4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2C4Cu) [[unlikely]] return; }
L_002B2C4C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C68u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2C68u) [[unlikely]] return; }
L_002B2C68:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B2D50; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2C8Cu) [[unlikely]] return; }
L_002B2C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2D4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B2C98:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B2CCC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B2CAC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B2CCC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_002B2CD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2CCC:
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_002B2CD0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B2D0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2D0Cu) [[unlikely]] return; }
L_002B2D0C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D28u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2D28u) [[unlikely]] return; }
L_002B2D28:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2D4C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2D4Cu) [[unlikely]] return; }
L_002B2D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2D50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B2D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2D84; } }
L_002B2D80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2D84:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2D98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B2DAC; } }
L_002B2D98:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B2DAC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002B2DAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B2DC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002B2DD4; } }
L_002B2DC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002B2DD4; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002B2DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DDCu);  if (depth < kMaxDepth) unit_0064(c, 247u, depth + 1u); else { c.pc = 0x002B1E30u; return; } if (c.pc != 0x002B2DDCu) [[unlikely]] return; }
L_002B2DDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B2E70; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B2DF4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 1;
L_002B2DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DFCu);  if (depth < kMaxDepth) unit_0064(c, 249u, depth + 1u); else { c.pc = 0x002B1E70u; return; } if (c.pc != 0x002B2DFCu) [[unlikely]] return; }
L_002B2DFC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B2E2C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2E2Cu) [[unlikely]] return; }
L_002B2E2C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E48u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2E48u) [[unlikely]] return; }
L_002B2E48:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2E6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2E6Cu) [[unlikely]] return; }
L_002B2E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2E70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2EA4; } }
L_002B2EA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2EA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  goto L_002B2F28; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B2EDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2EDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2EDCu) [[unlikely]] return; }
L_002B2EDC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2EF8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2EF8u) [[unlikely]] return; }
L_002B2EF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B2FA4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2F1Cu) [[unlikely]] return; }
L_002B2F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2FA0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_002B2F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F30u);  if (depth < kMaxDepth) unit_003F(c, 288u, depth + 1u); else { c.pc = 0x0021FAB0u; return; } if (c.pc != 0x002B2F30u) [[unlikely]] return; }
L_002B2F30:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B2F60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B2F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2F60u) [[unlikely]] return; }
L_002B2F60:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F7Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B2F7Cu) [[unlikely]] return; }
L_002B2F7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2FA0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B2FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B2FA0u) [[unlikely]] return; }
L_002B2FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2FA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B2FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B2FD4; } }
L_002B2FD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2FD4:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  goto L_002B3058; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B300C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B300C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B300Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B300Cu) [[unlikely]] return; }
L_002B300C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3028u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3028u) [[unlikely]] return; }
L_002B3028:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B30D4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B30D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B304Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B304Cu) [[unlikely]] return; }
L_002B304C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B30D0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_002B3058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3060u);  if (depth < kMaxDepth) unit_003F(c, 291u, depth + 1u); else { c.pc = 0x0021FB00u; return; } if (c.pc != 0x002B3060u) [[unlikely]] return; }
L_002B3060:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3090; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3090u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3090u) [[unlikely]] return; }
L_002B3090:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B30ACu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B30ACu) [[unlikely]] return; }
L_002B30AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B30D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B30D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B30D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B30D0u) [[unlikely]] return; }
L_002B30D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B30D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B30E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3104; } }
L_002B3100:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3104:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B318C; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B3140; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3140u) [[unlikely]] return; }
L_002B3140:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B315Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B315Cu) [[unlikely]] return; }
L_002B315C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B324C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3180u) [[unlikely]] return; }
L_002B3180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3248; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B318C:
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  goto L_002B31AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002B31E0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_002B31AC:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_002B31CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B31D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002B31CC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002B31D8:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 2;
L_002B31E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3208; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3208u) [[unlikely]] return; }
L_002B3208:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3224u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3224u) [[unlikely]] return; }
L_002B3224:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3248; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3248u) [[unlikely]] return; }
L_002B3248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B324C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3260:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3284; } }
L_002B3280:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3284:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B330C; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B32C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B32C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B32C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B32C0u) [[unlikely]] return; }
L_002B32C0:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B32DCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B32DCu) [[unlikely]] return; }
L_002B32DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B33CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B33C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3300u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3300u) [[unlikely]] return; }
L_002B3300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B33C8; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B330C:
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  goto L_002B332C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002B3360; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_002B332C:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_002B334C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B3358; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002B334C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002B3358:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 2;
L_002B3360:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3388; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3388u) [[unlikely]] return; }
L_002B3388:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B33A4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B33A4u) [[unlikely]] return; }
L_002B33A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B33C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B33C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B33C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B33C8u) [[unlikely]] return; }
L_002B33C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B33CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B33E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_002B3404; } }
L_002B3400:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3404:
    set32(c.r[6], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 72u)));  goto L_002B3488; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B343C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B343C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B343Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B343Cu) [[unlikely]] return; }
L_002B343C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3458u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3458u) [[unlikely]] return; }
L_002B3458:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3594; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B347Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B347Cu) [[unlikely]] return; }
L_002B347C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3590; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 1;
L_002B3488:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[5], ld32((c.r[6].w[0] + 20u)));  goto L_002B349C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_002B34D0; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_002B349C:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 28u)));  goto L_002B34BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002B34C8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 1;
L_002B34BC:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_002B34C8:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 2;
L_002B34D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002B34E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B3508; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B34E8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B3508; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3508; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3508:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B3590; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3590; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3550; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3550u) [[unlikely]] return; }
L_002B3550:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B356Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B356Cu) [[unlikely]] return; }
L_002B356C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3590; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3590u) [[unlikely]] return; }
L_002B3590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3594:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B35A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B35C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_002B35C4; } }
L_002B35C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B35C4:
    set32(c.r[6], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 72u)));  goto L_002B3648; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B35FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B35FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B35FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B35FCu) [[unlikely]] return; }
L_002B35FC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3618u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3618u) [[unlikely]] return; }
L_002B3618:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3754; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B363Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B363Cu) [[unlikely]] return; }
L_002B363C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3750; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 1;
L_002B3648:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[5], ld32((c.r[6].w[0] + 20u)));  goto L_002B365C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_002B3690; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_002B365C:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 28u)));  goto L_002B367C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002B3688; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 1;
L_002B367C:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_002B3688:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 2;
L_002B3690:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002B36A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B36C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B36A8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B36C8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B36C8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B36C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B3750; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3750; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3710; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3710u) [[unlikely]] return; }
L_002B3710:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B372Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B372Cu) [[unlikely]] return; }
L_002B372C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3750; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3750u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3750u) [[unlikely]] return; }
L_002B3750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3754:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3784; } }
L_002B3780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3784:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002B3808; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B37BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B37BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B37BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B37BCu) [[unlikely]] return; }
L_002B37BC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B37D8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B37D8u) [[unlikely]] return; }
L_002B37D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B38F0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B38EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B37FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B37FCu) [[unlikely]] return; }
L_002B37FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B38EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B3808:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B381C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B383C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B381C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B383C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_002B3840; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B383C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_002B3840:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B3854; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002B3874; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B3854:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002B3874; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3874; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B387Cu);  if (depth < kMaxDepth) unit_003F(c, 118u, depth + 1u); else { c.pc = 0x0021D8D0u; return; } if (c.pc != 0x002B387Cu) [[unlikely]] return; }
L_002B387C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B38AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B38AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B38ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B38ACu) [[unlikely]] return; }
L_002B38AC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B38C8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B38C8u) [[unlikely]] return; }
L_002B38C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B38EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B38EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B38ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B38ECu) [[unlikely]] return; }
L_002B38EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B38F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3924; } }
L_002B3920:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3924:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002B39A8; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B395C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B395C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B395Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B395Cu) [[unlikely]] return; }
L_002B395C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3978u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3978u) [[unlikely]] return; }
L_002B3978:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3A58; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B399Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B399Cu) [[unlikely]] return; }
L_002B399C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3A54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B39A8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B39BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B39DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B39BC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B39DC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B39DC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B39DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B39E4u);  if (depth < kMaxDepth) unit_003F(c, 121u, depth + 1u); else { c.pc = 0x0021D960u; return; } if (c.pc != 0x002B39E4u) [[unlikely]] return; }
L_002B39E4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3A14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3A14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3A14u) [[unlikely]] return; }
L_002B3A14:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3A30u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3A30u) [[unlikely]] return; }
L_002B3A30:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3A54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3A54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3A54u) [[unlikely]] return; }
L_002B3A54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3A58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3A70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3A94; } }
L_002B3A90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3A94:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B3B14; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B3ACC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3ACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3ACCu) [[unlikely]] return; }
L_002B3ACC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3AE8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3AE8u) [[unlikely]] return; }
L_002B3AE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3B90; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3B0Cu) [[unlikely]] return; }
L_002B3B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3B8C; } }
L_002B3B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B1Cu);  if (depth < kMaxDepth) unit_003F(c, 18u, depth + 1u); else { c.pc = 0x0021C200u; return; } if (c.pc != 0x002B3B1Cu) [[unlikely]] return; }
L_002B3B1C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3B4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3B4Cu) [[unlikely]] return; }
L_002B3B4C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B68u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3B68u) [[unlikely]] return; }
L_002B3B68:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3B8C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3B8Cu) [[unlikely]] return; }
L_002B3B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3B90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3BA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3BC4; } }
L_002B3BC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3BC4:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002B3C48; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B3BFC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3BFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3BFCu) [[unlikely]] return; }
L_002B3BFC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C18u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3C18u) [[unlikely]] return; }
L_002B3C18:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3D00; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3C3Cu) [[unlikely]] return; }
L_002B3C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3CFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B3C48:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B3C5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B3C7C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B3C5C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B3C7C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3C7C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C84u);  if (depth < kMaxDepth) unit_003F(c, 148u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002B3C84u) [[unlikely]] return; }
L_002B3C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3CFC; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3CBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3CBCu) [[unlikely]] return; }
L_002B3CBC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CD8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3CD8u) [[unlikely]] return; }
L_002B3CD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3CFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3CFCu) [[unlikely]] return; }
L_002B3CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3D00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B3D48; } }
L_002B3D30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B3D48; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_002B3D48:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B3D58; }
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 1;
L_002B3D58:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002B3D70; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B3D7C; } }
L_002B3D70:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002B3D7C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3DAC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3DACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3DACu) [[unlikely]] return; }
L_002B3DAC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3DC8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3DC8u) [[unlikely]] return; }
L_002B3DC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3DF0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3DECu) [[unlikely]] return; }
L_002B3DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3DF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B3E00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3E24; } }
L_002B3E20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3E24:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002B3EA8; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B3E5C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3E5Cu) [[unlikely]] return; }
L_002B3E5C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E78u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3E78u) [[unlikely]] return; }
L_002B3E78:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B3F58; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3F54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3E9Cu) [[unlikely]] return; }
L_002B3E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3F54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B3EA8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B3EBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B3EDC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B3EBC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B3EDC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3EDC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EE4u);  if (depth < kMaxDepth) unit_003F(c, 163u, depth + 1u); else { c.pc = 0x0021E030u; return; } if (c.pc != 0x002B3EE4u) [[unlikely]] return; }
L_002B3EE4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B3F14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3F14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3F14u) [[unlikely]] return; }
L_002B3F14:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F30u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3F30u) [[unlikely]] return; }
L_002B3F30:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3F54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B3F54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3F54u) [[unlikely]] return; }
L_002B3F54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B3F58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3F70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_002B3F94; } }
L_002B3F90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3F94:
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  [[clang::musttail]] return unit_0065(c, 4u, depth); }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B3FCC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B3FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B3FCCu) [[unlikely]] return; }
L_002B3FCC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FE8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B3FE8u) [[unlikely]] return; }
L_002B3FE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  [[clang::musttail]] return unit_0065(c, 9u, depth); }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0065(c, 8u, depth); } }
    [[clang::musttail]] return unit_0065(c, 2u, depth);
}

}
