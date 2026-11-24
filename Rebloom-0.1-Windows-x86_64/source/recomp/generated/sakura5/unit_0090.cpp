#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0090[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0,
    51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 141,
    0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 180, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262,
    0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0,
    280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 401, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0,
    434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0,
    0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469,
    0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0,
    0, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0,
    0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493,
    0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497,
    0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0,
    501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0,
    508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0,
};

void unit_0090(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00360000;
    case 2u: goto L_00360018;
    case 3u: goto L_0036002C;
    case 4u: goto L_0036004C;
    case 5u: goto L_00360070;
    case 6u: goto L_00360094;
    case 7u: goto L_003600B8;
    case 8u: goto L_003600D0;
    case 9u: goto L_00360100;
    case 10u: goto L_0036012C;
    case 11u: goto L_00360154;
    case 12u: goto L_00360174;
    case 13u: goto L_0036019C;
    case 14u: goto L_003601BC;
    case 15u: goto L_003601C0;
    case 16u: goto L_003601E8;
    case 17u: goto L_00360214;
    case 18u: goto L_00360254;
    case 19u: goto L_00360280;
    case 20u: goto L_003602AC;
    case 21u: goto L_003602D4;
    case 22u: goto L_00360308;
    case 23u: goto L_00360318;
    case 24u: goto L_00360348;
    case 25u: goto L_00360364;
    case 26u: goto L_00360398;
    case 27u: goto L_003603A8;
    case 28u: goto L_003603C8;
    case 29u: goto L_003603D8;
    case 30u: goto L_003603F8;
    case 31u: goto L_00360430;
    case 32u: goto L_00360490;
    case 33u: goto L_003604E0;
    case 34u: goto L_00360560;
    case 35u: goto L_0036056C;
    case 36u: goto L_003605A4;
    case 37u: goto L_003605C8;
    case 38u: goto L_003605E4;
    case 39u: goto L_003605F8;
    case 40u: goto L_0036060C;
    case 41u: goto L_00360638;
    case 42u: goto L_00360670;
    case 43u: goto L_003606A0;
    case 44u: goto L_003606C4;
    case 45u: goto L_003606C8;
    case 46u: goto L_003606F0;
    case 47u: goto L_0036070C;
    case 48u: goto L_00360760;
    case 49u: goto L_00360770;
    case 50u: goto L_00360778;
    case 51u: goto L_00360780;
    case 52u: goto L_00360790;
    case 53u: goto L_003607B8;
    case 54u: goto L_003607C0;
    case 55u: goto L_003607D8;
    case 56u: goto L_003607E0;
    case 57u: goto L_00360800;
    case 58u: goto L_003608A0;
    case 59u: goto L_003608E8;
    case 60u: goto L_003609A8;
    case 61u: goto L_003609CC;
    case 62u: goto L_003609D8;
    case 63u: goto L_003609E4;
    case 64u: goto L_00360AB8;
    case 65u: goto L_00360AF0;
    case 66u: goto L_00360B20;
    case 67u: goto L_00360B4C;
    case 68u: goto L_00360B80;
    case 69u: goto L_00360BAC;
    case 70u: goto L_00360BD8;
    case 71u: goto L_00360BEC;
    case 72u: goto L_00360C28;
    case 73u: goto L_00360C3C;
    case 74u: goto L_00360C50;
    case 75u: goto L_00360C78;
    case 76u: goto L_00360C98;
    case 77u: goto L_00360CC0;
    case 78u: goto L_00360D00;
    case 79u: goto L_00360D28;
    case 80u: goto L_00360D3C;
    case 81u: goto L_00360D60;
    case 82u: goto L_00360D78;
    case 83u: goto L_00360D90;
    case 84u: goto L_00360DA8;
    case 85u: goto L_00360DB0;
    case 86u: goto L_00360DE8;
    case 87u: goto L_00360E20;
    case 88u: goto L_00360E38;
    case 89u: goto L_00360E88;
    case 90u: goto L_00360EC4;
    case 91u: goto L_00360F3C;
    case 92u: goto L_00360F54;
    case 93u: goto L_00360F90;
    case 94u: goto L_00360FF8;
    case 95u: goto L_00361048;
    case 96u: goto L_00361068;
    case 97u: goto L_003610D0;
    case 98u: goto L_00361120;
    case 99u: goto L_00361138;
    case 100u: goto L_00361154;
    case 101u: goto L_00361160;
    case 102u: goto L_00361168;
    case 103u: goto L_00361180;
    case 104u: goto L_003611A8;
    case 105u: goto L_003611B8;
    case 106u: goto L_003611C8;
    case 107u: goto L_003611DC;
    case 108u: goto L_003611E4;
    case 109u: goto L_003611F8;
    case 110u: goto L_00361214;
    case 111u: goto L_0036121C;
    case 112u: goto L_00361250;
    case 113u: goto L_00361284;
    case 114u: goto L_0036129C;
    case 115u: goto L_003612C0;
    case 116u: goto L_003612F4;
    case 117u: goto L_00361338;
    case 118u: goto L_0036136C;
    case 119u: goto L_00361384;
    case 120u: goto L_003613A8;
    case 121u: goto L_003613BC;
    case 122u: goto L_003613C0;
    case 123u: goto L_003613C8;
    case 124u: goto L_003613E0;
    case 125u: goto L_003613F4;
    case 126u: goto L_003613FC;
    case 127u: goto L_00361410;
    case 128u: goto L_00361424;
    case 129u: goto L_0036142C;
    case 130u: goto L_00361450;
    case 131u: goto L_00361464;
    case 132u: goto L_0036146C;
    case 133u: goto L_00361480;
    case 134u: goto L_00361494;
    case 135u: goto L_0036149C;
    case 136u: goto L_003614A8;
    case 137u: goto L_003614B0;
    case 138u: goto L_003614D8;
    case 139u: goto L_003614EC;
    case 140u: goto L_003614F4;
    case 141u: goto L_003614FC;
    case 142u: goto L_00361510;
    case 143u: goto L_00361518;
    case 144u: goto L_00361534;
    case 145u: goto L_00361540;
    case 146u: goto L_00361548;
    case 147u: goto L_00361560;
    case 148u: goto L_00361580;
    case 149u: goto L_00361594;
    case 150u: goto L_0036159C;
    case 151u: goto L_003615A4;
    case 152u: goto L_003615B8;
    case 153u: goto L_003615D0;
    case 154u: goto L_00361608;
    case 155u: goto L_0036161C;
    case 156u: goto L_00361624;
    case 157u: goto L_0036162C;
    case 158u: goto L_00361640;
    case 159u: goto L_00361654;
    case 160u: goto L_0036165C;
    case 161u: goto L_0036166C;
    case 162u: goto L_00361680;
    case 163u: goto L_0036169C;
    case 164u: goto L_003616A8;
    case 165u: goto L_003616B0;
    case 166u: goto L_003616C8;
    case 167u: goto L_003616E4;
    case 168u: goto L_003616EC;
    case 169u: goto L_003616F4;
    case 170u: goto L_00361710;
    case 171u: goto L_00361724;
    case 172u: goto L_0036172C;
    case 173u: goto L_00361740;
    case 174u: goto L_00361754;
    case 175u: goto L_003617A8;
    case 176u: goto L_003617BC;
    case 177u: goto L_003617C4;
    case 178u: goto L_003617D8;
    case 179u: goto L_003617F4;
    case 180u: goto L_003617F8;
    case 181u: goto L_00361800;
    case 182u: goto L_00361828;
    case 183u: goto L_0036184C;
    case 184u: goto L_0036185C;
    case 185u: goto L_00361878;
    case 186u: goto L_00361888;
    case 187u: goto L_003618A4;
    case 188u: goto L_003618B0;
    case 189u: goto L_003618C8;
    case 190u: goto L_003618E0;
    case 191u: goto L_003618F8;
    case 192u: goto L_00361924;
    case 193u: goto L_0036192C;
    case 194u: goto L_00361950;
    case 195u: goto L_00361970;
    case 196u: goto L_00361988;
    case 197u: goto L_003619A0;
    case 198u: goto L_003619E4;
    case 199u: goto L_00361A44;
    case 200u: goto L_00361A5C;
    case 201u: goto L_00361AB0;
    case 202u: goto L_00361AD4;
    case 203u: goto L_00361B24;
    case 204u: goto L_00361B3C;
    case 205u: goto L_00361B78;
    case 206u: goto L_00361BD0;
    case 207u: goto L_00361C48;
    case 208u: goto L_00361C7C;
    case 209u: goto L_00361C90;
    case 210u: goto L_00361CF0;
    case 211u: goto L_00361D58;
    case 212u: goto L_00361D68;
    case 213u: goto L_00361D80;
    case 214u: goto L_00361D9C;
    case 215u: goto L_00361DB4;
    case 216u: goto L_00361DD8;
    case 217u: goto L_00361DE0;
    case 218u: goto L_00361DF8;
    case 219u: goto L_00361E0C;
    case 220u: goto L_00361E6C;
    case 221u: goto L_00361E80;
    case 222u: goto L_00361EB8;
    case 223u: goto L_00361ED0;
    case 224u: goto L_00361EE0;
    case 225u: goto L_00361EE8;
    case 226u: goto L_00361EF8;
    case 227u: goto L_00361F1C;
    case 228u: goto L_00361F30;
    case 229u: goto L_00361F44;
    case 230u: goto L_00361F78;
    case 231u: goto L_00361F88;
    case 232u: goto L_00361F90;
    case 233u: goto L_00361FA0;
    case 234u: goto L_00362000;
    case 235u: goto L_00362014;
    case 236u: goto L_00362030;
    case 237u: goto L_00362054;
    case 238u: goto L_00362064;
    case 239u: goto L_0036206C;
    case 240u: goto L_00362088;
    case 241u: goto L_003620A0;
    case 242u: goto L_003620B4;
    case 243u: goto L_003620BC;
    case 244u: goto L_003620C4;
    case 245u: goto L_003620D8;
    case 246u: goto L_003620E0;
    case 247u: goto L_00362104;
    case 248u: goto L_00362114;
    case 249u: goto L_0036211C;
    case 250u: goto L_00362138;
    case 251u: goto L_00362148;
    case 252u: goto L_00362164;
    case 253u: goto L_00362170;
    case 254u: goto L_00362178;
    case 255u: goto L_00362190;
    case 256u: goto L_003621A8;
    case 257u: goto L_003621BC;
    case 258u: goto L_003621C4;
    case 259u: goto L_003621CC;
    case 260u: goto L_003621E0;
    case 261u: goto L_003621E8;
    case 262u: goto L_003621FC;
    case 263u: goto L_00362204;
    case 264u: goto L_0036220C;
    case 265u: goto L_00362220;
    case 266u: goto L_00362228;
    case 267u: goto L_0036223C;
    case 268u: goto L_00362244;
    case 269u: goto L_0036224C;
    case 270u: goto L_00362260;
    case 271u: goto L_00362278;
    case 272u: goto L_00362294;
    case 273u: goto L_003622A0;
    case 274u: goto L_003622B8;
    case 275u: goto L_003622C0;
    case 276u: goto L_003622D4;
    case 277u: goto L_003622DC;
    case 278u: goto L_003622E4;
    case 279u: goto L_003622F8;
    case 280u: goto L_00362300;
    case 281u: goto L_00362318;
    case 282u: goto L_00362340;
    case 283u: goto L_0036235C;
    case 284u: goto L_00362368;
    case 285u: goto L_00362370;
    case 286u: goto L_00362388;
    case 287u: goto L_0036239C;
    case 288u: goto L_003623E0;
    case 289u: goto L_003623FC;
    case 290u: goto L_00362408;
    case 291u: goto L_00362410;
    case 292u: goto L_00362428;
    case 293u: goto L_0036243C;
    case 294u: goto L_00362458;
    case 295u: goto L_00362474;
    case 296u: goto L_00362480;
    case 297u: goto L_00362498;
    case 298u: goto L_003624BC;
    case 299u: goto L_003624D0;
    case 300u: goto L_003624E8;
    case 301u: goto L_003624F4;
    case 302u: goto L_00362518;
    case 303u: goto L_00362534;
    case 304u: goto L_00362540;
    case 305u: goto L_00362558;
    case 306u: goto L_00362568;
    case 307u: goto L_00362584;
    case 308u: goto L_00362590;
    case 309u: goto L_003625A8;
    case 310u: goto L_003625C8;
    case 311u: goto L_003625DC;
    case 312u: goto L_003625E4;
    case 313u: goto L_003625F8;
    case 314u: goto L_00362608;
    case 315u: goto L_0036261C;
    case 316u: goto L_00362624;
    case 317u: goto L_0036262C;
    case 318u: goto L_00362640;
    case 319u: goto L_00362648;
    case 320u: goto L_0036265C;
    case 321u: goto L_00362664;
    case 322u: goto L_00362678;
    case 323u: goto L_003626C0;
    case 324u: goto L_003626C8;
    case 325u: goto L_003626D8;
    case 326u: goto L_00362700;
    case 327u: goto L_00362718;
    case 328u: goto L_00362744;
    case 329u: goto L_00362760;
    case 330u: goto L_0036276C;
    case 331u: goto L_00362784;
    case 332u: goto L_00362794;
    case 333u: goto L_003627AC;
    case 334u: goto L_003627B4;
    case 335u: goto L_003627DC;
    case 336u: goto L_00362800;
    case 337u: goto L_00362818;
    case 338u: goto L_00362844;
    case 339u: goto L_00362860;
    case 340u: goto L_00362878;
    case 341u: goto L_003628B8;
    case 342u: goto L_003628C8;
    case 343u: goto L_003628E0;
    case 344u: goto L_00362908;
    case 345u: goto L_00362930;
    case 346u: goto L_00362960;
    case 347u: goto L_003629F8;
    case 348u: goto L_00362A28;
    case 349u: goto L_00362A34;
    case 350u: goto L_00362A48;
    case 351u: goto L_00362A78;
    case 352u: goto L_00362A84;
    case 353u: goto L_00362AB8;
    case 354u: goto L_00362AD0;
    case 355u: goto L_00362AF8;
    case 356u: goto L_00362B10;
    case 357u: goto L_00362B20;
    case 358u: goto L_00362B38;
    case 359u: goto L_00362B40;
    case 360u: goto L_00362B50;
    case 361u: goto L_00362B58;
    case 362u: goto L_00362B6C;
    case 363u: goto L_00362B80;
    case 364u: goto L_00362BC0;
    case 365u: goto L_00362BC8;
    case 366u: goto L_00362BD0;
    case 367u: goto L_00362BE8;
    case 368u: goto L_00362C0C;
    case 369u: goto L_00362C28;
    case 370u: goto L_00362C38;
    case 371u: goto L_00362CC0;
    case 372u: goto L_00362CD4;
    case 373u: goto L_00362CDC;
    case 374u: goto L_00362CF0;
    case 375u: goto L_00362D40;
    case 376u: goto L_00362E58;
    case 377u: goto L_00362E7C;
    case 378u: goto L_00362E8C;
    case 379u: goto L_00362E94;
    case 380u: goto L_00362EB0;
    case 381u: goto L_00362F00;
    case 382u: goto L_00362F50;
    case 383u: goto L_00362F84;
    case 384u: goto L_00363000;
    case 385u: goto L_00363014;
    case 386u: goto L_00363030;
    case 387u: goto L_00363058;
    case 388u: goto L_00363084;
    case 389u: goto L_00363098;
    case 390u: goto L_003630A8;
    case 391u: goto L_003630B8;
    case 392u: goto L_003630CC;
    case 393u: goto L_003630D4;
    case 394u: goto L_00363138;
    case 395u: goto L_00363194;
    case 396u: goto L_003631A0;
    case 397u: goto L_003631A8;
    case 398u: goto L_003631C8;
    case 399u: goto L_003631E4;
    case 400u: goto L_003631F0;
    case 401u: goto L_003631F8;
    case 402u: goto L_00363210;
    case 403u: goto L_00363234;
    case 404u: goto L_0036324C;
    case 405u: goto L_00363268;
    case 406u: goto L_00363284;
    case 407u: goto L_00363290;
    case 408u: goto L_003632AC;
    case 409u: goto L_003632B8;
    case 410u: goto L_003632D4;
    case 411u: goto L_003632E0;
    case 412u: goto L_003632F4;
    case 413u: goto L_003632FC;
    case 414u: goto L_00363310;
    case 415u: goto L_00363360;
    case 416u: goto L_00363368;
    case 417u: goto L_00363370;
    case 418u: goto L_00363388;
    case 419u: goto L_0036339C;
    case 420u: goto L_003633B0;
    case 421u: goto L_003633CC;
    case 422u: goto L_003633D4;
    case 423u: goto L_003633E8;
    case 424u: goto L_003633F0;
    case 425u: goto L_00363410;
    case 426u: goto L_00363428;
    case 427u: goto L_00363448;
    case 428u: goto L_00363468;
    case 429u: goto L_00363488;
    case 430u: goto L_003634B4;
    case 431u: goto L_003634C4;
    case 432u: goto L_003634E8;
    case 433u: goto L_003634F8;
    case 434u: goto L_00363500;
    case 435u: goto L_00363510;
    case 436u: goto L_00363534;
    case 437u: goto L_00363538;
    case 438u: goto L_0036354C;
    case 439u: goto L_00363570;
    case 440u: goto L_00363580;
    case 441u: goto L_00363588;
    case 442u: goto L_00363598;
    case 443u: goto L_003635B0;
    case 444u: goto L_003635E8;
    case 445u: goto L_003635FC;
    case 446u: goto L_00363618;
    case 447u: goto L_00363624;
    case 448u: goto L_003636A0;
    case 449u: goto L_003636E8;
    case 450u: goto L_003636F8;
    case 451u: goto L_00363708;
    case 452u: goto L_00363714;
    case 453u: goto L_0036371C;
    case 454u: goto L_00363724;
    case 455u: goto L_0036373C;
    case 456u: goto L_00363744;
    case 457u: goto L_00363770;
    case 458u: goto L_0036378C;
    case 459u: goto L_00363798;
    case 460u: goto L_003637B0;
    case 461u: goto L_003637F8;
    case 462u: goto L_00363800;
    case 463u: goto L_0036380C;
    case 464u: goto L_00363820;
    case 465u: goto L_00363838;
    case 466u: goto L_0036384C;
    case 467u: goto L_00363854;
    case 468u: goto L_00363868;
    case 469u: goto L_0036387C;
    case 470u: goto L_00363888;
    case 471u: goto L_00363894;
    case 472u: goto L_003638A0;
    case 473u: goto L_003638A8;
    case 474u: goto L_003638D8;
    case 475u: goto L_003638EC;
    case 476u: goto L_00363908;
    case 477u: goto L_0036391C;
    case 478u: goto L_00363924;
    case 479u: goto L_00363938;
    case 480u: goto L_0036398C;
    case 481u: goto L_00363998;
    case 482u: goto L_003639AC;
    case 483u: goto L_003639C4;
    case 484u: goto L_003639E0;
    case 485u: goto L_003639F8;
    case 486u: goto L_00363A0C;
    case 487u: goto L_00363A14;
    case 488u: goto L_00363A1C;
    case 489u: goto L_00363A30;
    case 490u: goto L_00363A48;
    case 491u: goto L_00363A60;
    case 492u: goto L_00363A74;
    case 493u: goto L_00363A7C;
    case 494u: goto L_00363A90;
    case 495u: goto L_00363AC8;
    case 496u: goto L_00363AEC;
    case 497u: goto L_00363AFC;
    case 498u: goto L_00363B18;
    case 499u: goto L_00363B58;
    case 500u: goto L_00363B74;
    case 501u: goto L_00363B80;
    case 502u: goto L_00363B8C;
    case 503u: goto L_00363BE0;
    case 504u: goto L_00363C04;
    case 505u: goto L_00363C14;
    case 506u: goto L_00363C30;
    case 507u: goto L_00363C74;
    case 508u: goto L_00363C80;
    case 509u: goto L_00363C8C;
    case 510u: goto L_00363C9C;
    case 511u: goto L_00363CD4;
    case 512u: goto L_00363CE0;
    case 513u: goto L_00363CEC;
    case 514u: goto L_00363D60;
    case 515u: goto L_00363D78;
    case 516u: goto L_00363D9C;
    case 517u: goto L_00363DAC;
    case 518u: goto L_00363DC8;
    case 519u: goto L_00363E18;
    case 520u: goto L_00363E34;
    case 521u: goto L_00363EA8;
    case 522u: goto L_00363F54;
    case 523u: goto L_00363F5C;
    case 524u: goto L_00363FF4;
    default: bad_entry(c, 0x00360000u); return;
    }
L_00360000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[6].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00360360; } }
    set32(c.r[18], c.r[18].w[0] + 2u);
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360018u); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360018u) [[unlikely]] return; }
L_00360018:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
L_0036002C:
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00360360; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036004Cu); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0036004Cu) [[unlikely]] return; }
L_0036004C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00360360; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360070u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360070u) [[unlikely]] return; }
L_00360070:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00360360; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360094u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360094u) [[unlikely]] return; }
L_00360094:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00360360; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600B8u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x003600B8u) [[unlikely]] return; }
L_003600B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FFD8u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 391u, depth); } }
L_003600D0:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 726u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 750u)));  goto L_00360228; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);  if (t) { goto L_00360110; } }
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360100u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360100u) [[unlikely]] return; }
L_00360100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);
    c.budget -= 2;
L_00360110:
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 20038ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036012Cu); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0036012Cu) [[unlikely]] return; }
L_0036012C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360154u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360154u) [[unlikely]] return; }
L_00360154:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00360360; } }
    set32(c.r[4], c.r[20].w[0] + 727u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360174u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360174u) [[unlikely]] return; }
L_00360174:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00360360; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 744u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036019Cu); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0036019Cu) [[unlikely]] return; }
L_0036019C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[21].d[0]; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { goto L_00360360; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601C0u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x003601C0u) [[unlikely]] return; }
    goto L_003601C0;
L_003601BC:
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003601C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_00360360; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 746u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601E8u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x003601E8u) [[unlikely]] return; }
L_003601E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_00360360; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 748u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360214u); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360214u) [[unlikely]] return; }
L_00360214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 750u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00360228:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_003602EC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);  if (t) { goto L_00360264; } }
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360254u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360254u) [[unlikely]] return; }
L_00360254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);
    c.budget -= 2;
L_00360264:
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 20038ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360280u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360280u) [[unlikely]] return; }
L_00360280:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602ACu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x003602ACu) [[unlikely]] return; }
L_003602AC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00360364; }
    set32(c.r[6], ld32((c.r[20].w[0] + 756u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003602E8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003602E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602D4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x003602D4u) [[unlikely]] return; }
L_003602D4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003602E8:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_003602EC:
    set32(c.r[16], c.r[3].w[0] - c.r[30].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00360330; } }
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
L_00360308:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360318u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360318u) [[unlikely]] return; }
L_00360318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00360364; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360308u | kUnwind; return; } goto L_00360308; } }
L_00360330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 11132u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360348u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x00360348u) [[unlikely]] return; }
L_00360348:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[30].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00360364; }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + 4u);  if (t) { goto L_00360364; } }
    c.budget -= 1;
L_00360360:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360364:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00360398:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603A8u);  if (depth < kMaxDepth) unit_008F(c, 270u, depth + 1u); else { c.pc = 0x0035E670u; return; } if (c.pc != 0x003603A8u) [[unlikely]] return; }
L_003603A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 11136u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6080u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_003603C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603D8u);  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0035E690u; return; } if (c.pc != 0x003603D8u) [[unlikely]] return; }
L_003603D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 11136u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6080u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_003603F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[7].w[0] + 11136u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00360454; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00360430:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 760u);  if (t) { goto L_00360454; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360430u | kUnwind; return; } goto L_00360430; }
L_00360454:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003605B0; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + 11136u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_003604B0; } }
    set32(c.r[7], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_00360490:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360490u | kUnwind; return; } goto L_00360490; } }
L_003604B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[17].w[0] + 12u), c.r[9].w[0]);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[6], 0u + 4u);
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[7], 0u + 4u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003604E0u); st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008D(c, 91u, depth + 1u); else { c.pc = 0x00355A40u; return; } if (c.pc != 0x003604E0u) [[unlikely]] return; }
L_003604E0:
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], 0u + 3u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[7].d[0] = 0ull | 44100ull;
    set32(c.r[8], 0u + 18u);
    set32(c.r[9], 0u + 4u);
    set32(c.r[10], 0u + 500u);
    set32(c.r[11], 0u + 32u);
    st32((c.r[17].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[4], 0u + 32u);
    st32((c.r[17].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[18].w[0]);
    c.budget -= 18;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x00360524u);  goto L_00360528; }
L_00360528:
    st32((c.r[17].w[0] + 100u), c.r[10].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360560u); st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008F(c, 295u, depth + 1u); else { c.pc = 0x0035EE30u; return; } if (c.pc != 0x00360560u) [[unlikely]] return; }
L_00360560:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036056Cu); st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 295u, depth + 1u); else { c.pc = 0x0035EE30u; return; } if (c.pc != 0x0036056Cu) [[unlikely]] return; }
L_0036056C:
    st16((c.r[17].w[0] + 716u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 128u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 748u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 727u);
    st16((c.r[17].w[0] + 746u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 712u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 16u);
    st16((c.r[17].w[0] + 718u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 726u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605A4u); st16((c.r[17].w[0] + 744u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003605A4u) [[unlikely]] return; }
L_003605A4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003605B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003605C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00360620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605E4u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x003605E4u) [[unlikely]] return; }
L_003605E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003605F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605F8u);  if (depth < kMaxDepth) unit_008F(c, 298u, depth + 1u); else { c.pc = 0x0035EED0u; return; } if (c.pc != 0x003605F8u) [[unlikely]] return; }
L_003605F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00360610; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036060Cu);  if (depth < kMaxDepth) unit_008F(c, 298u, depth + 1u); else { c.pc = 0x0035EED0u; return; } if (c.pc != 0x0036060Cu) [[unlikely]] return; }
L_0036060C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00360610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00360620:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00360638:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00360720; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00360670:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00360710; } }
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003606A0u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003606A0u) [[unlikely]] return; }
L_003606A0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003606E8; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003606C4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003606C4u) [[unlikely]] return; }
L_003606C4:
    c.budget -= 1;
L_003606C8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003606C8u | kUnwind; return; } goto L_003606C8; } }
    c.budget -= 1;
L_003606E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606F0u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003606F0u) [[unlikely]] return; }
L_003606F0:
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036070Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036070Cu) [[unlikely]] return; }
L_0036070C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_00360710:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360670u | kUnwind; return; } goto L_00360670; } }
L_00360720:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 40u), 0u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00360760:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00360770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[5].w[0]);  c.pc = t; return; }
L_00360778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_00360780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[5].w[0]);  c.pc = t; return; }
L_00360790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003607B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607B8u);  if (depth < kMaxDepth) unit_008F(c, 298u, depth + 1u); else { c.pc = 0x0035EED0u; return; } if (c.pc != 0x003607B8u) [[unlikely]] return; }
L_003607B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607C0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_008F(c, 295u, depth + 1u); else { c.pc = 0x0035EE30u; return; } if (c.pc != 0x003607C0u) [[unlikely]] return; }
L_003607C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003607D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607D8u);  if (depth < kMaxDepth) unit_008F(c, 298u, depth + 1u); else { c.pc = 0x0035EED0u; return; } if (c.pc != 0x003607D8u) [[unlikely]] return; }
L_003607D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607E0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_008F(c, 295u, depth + 1u); else { c.pc = 0x0035EE30u; return; } if (c.pc != 0x003607E0u) [[unlikely]] return; }
L_003607E0:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00360800:
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_003608A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] + 727u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 726u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003608E0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    st8((c.r[3].w[0] + 726u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
L_003608E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608E8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003608E8u) [[unlikely]] return; }
L_003608E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00147D60u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 232u, depth); }
L_003609A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609CCu); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 51u, depth + 1u); else { c.pc = 0x00360780u; return; } if (c.pc != 0x003609CCu) [[unlikely]] return; }
L_003609CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 49u, depth + 1u); else { c.pc = 0x00360770u; return; } if (c.pc != 0x003609D8u) [[unlikely]] return; }
L_003609D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 57u, depth + 1u); else { c.pc = 0x00360800u; return; } if (c.pc != 0x003609E4u) [[unlikely]] return; }
L_003609E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 284u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360778u | kUnwind; return; } goto L_00360778; }
L_00360AB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 712u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[16], c.r[17].w[0] + 4u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00360B20; } }
    c.budget -= 1;
L_00360AF0:
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B20u); set32(c.r[18], c.r[18].w[0] + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00360B20u) [[unlikely]] return; }
L_00360B20:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00360B6C; } }
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B4Cu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00360B4Cu) [[unlikely]] return; }
L_00360B4C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360AF0u | kUnwind; return; } goto L_00360AF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00360C08; }
L_00360B6C:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00360BA4; }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + 136u);
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
L_00360B80:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 576u));
    set32(c.r[19], c.r[19].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 576u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360B80u | kUnwind; return; } goto L_00360B80; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00360BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BACu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 369u, depth + 1u); else { c.pc = 0x0035FC40u; return; } if (c.pc != 0x00360BACu) [[unlikely]] return; }
L_00360BAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00360C04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00360BFC; } }
    set32(c.r[16], c.r[17].w[0] + 128u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00360BD8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BECu); set32(c.r[6], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_008F(c, 300u, depth + 1u); else { c.pc = 0x0035EF18u; return; } if (c.pc != 0x00360BECu) [[unlikely]] return; }
L_00360BEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360BD8u | kUnwind; return; } goto L_00360BD8; }
L_00360BFC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00360C04:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360C08:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00360C28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00360C3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00360C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360C70; } }
L_00360C50:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00360C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360C3Cu | kUnwind; return; } goto L_00360C3C; } }
L_00360C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 358u, depth + 1u); else { c.pc = 0x0035FA90u; return; } if (c.pc != 0x00360C78u) [[unlikely]] return; }
L_00360C78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360C50u | kUnwind; return; } goto L_00360C50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00360CAC; } }
    c.budget -= 1;
L_00360C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0035FB40u; return; } if (c.pc != 0x00360C98u) [[unlikely]] return; }
L_00360C98:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00360CAC; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00360CAC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00360CE8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360AB8u | kUnwind; return; } goto L_00360AB8; }
L_00360CE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00360CF8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360C28u | kUnwind; return; } goto L_00360C28; }
L_00360CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00360D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 11136u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00360D28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00360D40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 77u, depth + 1u); else { c.pc = 0x00360CC0u; return; } if (c.pc != 0x00360D3Cu) [[unlikely]] return; }
L_00360D3C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00360D40:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 760u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360D28u | kUnwind; return; } goto L_00360D28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 28u, depth); }
L_00360D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_00360D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 106u, depth); }
L_00360DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00360DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00360DE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 19712u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00360E20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E20u); set32(c.r[6], 0u + 3840u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00360E20u) [[unlikely]] return; }
L_00360E20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00360E38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 19712u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00360E78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19744u);
    set32(c.r[6], 0u + 3840u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00360E78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00360E88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360EC4u); set32(c.r[21], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00360EC4u) [[unlikely]] return; }
L_00360EC4:
    set32(c.r[7], c.r[16].w[0] + 2047u);
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[7], 0u + 512u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], c.r[3].w[0] << 11);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 88u), 0u);  if (t) { goto L_00360F64; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00360F3Cu) [[unlikely]] return; }
L_00360F3C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00360F54u) [[unlikely]] return; }
L_00360F54:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 4;
L_00360F64:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00360F90:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] + 19720u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00361028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] + 19716u);
    set32(c.r[4], c.r[4].w[0] + 19744u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 19720u)));  if (t) { goto L_0036102C; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00360FF8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 19720u)));  if (t) { goto L_0036102C; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360FF8u | kUnwind; return; } goto L_00360FF8; }
L_00361028:
    set32(c.r[3], ld32((c.r[13].w[0] + 19720u)));
    c.budget -= 1;
L_0036102C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00361054; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 89u, depth + 1u); else { c.pc = 0x00360E88u; return; } if (c.pc != 0x00361048u) [[unlikely]] return; }
L_00361048:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00361054:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361068:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] + 19728u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00361100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] + 19724u);
    set32(c.r[4], c.r[4].w[0] + 19744u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 19728u)));  if (t) { goto L_00361104; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003610D0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 19728u)));  if (t) { goto L_00361104; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003610D0u | kUnwind; return; } goto L_003610D0; }
L_00361100:
    set32(c.r[3], ld32((c.r[13].w[0] + 19728u)));
    c.budget -= 1;
L_00361104:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00361128; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361120u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 89u, depth + 1u); else { c.pc = 0x00360E88u; return; } if (c.pc != 0x00361120u) [[unlikely]] return; }
L_00361120:
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00361128:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361154u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361154u) [[unlikely]] return; }
L_00361154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361160u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 103u, depth + 1u); else { c.pc = 0x00361180u; return; } if (c.pc != 0x00361160u) [[unlikely]] return; }
L_00361160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361168u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x00361168u) [[unlikely]] return; }
L_00361168:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361180:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003611B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00360F90u; return; } if (c.pc != 0x003611A8u) [[unlikely]] return; }
L_003611A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003611BC; } }
L_003611B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 96u, depth + 1u); else { c.pc = 0x00361068u; return; } if (c.pc != 0x003611B8u) [[unlikely]] return; }
L_003611B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003611BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003611C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003611DCu) [[unlikely]] return; }
L_003611DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 109u, depth + 1u); else { c.pc = 0x003611F8u; return; } if (c.pc != 0x003611E4u) [[unlikely]] return; }
L_003611E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003611F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00361240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361214u);  if (depth < kMaxDepth) unit_0090(c, 175u, depth + 1u); else { c.pc = 0x003617A8u; return; } if (c.pc != 0x00361214u) [[unlikely]] return; }
L_00361214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036121Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 130u, depth + 1u); else { c.pc = 0x00361450u; return; } if (c.pc != 0x0036121Cu) [[unlikely]] return; }
L_0036121C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00361240:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361284u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361284u) [[unlikely]] return; }
L_00361284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036129Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 115u, depth + 1u); else { c.pc = 0x003612C0u; return; } if (c.pc != 0x0036129Cu) [[unlikely]] return; }
L_0036129C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003612C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612F4u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 81u, depth + 1u); else { c.pc = 0x00360D60u; return; } if (c.pc != 0x003612F4u) [[unlikely]] return; }
L_003612F4:
    set32(c.r[3], c.r[18].w[0] << 11);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360D78u | kUnwind; return; } goto L_00360D78; }
L_00361338:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036136Cu); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036136Cu) [[unlikely]] return; }
L_0036136C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361384u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x003613A8u; return; } if (c.pc != 0x00361384u) [[unlikely]] return; }
L_00361384:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003613A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 112u, depth + 1u); else { c.pc = 0x00361250u; return; } if (c.pc != 0x003613BCu) [[unlikely]] return; }
L_003613BC:
    c.budget -= 1;
L_003613C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613C8u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x003595E0u; return; } if (c.pc != 0x003613C8u) [[unlikely]] return; }
L_003613C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003613C0u | kUnwind; return; } goto L_003613C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003613E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003613F4u) [[unlikely]] return; }
L_003613F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 127u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x003613FCu) [[unlikely]] return; }
L_003613FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00361410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 170u, depth + 1u); else { c.pc = 0x00361710u; return; } if (c.pc != 0x00361424u) [[unlikely]] return; }
L_00361424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036142Cu);  if (depth < kMaxDepth) unit_0090(c, 81u, depth + 1u); else { c.pc = 0x00360D60u; return; } if (c.pc != 0x0036142Cu) [[unlikely]] return; }
L_0036142C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_0036143C; }
L_0036143C:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360D78u | kUnwind; return; } goto L_00360D78; }
L_00361450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361464u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361464u) [[unlikely]] return; }
L_00361464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036146Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 133u, depth + 1u); else { c.pc = 0x00361480u; return; } if (c.pc != 0x0036146Cu) [[unlikely]] return; }
L_0036146C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00361480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 175u, depth + 1u); else { c.pc = 0x003617A8u; return; } if (c.pc != 0x00361494u) [[unlikely]] return; }
L_00361494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036149Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 124u, depth + 1u); else { c.pc = 0x003613E0u; return; } if (c.pc != 0x0036149Cu) [[unlikely]] return; }
L_0036149C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003614C0; }
L_003614A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614B0u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x003595E0u; return; } if (c.pc != 0x003614B0u) [[unlikely]] return; }
L_003614B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003614A8u | kUnwind; return; } goto L_003614A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003614C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003614D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003614ECu) [[unlikely]] return; }
L_003614EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 142u, depth + 1u); else { c.pc = 0x00361510u; return; } if (c.pc != 0x003614F4u) [[unlikely]] return; }
L_003614F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614FCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x003614FCu) [[unlikely]] return; }
L_003614FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_00361518:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361534u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361534u) [[unlikely]] return; }
L_00361534:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361540u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 147u, depth + 1u); else { c.pc = 0x00361560u; return; } if (c.pc != 0x00361540u) [[unlikely]] return; }
L_00361540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361548u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x00361548u) [[unlikely]] return; }
L_00361548:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361560:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[5].d[0] != 0ull) { st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  goto L_00361574; }
L_00361574:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  c.pc = t; return; }
L_00361580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361594u) [[unlikely]] return; }
L_00361594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036159Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 152u, depth + 1u); else { c.pc = 0x003615B8u; return; } if (c.pc != 0x0036159Cu) [[unlikely]] return; }
L_0036159C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x003615A4u) [[unlikely]] return; }
L_003615A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003615B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003615C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 1;
L_003615C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003615D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003615E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003615EC; } }
L_003615E8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003615EC:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 71u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00361608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036161Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036161Cu) [[unlikely]] return; }
L_0036161C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 158u, depth + 1u); else { c.pc = 0x00361640u; return; } if (c.pc != 0x00361624u) [[unlikely]] return; }
L_00361624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036162Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x0036162Cu) [[unlikely]] return; }
L_0036162C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00361654u) [[unlikely]] return; }
L_00361654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036165Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 153u, depth + 1u); else { c.pc = 0x003615D0u; return; } if (c.pc != 0x0036165Cu) [[unlikely]] return; }
L_0036165C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036166Cu); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0036166Cu) [[unlikely]] return; }
L_0036166C:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036169Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036169Cu) [[unlikely]] return; }
L_0036169C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 166u, depth + 1u); else { c.pc = 0x003616C8u; return; } if (c.pc != 0x003616A8u) [[unlikely]] return; }
L_003616A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616B0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x003616B0u) [[unlikely]] return; }
L_003616B0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003616C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x003616E4u) [[unlikely]] return; }
L_003616E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 153u, depth + 1u); else { c.pc = 0x003615D0u; return; } if (c.pc != 0x003616ECu) [[unlikely]] return; }
L_003616EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616F4u); st32((c.r[16].w[0] + 92u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x003616F4u) [[unlikely]] return; }
L_003616F4:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361724u) [[unlikely]] return; }
L_00361724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036172Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 173u, depth + 1u); else { c.pc = 0x00361740u; return; } if (c.pc != 0x0036172Cu) [[unlikely]] return; }
L_0036172C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00361740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 81u, depth + 1u); else { c.pc = 0x00360D60u; return; } if (c.pc != 0x00361754u) [[unlikely]] return; }
L_00361754:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00361790; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361798; } }
    c.budget -= 1;
L_00361790:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00361798:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360D78u | kUnwind; return; } goto L_00360D78; }
L_003617A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003617BCu) [[unlikely]] return; }
L_003617BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 178u, depth + 1u); else { c.pc = 0x003617D8u; return; } if (c.pc != 0x003617C4u) [[unlikely]] return; }
L_003617C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003617D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617F4u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 170u, depth + 1u); else { c.pc = 0x00361710u; return; } if (c.pc != 0x003617F4u) [[unlikely]] return; }
L_003617F4:
    c.budget -= 1;
L_003617F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361800u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x003595E0u; return; } if (c.pc != 0x00361800u) [[unlikely]] return; }
L_00361800:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003617F8u | kUnwind; return; } goto L_003617F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003617F8u | kUnwind; return; } goto L_003617F8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361828:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036184Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036184Cu) [[unlikely]] return; }
L_0036184C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036185Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 185u, depth + 1u); else { c.pc = 0x00361878u; return; } if (c.pc != 0x0036185Cu) [[unlikely]] return; }
L_0036185C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00361878:
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  c.pc = t; return; }
L_00361888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618A4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003618A4u) [[unlikely]] return; }
L_003618A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 189u, depth + 1u); else { c.pc = 0x003618C8u; return; } if (c.pc != 0x003618B0u) [[unlikely]] return; }
L_003618B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003618C8:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003618D8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  c.pc = t; return; }
L_003618D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[2].w[0]);  c.pc = t; return; }
L_003618E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 19740u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003618F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361924u); set32(c.r[20], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0093(c, 188u, depth + 1u); else { c.pc = 0x0036E128u; return; } if (c.pc != 0x00361924u) [[unlikely]] return; }
L_00361924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036192Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 81u, depth + 1u); else { c.pc = 0x00360D60u; return; } if (c.pc != 0x0036192Cu) [[unlikely]] return; }
L_0036192C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));  if (t) { goto L_00361AB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00361A30; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361950u); set32(c.r[18], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0090(c, 82u, depth + 1u); else { c.pc = 0x00360D78u; return; } if (c.pc != 0x00361950u) [[unlikely]] return; }
L_00361950:
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 11);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361970u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x00361970u) [[unlikely]] return; }
L_00361970:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361988u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361988u) [[unlikely]] return; }
L_00361988:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003619A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003619A0u) [[unlikely]] return; }
L_003619A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[16], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_003619E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_003619E8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003619E4u); set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003619E4u) [[unlikely]] return; }
L_003619E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_003619E8:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00361A24; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  goto L_00361AB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  goto L_00361AB0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00361A24:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361AB0; } }
L_00361A30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00361AA8; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A44u); set32(c.r[16], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0090(c, 82u, depth + 1u); else { c.pc = 0x00360D78u; return; } if (c.pc != 0x00361A44u) [[unlikely]] return; }
L_00361A44:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A5Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361A5Cu) [[unlikely]] return; }
L_00361A5C:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19736u)));
    c.budget -= 6;
    if (c.r[3].sd[0] < 0) { c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));  goto L_00361AB4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[19].w[0] + 3u));  if (t) { goto L_00361A98; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361AB4; } }
    c.budget -= 1;
L_00361A98:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361AB4; } }
L_00361AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AB0u);  if (depth < kMaxDepth) unit_0090(c, 82u, depth + 1u); else { c.pc = 0x00360D78u; return; } if (c.pc != 0x00361AB0u) [[unlikely]] return; }
L_00361AB0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 1;
L_00361AB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00361CD4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 36u), 0u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AD4u); st32((c.r[19].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0090(c, 82u, depth + 1u); else { c.pc = 0x00360D78u; return; } if (c.pc != 0x00361AD4u) [[unlikely]] return; }
L_00361AD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00361CD0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00361CD0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00361B08; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 32u), 0u);  if (t) { goto L_00361CD0; } }
L_00361B08:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00361B1C; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  goto L_00361B30; }
L_00361B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B24u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 190u, depth + 1u); else { c.pc = 0x003618E0u; return; } if (c.pc != 0x00361B24u) [[unlikely]] return; }
L_00361B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00361CD4; } }
    c.budget -= 1;
L_00361B30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B3Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361B3Cu) [[unlikely]] return; }
L_00361B3C:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_00361B60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361CD0; } }
    c.budget -= 1;
L_00361B60:
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B78u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361B78u) [[unlikely]] return; }
L_00361B78:
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[4], c.r[3].w[0] + 2047u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 44u)));
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BD0u); if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[8].d[0];  if (depth < kMaxDepth) unit_0093(c, 171u, depth + 1u); else { c.pc = 0x0036DF38u; return; } if (c.pc != 0x00361BD0u) [[unlikely]] return; }
L_00361BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 23632u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[17].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_00361C08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] - 17624u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 74u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);  if (t) { goto L_00361C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 17620u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361C04; } }
    c.budget -= 1;
L_00361C00:
    st8((c.r[2].w[0] - 17620u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00361C04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_00361C08:
    set32(c.r[5], ld32((c.r[19].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_00361C3C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
L_00361C3C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C48u); set32(c.r[6], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_0093(c, 175u, depth + 1u); else { c.pc = 0x0036DFA0u; return; } if (c.pc != 0x00361C48u) [[unlikely]] return; }
L_00361C48:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[19].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00361CD0; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], c.r[19].w[0] + 36u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C7Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361C7Cu) [[unlikely]] return; }
L_00361C7C:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C90u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0093(c, 188u, depth + 1u); else { c.pc = 0x0036E128u; return; } if (c.pc != 0x00361C90u) [[unlikely]] return; }
L_00361C90:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00361CD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19736u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));  if (t) { goto L_00361CD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[19].w[0] + 3u));  if (t) { goto L_00361CC8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361CD8; } }
L_00361CC8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00361CD0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00361CD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 1;
L_00361CD8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00361CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_00361E94; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));  goto L_00361D3C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361D34; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00361D34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00361D3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00361D60; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));  goto L_00361D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D58u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0093(c, 165u, depth + 1u); else { c.pc = 0x0036DE58u; return; } if (c.pc != 0x00361D58u) [[unlikely]] return; }
L_00361D58:
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00361D5C:
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00361D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D68u);  if (depth < kMaxDepth) unit_0090(c, 81u, depth + 1u); else { c.pc = 0x00360D60u; return; } if (c.pc != 0x00361D68u) [[unlikely]] return; }
L_00361D68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00361E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D80u); st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0090(c, 82u, depth + 1u); else { c.pc = 0x00360D78u; return; } if (c.pc != 0x00361D80u) [[unlikely]] return; }
L_00361D80:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));  goto L_00361E84; }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D9Cu); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0093(c, 146u, depth + 1u); else { c.pc = 0x0036DB08u; return; } if (c.pc != 0x00361D9Cu) [[unlikely]] return; }
L_00361D9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00361DC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DB4u); set32(c.r[4], c.r[4].w[0] - 9600u);  if (depth < kMaxDepth) unit_008D(c, 110u, depth + 1u); else { c.pc = 0x003564E8u; return; } if (c.pc != 0x00361DB4u) [[unlikely]] return; }
L_00361DB4:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361EB8; } }
L_00361DC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DD8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0093(c, 171u, depth + 1u); else { c.pc = 0x0036DF38u; return; } if (c.pc != 0x00361DD8u) [[unlikely]] return; }
L_00361DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DE0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0093(c, 167u, depth + 1u); else { c.pc = 0x0036DED0u; return; } if (c.pc != 0x00361DE0u) [[unlikely]] return; }
L_00361DE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[17].w[0] << 11);  if (t) { goto L_00361DFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DF8u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0093(c, 192u, depth + 1u); else { c.pc = 0x0036E190u; return; } if (c.pc != 0x00361DF8u) [[unlikely]] return; }
L_00361DF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00361DFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0093(c, 171u, depth + 1u); else { c.pc = 0x0036DF38u; return; } if (c.pc != 0x00361E0Cu) [[unlikely]] return; }
L_00361E0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00361E2C; }
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
L_00361E2C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00361E44; }
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_00361E44:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00361E64; } }
    set32(c.r[2], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_00361E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 143u, depth + 1u); else { c.pc = 0x00361518u; return; } if (c.pc != 0x00361E6Cu) [[unlikely]] return; }
L_00361E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361E80; } }
    c.budget -= 1;
L_00361E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E80u);  if (depth < kMaxDepth) unit_0090(c, 82u, depth + 1u); else { c.pc = 0x00360D78u; return; } if (c.pc != 0x00361E80u) [[unlikely]] return; }
L_00361E80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 1;
L_00361E84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));  goto L_00361E90; }
L_00361E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_00361E94:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00361EBC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00361EBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 191u, depth + 1u); else { c.pc = 0x003618F8u; return; } if (c.pc != 0x00361EB8u) [[unlikely]] return; }
L_00361EB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00361EBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EE0u);  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361EE0u) [[unlikely]] return; }
L_00361EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EE8u);  if (depth < kMaxDepth) unit_0090(c, 226u, depth + 1u); else { c.pc = 0x00361EF8u; return; } if (c.pc != 0x00361EE8u) [[unlikely]] return; }
L_00361EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00361EF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F1Cu); set32(c.r[4], c.r[19].w[0] + 19732u);  if (depth < kMaxDepth) unit_0090(c, 83u, depth + 1u); else { c.pc = 0x00360D90u; return; } if (c.pc != 0x00361F1Cu) [[unlikely]] return; }
L_00361F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_00361F58; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 19744u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_00361F30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00361F48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 210u, depth + 1u); else { c.pc = 0x00361CF0u; return; } if (c.pc != 0x00361F44u) [[unlikely]] return; }
L_00361F44:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00361F48:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361F30u | kUnwind; return; } goto L_00361F30; } }
    set32(c.r[2], c.r[19].w[0] + 19732u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_00361F58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00361F78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F88u);  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00361F88u) [[unlikely]] return; }
L_00361F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F90u);  if (depth < kMaxDepth) unit_0090(c, 233u, depth + 1u); else { c.pc = 0x00361FA0u; return; } if (c.pc != 0x00361F90u) [[unlikely]] return; }
L_00361F90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00361FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0093(c, 185u, depth); }
L_00362000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362014u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 148u, depth + 1u); else { c.pc = 0x00361580u; return; } if (c.pc != 0x00362014u) [[unlikely]] return; }
L_00362014:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362054u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362054u) [[unlikely]] return; }
L_00362054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362064u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 240u, depth + 1u); else { c.pc = 0x00362088u; return; } if (c.pc != 0x00362064u) [[unlikely]] return; }
L_00362064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036206Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x0036206Cu) [[unlikely]] return; }
L_0036206C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362088:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003620A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003620B4u) [[unlikely]] return; }
L_003620B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 245u, depth + 1u); else { c.pc = 0x003620D8u; return; } if (c.pc != 0x003620BCu) [[unlikely]] return; }
L_003620BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620C4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x003620C4u) [[unlikely]] return; }
L_003620C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003620D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_003620E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362104u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362104u) [[unlikely]] return; }
L_00362104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362114u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 250u, depth + 1u); else { c.pc = 0x00362138u; return; } if (c.pc != 0x00362114u) [[unlikely]] return; }
L_00362114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036211Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x0036211Cu) [[unlikely]] return; }
L_0036211C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362138:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_00362148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362164u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362164u) [[unlikely]] return; }
L_00362164:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362170u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 255u, depth + 1u); else { c.pc = 0x00362190u; return; } if (c.pc != 0x00362170u) [[unlikely]] return; }
L_00362170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362178u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x00362178u) [[unlikely]] return; }
L_00362178:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362190:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003621A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003621BCu) [[unlikely]] return; }
L_003621BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 260u, depth + 1u); else { c.pc = 0x003621E0u; return; } if (c.pc != 0x003621C4u) [[unlikely]] return; }
L_003621C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621CCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x003621CCu) [[unlikely]] return; }
L_003621CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003621E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003621E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003621FCu) [[unlikely]] return; }
L_003621FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 265u, depth + 1u); else { c.pc = 0x00362220u; return; } if (c.pc != 0x00362204u) [[unlikely]] return; }
L_00362204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036220Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x0036220Cu) [[unlikely]] return; }
L_0036220C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_00362228:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036223Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036223Cu) [[unlikely]] return; }
L_0036223C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 270u, depth + 1u); else { c.pc = 0x00362260u; return; } if (c.pc != 0x00362244u) [[unlikely]] return; }
L_00362244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036224Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x0036224Cu) [[unlikely]] return; }
L_0036224C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0093(c, 192u, depth); }
L_00362278:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362294u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362294u) [[unlikely]] return; }
L_00362294:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 274u, depth + 1u); else { c.pc = 0x003622B8u; return; } if (c.pc != 0x003622A0u) [[unlikely]] return; }
L_003622A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003622B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003622C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003622D4u) [[unlikely]] return; }
L_003622D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003622F8u; return; } if (c.pc != 0x003622DCu) [[unlikely]] return; }
L_003622DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622E4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x003622E4u) [[unlikely]] return; }
L_003622E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003622F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));  c.pc = t; return; }
L_00362300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362318u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_0093(c, 188u, depth + 1u); else { c.pc = 0x0036E128u; return; } if (c.pc != 0x00362318u) [[unlikely]] return; }
L_00362318:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036235Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036235Cu) [[unlikely]] return; }
L_0036235C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362368u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00362388u; return; } if (c.pc != 0x00362368u) [[unlikely]] return; }
L_00362368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362370u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x00362370u) [[unlikely]] return; }
L_00362370:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036239Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 192u, depth + 1u); else { c.pc = 0x0036E190u; return; } if (c.pc != 0x0036239Cu) [[unlikely]] return; }
L_0036239C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[5].w[0] + 2047u);
    c.r[4].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[4], c.r[3].w[0] << 11);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003623D0; } }
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_003623D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003623E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623FCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x003623FCu) [[unlikely]] return; }
L_003623FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362408u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 292u, depth + 1u); else { c.pc = 0x00362428u; return; } if (c.pc != 0x00362408u) [[unlikely]] return; }
L_00362408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362410u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x00362410u) [[unlikely]] return; }
L_00362410:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036243Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 192u, depth + 1u); else { c.pc = 0x0036E190u; return; } if (c.pc != 0x0036243Cu) [[unlikely]] return; }
L_0036243C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362474u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362474u) [[unlikely]] return; }
L_00362474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362480u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 297u, depth + 1u); else { c.pc = 0x00362498u; return; } if (c.pc != 0x00362480u) [[unlikely]] return; }
L_00362480:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00362498:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624BCu); st32((c.r[18].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x003624BCu) [[unlikely]] return; }
L_003624BC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003624D0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003624D0u) [[unlikely]] return; }
L_003624D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003624E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003624E8u) [[unlikely]] return; }
L_003624E8:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624F4u); st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x003624F4u) [[unlikely]] return; }
L_003624F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362518:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362534u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362534u) [[unlikely]] return; }
L_00362534:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362540u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 305u, depth + 1u); else { c.pc = 0x00362558u; return; } if (c.pc != 0x00362540u) [[unlikely]] return; }
L_00362540:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00362558:
    set32(c.r[2], c.r[5].w[0] << 11);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  c.pc = t; return; }
L_00362568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362584u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x00362584u) [[unlikely]] return; }
L_00362584:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362590u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003625A8u; return; } if (c.pc != 0x00362590u) [[unlikely]] return; }
L_00362590:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_003625A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00361518u | kUnwind; return; } goto L_00361518; }
L_003625C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x003625DCu) [[unlikely]] return; }
L_003625DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x003625F8u; return; } if (c.pc != 0x003625E4u) [[unlikely]] return; }
L_003625E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_003625F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 19736u), c.r[4].w[0]);  c.pc = t; return; }
L_00362608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036261Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036261Cu) [[unlikely]] return; }
L_0036261C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 318u, depth + 1u); else { c.pc = 0x00362640u; return; } if (c.pc != 0x00362624u) [[unlikely]] return; }
L_00362624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036262Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00360DB0u; return; } if (c.pc != 0x0036262Cu) [[unlikely]] return; }
L_0036262C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));  c.pc = t; return; }
L_00362648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036265Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 84u, depth + 1u); else { c.pc = 0x00360DA8u; return; } if (c.pc != 0x0036265Cu) [[unlikely]] return; }
L_0036265C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362664u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 322u, depth + 1u); else { c.pc = 0x00362678u; return; } if (c.pc != 0x00362664u) [[unlikely]] return; }
L_00362664:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360DB0u | kUnwind; return; } goto L_00360DB0; }
L_00362678:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003626EC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003626EC; }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[3].w[0] + 19732u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 6;
L_003626C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 83u, depth + 1u); else { c.pc = 0x00360D90u; return; } if (c.pc != 0x003626C8u) [[unlikely]] return; }
L_003626C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003626DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626D8u);  if (depth < kMaxDepth) unit_0090(c, 210u, depth + 1u); else { c.pc = 0x00361CF0u; return; } if (c.pc != 0x003626D8u) [[unlikely]] return; }
L_003626D8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003626DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003626C0u | kUnwind; return; } goto L_003626C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003626EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00362718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] + 23584u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362744u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x00362744u) [[unlikely]] return; }
L_00362744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 23600u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[6], 0u + 232u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362760u); set32(c.r[16], c.r[16].w[0] + 9984u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x00362760u) [[unlikely]] return; }
L_00362760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036276Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0093(c, 277u, depth + 1u); else { c.pc = 0x0036EC58u; return; } if (c.pc != 0x0036276Cu) [[unlikely]] return; }
L_0036276C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 9552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362784u); set32(c.r[5], c.r[5].w[0] + 23672u);  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0036D5D0u; return; } if (c.pc != 0x00362784u) [[unlikely]] return; }
L_00362784:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362794u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (depth < kMaxDepth) unit_0093(c, 277u, depth + 1u); else { c.pc = 0x0036EC58u; return; } if (c.pc != 0x00362794u) [[unlikely]] return; }
L_00362794:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[16], c.r[16].w[0] - 9544u);
    set32(c.r[5], c.r[5].w[0] + 6192u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0036D5D0u; return; } if (c.pc != 0x003627ACu) [[unlikely]] return; }
L_003627AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 131u, depth + 1u); else { c.pc = 0x0036D908u; return; } if (c.pc != 0x003627B4u) [[unlikely]] return; }
L_003627B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003627F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627DCu); set32(c.r[7], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0094(c, 371u, depth + 1u); else { c.pc = 0x003730A8u; return; } if (c.pc != 0x003627DCu) [[unlikely]] return; }
L_003627DC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0094(c, 372u, depth); }
L_003627F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362800u);  if (depth < kMaxDepth) unit_0094(c, 371u, depth + 1u); else { c.pc = 0x003730A8u; return; } if (c.pc != 0x00362800u) [[unlikely]] return; }
L_00362800:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0094(c, 372u, depth); }
L_00362818:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00362850; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362844u); set32(c.r[6], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0094(c, 351u, depth + 1u); else { c.pc = 0x00372DB8u; return; } if (c.pc != 0x00362844u) [[unlikely]] return; }
L_00362844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00362860; } }
    c.budget -= 1;
L_00362850:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362860u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 351u, depth + 1u); else { c.pc = 0x00372DB8u; return; } if (c.pc != 0x00362860u) [[unlikely]] return; }
L_00362860:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362878:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003628C0; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628B8u); set32(c.r[6], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0094(c, 362u, depth + 1u); else { c.pc = 0x00372F38u; return; } if (c.pc != 0x003628B8u) [[unlikely]] return; }
L_003628B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003628C8; } }
L_003628C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 351u, depth + 1u); else { c.pc = 0x00372DB8u; return; } if (c.pc != 0x003628C8u) [[unlikely]] return; }
L_003628C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003628E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00362920; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362908u); set32(c.r[7], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0094(c, 371u, depth + 1u); else { c.pc = 0x003730A8u; return; } if (c.pc != 0x00362908u) [[unlikely]] return; }
L_00362908:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0094(c, 372u, depth); }
L_00362920:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362930u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 371u, depth + 1u); else { c.pc = 0x003730A8u; return; } if (c.pc != 0x00362930u) [[unlikely]] return; }
L_00362930:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0094(c, 372u, depth); }
L_00362960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0094(c, 259u, depth); }
L_003629F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[6].w[0] + 2047u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[7], c.r[7].w[0] >> 11);
    set32(c.r[5], c.r[5].w[0] - 9536u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A28u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00362A28u) [[unlikely]] return; }
L_00362A28:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 355u, depth + 1u); else { c.pc = 0x0035A800u; return; } if (c.pc != 0x00362A34u) [[unlikely]] return; }
L_00362A34:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00362A48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[5].w[0] + 2047u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] >> 11);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A78u); set32(c.r[5], c.r[5].w[0] - 9536u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00362A78u) [[unlikely]] return; }
L_00362A78:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 277u, depth + 1u); else { c.pc = 0x00357E58u; return; } if (c.pc != 0x00362A84u) [[unlikely]] return; }
L_00362A84:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00362AB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00362AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[16], c.r[16].w[0] + 10936u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 277u, depth + 1u); else { c.pc = 0x0036EC58u; return; } if (c.pc != 0x00362AF8u) [[unlikely]] return; }
L_00362AF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 9520u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B10u); set32(c.r[5], c.r[5].w[0] + 23672u);  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0036D5D0u; return; } if (c.pc != 0x00362B10u) [[unlikely]] return; }
L_00362B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B20u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (depth < kMaxDepth) unit_0093(c, 277u, depth + 1u); else { c.pc = 0x0036EC58u; return; } if (c.pc != 0x00362B20u) [[unlikely]] return; }
L_00362B20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[16], c.r[16].w[0] - 9512u);
    set32(c.r[5], c.r[5].w[0] + 12824u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0036D5D0u; return; } if (c.pc != 0x00362B38u) [[unlikely]] return; }
L_00362B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 131u, depth + 1u); else { c.pc = 0x0036D908u; return; } if (c.pc != 0x00362B40u) [[unlikely]] return; }
L_00362B40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00362BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B50u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0095(c, 97u, depth + 1u); else { c.pc = 0x00374B90u; return; } if (c.pc != 0x00362B50u) [[unlikely]] return; }
L_00362B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B58u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0095(c, 98u, depth + 1u); else { c.pc = 0x00374BC0u; return; } if (c.pc != 0x00362B58u) [[unlikely]] return; }
L_00362B58:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00362B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B6Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 377u, depth + 1u); else { c.pc = 0x003731B8u; return; } if (c.pc != 0x00362B6Cu) [[unlikely]] return; }
L_00362B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00362B84; } }
    c.budget -= 1;
L_00362B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B80u);  if (depth < kMaxDepth) unit_0094(c, 377u, depth + 1u); else { c.pc = 0x003731B8u; return; } if (c.pc != 0x00362B80u) [[unlikely]] return; }
L_00362B80:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00362B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00362BA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0094(c, 378u, depth); }
L_00362BA0:
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0094(c, 378u, depth); }
L_00362BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BC0u);  if (depth < kMaxDepth) unit_0095(c, 97u, depth + 1u); else { c.pc = 0x00374B90u; return; } if (c.pc != 0x00362BC0u) [[unlikely]] return; }
L_00362BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 98u, depth + 1u); else { c.pc = 0x00374BC0u; return; } if (c.pc != 0x00362BC8u) [[unlikely]] return; }
L_00362BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BD0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 377u, depth + 1u); else { c.pc = 0x003731B8u; return; } if (c.pc != 0x00362BD0u) [[unlikely]] return; }
L_00362BD0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0094(c, 378u, depth); }
L_00362BE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00362C18; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C0Cu); set32(c.r[6], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0095(c, 84u, depth + 1u); else { c.pc = 0x00374A10u; return; } if (c.pc != 0x00362C0Cu) [[unlikely]] return; }
L_00362C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00362C2C; } }
    c.budget -= 1;
L_00362C18:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 84u, depth + 1u); else { c.pc = 0x00374A10u; return; } if (c.pc != 0x00362C28u) [[unlikely]] return; }
L_00362C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00362C2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362C38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0095(c, 95u, depth); }
L_00362CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00362CD4u) [[unlikely]] return; }
L_00362CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 374u, depth + 1u); else { c.pc = 0x00362CF0u; return; } if (c.pc != 0x00362CDCu) [[unlikely]] return; }
L_00362CDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00362CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CFA0u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 96u, depth); }
L_00362D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CFB8u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 97u, depth); }
L_00362E58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E7Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00362E7Cu) [[unlikely]] return; }
L_00362E7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 380u, depth + 1u); else { c.pc = 0x00362EB0u; return; } if (c.pc != 0x00362E8Cu) [[unlikely]] return; }
L_00362E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E94u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 73u, depth + 1u); else { c.pc = 0x00354FA0u; return; } if (c.pc != 0x00362E94u) [[unlikely]] return; }
L_00362E94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] + 63u);
    set32(c.r[3], 0u - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[5].w[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[6].w[0] - c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[19].sd[0] < 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00362EF4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_00362EF8; }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00362F00; } }
L_00362EF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00362EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 9416u);  if (t) { goto L_00362F48; } }
L_00362F00:
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00362F38; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 26872u)));
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00362F00u | kUnwind; return; } goto L_00362F00; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00362F38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_00362F58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 9376u);
    c.budget -= 2;
L_00362F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F50u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00362F50u) [[unlikely]] return; }
L_00362F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003631AC; } }
L_00362F58:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 196u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[17].w[0] - 26872u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00362F84u) [[unlikely]] return; }
L_00362F84:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[10], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[8], 0u + 8192u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], 0u + 8288u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[6], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] - 292u);
    set32(c.r[5], c.r[5].w[0] + 1755u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    st32((c.r[17].w[0] + 52u), c.r[9].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[10].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363000u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x00363000u) [[unlikely]] return; }
L_00363000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003630B0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 99u, depth + 1u); else { c.pc = 0x00361138u; return; } if (c.pc != 0x00363014u) [[unlikely]] return; }
L_00363014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003630B0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00363070; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_00363030:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363058u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x00363058u) [[unlikely]] return; }
L_00363058:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003630B0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00363030u | kUnwind; return; } goto L_00363030; }
L_00363070:
    set32(c.r[16], c.r[17].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363084u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 102u, depth + 1u); else { c.pc = 0x0035D068u; return; } if (c.pc != 0x00363084u) [[unlikely]] return; }
L_00363084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003630B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363098u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 72u, depth + 1u); else { c.pc = 0x0035CC80u; return; } if (c.pc != 0x00363098u) [[unlikely]] return; }
L_00363098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003630B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630A8u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0095(c, 103u, depth + 1u); else { c.pc = 0x00374D58u; return; } if (c.pc != 0x003630A8u) [[unlikely]] return; }
L_003630A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003630C0; } }
L_003630B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 414u, depth + 1u); else { c.pc = 0x00363310u; return; } if (c.pc != 0x003630B8u) [[unlikely]] return; }
L_003630B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003631AC; } }
L_003630C0:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 114u, depth + 1u); else { c.pc = 0x00374EB0u; return; } if (c.pc != 0x003630CCu) [[unlikely]] return; }
L_003630CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630D4u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x003630D4u) [[unlikely]] return; }
L_003630D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[1].d[0] = c.r[1].d[0] | 39321ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], ld32((c.r[6].w[0] + 23652u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st32((c.r[17].w[0] + 56u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].sd[0] <= 0; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00363154; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], 0u - 128u);
    set32(c.r[2], c.r[17].w[0] + 66u);
    c.budget -= 3;
L_00363138:
    set32(c.r[16], c.r[16].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363138u | kUnwind; return; } goto L_00363138; } }
L_00363154:
    set32(c.r[16], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 100u), 0u);
    st16((c.r[17].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 114u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363194u); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0091(c, 273u, depth + 1u); else { c.pc = 0x00365B20u; return; } if (c.pc != 0x00363194u) [[unlikely]] return; }
L_00363194:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 102u, depth + 1u); else { c.pc = 0x00364A30u; return; } if (c.pc != 0x003631A0u) [[unlikely]] return; }
L_003631A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631A8u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x003631A8u) [[unlikely]] return; }
L_003631A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003631AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003631C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x003631E4u) [[unlikely]] return; }
L_003631E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 402u, depth + 1u); else { c.pc = 0x00363210u; return; } if (c.pc != 0x003631F0u) [[unlikely]] return; }
L_003631F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631F8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 73u, depth + 1u); else { c.pc = 0x00354FA0u; return; } if (c.pc != 0x003631F8u) [[unlikely]] return; }
L_003631F8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[5].w[0] - 1024u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1024u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363234u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 380u, depth + 1u); else { c.pc = 0x00362EB0u; return; } if (c.pc != 0x00363234u) [[unlikely]] return; }
L_00363234:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00363250; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036324Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0095(c, 313u, depth + 1u); else { c.pc = 0x00376E48u; return; } if (c.pc != 0x0036324Cu) [[unlikely]] return; }
L_0036324C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00363250:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23660u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00363284; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363284u) [[unlikely]] return; }
L_00363284:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23664u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003632AC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003632ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003632ACu) [[unlikely]] return; }
L_003632AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003632B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23672u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003632D4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003632D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003632D4u) [[unlikely]] return; }
L_003632D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003632E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x003632F4u) [[unlikely]] return; }
L_003632F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 414u, depth + 1u); else { c.pc = 0x00363310u; return; } if (c.pc != 0x003632FCu) [[unlikely]] return; }
L_003632FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00363358; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 9328u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00363358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363360u);  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00363268u; return; } if (c.pc != 0x00363360u) [[unlikely]] return; }
L_00363360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363368u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 407u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00363368u) [[unlikely]] return; }
L_00363368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 409u, depth + 1u); else { c.pc = 0x003632B8u; return; } if (c.pc != 0x00363370u) [[unlikely]] return; }
L_00363370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_0036338C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 479u, depth + 1u); else { c.pc = 0x00363938u; return; } if (c.pc != 0x00363388u) [[unlikely]] return; }
L_00363388:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0036338C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_003633A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036339Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_008F(c, 73u, depth + 1u); else { c.pc = 0x0035CC98u; return; } if (c.pc != 0x0036339Cu) [[unlikely]] return; }
L_0036339C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003633A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_003633B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633B0u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_008F(c, 111u, depth + 1u); else { c.pc = 0x0035D1E8u; return; } if (c.pc != 0x003633B0u) [[unlikely]] return; }
L_003633B0:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003633B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003633D4; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 182u, depth + 1u); else { c.pc = 0x00361828u; return; } if (c.pc != 0x003633CCu) [[unlikely]] return; }
L_003633CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 106u, depth + 1u); else { c.pc = 0x003611C8u; return; } if (c.pc != 0x003633D4u) [[unlikely]] return; }
L_003633D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003633E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633E8u); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0095(c, 112u, depth + 1u); else { c.pc = 0x00374E60u; return; } if (c.pc != 0x003633E8u) [[unlikely]] return; }
L_003633E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633F0u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x003633F0u) [[unlikely]] return; }
L_003633F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_00363414; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363410u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363410u) [[unlikely]] return; }
L_00363410:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_00363414:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003634A0; } }
    set32(c.r[18], c.r[17].w[0] + 128u);
    set32(c.r[16], c.r[17].w[0] + 120u);
    c.budget -= 3;
L_00363428:
    set32(c.r[3], ld32((c.r[16].w[0] - 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00363448; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] - 96u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363448u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363448u) [[unlikely]] return; }
L_00363448:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0036346C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363468u) [[unlikely]] return; }
L_00363468:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0036346C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_0036348C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363488u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363488u) [[unlikely]] return; }
L_00363488:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_0036348C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363428u | kUnwind; return; } goto L_00363428; } }
L_003634A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003634B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634B4u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_008C(c, 112u, depth + 1u); else { c.pc = 0x00350FD8u; return; } if (c.pc != 0x003634B4u) [[unlikely]] return; }
L_003634B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003634B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634C4u); set32(c.r[6], 0u + 196u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003634C4u) [[unlikely]] return; }
L_003634C4:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_003634E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634F8u);  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x003634F8u) [[unlikely]] return; }
L_003634F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363500u);  if (depth < kMaxDepth) unit_0090(c, 435u, depth + 1u); else { c.pc = 0x00363510u; return; } if (c.pc != 0x00363500u) [[unlikely]] return; }
L_00363500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 26872u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 9;
L_00363534:
    c.budget -= 1;
L_00363538:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00363550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036354Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 414u, depth + 1u); else { c.pc = 0x00363310u; return; } if (c.pc != 0x0036354Cu) [[unlikely]] return; }
L_0036354C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00363550:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 196u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363538u | kUnwind; return; } goto L_00363538; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363580u);  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00363580u) [[unlikely]] return; }
L_00363580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363588u);  if (depth < kMaxDepth) unit_0090(c, 442u, depth + 1u); else { c.pc = 0x00363598u; return; } if (c.pc != 0x00363588u) [[unlikely]] return; }
L_00363588:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00363510u | kUnwind; return; } goto L_00363510; }
L_003635B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036360C; } }
    set32(c.r[17], c.r[16].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003635E8:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003635FCu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003635FCu) [[unlikely]] return; }
L_003635FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003635E8u | kUnwind; return; } goto L_003635E8; }
L_0036360C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363618u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 116u, depth + 1u); else { c.pc = 0x0035D250u; return; } if (c.pc != 0x00363618u) [[unlikely]] return; }
L_00363618:
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363624u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 122u, depth + 1u); else { c.pc = 0x0035D310u; return; } if (c.pc != 0x00363624u) [[unlikely]] return; }
L_00363624:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 26880u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00363680; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351030u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 116u, depth); }
L_00363680:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003636A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636E8u); set32(c.r[6], c.r[6].w[0] << 11);  if (depth < kMaxDepth) unit_0090(c, 246u, depth + 1u); else { c.pc = 0x003620E0u; return; } if (c.pc != 0x003636E8u) [[unlikely]] return; }
L_003636E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 23640u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636F8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0090(c, 186u, depth + 1u); else { c.pc = 0x00361888u; return; } if (c.pc != 0x003636F8u) [[unlikely]] return; }
L_003636F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 182u, depth + 1u); else { c.pc = 0x00361828u; return; } if (c.pc != 0x00363708u) [[unlikely]] return; }
L_00363708:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 143u, depth + 1u); else { c.pc = 0x00361518u; return; } if (c.pc != 0x00363714u) [[unlikely]] return; }
L_00363714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036371Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0090(c, 170u, depth + 1u); else { c.pc = 0x00361710u; return; } if (c.pc != 0x0036371Cu) [[unlikely]] return; }
L_0036371C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363724u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0090(c, 124u, depth + 1u); else { c.pc = 0x003613E0u; return; } if (c.pc != 0x00363724u) [[unlikely]] return; }
L_00363724:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036373Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 112u, depth + 1u); else { c.pc = 0x00361250u; return; } if (c.pc != 0x0036373Cu) [[unlikely]] return; }
L_0036373C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363744u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0090(c, 154u, depth + 1u); else { c.pc = 0x00361608u; return; } if (c.pc != 0x00363744u) [[unlikely]] return; }
L_00363744:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003635B0u | kUnwind; return; } goto L_003635B0; }
L_00363770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036378Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0036378Cu) [[unlikely]] return; }
L_0036378C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363798u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 460u, depth + 1u); else { c.pc = 0x003637B0u; return; } if (c.pc != 0x00363798u) [[unlikely]] return; }
L_00363798:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_003637B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003637D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003637F0; } }
L_003637D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 9288u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_003637F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637F8u);  if (depth < kMaxDepth) unit_0090(c, 479u, depth + 1u); else { c.pc = 0x00363938u; return; } if (c.pc != 0x003637F8u) [[unlikely]] return; }
L_003637F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363800u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00363800u) [[unlikely]] return; }
L_00363800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036380Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x003635B0u; return; } if (c.pc != 0x0036380Cu) [[unlikely]] return; }
L_0036380C:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363820u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 273u, depth + 1u); else { c.pc = 0x00365B20u; return; } if (c.pc != 0x00363820u) [[unlikely]] return; }
L_00363820:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00363838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036384Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0036384Cu) [[unlikely]] return; }
L_0036384C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 468u, depth + 1u); else { c.pc = 0x00363868u; return; } if (c.pc != 0x00363854u) [[unlikely]] return; }
L_00363854:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036387Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0036387Cu) [[unlikely]] return; }
L_0036387C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 76u, depth + 1u); else { c.pc = 0x0035CD00u; return; } if (c.pc != 0x00363888u) [[unlikely]] return; }
L_00363888:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 77u, depth + 1u); else { c.pc = 0x0035CD18u; return; } if (c.pc != 0x00363894u) [[unlikely]] return; }
L_00363894:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 44u, depth + 1u); else { c.pc = 0x00378870u; return; } if (c.pc != 0x003638A0u) [[unlikely]] return; }
L_003638A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638A8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 124u, depth + 1u); else { c.pc = 0x0035D340u; return; } if (c.pc != 0x003638A8u) [[unlikely]] return; }
L_003638A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_003638DC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_003638DC; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003638D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003638D8u) [[unlikely]] return; }
L_003638D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_003638DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));  goto L_003638F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638ECu);  if (depth < kMaxDepth) unit_008C(c, 130u, depth + 1u); else { c.pc = 0x003511D0u; return; } if (c.pc != 0x003638ECu) [[unlikely]] return; }
L_003638EC:
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003638F0:
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00363908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036391Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0036391Cu) [[unlikely]] return; }
L_0036391C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363924u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 479u, depth + 1u); else { c.pc = 0x00363938u; return; } if (c.pc != 0x00363924u) [[unlikely]] return; }
L_00363924:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363938:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00363970; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 9248u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00363970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[2].w[0] + 23668u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0036399C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036398Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 124u, depth + 1u); else { c.pc = 0x0035D340u; return; } if (c.pc != 0x0036398Cu) [[unlikely]] return; }
L_0036398C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363998u) [[unlikely]] return; }
L_00363998:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0036399C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_003639B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639ACu);  if (depth < kMaxDepth) unit_0090(c, 124u, depth + 1u); else { c.pc = 0x003613E0u; return; } if (c.pc != 0x003639ACu) [[unlikely]] return; }
L_003639AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_003639B0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003639E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639C4u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0095(c, 124u, depth + 1u); else { c.pc = 0x00375120u; return; } if (c.pc != 0x003639C4u) [[unlikely]] return; }
L_003639C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003639E0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003639E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003639E0u) [[unlikely]] return; }
L_003639E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003639E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00363868u | kUnwind; return; } goto L_00363868; }
L_003639F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00363A0Cu) [[unlikely]] return; }
L_00363A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 489u, depth + 1u); else { c.pc = 0x00363A30u; return; } if (c.pc != 0x00363A14u) [[unlikely]] return; }
L_00363A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A1Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 73u, depth + 1u); else { c.pc = 0x00354FA0u; return; } if (c.pc != 0x00363A1Cu) [[unlikely]] return; }
L_00363A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00363A50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A48u); set32(c.r[4], c.r[4].w[0] - 9208u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00363A48u) [[unlikely]] return; }
L_00363A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00363A54; } }
L_00363A50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_00363A54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363A60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00363A74u) [[unlikely]] return; }
L_00363A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 494u, depth + 1u); else { c.pc = 0x00363A90u; return; } if (c.pc != 0x00363A7Cu) [[unlikely]] return; }
L_00363A7C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363A90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00363AA8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5994u);  if (t) { goto L_00363AB8; } }
L_00363AA8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  goto L_00363AC0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 5000u);
    c.budget -= 2;
L_00363AB8:
    st32((c.r[3].w[0] + 23720u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 2;
L_00363AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 23644u), c.r[4].w[0]);  c.pc = t; return; }
L_00363AC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AECu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00363AECu) [[unlikely]] return; }
L_00363AEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AFCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 498u, depth + 1u); else { c.pc = 0x00363B18u; return; } if (c.pc != 0x00363AFCu) [[unlikely]] return; }
L_00363AFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363B18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_00363B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B58u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0035CD30u; return; } if (c.pc != 0x00363B58u) [[unlikely]] return; }
L_00363B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 136u)));  if (t) { goto L_00363BBC; } }
L_00363B60:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00363BB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B74u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 251u, depth + 1u); else { c.pc = 0x0035E3B8u; return; } if (c.pc != 0x00363B74u) [[unlikely]] return; }
L_00363B74:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B80u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 247u, depth + 1u); else { c.pc = 0x0035E340u; return; } if (c.pc != 0x00363B80u) [[unlikely]] return; }
L_00363B80:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B8Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 249u, depth + 1u); else { c.pc = 0x0035E370u; return; } if (c.pc != 0x00363B8Cu) [[unlikely]] return; }
L_00363B8C:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00363B98u);  goto L_00363B9C; }
L_00363B9C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00363BB8; } }
L_00363BB0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00363BB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_00363BBC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C04u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00363C04u) [[unlikely]] return; }
L_00363C04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C14u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 506u, depth + 1u); else { c.pc = 0x00363C30u; return; } if (c.pc != 0x00363C14u) [[unlikely]] return; }
L_00363C14:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_00363CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C74u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 247u, depth + 1u); else { c.pc = 0x0035E340u; return; } if (c.pc != 0x00363C74u) [[unlikely]] return; }
L_00363C74:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C80u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0035E1A8u; return; } if (c.pc != 0x00363C80u) [[unlikely]] return; }
L_00363C80:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C8Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0035CD48u; return; } if (c.pc != 0x00363C8Cu) [[unlikely]] return; }
L_00363C8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C9Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 137u, depth + 1u); else { c.pc = 0x00364E40u; return; } if (c.pc != 0x00363C9Cu) [[unlikely]] return; }
L_00363C9C:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[17].w[0]);  if (t) { goto L_00363D28; } }
    c.budget -= 1;
L_00363CC0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00363D20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CD4u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_008F(c, 251u, depth + 1u); else { c.pc = 0x0035E3B8u; return; } if (c.pc != 0x00363CD4u) [[unlikely]] return; }
L_00363CD4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CE0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 247u, depth + 1u); else { c.pc = 0x0035E340u; return; } if (c.pc != 0x00363CE0u) [[unlikely]] return; }
L_00363CE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 249u, depth + 1u); else { c.pc = 0x0035E370u; return; } if (c.pc != 0x00363CECu) [[unlikely]] return; }
L_00363CEC:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00363CF8u);  goto L_00363CFC; }
L_00363CFC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00363D28; } }
    c.budget -= 1;
L_00363D20:
    st32((c.r[19].w[0]), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00363D28:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 23676u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00363D78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D9Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x00363D9Cu) [[unlikely]] return; }
L_00363D9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00363DC8u; return; } if (c.pc != 0x00363DACu) [[unlikely]] return; }
L_00363DAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00363DC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_00363E0C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_00363E10; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_00363E20; } }
L_00363E0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00363E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E18u); set32(c.r[4], c.r[4].w[0] - 9168u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00363E18u) [[unlikely]] return; }
L_00363E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_0091(c, 6u, depth); } }
L_00363E20:
    set32(c.r[2], ld32((c.r[16].w[0] + 23644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_00363E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E34u);  if (depth < kMaxDepth) unit_0090(c, 506u, depth + 1u); else { c.pc = 0x00363C30u; return; } if (c.pc != 0x00363E34u) [[unlikely]] return; }
L_00363E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_0091(c, 6u, depth); } }
    c.budget -= 1;
L_00363E40:
    st32((c.r[17].w[0] + 23724u), 0u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 24);  if (t) { goto L_00363FD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_00363E90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 26880u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
L_00363E90:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EA8u); c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (depth < kMaxDepth) unit_0090(c, 506u, depth + 1u); else { c.pc = 0x00363C30u; return; } if (c.pc != 0x00363EA8u) [[unlikely]] return; }
L_00363EA8:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[20], c.r[22].w[0] + 23720u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[5] = c.r[1].w[0];
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 23724u), c.f[1]);  if (t) { goto L_00363F28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 136u)));  [[clang::musttail]] return unit_0091(c, 5u, depth); }
L_00363F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23680u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[16].w[0] + 23644u);  if (t) { goto L_00363F68; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00363DC8u; return; } if (c.pc != 0x00363F54u) [[unlikely]] return; }
L_00363F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F5Cu); st32((c.r[16].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0090(c, 514u, depth + 1u); else { c.pc = 0x00363D60u; return; } if (c.pc != 0x00363F5Cu) [[unlikely]] return; }
L_00363F5C:
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_00363F68:
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 17;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0] + 156u), c.r[3].w[0]);  goto L_00363FC4; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 6;
L_00363FC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 26880u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 160u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0091(c, 4u, depth); } }
    c.budget -= 1;
L_00363FD8:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), 0u);  [[clang::musttail]] return unit_0091(c, 3u, depth); }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363FF4u); c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (depth < kMaxDepth) unit_008F(c, 251u, depth + 1u); else { c.pc = 0x0035E3B8u; return; } if (c.pc != 0x00363FF4u) [[unlikely]] return; }
L_00363FF4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364000u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 247u, depth + 1u); else { c.pc = 0x0035E340u; return; } if (c.pc != 0x00364000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0091(c, 1u, depth);
}

}
