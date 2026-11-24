#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
};

void unit_002B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001CC000;
    case 2u: goto L_001CC024;
    case 3u: goto L_001CC074;
    case 4u: goto L_001CC084;
    case 5u: goto L_001CC094;
    case 6u: goto L_001CC0A4;
    case 7u: goto L_001CC0B4;
    case 8u: goto L_001CC0C4;
    case 9u: goto L_001CC0D0;
    case 10u: goto L_001CC0E0;
    case 11u: goto L_001CC138;
    case 12u: goto L_001CC144;
    case 13u: goto L_001CC160;
    case 14u: goto L_001CC18C;
    case 15u: goto L_001CC198;
    case 16u: goto L_001CC1B0;
    case 17u: goto L_001CC1DC;
    case 18u: goto L_001CC1E8;
    case 19u: goto L_001CC200;
    case 20u: goto L_001CC250;
    case 21u: goto L_001CC25C;
    case 22u: goto L_001CC270;
    case 23u: goto L_001CC2C0;
    case 24u: goto L_001CC2CC;
    case 25u: goto L_001CC2E0;
    case 26u: goto L_001CC328;
    case 27u: goto L_001CC33C;
    case 28u: goto L_001CC34C;
    case 29u: goto L_001CC360;
    case 30u: goto L_001CC394;
    case 31u: goto L_001CC3B0;
    case 32u: goto L_001CC3C8;
    case 33u: goto L_001CC3DC;
    case 34u: goto L_001CC400;
    case 35u: goto L_001CC420;
    case 36u: goto L_001CC430;
    case 37u: goto L_001CC45C;
    case 38u: goto L_001CC468;
    case 39u: goto L_001CC480;
    case 40u: goto L_001CC4A0;
    case 41u: goto L_001CC4D4;
    case 42u: goto L_001CC4F0;
    case 43u: goto L_001CC5E0;
    case 44u: goto L_001CC5F0;
    case 45u: goto L_001CC600;
    case 46u: goto L_001CC614;
    case 47u: goto L_001CC61C;
    case 48u: goto L_001CC628;
    case 49u: goto L_001CC640;
    case 50u: goto L_001CC668;
    case 51u: goto L_001CC680;
    case 52u: goto L_001CC69C;
    case 53u: goto L_001CC6AC;
    case 54u: goto L_001CC6B8;
    case 55u: goto L_001CC6D0;
    case 56u: goto L_001CC6E8;
    case 57u: goto L_001CC6FC;
    case 58u: goto L_001CC73C;
    case 59u: goto L_001CC750;
    case 60u: goto L_001CC780;
    case 61u: goto L_001CC7AC;
    case 62u: goto L_001CC7B8;
    case 63u: goto L_001CC7D0;
    case 64u: goto L_001CC7F0;
    case 65u: goto L_001CC824;
    case 66u: goto L_001CC844;
    case 67u: goto L_001CC85C;
    case 68u: goto L_001CC878;
    case 69u: goto L_001CC88C;
    case 70u: goto L_001CC8A4;
    case 71u: goto L_001CC8D0;
    case 72u: goto L_001CC920;
    case 73u: goto L_001CC950;
    case 74u: goto L_001CC960;
    case 75u: goto L_001CC9A4;
    case 76u: goto L_001CCAB0;
    case 77u: goto L_001CCAC0;
    case 78u: goto L_001CCAD0;
    case 79u: goto L_001CCAE4;
    case 80u: goto L_001CCAEC;
    case 81u: goto L_001CCAF8;
    case 82u: goto L_001CCB10;
    case 83u: goto L_001CCB64;
    case 84u: goto L_001CCBCC;
    case 85u: goto L_001CCC4C;
    case 86u: goto L_001CCC94;
    case 87u: goto L_001CCD04;
    case 88u: goto L_001CCD14;
    case 89u: goto L_001CCD54;
    case 90u: goto L_001CCD6C;
    case 91u: goto L_001CCD7C;
    case 92u: goto L_001CCD94;
    case 93u: goto L_001CCDA0;
    case 94u: goto L_001CCDBC;
    case 95u: goto L_001CCDCC;
    case 96u: goto L_001CCDE0;
    case 97u: goto L_001CCDF4;
    case 98u: goto L_001CCE14;
    case 99u: goto L_001CCE3C;
    case 100u: goto L_001CCE4C;
    case 101u: goto L_001CCE60;
    case 102u: goto L_001CCEA0;
    case 103u: goto L_001CCEB8;
    case 104u: goto L_001CCEC8;
    case 105u: goto L_001CCEE8;
    case 106u: goto L_001CCEFC;
    case 107u: goto L_001CCF0C;
    case 108u: goto L_001CCF20;
    case 109u: goto L_001CCF30;
    case 110u: goto L_001CCF54;
    case 111u: goto L_001CCF8C;
    case 112u: goto L_001CCF9C;
    case 113u: goto L_001CCFAC;
    case 114u: goto L_001CCFBC;
    case 115u: goto L_001CCFC8;
    case 116u: goto L_001CCFE0;
    case 117u: goto L_001CD074;
    case 118u: goto L_001CD09C;
    case 119u: goto L_001CD0CC;
    case 120u: goto L_001CD0D8;
    case 121u: goto L_001CD0EC;
    case 122u: goto L_001CD0FC;
    case 123u: goto L_001CD12C;
    case 124u: goto L_001CD138;
    case 125u: goto L_001CD18C;
    case 126u: goto L_001CD1B0;
    case 127u: goto L_001CD1D4;
    case 128u: goto L_001CD1F0;
    case 129u: goto L_001CD208;
    case 130u: goto L_001CD22C;
    case 131u: goto L_001CD23C;
    case 132u: goto L_001CD260;
    case 133u: goto L_001CD27C;
    case 134u: goto L_001CD288;
    case 135u: goto L_001CD2A0;
    case 136u: goto L_001CD2BC;
    case 137u: goto L_001CD2C8;
    case 138u: goto L_001CD2E0;
    case 139u: goto L_001CD2F8;
    case 140u: goto L_001CD30C;
    case 141u: goto L_001CD318;
    case 142u: goto L_001CD338;
    case 143u: goto L_001CD350;
    case 144u: goto L_001CD380;
    case 145u: goto L_001CD3AC;
    case 146u: goto L_001CD3C0;
    case 147u: goto L_001CD3F4;
    case 148u: goto L_001CD400;
    case 149u: goto L_001CD418;
    case 150u: goto L_001CD430;
    case 151u: goto L_001CD460;
    case 152u: goto L_001CD480;
    case 153u: goto L_001CD48C;
    case 154u: goto L_001CD4AC;
    case 155u: goto L_001CD4C4;
    case 156u: goto L_001CD4E0;
    case 157u: goto L_001CD50C;
    case 158u: goto L_001CD534;
    case 159u: goto L_001CD54C;
    case 160u: goto L_001CD564;
    case 161u: goto L_001CD580;
    case 162u: goto L_001CD5A8;
    case 163u: goto L_001CD5DC;
    case 164u: goto L_001CD5F8;
    case 165u: goto L_001CD624;
    case 166u: goto L_001CD640;
    case 167u: goto L_001CD670;
    case 168u: goto L_001CD680;
    case 169u: goto L_001CD6B0;
    case 170u: goto L_001CD6D0;
    case 171u: goto L_001CD6E4;
    case 172u: goto L_001CD710;
    case 173u: goto L_001CD730;
    case 174u: goto L_001CD740;
    case 175u: goto L_001CD750;
    case 176u: goto L_001CD764;
    case 177u: goto L_001CD76C;
    case 178u: goto L_001CD778;
    case 179u: goto L_001CD790;
    case 180u: goto L_001CD7BC;
    case 181u: goto L_001CD7E4;
    case 182u: goto L_001CD7EC;
    case 183u: goto L_001CD7FC;
    case 184u: goto L_001CD810;
    case 185u: goto L_001CD82C;
    case 186u: goto L_001CD840;
    case 187u: goto L_001CD85C;
    case 188u: goto L_001CD878;
    case 189u: goto L_001CD88C;
    case 190u: goto L_001CD8A0;
    case 191u: goto L_001CD938;
    case 192u: goto L_001CD948;
    case 193u: goto L_001CD950;
    case 194u: goto L_001CD95C;
    case 195u: goto L_001CD96C;
    case 196u: goto L_001CD974;
    case 197u: goto L_001CD990;
    case 198u: goto L_001CD9AC;
    case 199u: goto L_001CD9B4;
    case 200u: goto L_001CD9C0;
    case 201u: goto L_001CD9D8;
    case 202u: goto L_001CD9EC;
    case 203u: goto L_001CDA00;
    case 204u: goto L_001CDA20;
    case 205u: goto L_001CDA38;
    case 206u: goto L_001CDA50;
    case 207u: goto L_001CDA6C;
    case 208u: goto L_001CDA94;
    case 209u: goto L_001CDAB8;
    case 210u: goto L_001CDAD4;
    case 211u: goto L_001CDB00;
    case 212u: goto L_001CDB28;
    case 213u: goto L_001CDB50;
    case 214u: goto L_001CDB8C;
    case 215u: goto L_001CDBC4;
    case 216u: goto L_001CDC08;
    case 217u: goto L_001CDC28;
    case 218u: goto L_001CDC34;
    case 219u: goto L_001CDC58;
    case 220u: goto L_001CDC68;
    case 221u: goto L_001CDC78;
    case 222u: goto L_001CDC88;
    case 223u: goto L_001CDCA0;
    case 224u: goto L_001CDCC4;
    case 225u: goto L_001CDD0C;
    case 226u: goto L_001CDD24;
    case 227u: goto L_001CDD30;
    case 228u: goto L_001CDD48;
    case 229u: goto L_001CDD6C;
    case 230u: goto L_001CDD8C;
    case 231u: goto L_001CDD98;
    case 232u: goto L_001CDDB4;
    case 233u: goto L_001CDDD0;
    case 234u: goto L_001CDDE8;
    case 235u: goto L_001CDDFC;
    case 236u: goto L_001CDE0C;
    case 237u: goto L_001CDE30;
    case 238u: goto L_001CDE48;
    case 239u: goto L_001CDE64;
    case 240u: goto L_001CDE70;
    case 241u: goto L_001CDE90;
    case 242u: goto L_001CDE9C;
    case 243u: goto L_001CDEF0;
    case 244u: goto L_001CDF08;
    case 245u: goto L_001CDF18;
    case 246u: goto L_001CDF30;
    case 247u: goto L_001CDF3C;
    case 248u: goto L_001CDF60;
    case 249u: goto L_001CDF7C;
    case 250u: goto L_001CDFA8;
    case 251u: goto L_001CDFC0;
    case 252u: goto L_001CDFD0;
    case 253u: goto L_001CDFE8;
    case 254u: goto L_001CE000;
    case 255u: goto L_001CE054;
    case 256u: goto L_001CE0B8;
    case 257u: goto L_001CE0C0;
    case 258u: goto L_001CE0E8;
    case 259u: goto L_001CE114;
    case 260u: goto L_001CE13C;
    case 261u: goto L_001CE148;
    case 262u: goto L_001CE17C;
    case 263u: goto L_001CE184;
    case 264u: goto L_001CE1B8;
    case 265u: goto L_001CE1C0;
    case 266u: goto L_001CE1F4;
    case 267u: goto L_001CE1FC;
    case 268u: goto L_001CE208;
    case 269u: goto L_001CE248;
    case 270u: goto L_001CE260;
    case 271u: goto L_001CE290;
    case 272u: goto L_001CE2AC;
    case 273u: goto L_001CE2D4;
    case 274u: goto L_001CE314;
    case 275u: goto L_001CE338;
    case 276u: goto L_001CE360;
    case 277u: goto L_001CE378;
    case 278u: goto L_001CE398;
    case 279u: goto L_001CE3BC;
    case 280u: goto L_001CE3D0;
    case 281u: goto L_001CE3E4;
    case 282u: goto L_001CE420;
    case 283u: goto L_001CE474;
    case 284u: goto L_001CE484;
    case 285u: goto L_001CE49C;
    case 286u: goto L_001CE4C0;
    case 287u: goto L_001CE4DC;
    case 288u: goto L_001CE518;
    case 289u: goto L_001CE53C;
    case 290u: goto L_001CE560;
    case 291u: goto L_001CE59C;
    case 292u: goto L_001CE5AC;
    case 293u: goto L_001CE5B4;
    case 294u: goto L_001CE608;
    case 295u: goto L_001CE618;
    case 296u: goto L_001CE628;
    case 297u: goto L_001CE65C;
    case 298u: goto L_001CE664;
    case 299u: goto L_001CE670;
    case 300u: goto L_001CE680;
    case 301u: goto L_001CE6A0;
    case 302u: goto L_001CE6C0;
    case 303u: goto L_001CE6E0;
    case 304u: goto L_001CE724;
    case 305u: goto L_001CE748;
    case 306u: goto L_001CE760;
    case 307u: goto L_001CE780;
    case 308u: goto L_001CE7A0;
    case 309u: goto L_001CE7BC;
    case 310u: goto L_001CE7DC;
    case 311u: goto L_001CE7E4;
    case 312u: goto L_001CE7F8;
    case 313u: goto L_001CE828;
    case 314u: goto L_001CE8E0;
    case 315u: goto L_001CE93C;
    case 316u: goto L_001CE964;
    case 317u: goto L_001CE974;
    case 318u: goto L_001CE98C;
    case 319u: goto L_001CE9B0;
    case 320u: goto L_001CE9C4;
    case 321u: goto L_001CE9CC;
    case 322u: goto L_001CE9E0;
    case 323u: goto L_001CEA28;
    case 324u: goto L_001CEACC;
    case 325u: goto L_001CEB04;
    case 326u: goto L_001CEC04;
    case 327u: goto L_001CEC1C;
    case 328u: goto L_001CEC28;
    case 329u: goto L_001CED50;
    case 330u: goto L_001CEDA0;
    case 331u: goto L_001CEDD0;
    case 332u: goto L_001CEE00;
    case 333u: goto L_001CEE30;
    case 334u: goto L_001CEE60;
    case 335u: goto L_001CEF20;
    case 336u: goto L_001CEF60;
    case 337u: goto L_001CEFB0;
    case 338u: goto L_001CEFC8;
    case 339u: goto L_001CEFDC;
    case 340u: goto L_001CEFF0;
    case 341u: goto L_001CEFF8;
    case 342u: goto L_001CF028;
    case 343u: goto L_001CF070;
    case 344u: goto L_001CF088;
    case 345u: goto L_001CF0B0;
    case 346u: goto L_001CF0D0;
    case 347u: goto L_001CF0F0;
    case 348u: goto L_001CF140;
    case 349u: goto L_001CF170;
    case 350u: goto L_001CF184;
    case 351u: goto L_001CF19C;
    case 352u: goto L_001CF1C0;
    case 353u: goto L_001CF1DC;
    case 354u: goto L_001CF1F0;
    case 355u: goto L_001CF21C;
    case 356u: goto L_001CF230;
    case 357u: goto L_001CF248;
    case 358u: goto L_001CF260;
    case 359u: goto L_001CF290;
    case 360u: goto L_001CF298;
    case 361u: goto L_001CF2A0;
    case 362u: goto L_001CF2E4;
    case 363u: goto L_001CF2F0;
    case 364u: goto L_001CF308;
    case 365u: goto L_001CF330;
    case 366u: goto L_001CF374;
    case 367u: goto L_001CF3A4;
    case 368u: goto L_001CF3C0;
    case 369u: goto L_001CF3D8;
    case 370u: goto L_001CF40C;
    case 371u: goto L_001CF458;
    case 372u: goto L_001CF48C;
    case 373u: goto L_001CF4A4;
    case 374u: goto L_001CF4B4;
    case 375u: goto L_001CF4FC;
    case 376u: goto L_001CF530;
    case 377u: goto L_001CF544;
    case 378u: goto L_001CF554;
    case 379u: goto L_001CF57C;
    case 380u: goto L_001CF58C;
    case 381u: goto L_001CF5C0;
    case 382u: goto L_001CF600;
    case 383u: goto L_001CF61C;
    case 384u: goto L_001CF648;
    case 385u: goto L_001CF668;
    case 386u: goto L_001CF6E0;
    case 387u: goto L_001CF718;
    case 388u: goto L_001CF7A8;
    case 389u: goto L_001CF7DC;
    case 390u: goto L_001CF810;
    case 391u: goto L_001CF830;
    case 392u: goto L_001CF850;
    case 393u: goto L_001CF864;
    case 394u: goto L_001CF888;
    case 395u: goto L_001CF8D0;
    case 396u: goto L_001CF8F0;
    case 397u: goto L_001CF904;
    case 398u: goto L_001CF914;
    case 399u: goto L_001CF930;
    case 400u: goto L_001CF958;
    case 401u: goto L_001CF97C;
    case 402u: goto L_001CF98C;
    case 403u: goto L_001CF9B0;
    case 404u: goto L_001CF9E0;
    case 405u: goto L_001CFA10;
    case 406u: goto L_001CFA20;
    case 407u: goto L_001CFA40;
    case 408u: goto L_001CFA78;
    case 409u: goto L_001CFAB4;
    case 410u: goto L_001CFAC4;
    case 411u: goto L_001CFAF0;
    case 412u: goto L_001CFB30;
    case 413u: goto L_001CFB78;
    case 414u: goto L_001CFB88;
    case 415u: goto L_001CFBB0;
    case 416u: goto L_001CFBF8;
    case 417u: goto L_001CFC4C;
    case 418u: goto L_001CFC5C;
    case 419u: goto L_001CFC90;
    case 420u: goto L_001CFCE0;
    case 421u: goto L_001CFD40;
    case 422u: goto L_001CFD50;
    case 423u: goto L_001CFD80;
    case 424u: goto L_001CFDD0;
    case 425u: goto L_001CFE38;
    case 426u: goto L_001CFE48;
    case 427u: goto L_001CFE80;
    case 428u: goto L_001CFED0;
    case 429u: goto L_001CFF40;
    case 430u: goto L_001CFF50;
    case 431u: goto L_001CFF80;
    case 432u: goto L_001CFFAC;
    case 433u: goto L_001CFFBC;
    case 434u: goto L_001CFFD0;
    case 435u: goto L_001CFFF0;
    default: bad_entry(c, 0x001CC000u); return;
    }
L_001CC000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC024u) [[unlikely]] return; }
L_001CC024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CC0D4; } }
L_001CC02C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CC0AC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001CC09C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CC08C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CC07C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001CC0BC; } }
L_001CC06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC074u);  if (depth < kMaxDepth) unit_002B(c, 10u, depth + 1u); else { c.pc = 0x001CC0E0u; return; } if (c.pc != 0x001CC074u) [[unlikely]] return; }
L_001CC074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC0D0; } }
L_001CC07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC084u);  if (depth < kMaxDepth) unit_002B(c, 13u, depth + 1u); else { c.pc = 0x001CC160u; return; } if (c.pc != 0x001CC084u) [[unlikely]] return; }
L_001CC084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC0D0; } }
L_001CC08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC094u);  if (depth < kMaxDepth) unit_002B(c, 16u, depth + 1u); else { c.pc = 0x001CC1B0u; return; } if (c.pc != 0x001CC094u) [[unlikely]] return; }
L_001CC094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC0D0; } }
L_001CC09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0A4u);  if (depth < kMaxDepth) unit_002B(c, 19u, depth + 1u); else { c.pc = 0x001CC200u; return; } if (c.pc != 0x001CC0A4u) [[unlikely]] return; }
L_001CC0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC0D0; } }
L_001CC0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0B4u);  if (depth < kMaxDepth) unit_002B(c, 22u, depth + 1u); else { c.pc = 0x001CC270u; return; } if (c.pc != 0x001CC0B4u) [[unlikely]] return; }
L_001CC0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC0D0; } }
L_001CC0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0C4u); set32(c.r[5], c.r[5].w[0] + 14297u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CC0C4u) [[unlikely]] return; }
L_001CC0C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC0D0u) [[unlikely]] return; }
L_001CC0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CC0D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC104; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CC13C; }
L_001CC104:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CC130; }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CC12C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CC138; } }
L_001CC12C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC138u);  if (depth < kMaxDepth) unit_002B(c, 25u, depth + 1u); else { c.pc = 0x001CC2E0u; return; } if (c.pc != 0x001CC138u) [[unlikely]] return; }
L_001CC138:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC144u) [[unlikely]] return; }
L_001CC144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC184; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CC190; }
L_001CC184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC18Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 29u, depth + 1u); else { c.pc = 0x001CC360u; return; } if (c.pc != 0x001CC18Cu) [[unlikely]] return; }
L_001CC18C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC198u) [[unlikely]] return; }
L_001CC198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 190u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC1DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CC1E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1DCu);  if (depth < kMaxDepth) unit_002B(c, 25u, depth + 1u); else { c.pc = 0x001CC2E0u; return; } if (c.pc != 0x001CC1DCu) [[unlikely]] return; }
L_001CC1DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC1E8u) [[unlikely]] return; }
L_001CC1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CC254; }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], ld32((c.r[4].w[0] + 352u)));  goto L_001CC238; }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CC250; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 1;
L_001CC238:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_001CC250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC250u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x001CC250u) [[unlikely]] return; }
L_001CC250:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC25Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC25Cu) [[unlikely]] return; }
L_001CC25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CC2C4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], ld32((c.r[4].w[0] + 352u)));  goto L_001CC2A8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CC2C0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 1;
L_001CC2A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_001CC2C0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC2C0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC2C0u) [[unlikely]] return; }
L_001CC2C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC2CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC2CCu) [[unlikely]] return; }
L_001CC2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CC350; } }
L_001CC304:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 192u)));  goto L_001CC330; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), 0u);  goto L_001CC32C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC328u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC328u) [[unlikely]] return; }
L_001CC328:
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 1;
L_001CC32C:
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 1;
L_001CC330:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC33Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x001CC33Cu) [[unlikely]] return; }
L_001CC33C:
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC34Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CC34Cu) [[unlikely]] return; }
L_001CC34C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CC350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001CC39C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), 0u);  goto L_001CC398; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC394u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC394u) [[unlikely]] return; }
L_001CC394:
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 1;
L_001CC398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CC39C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 268u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC3C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001C6120u; return; } if (c.pc != 0x001CC3C8u) [[unlikely]] return; }
L_001CC3C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC3DCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 35u, depth + 1u); else { c.pc = 0x001CC420u; return; } if (c.pc != 0x001CC3DCu) [[unlikely]] return; }
L_001CC3DC:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x59440000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16973ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC400u); set32(c.r[5], c.r[5].w[0] + 14320u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CC400u) [[unlikely]] return; }
L_001CC400:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC420:
    st32((c.r[4].w[0] + 180u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 188u), 0u);  c.pc = t; return; }
L_001CC430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CC480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC45Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 40u, depth + 1u); else { c.pc = 0x001CC4A0u; return; } if (c.pc != 0x001CC45Cu) [[unlikely]] return; }
L_001CC45C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 349u, depth + 1u); else { c.pc = 0x001C62B0u; return; } if (c.pc != 0x001CC468u) [[unlikely]] return; }
L_001CC468:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CC484; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC480u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CC480u) [[unlikely]] return; }
L_001CC480:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CC484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001CC4DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), 0u);  goto L_001CC4D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC4D4u) [[unlikely]] return; }
L_001CC4D4:
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 1;
L_001CC4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CC4DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC4F0:
    set32(c.r[6], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001CC5D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CC518; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001CC518:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[6].w[0] + 352u));  goto L_001CC530; }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 352u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 352u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CC538; } }
L_001CC530:
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[6].w[0] + 352u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CC538:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 168u)));  goto L_001CC58C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    set32(c.r[4], 0u - 256u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_001CC5D0; } }
L_001CC58C:
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    set32(c.r[4], 0u - 256u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 17;
L_001CC5D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC5F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC5F0u) [[unlikely]] return; }
L_001CC5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 40u, depth + 1u); else { c.pc = 0x001CC4A0u; return; } if (c.pc != 0x001CC614u) [[unlikely]] return; }
L_001CC614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 35u, depth + 1u); else { c.pc = 0x001CC420u; return; } if (c.pc != 0x001CC61Cu) [[unlikely]] return; }
L_001CC61C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC628u) [[unlikely]] return; }
L_001CC628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CC6BC; } }
L_001CC660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC668u);  if (depth < kMaxDepth) unit_002B(c, 40u, depth + 1u); else { c.pc = 0x001CC4A0u; return; } if (c.pc != 0x001CC668u) [[unlikely]] return; }
L_001CC668:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], 0u + 368u);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC680u); st32((c.r[16].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001CC680u) [[unlikely]] return; }
L_001CC680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), c.r[2].w[0]);  goto L_001CC6A0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC69Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 197u, depth + 1u); else { c.pc = 0x00206240u; return; } if (c.pc != 0x001CC69Cu) [[unlikely]] return; }
L_001CC69C:
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 1;
L_001CC6A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CC6ACu) [[unlikely]] return; }
L_001CC6AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CC6B8u) [[unlikely]] return; }
L_001CC6B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CC6BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 269u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001C6120u; return; } if (c.pc != 0x001CC6E8u) [[unlikely]] return; }
L_001CC6E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6FCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 59u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x001CC6FCu) [[unlikely]] return; }
L_001CC6FC:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45430000u);
    st32((c.r[16].w[0] + 180u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 184u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 200u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17997ull;
    st32((c.r[16].w[0] + 188u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[5], c.r[5].w[0] + 14432u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC73Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CC73Cu) [[unlikely]] return; }
L_001CC73C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC750:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 208u), 0u);
    st16((c.r[4].w[0] + 212u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 214u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 216u), 0u);
    st32((c.r[4].w[0] + 220u), 0u);
    st32((c.r[4].w[0] + 228u), 0u);
    st32((c.r[4].w[0] + 224u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 232u), 0u);  c.pc = t; return; }
L_001CC780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CC7D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7ACu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 64u, depth + 1u); else { c.pc = 0x001CC7F0u; return; } if (c.pc != 0x001CC7ACu) [[unlikely]] return; }
L_001CC7AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 349u, depth + 1u); else { c.pc = 0x001C62B0u; return; } if (c.pc != 0x001CC7B8u) [[unlikely]] return; }
L_001CC7B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CC7D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CC7D0u) [[unlikely]] return; }
L_001CC7D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CC7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  goto L_001CC82C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 220u), 0u);  goto L_001CC828; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC824u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC824u) [[unlikely]] return; }
L_001CC824:
    st32((c.r[16].w[0] + 220u), 0u);
    c.budget -= 1;
L_001CC828:
    set32(c.r[4], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 1;
L_001CC82C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 232u)));  goto L_001CC84C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC844u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC844u) [[unlikely]] return; }
L_001CC844:
    st32((c.r[16].w[0] + 228u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 2;
L_001CC84C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001CC864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC85Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001D0AE0u; return; } if (c.pc != 0x001CC85Cu) [[unlikely]] return; }
L_001CC85C:
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_001CC864:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001CC8A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC878u); set32(c.r[4], 0u + 266u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001CC878u) [[unlikely]] return; }
L_001CC878:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CC8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC88Cu); set32(c.r[5], ld32((c.r[16].w[0] + 224u)));  if (depth < kMaxDepth) unit_002E(c, 48u, depth + 1u); else { c.pc = 0x001D8650u; return; } if (c.pc != 0x001CC88Cu) [[unlikely]] return; }
L_001CC88C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC8A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC8A4u); set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  if (depth < kMaxDepth) unit_002D(c, 301u, depth + 1u); else { c.pc = 0x001D7420u; return; } if (c.pc != 0x001CC8A4u) [[unlikely]] return; }
L_001CC8A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001CC8A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 20479ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC8D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001CC8E8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001CC914; } }
L_001CC8E8:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 212u)));  goto L_001CC8FC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_001CC914; } }
L_001CC8FC:
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[4].w[0] + 192u), c.r[6].w[0]);  goto L_001CC914; }
    set32(c.r[3], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 2;
L_001CC914:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 188u), c.r[6].w[0]);  goto L_001CC944; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001CC954; }
    st32((c.r[4].w[0] + 188u), c.r[6].w[0]);
    c.budget -= 1;
L_001CC944:
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC950u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 483u, depth + 1u); else { c.pc = 0x001C7AC0u; return; } if (c.pc != 0x001CC950u) [[unlikely]] return; }
L_001CC950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001CC954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CC960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC9BC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  goto L_001CC99C; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 3;
L_001CC99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC9A4u);  if (depth < kMaxDepth) unit_0029(c, 479u, depth + 1u); else { c.pc = 0x001C7A10u; return; } if (c.pc != 0x001CC9A4u) [[unlikely]] return; }
L_001CC9A4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 214u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 348u), c.r[4].w[0]);
    c.budget -= 6;
L_001CC9BC:
    set32(c.r[5], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001CCAA0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001CC9E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001CC9E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 352u));  goto L_001CC9FC; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 352u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 352u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CCA04; } }
L_001CC9FC:
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[5].w[0] + 352u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CCA04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 168u)));  goto L_001CCA58; }
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], 0u - 256u);
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_001CCA9C; } }
L_001CCA58:
    set32(c.r[4], 0u - 256u);
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 17;
L_001CCA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CCAA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CCAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCAC0u) [[unlikely]] return; }
L_001CCAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CCAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 64u, depth + 1u); else { c.pc = 0x001CC7F0u; return; } if (c.pc != 0x001CCAE4u) [[unlikely]] return; }
L_001CCAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 59u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x001CCAECu) [[unlikely]] return; }
L_001CCAEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCAF8u) [[unlikely]] return; }
L_001CCAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CCB10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CCDEC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 232u)));  goto L_001CCD24; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[7], ld32((c.r[16].w[0] + 200u)));  goto L_001CCCF0; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CCB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CCE50; } }
L_001CCB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB64u);  if (depth < kMaxDepth) unit_002B(c, 64u, depth + 1u); else { c.pc = 0x001CC7F0u; return; } if (c.pc != 0x001CCB64u) [[unlikely]] return; }
L_001CCB64:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 224u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[16].w[0] + 216u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 232u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + 12u);
    st32((c.r[16].w[0] + 180u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[16].w[0] + 204u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    st32((c.r[16].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 236u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001CCC14; } }
L_001CCBCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001CCC14; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 236u), c.f[0]);  if (t) { goto L_001CCC20; } }
L_001CCC14:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCBCCu | kUnwind; return; } goto L_001CCBCC; }
L_001CCC20:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 204u)));  goto L_001CCC44; }
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
L_001CCC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001CCC68; } }
L_001CCC4C:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001CCC74; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001CCC68:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 208u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCC4Cu | kUnwind; return; } goto L_001CCC4C; }
L_001CCC74:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  goto L_001CCCB4; }
    set32(c.r[6], ld32((c.r[16].w[0] + 180u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 184u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC94u); set32(c.r[5], c.r[5].w[0] + 14590u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CCC94u) [[unlikely]] return; }
L_001CCC94:
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 8;
L_001CCCB4:
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));  goto L_001CCCD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_001CCCE4; } }
L_001CCCD4:
    st16((c.r[16].w[0] + 212u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    st16((c.r[16].w[0] + 214u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
L_001CCCE4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
L_001CCCF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01070000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD04u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001CCD04u) [[unlikely]] return; }
L_001CCD04:
    st32((c.r[16].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 65u, depth + 1u); else { c.pc = 0x001D0A90u; return; } if (c.pc != 0x001CCD14u) [[unlikely]] return; }
L_001CCD14:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CCE4C; } }
L_001CCD24:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CCE4C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001CCD84; }
    set32(c.r[6], ld32((c.r[16].w[0] + 180u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD54u); set32(c.r[5], c.r[5].w[0] + 14590u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CCD54u) [[unlikely]] return; }
L_001CCD54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001D0AE0u; return; } if (c.pc != 0x001CCD6Cu) [[unlikely]] return; }
L_001CCD6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD7Cu); st32((c.r[16].w[0] + 232u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCD7Cu) [[unlikely]] return; }
L_001CCD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE4C; } }
L_001CCD84:
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD94u); set32(c.r[5], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001D0AE0u; return; } if (c.pc != 0x001CCD94u) [[unlikely]] return; }
L_001CCD94:
    set32(c.r[4], 0u + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDA0u); st32((c.r[16].w[0] + 232u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001CCDA0u) [[unlikely]] return; }
L_001CCDA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 220u), c.r[17].w[0]);  goto L_001CCDD4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDBCu); set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  if (depth < kMaxDepth) unit_002D(c, 299u, depth + 1u); else { c.pc = 0x001D73D0u; return; } if (c.pc != 0x001CCDBCu) [[unlikely]] return; }
L_001CCDBC:
    set32(c.r[6], ld32((c.r[16].w[0] + 216u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDCCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 197u, depth + 1u); else { c.pc = 0x00206240u; return; } if (c.pc != 0x001CCDCCu) [[unlikely]] return; }
L_001CCDCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 220u), c.r[17].w[0]);
    c.budget -= 2;
L_001CCDD4:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CCDE0u) [[unlikely]] return; }
L_001CCDE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001CCDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDF4u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001CCDF4u) [[unlikely]] return; }
L_001CCDF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 228u), c.r[2].w[0]);  goto L_001CCE18; }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 214u)));
    c.f[12] = ld32((c.r[16].w[0] + 236u));
    set32(c.r[7], ld32((c.r[16].w[0] + 188u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 464u, depth + 1u); else { c.pc = 0x001C7720u; return; } if (c.pc != 0x001CCE14u) [[unlikely]] return; }
L_001CCE14:
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 1;
L_001CCE18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CCE44; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCE3Cu) [[unlikely]] return; }
L_001CCE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE4C; } }
L_001CCE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCE4Cu) [[unlikely]] return; }
L_001CCE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CCE50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CCE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CCED4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001CCE8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CCF24; } }
L_001CCE8C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_001CCEA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCEA0u) [[unlikely]] return; }
L_001CCEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCF20; } }
L_001CCEA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  goto L_001CCEC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEB8u); set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  if (depth < kMaxDepth) unit_0029(c, 494u, depth + 1u); else { c.pc = 0x001C7C40u; return; } if (c.pc != 0x001CCEB8u) [[unlikely]] return; }
L_001CCEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_001CCECC; } }
L_001CCEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEC8u);  if (depth < kMaxDepth) unit_0029(c, 495u, depth + 1u); else { c.pc = 0x001C7C70u; return; } if (c.pc != 0x001CCEC8u) [[unlikely]] return; }
L_001CCEC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_001CCECC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_001CCED4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  goto L_001CCF04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEE8u); set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  if (depth < kMaxDepth) unit_0029(c, 496u, depth + 1u); else { c.pc = 0x001C7C90u; return; } if (c.pc != 0x001CCEE8u) [[unlikely]] return; }
L_001CCEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CCF20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCEFCu) [[unlikely]] return; }
L_001CCEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCF20; } }
L_001CCF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF0Cu);  if (depth < kMaxDepth) unit_0029(c, 496u, depth + 1u); else { c.pc = 0x001C7C90u; return; } if (c.pc != 0x001CCF0Cu) [[unlikely]] return; }
L_001CCF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CCF20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCF20u) [[unlikely]] return; }
L_001CCF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CCF24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CCF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CCF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCF54u) [[unlikely]] return; }
L_001CCF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CCFCC; } }
L_001CCF5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CCFA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001CCF94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CCF84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001CCFB4; } }
L_001CCF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF8Cu);  if (depth < kMaxDepth) unit_002B(c, 116u, depth + 1u); else { c.pc = 0x001CCFE0u; return; } if (c.pc != 0x001CCF8Cu) [[unlikely]] return; }
L_001CCF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCFC8; } }
L_001CCF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF9Cu);  if (depth < kMaxDepth) unit_002B(c, 132u, depth + 1u); else { c.pc = 0x001CD260u; return; } if (c.pc != 0x001CCF9Cu) [[unlikely]] return; }
L_001CCF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCFC8; } }
L_001CCFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCFACu);  if (depth < kMaxDepth) unit_002B(c, 135u, depth + 1u); else { c.pc = 0x001CD2A0u; return; } if (c.pc != 0x001CCFACu) [[unlikely]] return; }
L_001CCFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCFC8; } }
L_001CCFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCFBCu); set32(c.r[5], c.r[5].w[0] + 14616u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CCFBCu) [[unlikely]] return; }
L_001CCFBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCFC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CCFC8u) [[unlikely]] return; }
L_001CCFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CCFCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CCFE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_001CD01C; }
    set32(c.r[18], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_001CD01C:
    c.r[3].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001CD02C; }
    set32(c.r[17], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_001CD02C:
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 84u)));  goto L_001CD03C; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CD03C:
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 232u)));  goto L_001CD10C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_001CD05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001CD240; } }
L_001CD05C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[20].w[0] + 180u)));  goto L_001CD07C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD074u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD074u) [[unlikely]] return; }
L_001CD074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD23C; } }
L_001CD07C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 224u)));  goto L_001CD0A8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001CD0A4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD09Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD09Cu) [[unlikely]] return; }
L_001CD09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD23C; } }
L_001CD0A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 1;
L_001CD0A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01070000u);  goto L_001CD0E0; }
    st32((c.r[20].w[0] + 184u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 188u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 483u, depth + 1u); else { c.pc = 0x001C7AC0u; return; } if (c.pc != 0x001CD0CCu) [[unlikely]] return; }
L_001CD0CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD0D8u) [[unlikely]] return; }
L_001CD0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD23C; } }
L_001CD0E0:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0ECu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001CD0ECu) [[unlikely]] return; }
L_001CD0EC:
    st32((c.r[20].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 65u, depth + 1u); else { c.pc = 0x001D0A90u; return; } if (c.pc != 0x001CD0FCu) [[unlikely]] return; }
L_001CD0FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CD23C; } }
L_001CD10C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CD23C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 232u)));  goto L_001CD154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD12Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001CD12Cu) [[unlikely]] return; }
L_001CD12C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD138u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001CD138u) [[unlikely]] return; }
L_001CD138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD150; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD23C; } }
L_001CD150:
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    c.budget -= 1;
L_001CD154:
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_001CD170; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001CD1E4; } }
L_001CD170:
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD18Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 299u, depth + 1u); else { c.pc = 0x001D73D0u; return; } if (c.pc != 0x001CD18Cu) [[unlikely]] return; }
L_001CD18C:
    set32(c.r[17], ld32((c.r[20].w[0] + 220u)));
    st32((c.r[17].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_001CD1B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD1B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CD1B0u) [[unlikely]] return; }
L_001CD1B0:
    st32((c.r[17].w[0] + 340u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_001CD1B8:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_001CD1D8; }
    set32(c.r[5], ld32((c.r[20].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD1D4u); set32(c.r[4], ld32((c.r[20].w[0] + 224u)));  if (depth < kMaxDepth) unit_002D(c, 301u, depth + 1u); else { c.pc = 0x001D7420u; return; } if (c.pc != 0x001CD1D4u) [[unlikely]] return; }
L_001CD1D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_001CD1D8:
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 200u), c.r[19].w[0]);
    c.budget -= 3;
L_001CD1E4:
    set32(c.r[5], ld32((c.r[20].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD1F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001D0AE0u; return; } if (c.pc != 0x001CD1F0u) [[unlikely]] return; }
L_001CD1F0:
    st32((c.r[20].w[0] + 232u), 0u);
    st32((c.r[20].w[0] + 184u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 188u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD208u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 483u, depth + 1u); else { c.pc = 0x001C7AC0u; return; } if (c.pc != 0x001CD208u) [[unlikely]] return; }
L_001CD208:
    st32((c.r[20].w[0] + 192u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 196u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001CD234; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD22Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD22Cu) [[unlikely]] return; }
L_001CD22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD23C; } }
L_001CD234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD23Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD23Cu) [[unlikely]] return; }
L_001CD23C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001CD240:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CD260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD27Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 71u, depth + 1u); else { c.pc = 0x001CC8D0u; return; } if (c.pc != 0x001CD27Cu) [[unlikely]] return; }
L_001CD27C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD288u) [[unlikely]] return; }
L_001CD288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 72u, depth + 1u); else { c.pc = 0x001CC920u; return; } if (c.pc != 0x001CD2BCu) [[unlikely]] return; }
L_001CD2BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD2C8u) [[unlikely]] return; }
L_001CD2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 277u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001CD2F8u) [[unlikely]] return; }
L_001CD2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD30Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001CD30Cu) [[unlikely]] return; }
L_001CD30C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD318u); st32((c.r[16].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_002B(c, 143u, depth + 1u); else { c.pc = 0x001CD350u; return; } if (c.pc != 0x001CD318u) [[unlikely]] return; }
L_001CD318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21325ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD338u); set32(c.r[5], c.r[5].w[0] + 14640u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CD338u) [[unlikely]] return; }
L_001CD338:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD350:
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001CD380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD3ACu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001CD430u; return; } if (c.pc != 0x001CD3ACu) [[unlikely]] return; }
L_001CD3AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 176u);  goto L_001CD3C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD3C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001CD3C0u) [[unlikely]] return; }
L_001CD3C0:
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[2], c.r[16].w[0] + 176u);
    c.budget -= 2;
L_001CD3C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CD3F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD3F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CD3F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD3F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CD3F4u) [[unlikely]] return; }
L_001CD3F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CD3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD400u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001CD400u) [[unlikely]] return; }
L_001CD400:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001CD41C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CD418u) [[unlikely]] return; }
L_001CD418:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CD41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 172u)));  goto L_001CD468; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CD460u) [[unlikely]] return; }
L_001CD460:
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_001CD468:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD484; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CD480u) [[unlikely]] return; }
L_001CD480:
    st32((c.r[17].w[0] + 172u), 0u);
    c.budget -= 1;
L_001CD484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD48Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001CD48Cu) [[unlikely]] return; }
L_001CD48C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001CD4CC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 152u)));  goto L_001CD4B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD4ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x001CD4ACu) [[unlikely]] return; }
L_001CD4AC:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 2;
L_001CD4B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CD4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD4C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 321u, depth + 1u); else { c.pc = 0x001FBD10u; return; } if (c.pc != 0x001CD4C4u) [[unlikely]] return; }
L_001CD4C4:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_001CD4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CD4CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD50Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001CD50Cu) [[unlikely]] return; }
L_001CD50C:
    st32((c.r[18].w[0] + 160u), 0u);
    c.budget -= 1;
L_001CD510:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_001CD520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD568; } }
L_001CD520:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001CD534u) [[unlikely]] return; }
L_001CD534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_001CD554; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD54Cu); set32(c.r[5], c.r[5].w[0] + 14797u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CD54Cu) [[unlikely]] return; }
L_001CD54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD568; } }
L_001CD554:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD564u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001CD564u) [[unlikely]] return; }
L_001CD564:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CD568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CD580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD5A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CD5A8u) [[unlikely]] return; }
L_001CD5A8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CD5DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CD5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD5DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CD5DCu) [[unlikely]] return; }
L_001CD5DC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001CD634; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD5F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CD5F8u) [[unlikely]] return; }
L_001CD5F8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CD624; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001CD614; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD624; } }
L_001CD614:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD624u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CD624u) [[unlikely]] return; }
L_001CD624:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001CD638; } }
L_001CD630:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001CD634:
    set32(c.r[19], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 1;
L_001CD638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CD640u) [[unlikely]] return; }
L_001CD640:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CD670; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CD670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CD670u) [[unlikely]] return; }
L_001CD670:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CD680u) [[unlikely]] return; }
L_001CD680:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CD6B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001CD6B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CD6B0u) [[unlikely]] return; }
L_001CD6B0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CD6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001CD6E4u) [[unlikely]] return; }
L_001CD6E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001CD6F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD714; } }
L_001CD6F4:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  goto L_001CD708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD714; } }
L_001CD708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD710u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001CD710u) [[unlikely]] return; }
L_001CD710:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001CD714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD740u) [[unlikely]] return; }
L_001CD740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD764u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001CD430u; return; } if (c.pc != 0x001CD764u) [[unlikely]] return; }
L_001CD764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD76Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 143u, depth + 1u); else { c.pc = 0x001CD350u; return; } if (c.pc != 0x001CD76Cu) [[unlikely]] return; }
L_001CD76C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD778u) [[unlikely]] return; }
L_001CD778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7BCu); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001CD7BCu) [[unlikely]] return; }
L_001CD7BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 40u);  goto L_001CD850; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CD7DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CD890; } }
L_001CD7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7E4u);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001CD430u; return; } if (c.pc != 0x001CD7E4u) [[unlikely]] return; }
L_001CD7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 143u, depth + 1u); else { c.pc = 0x001CD350u; return; } if (c.pc != 0x001CD7ECu) [[unlikely]] return; }
L_001CD7EC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001CD7FCu) [[unlikely]] return; }
L_001CD7FC:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD810u); st64((c.r[29].w[0] + 72u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001CD810u) [[unlikely]] return; }
L_001CD810:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD82Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001CD82Cu) [[unlikely]] return; }
L_001CD82C:
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01150000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD840u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x001CD840u) [[unlikely]] return; }
L_001CD840:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CD88C; } }
L_001CD850:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD85Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001CD85Cu) [[unlikely]] return; }
L_001CD85C:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD878u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001CD878u) [[unlikely]] return; }
L_001CD878:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD88Cu); st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD88Cu) [[unlikely]] return; }
L_001CD88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CD890:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CD8A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 20u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CDD48; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 172u)));  goto L_001CDD1C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 172u)));  goto L_001CDCDC; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_001CDC94; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 156u)));  goto L_001CDC1C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 156u)));  goto L_001CDBD4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 360u);  goto L_001CDB20; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_001CD9A4; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001CD964; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001CD93C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001CDE10; } }
L_001CD938:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001CD93C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD948u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001CD430u; return; } if (c.pc != 0x001CD948u) [[unlikely]] return; }
L_001CD948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD950u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 143u, depth + 1u); else { c.pc = 0x001CD350u; return; } if (c.pc != 0x001CD950u) [[unlikely]] return; }
L_001CD950:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD95Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CD95Cu) [[unlikely]] return; }
L_001CD95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDE0C; } }
L_001CD964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD96Cu);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001CD430u; return; } if (c.pc != 0x001CD96Cu) [[unlikely]] return; }
L_001CD96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD974u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 143u, depth + 1u); else { c.pc = 0x001CD350u; return; } if (c.pc != 0x001CD974u) [[unlikely]] return; }
L_001CD974:
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_001CD998; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD990u); set32(c.r[5], c.r[5].w[0] + 14821u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CD990u) [[unlikely]] return; }
L_001CD990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD938u | kUnwind; return; } goto L_001CD938; } }
L_001CD998:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
L_001CD9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9ACu);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001CD9ACu) [[unlikely]] return; }
L_001CD9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9B4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001CD9B4u) [[unlikely]] return; }
L_001CD9B4:
    set32(c.r[5], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9C0u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x001CD9C0u) [[unlikely]] return; }
L_001CD9C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], c.r[6].w[0] + 14844u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001CD9D8u) [[unlikely]] return; }
L_001CD9D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_001CDA30; } }
L_001CD9EC:
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA00u); set32(c.r[6], c.r[6].w[0] + 14855u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001CDA00u) [[unlikely]] return; }
L_001CDA00:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001CDA48; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA20u); set32(c.r[6], c.r[6].w[0] + 14844u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001CDA20u) [[unlikely]] return; }
L_001CDA20:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 4;
L_001CDA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA38u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001CDA38u) [[unlikely]] return; }
L_001CDA38:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD9ECu | kUnwind; return; } goto L_001CD9EC; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001CDA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA50u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001CDA50u) [[unlikely]] return; }
L_001CDA50:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_001CDA74; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA6Cu); set32(c.r[5], c.r[5].w[0] + 14861u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDA6Cu) [[unlikely]] return; }
L_001CDA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD938u | kUnwind; return; } goto L_001CD938; } }
L_001CDA74:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 164u);
    set32(c.r[6], c.r[6].w[0] + 14888u);
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA94u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001CDA94u) [[unlikely]] return; }
L_001CDA94:
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_001CDAB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CDAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CDAB8u) [[unlikely]] return; }
L_001CDAB8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 176u), 0u);  goto L_001CDB10; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CDAD4u) [[unlikely]] return; }
L_001CDAD4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CDB00; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001CDAF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDB00; } }
L_001CDAF0:
    set32(c.r[4], c.r[19].w[0] + 176u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CDB00u) [[unlikely]] return; }
L_001CDB00:
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  if (t) { goto L_001CDB14; } }
L_001CDB0C:
    st32((c.r[19].w[0] + 176u), 0u);
    c.budget -= 1;
L_001CDB10:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_001CDB14:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 360u);
    c.budget -= 3;
L_001CDB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB28u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001CDB28u) [[unlikely]] return; }
L_001CDB28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 156u), c.r[17].w[0]);  goto L_001CDB94; }
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));  goto L_001CDB44; }
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001CDB44:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB50u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001CDB50u) [[unlikely]] return; }
L_001CDB50:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 152u);  if (t) { goto L_001CDB6C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_001CDB70; } }
L_001CDB6C:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001CDB70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB8Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x001CDB8Cu) [[unlikely]] return; }
L_001CDB8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 156u), c.r[17].w[0]);
    c.budget -= 2;
L_001CDB94:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 88u)));  goto L_001CDBC8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CDBC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001CDBC4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDBC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CDBC4u) [[unlikely]] return; }
L_001CDBC4:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_001CDBC8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
L_001CDBD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDE0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_001CDC10; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC08u); set32(c.r[5], c.r[5].w[0] + 14893u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDC08u) [[unlikely]] return; }
L_001CDC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD938u | kUnwind; return; } goto L_001CD938; } }
L_001CDC10:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
L_001CDC1C:
    set32(c.r[17], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 172u, depth + 1u); else { c.pc = 0x00205E90u; return; } if (c.pc != 0x001CDC28u) [[unlikely]] return; }
L_001CDC28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 300u, depth + 1u); else { c.pc = 0x001CE680u; return; } if (c.pc != 0x001CDC34u) [[unlikely]] return; }
L_001CDC34:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CDC60; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC58u); set32(c.r[5], c.r[5].w[0] + 14915u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDC58u) [[unlikely]] return; }
L_001CDC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD938u | kUnwind; return; } goto L_001CD938; } }
L_001CDC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC68u);  if (depth < kMaxDepth) unit_0039(c, 171u, depth + 1u); else { c.pc = 0x00205E80u; return; } if (c.pc != 0x001CDC68u) [[unlikely]] return; }
L_001CDC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CDC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 301u, depth + 1u); else { c.pc = 0x001CE6A0u; return; } if (c.pc != 0x001CDC78u) [[unlikely]] return; }
L_001CDC78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC88u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001CDC88u) [[unlikely]] return; }
L_001CDC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_001CDD4C; } }
L_001CDC90:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_001CDC94:
    set32(c.r[4], 0u + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCA0u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001CDCA0u) [[unlikely]] return; }
L_001CDCA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 172u), c.r[4].w[0]);  goto L_001CDCCC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCC4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x001CDCC4u) [[unlikely]] return; }
L_001CDCC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 172u), c.r[4].w[0]);
    c.budget -= 2;
L_001CDCCC:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CDE0C; } }
L_001CDCDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDE0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_001CDD14; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD0Cu); set32(c.r[5], c.r[5].w[0] + 14972u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDD0Cu) [[unlikely]] return; }
L_001CDD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD938u | kUnwind; return; } goto L_001CD938; } }
L_001CDD14:
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 2;
L_001CDD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD24u);  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x001CDD24u) [[unlikely]] return; }
L_001CDD24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 301u, depth + 1u); else { c.pc = 0x001CE6A0u; return; } if (c.pc != 0x001CDD30u) [[unlikely]] return; }
L_001CDD30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD48u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001CDD48u) [[unlikely]] return; }
L_001CDD48:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001CDD4C:
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 172u)));  goto L_001CDD74; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CDD6Cu) [[unlikely]] return; }
L_001CDD6C:
    st32((c.r[19].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 2;
L_001CDD74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CDD90; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CDD8Cu) [[unlikely]] return; }
L_001CDD8C:
    st32((c.r[19].w[0] + 172u), 0u);
    c.budget -= 1;
L_001CDD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD98u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001CDD98u) [[unlikely]] return; }
L_001CDD98:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 176u)));  goto L_001CDDBC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDB4u); set32(c.r[5], c.r[5].w[0] + 14982u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDDB4u) [[unlikely]] return; }
L_001CDDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD938u | kUnwind; return; } goto L_001CD938; } }
L_001CDDBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_001CDDC8; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001CDDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDD0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 301u, depth + 1u); else { c.pc = 0x001CE6A0u; return; } if (c.pc != 0x001CDDD0u) [[unlikely]] return; }
L_001CDDD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[19].w[0] + 164u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDE8u); set32(c.r[6], c.r[6].w[0] + 14855u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001CDDE8u) [[unlikely]] return; }
L_001CDDE8:
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDFCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 317u, depth + 1u); else { c.pc = 0x001FBCD0u; return; } if (c.pc != 0x001CDDFCu) [[unlikely]] return; }
L_001CDDFC:
    st32((c.r[19].w[0] + 152u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CDE0Cu) [[unlikely]] return; }
L_001CDE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001CDE10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001CDE30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001CDE48u) [[unlikely]] return; }
L_001CDE48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_001CDE78; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE64u); set32(c.r[5], c.r[5].w[0] + 14999u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDE64u) [[unlikely]] return; }
L_001CDE64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CDE70u) [[unlikely]] return; }
L_001CDE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CDFAC; } }
L_001CDE78:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_001CDEA4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE90u); set32(c.r[5], c.r[5].w[0] + 15016u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDE90u) [[unlikely]] return; }
L_001CDE90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CDE9Cu) [[unlikely]] return; }
L_001CDE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDFA8; } }
L_001CDEA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 148u)));  goto L_001CDF74; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001CDEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDFA8; } }
L_001CDEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 148u)));  goto L_001CDF10; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[17].w[0] + 164u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDEF0u); set32(c.r[6], c.r[6].w[0] + 15034u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001CDEF0u) [[unlikely]] return; }
L_001CDEF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF08u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 322u, depth + 1u); else { c.pc = 0x001FBD20u; return; } if (c.pc != 0x001CDF08u) [[unlikely]] return; }
L_001CDF08:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_001CDF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001CDF18u) [[unlikely]] return; }
L_001CDF18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_001CDF44; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF30u); set32(c.r[5], c.r[5].w[0] + 15041u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CDF30u) [[unlikely]] return; }
L_001CDF30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CDF3Cu) [[unlikely]] return; }
L_001CDF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDFA8; } }
L_001CDF44:
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF60u); set32(c.r[16], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0035(c, 33u, depth + 1u); else { c.pc = 0x001F43C0u; return; } if (c.pc != 0x001CDF60u) [[unlikely]] return; }
L_001CDF60:
    st32((c.r[2].w[0] + 484u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CDFA8; } }
L_001CDF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001CDF7Cu) [[unlikely]] return; }
L_001CDF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CDFA8; } }
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFA8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CDFA8u) [[unlikely]] return; }
L_001CDFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CDFAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CDFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFD0u); set32(c.r[4], 0u + 277u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001CDFD0u) [[unlikely]] return; }
L_001CDFD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_001CDFE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CDFE8; } }
L_001CDFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFE8u);  if (depth < kMaxDepth) unit_002B(c, 170u, depth + 1u); else { c.pc = 0x001CD6D0u; return; } if (c.pc != 0x001CDFE8u) [[unlikely]] return; }
L_001CDFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CE000:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 96u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[11].d[0]);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 60u), 0u);  if (t) { goto L_001CE1FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_002B[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CE054:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001CE06C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CE074; } }
L_001CE06C:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001CE074:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] - 288u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE0B8u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0022(c, 9u, depth + 1u); else { c.pc = 0x001A8170u; return; } if (c.pc != 0x001CE0B8u) [[unlikely]] return; }
L_001CE0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_001CE20C; } }
L_001CE0C0:
    set32(c.r[17], ld32((c.r[28].w[0] - 31852u)));
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE0D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001CE0D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CE114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE0E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CE0E8u) [[unlikely]] return; }
L_001CE0E8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CE114; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE104; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE114; } }
L_001CE104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE114u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CE114u) [[unlikely]] return; }
L_001CE114:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CE24C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CE13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE13Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CE13Cu) [[unlikely]] return; }
L_001CE13C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE24C; } }
L_001CE148:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001CE160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CE168; } }
L_001CE160:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001CE168:
    set32(c.r[5], ld32((c.r[28].w[0] - 31864u)));
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE17Cu); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 9u, depth + 1u); else { c.pc = 0x001A8170u; return; } if (c.pc != 0x001CE17Cu) [[unlikely]] return; }
L_001CE17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE208; } }
L_001CE184:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001CE19C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CE1A4; } }
L_001CE19C:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001CE1A4:
    set32(c.r[5], ld32((c.r[28].w[0] - 31860u)));
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1B8u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 9u, depth + 1u); else { c.pc = 0x001A8170u; return; } if (c.pc != 0x001CE1B8u) [[unlikely]] return; }
L_001CE1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE208; } }
L_001CE1C0:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001CE1D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CE1E0; } }
L_001CE1D8:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001CE1E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 31856u)));
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1F4u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 9u, depth + 1u); else { c.pc = 0x001A8170u; return; } if (c.pc != 0x001CE1F4u) [[unlikely]] return; }
L_001CE1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE208; } }
L_001CE1FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE208u); set32(c.r[4], c.r[4].w[0] + 15439u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CE208u) [[unlikely]] return; }
L_001CE208:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_001CE20C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_001CE224; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001CE224:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CE24C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CE248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CE248u) [[unlikely]] return; }
L_001CE248:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CE24C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001CE260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CE284; } }
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_001CE2E0; }
L_001CE284:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE290u); set32(c.r[4], c.r[4].w[0] + 15457u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CE290u) [[unlikely]] return; }
L_001CE290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 15484u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001CE2D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2ACu); set32(c.r[4], c.r[4].w[0] + 15484u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CE2ACu) [[unlikely]] return; }
L_001CE2AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 15484u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CE2C4; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CE2CC; }
L_001CE2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CE2D8; } }
L_001CE2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CE2D4u) [[unlikely]] return; }
L_001CE2D4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CE2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001CE340; } }
L_001CE2E0:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 240u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CE304; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001CE304:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001CE33C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE314u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CE314u) [[unlikely]] return; }
L_001CE314:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CE324; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE32C; }
L_001CE324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CE33C; } }
L_001CE32C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE338u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CE338u) [[unlikely]] return; }
L_001CE338:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CE33C:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001CE340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 259u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE378u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001CE378u) [[unlikely]] return; }
L_001CE378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13312u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001CE398; }
    st32((c.r[28].w[0] - 30528u), c.r[16].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CE398:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 172u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE398u | kUnwind; return; } goto L_001CE398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3BCu); set32(c.r[4], 0u + 344u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001CE3BCu) [[unlikely]] return; }
L_001CE3BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE3D0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 255u, depth + 1u); else { c.pc = 0x00202780u; return; } if (c.pc != 0x001CE3D0u) [[unlikely]] return; }
L_001CE3D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3E4u); set32(c.r[5], c.r[5].w[0] + 15488u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CE3E4u) [[unlikely]] return; }
L_001CE3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D450000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[2].d[0] | 19789ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CE420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CE49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13312u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  goto L_001CE45C; }
    st32((c.r[28].w[0] - 30528u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 2;
L_001CE45C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE47C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE474u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CE474u) [[unlikely]] return; }
L_001CE474:
    st32((c.r[17].w[0] + 196u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001CE47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001CE484u) [[unlikely]] return; }
L_001CE484:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE4A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE49Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CE49Cu) [[unlikely]] return; }
L_001CE49C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CE4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 7;
L_001CE4DC:
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_001CE520; }
    set32(c.r[7], ld32((c.r[2].w[0] + 148u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15609u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] - 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[9].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE518u); set32(c.r[8], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001CE518u) [[unlikely]] return; }
L_001CE518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001CE540; } }
L_001CE520:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 192u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE53Cu); set32(c.r[5], c.r[5].w[0] + 15638u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001CE53Cu) [[unlikely]] return; }
L_001CE53C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CE540:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE4DCu | kUnwind; return; } goto L_001CE4DC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE560:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_001CE638; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001CE590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CE674; } }
L_001CE590:
    set32(c.r[5], c.r[16].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE59Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001CE59Cu) [[unlikely]] return; }
L_001CE59C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE5ACu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001CE5ACu) [[unlikely]] return; }
L_001CE5AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CE5B4:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 148u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE5B4u | kUnwind; return; } goto L_001CE5B4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 276u);  goto L_001CE600; }
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 188u)));  goto L_001CE61C; }
    set32(c.r[4], 0u + 276u);
    c.budget -= 1;
L_001CE600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE608u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001CE608u) [[unlikely]] return; }
L_001CE608:
    set32(c.r[6], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE618u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 452u, depth + 1u); else { c.pc = 0x001D3E00u; return; } if (c.pc != 0x001CE618u) [[unlikely]] return; }
L_001CE618:
    set32(c.r[6], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 1;
L_001CE61C:
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE628u); set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  if (depth < kMaxDepth) unit_0038(c, 270u, depth + 1u); else { c.pc = 0x00202A80u; return; } if (c.pc != 0x001CE628u) [[unlikely]] return; }
L_001CE628:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
L_001CE638:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE670; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE65Cu); set32(c.r[5], c.r[5].w[0] + 15658u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001CE65Cu) [[unlikely]] return; }
L_001CE65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE664u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 286u, depth + 1u); else { c.pc = 0x001CE4C0u; return; } if (c.pc != 0x001CE664u) [[unlikely]] return; }
L_001CE664:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CE670u) [[unlikely]] return; }
L_001CE670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CE674:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CE680:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CE698; }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 3;
L_001CE698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CE6A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CE6B8; }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
L_001CE6B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CE6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[12], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 5;
    if (c.r[12].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 12u)));  goto L_001CE6E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE6E0u); set32(c.r[4], c.r[4].w[0] + 15683u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CE6E0u) [[unlikely]] return; }
L_001CE6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CE74C; } }
L_001CE6E8:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    if (c.r[2].sd[0] >= 0) { st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  goto L_001CE72C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE724u); set32(c.r[4], c.r[4].w[0] + 15713u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CE724u) [[unlikely]] return; }
L_001CE724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CE74C; } }
L_001CE72C:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE748u); st32((c.r[29].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 423u, depth + 1u); else { c.pc = 0x001CFD80u; return; } if (c.pc != 0x001CE748u) [[unlikely]] return; }
L_001CE748:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CE74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CE760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_001CE788; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE780u); set32(c.r[4], c.r[4].w[0] + 15683u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CE780u) [[unlikely]] return; }
L_001CE780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CE790; } }
L_001CE788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_001CE790:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CE7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 257u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001CE7BCu) [[unlikely]] return; }
L_001CE7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13376u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001CE7DC; }
    st32((c.r[28].w[0] - 30524u), c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CE7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7E4u); set32(c.r[4], 0u + 872u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001CE7E4u) [[unlikely]] return; }
L_001CE7E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] << 3);  goto L_001CE7FC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x001CE7F8u) [[unlikely]] return; }
L_001CE7F8:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_001CE7FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 15888u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[12], c.r[12].w[0] + 16032u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 752u), c.r[5].w[0]);  if (t) { goto L_001CE878; } }
L_001CE828:
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[11], c.r[12].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], ld32((c.r[11].w[0] + 24u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[5].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 6u)));
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[5].d[0] = ld64((c.r[11].w[0] + 8u));
    st16((c.r[10].w[0] + 112u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[10].w[0] + 114u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[10].w[0] + 116u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[10].w[0] + 118u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld64((c.r[11].w[0] + 16u));
    st64((c.r[10].w[0] + 120u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 128u), c.r[2].d[0]);
    c.budget -= 20;
L_001CE878:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[4].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE828u | kUnwind; return; } goto L_001CE828; }
    set32(c.r[4], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 152u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 156u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), 0u);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 168u), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 172u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE7DCu | kUnwind; return; } goto L_001CE7DC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE8E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CE98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13376u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_001CE91C; }
    st32((c.r[28].w[0] - 30524u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_001CE91C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_001CE944; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), 0u);  goto L_001CE940; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE93Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CE93Cu) [[unlikely]] return; }
L_001CE93C:
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_001CE940:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_001CE944:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE96C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 176u), 0u);  goto L_001CE968; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE964u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CE964u) [[unlikely]] return; }
L_001CE964:
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 1;
L_001CE968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CE96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001CE974u) [[unlikely]] return; }
L_001CE974:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE98Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CE98Cu) [[unlikely]] return; }
L_001CE98C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CE990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 322u, depth + 1u); else { c.pc = 0x001CE9E0u; return; } if (c.pc != 0x001CE9C4u) [[unlikely]] return; }
L_001CE9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 368u, depth + 1u); else { c.pc = 0x001CF3C0u; return; } if (c.pc != 0x001CE9CCu) [[unlikely]] return; }
L_001CE9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CE9E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[21] = ld32((c.r[2].w[0] + 15840u));
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[20] = ld32((c.r[2].w[0] + 15852u));
    c.budget -= 18;
L_001CEA28:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_001CEA3C; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CEA40; } }
L_001CEA3C:
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001CEA40:
    set32(c.r[3], c.r[19].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[17], c.r[18].w[0] + 148u);  if (t) { goto L_001CEA6C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001CEA88; } }
L_001CEA6C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001CEA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    st32((c.r[5].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 136u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEACCu); set32(c.r[21], c.r[18].w[0] + 152u);  if (depth < kMaxDepth) unit_002B(c, 329u, depth + 1u); else { c.pc = 0x001CED50u; return; } if (c.pc != 0x001CEACCu) [[unlikely]] return; }
L_001CEACC:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[18].w[0] + 156u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 136u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB04u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 329u, depth + 1u); else { c.pc = 0x001CED50u; return; } if (c.pc != 0x001CEB04u) [[unlikely]] return; }
L_001CEB04:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[4].d[0] = ld64((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], ld32((c.r[21].w[0])));  goto L_001CEB54; }
    set32(c.r[7], ld32((c.r[21].w[0])));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[4].d[0]) { c.f[22] = c.f[20];  goto L_001CEB88; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001CEB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[21];  if (t) { goto L_001CEB88; } }
L_001CEB48:
    c.f[22] = c.f[20];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEB88; } }
L_001CEB54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 15856u);
    set32(c.r[3], c.r[3].w[0] + 15840u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[22] = ld32((c.r[3].w[0]));
    c.budget -= 13;
L_001CEB88:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001CEBB0; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[23] = 0u;
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.f[22] = c.f[22] ^ fp::kSign;  goto L_001CEBA8; }
L_001CEBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0])));  if (t) { goto L_001CEC44; } }
L_001CEBB0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001CEBD4; }
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.f[22] = c.f[22] ^ fp::kSign;  goto L_001CEBC4; }
L_001CEBC4:
    c.f[23] = c.f[22];
    c.f[22] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEC40; } }
L_001CEBD4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15808u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC04u);  if (depth < kMaxDepth) unit_0005(c, 116u, depth + 1u); else { c.pc = 0x00136BE8u; return; } if (c.pc != 0x001CEC04u) [[unlikely]] return; }
L_001CEC04:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x001CEC1Cu) [[unlikely]] return; }
L_001CEC1C:
    c.f[23] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x001CEC28u) [[unlikely]] return; }
L_001CEC28:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.f[22] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);  if (t) { goto L_001CEC40; } }
    c.f[23] = c.f[23] ^ fp::kSign;
    c.f[22] = c.f[22] ^ fp::kSign;
    c.budget -= 2;
L_001CEC40:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001CEC44:
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = c.f[2];  if (t) { goto L_001CEC70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_001CEC7C; } }
L_001CEC70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
L_001CEC7C:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 2ull;  goto L_001CEC90; }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 2;
L_001CEC90:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 4ull;  goto L_001CECA4; }
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 2;
L_001CECA4:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_001CECB8; }
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 2;
L_001CECB8:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 3ull;  goto L_001CECCC; }
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 2;
L_001CECCC:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 160u), c.f[23]);  goto L_001CECF8; }
    c.r[3].d[0] = c.r[4].d[0] & 12ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CECF4; } }
    c.f[0] = ld32((c.r[28].w[0] - 32188u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
L_001CECF4:
    st32((c.r[18].w[0] + 160u), c.f[23]);
    c.budget -= 1;
L_001CECF8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[18].w[0] + 164u), c.f[22]);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[18].w[0] + 168u), c.f[2]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 172u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEA28u | kUnwind; return; } goto L_001CEA28; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CED50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CED74; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_001CED74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 15776u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] + 0ull;  goto L_001CED98; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_001CED98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEDA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CEDBC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CEDBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEDD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CEDEC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CEDEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEE00:
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CEE1C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CEE1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEE30:
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CEE4C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CEE4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEE60:
    set32(c.r[2], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 148u)));  goto L_001CEE78; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEF18; } }
L_001CEE78:
    c.f[0] = 0u;
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001CEEA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CEEA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001CEEB0; }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001CEEB0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);  goto L_001CEECC; }
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 2;
L_001CEECC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);  goto L_001CEEE8; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 2;
L_001CEEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CEF18; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_001CEF18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEF20:
    set32(c.r[7], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { st32((c.r[5].w[0]), 0u);  goto L_001CEF50; }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 164u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_001CEF54; } }
L_001CEF50:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_001CEF54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEF60:
    set32(c.r[7], ld32((c.r[28].w[0] - 30524u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { st32((c.r[5].w[0]), 0u);  goto L_001CEFA0; }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 172u));
    c.f[0] = ld32((c.r[3].w[0] + 164u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_001CEFA4; } }
L_001CEFA0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_001CEFA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFC8u); set32(c.r[4], 0u + 204u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001CEFC8u) [[unlikely]] return; }
L_001CEFC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001CEFE0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 308u, depth + 1u); else { c.pc = 0x001CE7A0u; return; } if (c.pc != 0x001CEFDCu) [[unlikely]] return; }
L_001CEFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CEFE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CEFF0:
    set32(c.r[5], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[4].w[0] + 40u);
    c.budget -= 2;
L_001CEFF8:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEFF8u | kUnwind; return; } goto L_001CEFF8; } }
    st32((c.r[4].w[0] + 44u), 0u);
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
L_001CF028:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF028u | kUnwind; return; } goto L_001CF028; } }
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001CF070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[3], c.r[16].w[0] + 40u);
    c.budget -= 6;
L_001CF088:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF088u | kUnwind; return; } goto L_001CF088; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF0B0u); st32((c.r[16].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_002B(c, 346u, depth + 1u); else { c.pc = 0x001CF0D0u; return; } if (c.pc != 0x001CF0B0u) [[unlikely]] return; }
L_001CF0B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF0D0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_001CF0E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF138; } }
L_001CF0E0:
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001CF0F0:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF0F0u | kUnwind; return; } goto L_001CF0F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_001CF138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CF140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CF19C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_001CF174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF170u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 80u, depth + 1u); else { c.pc = 0x001D0CE0u; return; } if (c.pc != 0x001CF170u) [[unlikely]] return; }
L_001CF170:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_001CF174:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001CF188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF184u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 82u, depth + 1u); else { c.pc = 0x001D0D40u; return; } if (c.pc != 0x001CF184u) [[unlikely]] return; }
L_001CF184:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001CF188:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CF1A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF19Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001CF19Cu) [[unlikely]] return; }
L_001CF19C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CF1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CF1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001CF1DCu) [[unlikely]] return; }
L_001CF1DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + 13440u);
    set32(c.r[3], c.r[17].w[0] + 88u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_001CF1F0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF1F0u | kUnwind; return; } goto L_001CF1F0; } }
    st32((c.r[17].w[0] + 124u), 0u);
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF21Cu); st32((c.r[17].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001CF21Cu) [[unlikely]] return; }
L_001CF21C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 21837ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF230u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 74u, depth + 1u); else { c.pc = 0x001D0BE0u; return; } if (c.pc != 0x001CF230u) [[unlikely]] return; }
L_001CF230:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF248u); st16((c.r[17].w[0] + 132u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CF248u) [[unlikely]] return; }
L_001CF248:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CF260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CF308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF290u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 75u, depth + 1u); else { c.pc = 0x001D0C30u; return; } if (c.pc != 0x001CF290u) [[unlikely]] return; }
L_001CF290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  if (t) { goto L_001CF2A4; } }
L_001CF298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2A0u); set32(c.r[18], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001CF2A0u) [[unlikely]] return; }
L_001CF2A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001CF2A4:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF298u | kUnwind; return; } goto L_001CF298; } }
    set32(c.r[2], c.r[17].w[0] + 124u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CF2E8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CF2E4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CF2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CF2E4u) [[unlikely]] return; }
L_001CF2E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CF2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001CF2F0u) [[unlikely]] return; }
L_001CF2F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CF30C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CF308u) [[unlikely]] return; }
L_001CF308:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CF30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CF330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CF3A4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 31912u)));  goto L_001CF36C; }
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001CF36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 29u, depth + 1u); else { c.pc = 0x001D0510u; return; } if (c.pc != 0x001CF374u) [[unlikely]] return; }
L_001CF374:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001CF388; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 16257u);  if (t) { goto L_001CF38C; } }
L_001CF388:
    set32(c.r[8], c.r[8].w[0] + 16262u);
    c.budget -= 1;
L_001CF38C:
    set32(c.r[7], ld32((c.r[17].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF3A4u); set32(c.r[4], c.r[4].w[0] + 16267u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001CF3A4u) [[unlikely]] return; }
L_001CF3A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CF3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF3D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 29u, depth + 1u); else { c.pc = 0x001D0510u; return; } if (c.pc != 0x001CF3D8u) [[unlikely]] return; }
L_001CF3D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001CF7F4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001CF6AC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_001CF4B8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), 0u);  goto L_001CF410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF7F0; } }
L_001CF40C:
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_001CF410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CF7F0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001CF494; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF458u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 82u, depth + 1u); else { c.pc = 0x001D0D40u; return; } if (c.pc != 0x001CF458u) [[unlikely]] return; }
L_001CF458:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF40Cu | kUnwind; return; } goto L_001CF40C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF40Cu | kUnwind; return; } goto L_001CF40C; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF40Cu | kUnwind; return; } goto L_001CF40C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF48Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CF48Cu) [[unlikely]] return; }
L_001CF48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF40Cu | kUnwind; return; } goto L_001CF40C; } }
L_001CF494:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 108u)));  goto L_001CF53C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 69u, depth + 1u); else { c.pc = 0x001D0B60u; return; } if (c.pc != 0x001CF4A4u) [[unlikely]] return; }
L_001CF4A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_001CF538; } }
L_001CF4B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001CF4B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[17].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CF7F0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001CF538; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 82u, depth + 1u); else { c.pc = 0x001D0D40u; return; } if (c.pc != 0x001CF4FCu) [[unlikely]] return; }
L_001CF4FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF530u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CF530u) [[unlikely]] return; }
L_001CF530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
L_001CF538:
    set32(c.r[16], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 1;
L_001CF53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CF558; } }
L_001CF544:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 72u, depth + 1u); else { c.pc = 0x001D0BB0u; return; } if (c.pc != 0x001CF554u) [[unlikely]] return; }
L_001CF554:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001CF558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CF568; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF544u | kUnwind; return; } goto L_001CF544; }
L_001CF568:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[2].w[0] + 8u));  goto L_001CF5C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF57Cu); set32(c.r[4], c.r[4].w[0] + 16291u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CF57Cu) [[unlikely]] return; }
L_001CF57C:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF58Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 82u, depth + 1u); else { c.pc = 0x001D0D40u; return; } if (c.pc != 0x001CF58Cu) [[unlikely]] return; }
L_001CF58C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CF5C0u) [[unlikely]] return; }
L_001CF5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
L_001CF5C8:
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 112u), c.f[2]);
    st32((c.r[17].w[0] + 116u), c.f[1]);
    st32((c.r[17].w[0] + 120u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_001CF600; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CF600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CF600u) [[unlikely]] return; }
L_001CF600:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 124u), 0u);  goto L_001CF658; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CF61Cu) [[unlikely]] return; }
L_001CF61C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CF648; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001CF638; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF648; } }
L_001CF638:
    set32(c.r[4], c.r[17].w[0] + 124u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF648u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CF648u) [[unlikely]] return; }
L_001CF648:
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_001CF65C; } }
L_001CF654:
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 1;
L_001CF658:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_001CF65C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_001CF668:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 56u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF668u | kUnwind; return; } goto L_001CF668; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
L_001CF6AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[25], c.r[17].w[0] + 112u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6E0u); st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 165u, depth + 1u); else { c.pc = 0x00141FC0u; return; } if (c.pc != 0x001CF6E0u) [[unlikely]] return; }
L_001CF6E0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 144u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 128ull;  goto L_001CF754; }
    c.r[3].d[0] = c.r[4].d[0] & 191ull;
    st8((c.r[17].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 144u));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CF750; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001CF718:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF718u | kUnwind; return; } goto L_001CF718; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
L_001CF750:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001CF754:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), 0u);  goto L_001CF7F0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 144u));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[17].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 239ull;
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 82u, depth + 1u); else { c.pc = 0x001D0D40u; return; } if (c.pc != 0x001CF7A8u) [[unlikely]] return; }
L_001CF7A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_001CF7E0; }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CF7DC; } }
    c.r[3].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CF7DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CF7DCu) [[unlikely]] return; }
L_001CF7DC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001CF7E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 100u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4B4u | kUnwind; return; } goto L_001CF4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF40Cu | kUnwind; return; } goto L_001CF40C; } }
L_001CF7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CF7F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CF810:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 128u), c.r[5].w[0]);  c.pc = t; return; }
L_001CF830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF850u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001CF850u) [[unlikely]] return; }
L_001CF850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF864; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF864u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 343u, depth + 1u); else { c.pc = 0x001CF070u; return; } if (c.pc != 0x001CF864u) [[unlikely]] return; }
L_001CF864:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_001CF878; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CF8B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_001CF878:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 60u)));  goto L_001CF890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_001CF8A8; } }
L_001CF888:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 2;
L_001CF890:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF888u | kUnwind; return; } goto L_001CF888; } }
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_001CF8A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001CF8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CF8D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8F0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CF8F0u) [[unlikely]] return; }
L_001CF8F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF904u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CF904u) [[unlikely]] return; }
L_001CF904:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF914u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CF914u) [[unlikely]] return; }
L_001CF914:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CF930:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF958u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CF958u) [[unlikely]] return; }
L_001CF958:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF97Cu); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CF97Cu) [[unlikely]] return; }
L_001CF97C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF98Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CF98Cu) [[unlikely]] return; }
L_001CF98C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001CF9B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CF9E0u) [[unlikely]] return; }
L_001CF9E0:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 96u), c.r[18].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA10u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFA10u) [[unlikely]] return; }
L_001CFA10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFA20u) [[unlikely]] return; }
L_001CFA20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001CFA40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA78u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CFA78u) [[unlikely]] return; }
L_001CFA78:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    st32((c.r[29].w[0] + 112u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAB4u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFAB4u) [[unlikely]] return; }
L_001CFAB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFAC4u) [[unlikely]] return; }
L_001CFAC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001CFAF0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB30u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CFB30u) [[unlikely]] return; }
L_001CFB30:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    st32((c.r[29].w[0] + 128u), c.r[21].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB78u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFB78u) [[unlikely]] return; }
L_001CFB78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFB88u) [[unlikely]] return; }
L_001CFB88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001CFBB0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBF8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CFBF8u) [[unlikely]] return; }
L_001CFBF8:
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 160u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC4Cu); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFC4Cu) [[unlikely]] return; }
L_001CFC4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFC5Cu) [[unlikely]] return; }
L_001CFC5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001CFC90:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCE0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CFCE0u) [[unlikely]] return; }
L_001CFCE0:
    c.r[2].d[0] = c.r[23].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].d[0] << 32;
    st32((c.r[29].w[0] + 176u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD40u); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFD40u) [[unlikely]] return; }
L_001CFD40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFD50u) [[unlikely]] return; }
L_001CFD50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001CFD80:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDD0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CFDD0u) [[unlikely]] return; }
L_001CFDD0:
    c.r[2].d[0] = c.r[23].d[0] << 32;
    set32(c.r[3], 0u + 7u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[22].d[0] << 32;
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 176u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE38u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFE38u) [[unlikely]] return; }
L_001CFE38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFE48u) [[unlikely]] return; }
L_001CFE48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001CFE80:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFED0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001CFED0u) [[unlikely]] return; }
L_001CFED0:
    c.r[2].d[0] = c.r[23].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[22].d[0] << 32;
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 176u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF40u); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFF40u) [[unlikely]] return; }
L_001CFF40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001CFF50u) [[unlikely]] return; }
L_001CFF50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001CFF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CFFA0; } }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_001CFFB4; }
L_001CFFA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFACu); set32(c.r[4], c.r[4].w[0] + 16317u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001CFFACu) [[unlikely]] return; }
L_001CFFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CFFD4; } }
L_001CFFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFBCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 391u, depth + 1u); else { c.pc = 0x001CF830u; return; } if (c.pc != 0x001CFFBCu) [[unlikely]] return; }
L_001CFFBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFD0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 61u, depth + 1u); else { c.pc = 0x001D09E0u; return; } if (c.pc != 0x001CFFD0u) [[unlikely]] return; }
L_001CFFD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CFFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CFFF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 4;
    [[clang::musttail]] return unit_002C(c, 1u, depth);
}

}
