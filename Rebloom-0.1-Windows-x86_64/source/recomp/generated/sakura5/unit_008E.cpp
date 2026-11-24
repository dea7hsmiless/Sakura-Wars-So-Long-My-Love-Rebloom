#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008E[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 165,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0,
    0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215,
    0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0,
    258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0,
    0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0,
    449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0,
    491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0,
    502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00358000;
    case 2u: goto L_00358008;
    case 3u: goto L_00358028;
    case 4u: goto L_0035806C;
    case 5u: goto L_00358074;
    case 6u: goto L_00358098;
    case 7u: goto L_003580AC;
    case 8u: goto L_003580C4;
    case 9u: goto L_003580E8;
    case 10u: goto L_0035811C;
    case 11u: goto L_00358144;
    case 12u: goto L_00358174;
    case 13u: goto L_0035817C;
    case 14u: goto L_00358190;
    case 15u: goto L_003581C0;
    case 16u: goto L_003581DC;
    case 17u: goto L_003581E8;
    case 18u: goto L_003581F0;
    case 19u: goto L_00358208;
    case 20u: goto L_0035823C;
    case 21u: goto L_00358244;
    case 22u: goto L_00358260;
    case 23u: goto L_00358274;
    case 24u: goto L_0035828C;
    case 25u: goto L_003582A8;
    case 26u: goto L_003582F0;
    case 27u: goto L_00358308;
    case 28u: goto L_00358318;
    case 29u: goto L_0035832C;
    case 30u: goto L_00358334;
    case 31u: goto L_00358348;
    case 32u: goto L_00358374;
    case 33u: goto L_00358390;
    case 34u: goto L_003583A8;
    case 35u: goto L_003583B0;
    case 36u: goto L_003583C0;
    case 37u: goto L_00358400;
    case 38u: goto L_00358410;
    case 39u: goto L_00358418;
    case 40u: goto L_00358428;
    case 41u: goto L_00358450;
    case 42u: goto L_00358464;
    case 43u: goto L_00358488;
    case 44u: goto L_003584B0;
    case 45u: goto L_003584C4;
    case 46u: goto L_003584CC;
    case 47u: goto L_00358518;
    case 48u: goto L_00358524;
    case 49u: goto L_00358530;
    case 50u: goto L_00358548;
    case 51u: goto L_00358554;
    case 52u: goto L_00358560;
    case 53u: goto L_0035856C;
    case 54u: goto L_00358588;
    case 55u: goto L_003585AC;
    case 56u: goto L_003585BC;
    case 57u: goto L_003585C4;
    case 58u: goto L_003585E0;
    case 59u: goto L_00358638;
    case 60u: goto L_00358654;
    case 61u: goto L_00358670;
    case 62u: goto L_00358694;
    case 63u: goto L_003586A4;
    case 64u: goto L_003586AC;
    case 65u: goto L_003586C8;
    case 66u: goto L_00358738;
    case 67u: goto L_00358778;
    case 68u: goto L_003587B0;
    case 69u: goto L_003587D8;
    case 70u: goto L_003587F4;
    case 71u: goto L_00358808;
    case 72u: goto L_00358830;
    case 73u: goto L_00358838;
    case 74u: goto L_00358848;
    case 75u: goto L_0035885C;
    case 76u: goto L_00358878;
    case 77u: goto L_00358884;
    case 78u: goto L_003588A0;
    case 79u: goto L_003588C8;
    case 80u: goto L_003588EC;
    case 81u: goto L_003588FC;
    case 82u: goto L_00358904;
    case 83u: goto L_00358920;
    case 84u: goto L_0035893C;
    case 85u: goto L_00358998;
    case 86u: goto L_003589C4;
    case 87u: goto L_003589D8;
    case 88u: goto L_00358A14;
    case 89u: goto L_00358A28;
    case 90u: goto L_00358A30;
    case 91u: goto L_00358A38;
    case 92u: goto L_00358A4C;
    case 93u: goto L_00358A54;
    case 94u: goto L_00358A6C;
    case 95u: goto L_00358A88;
    case 96u: goto L_00358A9C;
    case 97u: goto L_00358AA4;
    case 98u: goto L_00358AAC;
    case 99u: goto L_00358AC0;
    case 100u: goto L_00358AEC;
    case 101u: goto L_00358B00;
    case 102u: goto L_00358B3C;
    case 103u: goto L_00358B50;
    case 104u: goto L_00358B6C;
    case 105u: goto L_00358B88;
    case 106u: goto L_00358BB8;
    case 107u: goto L_00358BC4;
    case 108u: goto L_00358BF0;
    case 109u: goto L_00358C08;
    case 110u: goto L_00358C1C;
    case 111u: goto L_00358C30;
    case 112u: goto L_00358C50;
    case 113u: goto L_00358C60;
    case 114u: goto L_00358C68;
    case 115u: goto L_00358C78;
    case 116u: goto L_00358C98;
    case 117u: goto L_00358CA0;
    case 118u: goto L_00358CB4;
    case 119u: goto L_00358CD8;
    case 120u: goto L_00358CFC;
    case 121u: goto L_00358D0C;
    case 122u: goto L_00358D14;
    case 123u: goto L_00358D30;
    case 124u: goto L_00358D54;
    case 125u: goto L_00358D6C;
    case 126u: goto L_00358D94;
    case 127u: goto L_00358DDC;
    case 128u: goto L_00358E24;
    case 129u: goto L_00358E48;
    case 130u: goto L_00358E5C;
    case 131u: goto L_00358E64;
    case 132u: goto L_00358E6C;
    case 133u: goto L_00358E80;
    case 134u: goto L_00358E98;
    case 135u: goto L_00358EB0;
    case 136u: goto L_00358EC4;
    case 137u: goto L_00358ECC;
    case 138u: goto L_00358ED4;
    case 139u: goto L_00358EE8;
    case 140u: goto L_00358EFC;
    case 141u: goto L_00358F28;
    case 142u: goto L_00358F3C;
    case 143u: goto L_00358F44;
    case 144u: goto L_00358F4C;
    case 145u: goto L_00358F60;
    case 146u: goto L_00358F80;
    case 147u: goto L_00358FA8;
    case 148u: goto L_00358FB0;
    case 149u: goto L_00358FC4;
    case 150u: goto L_00358FD8;
    case 151u: goto L_00358FF4;
    case 152u: goto L_00359000;
    case 153u: goto L_00359008;
    case 154u: goto L_00359020;
    case 155u: goto L_00359040;
    case 156u: goto L_00359070;
    case 157u: goto L_00359084;
    case 158u: goto L_0035908C;
    case 159u: goto L_00359094;
    case 160u: goto L_003590A8;
    case 161u: goto L_003590C0;
    case 162u: goto L_003590D8;
    case 163u: goto L_003590EC;
    case 164u: goto L_003590F4;
    case 165u: goto L_003590FC;
    case 166u: goto L_00359110;
    case 167u: goto L_00359128;
    case 168u: goto L_00359140;
    case 169u: goto L_003591A8;
    case 170u: goto L_003591B8;
    case 171u: goto L_003591EC;
    case 172u: goto L_00359204;
    case 173u: goto L_0035920C;
    case 174u: goto L_00359230;
    case 175u: goto L_0035924C;
    case 176u: goto L_00359258;
    case 177u: goto L_00359294;
    case 178u: goto L_003592B0;
    case 179u: goto L_003592B8;
    case 180u: goto L_003592E0;
    case 181u: goto L_00359324;
    case 182u: goto L_00359378;
    case 183u: goto L_003593B8;
    case 184u: goto L_003593F4;
    case 185u: goto L_00359438;
    case 186u: goto L_0035944C;
    case 187u: goto L_00359454;
    case 188u: goto L_0035945C;
    case 189u: goto L_00359470;
    case 190u: goto L_00359498;
    case 191u: goto L_003594B4;
    case 192u: goto L_003594C0;
    case 193u: goto L_003594D8;
    case 194u: goto L_00359510;
    case 195u: goto L_00359524;
    case 196u: goto L_0035952C;
    case 197u: goto L_00359534;
    case 198u: goto L_00359548;
    case 199u: goto L_00359580;
    case 200u: goto L_00359594;
    case 201u: goto L_0035959C;
    case 202u: goto L_003595A4;
    case 203u: goto L_003595B8;
    case 204u: goto L_003595D0;
    case 205u: goto L_003595D8;
    case 206u: goto L_003595E0;
    case 207u: goto L_003595F0;
    case 208u: goto L_003595F8;
    case 209u: goto L_00359608;
    case 210u: goto L_0035961C;
    case 211u: goto L_0035964C;
    case 212u: goto L_00359658;
    case 213u: goto L_00359664;
    case 214u: goto L_00359670;
    case 215u: goto L_0035967C;
    case 216u: goto L_00359688;
    case 217u: goto L_00359694;
    case 218u: goto L_003596A0;
    case 219u: goto L_003596B8;
    case 220u: goto L_003596C8;
    case 221u: goto L_003596D0;
    case 222u: goto L_003596E0;
    case 223u: goto L_00359748;
    case 224u: goto L_00359778;
    case 225u: goto L_003597B8;
    case 226u: goto L_00359878;
    case 227u: goto L_00359898;
    case 228u: goto L_00359988;
    case 229u: goto L_00359A48;
    case 230u: goto L_00359AFC;
    case 231u: goto L_00359B30;
    case 232u: goto L_00359B58;
    case 233u: goto L_00359B6C;
    case 234u: goto L_00359BA8;
    case 235u: goto L_00359BC4;
    case 236u: goto L_00359C00;
    case 237u: goto L_00359C64;
    case 238u: goto L_00359C74;
    case 239u: goto L_00359C84;
    case 240u: goto L_00359CA0;
    case 241u: goto L_00359CC0;
    case 242u: goto L_00359CF8;
    case 243u: goto L_00359D48;
    case 244u: goto L_00359D54;
    case 245u: goto L_00359D78;
    case 246u: goto L_00359DB4;
    case 247u: goto L_00359DCC;
    case 248u: goto L_00359DE0;
    case 249u: goto L_00359DF4;
    case 250u: goto L_00359E0C;
    case 251u: goto L_00359E2C;
    case 252u: goto L_00359EF0;
    case 253u: goto L_00359F08;
    case 254u: goto L_00359F48;
    case 255u: goto L_00359F58;
    case 256u: goto L_00359F68;
    case 257u: goto L_00359F78;
    case 258u: goto L_00359F80;
    case 259u: goto L_00359F88;
    case 260u: goto L_00359F98;
    case 261u: goto L_00359FA8;
    case 262u: goto L_00359FB8;
    case 263u: goto L_00359FC8;
    case 264u: goto L_00359FD8;
    case 265u: goto L_0035A010;
    case 266u: goto L_0035A018;
    case 267u: goto L_0035A020;
    case 268u: goto L_0035A028;
    case 269u: goto L_0035A030;
    case 270u: goto L_0035A038;
    case 271u: goto L_0035A040;
    case 272u: goto L_0035A048;
    case 273u: goto L_0035A050;
    case 274u: goto L_0035A058;
    case 275u: goto L_0035A060;
    case 276u: goto L_0035A068;
    case 277u: goto L_0035A078;
    case 278u: goto L_0035A088;
    case 279u: goto L_0035A09C;
    case 280u: goto L_0035A0A4;
    case 281u: goto L_0035A0E4;
    case 282u: goto L_0035A0F8;
    case 283u: goto L_0035A118;
    case 284u: goto L_0035A13C;
    case 285u: goto L_0035A144;
    case 286u: goto L_0035A168;
    case 287u: goto L_0035A188;
    case 288u: goto L_0035A1BC;
    case 289u: goto L_0035A1C4;
    case 290u: goto L_0035A1CC;
    case 291u: goto L_0035A1D4;
    case 292u: goto L_0035A1DC;
    case 293u: goto L_0035A1E4;
    case 294u: goto L_0035A1F0;
    case 295u: goto L_0035A200;
    case 296u: goto L_0035A210;
    case 297u: goto L_0035A218;
    case 298u: goto L_0035A220;
    case 299u: goto L_0035A228;
    case 300u: goto L_0035A230;
    case 301u: goto L_0035A238;
    case 302u: goto L_0035A240;
    case 303u: goto L_0035A248;
    case 304u: goto L_0035A250;
    case 305u: goto L_0035A268;
    case 306u: goto L_0035A2A4;
    case 307u: goto L_0035A2B8;
    case 308u: goto L_0035A2C8;
    case 309u: goto L_0035A2D8;
    case 310u: goto L_0035A2F0;
    case 311u: goto L_0035A308;
    case 312u: goto L_0035A310;
    case 313u: goto L_0035A318;
    case 314u: goto L_0035A338;
    case 315u: goto L_0035A348;
    case 316u: goto L_0035A380;
    case 317u: goto L_0035A398;
    case 318u: goto L_0035A3C0;
    case 319u: goto L_0035A3D8;
    case 320u: goto L_0035A3F0;
    case 321u: goto L_0035A3F8;
    case 322u: goto L_0035A400;
    case 323u: goto L_0035A410;
    case 324u: goto L_0035A424;
    case 325u: goto L_0035A438;
    case 326u: goto L_0035A440;
    case 327u: goto L_0035A468;
    case 328u: goto L_0035A484;
    case 329u: goto L_0035A490;
    case 330u: goto L_0035A4A8;
    case 331u: goto L_0035A528;
    case 332u: goto L_0035A570;
    case 333u: goto L_0035A588;
    case 334u: goto L_0035A598;
    case 335u: goto L_0035A5BC;
    case 336u: goto L_0035A5CC;
    case 337u: goto L_0035A5E8;
    case 338u: goto L_0035A624;
    case 339u: goto L_0035A644;
    case 340u: goto L_0035A660;
    case 341u: goto L_0035A678;
    case 342u: goto L_0035A688;
    case 343u: goto L_0035A698;
    case 344u: goto L_0035A6B0;
    case 345u: goto L_0035A6C4;
    case 346u: goto L_0035A6CC;
    case 347u: goto L_0035A6E0;
    case 348u: goto L_0035A720;
    case 349u: goto L_0035A728;
    case 350u: goto L_0035A734;
    case 351u: goto L_0035A748;
    case 352u: goto L_0035A760;
    case 353u: goto L_0035A768;
    case 354u: goto L_0035A770;
    case 355u: goto L_0035A800;
    case 356u: goto L_0035A81C;
    case 357u: goto L_0035A828;
    case 358u: goto L_0035A840;
    case 359u: goto L_0035A928;
    case 360u: goto L_0035A93C;
    case 361u: goto L_0035A948;
    case 362u: goto L_0035A954;
    case 363u: goto L_0035A970;
    case 364u: goto L_0035A994;
    case 365u: goto L_0035A9A4;
    case 366u: goto L_0035A9C0;
    case 367u: goto L_0035AA30;
    case 368u: goto L_0035AA40;
    case 369u: goto L_0035AA4C;
    case 370u: goto L_0035AA78;
    case 371u: goto L_0035AA8C;
    case 372u: goto L_0035AA94;
    case 373u: goto L_0035AA9C;
    case 374u: goto L_0035AAB0;
    case 375u: goto L_0035AAC8;
    case 376u: goto L_0035AB58;
    case 377u: goto L_0035AB84;
    case 378u: goto L_0035AB9C;
    case 379u: goto L_0035ABB4;
    case 380u: goto L_0035ABE0;
    case 381u: goto L_0035AC18;
    case 382u: goto L_0035AC20;
    case 383u: goto L_0035AC30;
    case 384u: goto L_0035AC50;
    case 385u: goto L_0035ACA8;
    case 386u: goto L_0035ACB0;
    case 387u: goto L_0035ACB8;
    case 388u: goto L_0035ACC0;
    case 389u: goto L_0035ACE0;
    case 390u: goto L_0035AD14;
    case 391u: goto L_0035AD38;
    case 392u: goto L_0035AD54;
    case 393u: goto L_0035AD88;
    case 394u: goto L_0035AD98;
    case 395u: goto L_0035ADA0;
    case 396u: goto L_0035ADC8;
    case 397u: goto L_0035ADD0;
    case 398u: goto L_0035AE90;
    case 399u: goto L_0035AEF8;
    case 400u: goto L_0035AF0C;
    case 401u: goto L_0035AF20;
    case 402u: goto L_0035AF2C;
    case 403u: goto L_0035AF3C;
    case 404u: goto L_0035AF44;
    case 405u: goto L_0035AF4C;
    case 406u: goto L_0035AF54;
    case 407u: goto L_0035AF98;
    case 408u: goto L_0035AFF8;
    case 409u: goto L_0035B020;
    case 410u: goto L_0035B048;
    case 411u: goto L_0035B088;
    case 412u: goto L_0035B0F0;
    case 413u: goto L_0035B104;
    case 414u: goto L_0035B120;
    case 415u: goto L_0035B130;
    case 416u: goto L_0035B144;
    case 417u: goto L_0035B158;
    case 418u: goto L_0035B170;
    case 419u: goto L_0035B17C;
    case 420u: goto L_0035B298;
    case 421u: goto L_0035B2B4;
    case 422u: goto L_0035B2D8;
    case 423u: goto L_0035B2E8;
    case 424u: goto L_0035B304;
    case 425u: goto L_0035B328;
    case 426u: goto L_0035B338;
    case 427u: goto L_0035B350;
    case 428u: goto L_0035B374;
    case 429u: goto L_0035B398;
    case 430u: goto L_0035B3B8;
    case 431u: goto L_0035B3DC;
    case 432u: goto L_0035B3FC;
    case 433u: goto L_0035B418;
    case 434u: goto L_0035B464;
    case 435u: goto L_0035B480;
    case 436u: goto L_0035B498;
    case 437u: goto L_0035B4AC;
    case 438u: goto L_0035B578;
    case 439u: goto L_0035B5CC;
    case 440u: goto L_0035B5E0;
    case 441u: goto L_0035B5F0;
    case 442u: goto L_0035B600;
    case 443u: goto L_0035B654;
    case 444u: goto L_0035B668;
    case 445u: goto L_0035B678;
    case 446u: goto L_0035B688;
    case 447u: goto L_0035B6DC;
    case 448u: goto L_0035B6F0;
    case 449u: goto L_0035B700;
    case 450u: goto L_0035B70C;
    case 451u: goto L_0035B7F0;
    case 452u: goto L_0035B800;
    case 453u: goto L_0035B8D0;
    case 454u: goto L_0035B8E0;
    case 455u: goto L_0035B8F8;
    case 456u: goto L_0035B940;
    case 457u: goto L_0035B950;
    case 458u: goto L_0035B960;
    case 459u: goto L_0035BA00;
    case 460u: goto L_0035BA14;
    case 461u: goto L_0035BA24;
    case 462u: goto L_0035BA2C;
    case 463u: goto L_0035BA34;
    case 464u: goto L_0035BA3C;
    case 465u: goto L_0035BA4C;
    case 466u: goto L_0035BA60;
    case 467u: goto L_0035BA88;
    case 468u: goto L_0035BAD8;
    case 469u: goto L_0035BB00;
    case 470u: goto L_0035BB08;
    case 471u: goto L_0035BB10;
    case 472u: goto L_0035BB18;
    case 473u: goto L_0035BB20;
    case 474u: goto L_0035BB38;
    case 475u: goto L_0035BB44;
    case 476u: goto L_0035BB50;
    case 477u: goto L_0035BB70;
    case 478u: goto L_0035BBC0;
    case 479u: goto L_0035BBD0;
    case 480u: goto L_0035BBD8;
    case 481u: goto L_0035BBE0;
    case 482u: goto L_0035BC40;
    case 483u: goto L_0035BC90;
    case 484u: goto L_0035BCA0;
    case 485u: goto L_0035BCA8;
    case 486u: goto L_0035BCB0;
    case 487u: goto L_0035BD10;
    case 488u: goto L_0035BD60;
    case 489u: goto L_0035BD70;
    case 490u: goto L_0035BD78;
    case 491u: goto L_0035BD80;
    case 492u: goto L_0035BDE0;
    case 493u: goto L_0035BE28;
    case 494u: goto L_0035BE88;
    case 495u: goto L_0035BE98;
    case 496u: goto L_0035BEA0;
    case 497u: goto L_0035BEA8;
    case 498u: goto L_0035BF10;
    case 499u: goto L_0035BF60;
    case 500u: goto L_0035BF70;
    case 501u: goto L_0035BF78;
    case 502u: goto L_0035BF80;
    case 503u: goto L_0035BFE0;
    default: bad_entry(c, 0x00358000u); return;
    }
L_00358000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358008u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358008u) [[unlikely]] return; }
L_00358008:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00358028:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u - 1u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035806Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x0035806Cu) [[unlikely]] return; }
L_0035806C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358074u);  if (depth < kMaxDepth) unit_008D(c, 266u, depth + 1u); else { c.pc = 0x00357D10u; return; } if (c.pc != 0x00358074u) [[unlikely]] return; }
L_00358074:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003580AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358098u);  if (depth < kMaxDepth) unit_008D(c, 287u, depth + 1u); else { c.pc = 0x00357F40u; return; } if (c.pc != 0x00358098u) [[unlikely]] return; }
L_00358098:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003580B0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580ACu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 31u, depth + 1u); else { c.pc = 0x00358348u; return; } if (c.pc != 0x003580ACu) [[unlikely]] return; }
L_003580AC:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003580B0:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580C4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x003580C4u) [[unlikely]] return; }
L_003580C4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003580E8:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 272u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[8], c.r[29].w[0] + 260u);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035811Cu); set32(c.r[9], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x003592E0u; return; } if (c.pc != 0x0035811Cu) [[unlikely]] return; }
L_0035811C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00358130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003581A8; } }
    c.budget -= 1;
L_00358130:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358144u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 189u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x00358144u) [[unlikely]] return; }
L_00358144:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358174u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 117u, depth + 1u); else { c.pc = 0x00361338u; return; } if (c.pc != 0x00358174u) [[unlikely]] return; }
L_00358174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035817Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 138u, depth + 1u); else { c.pc = 0x003614D8u; return; } if (c.pc != 0x0035817Cu) [[unlikely]] return; }
L_0035817C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 264u)));  goto L_00358198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358190u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 130u, depth + 1u); else { c.pc = 0x00361450u; return; } if (c.pc != 0x00358190u) [[unlikely]] return; }
L_00358190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003581A8; } }
L_00358198:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 11);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_003581A8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003581C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581DCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x003581DCu) [[unlikely]] return; }
L_003581DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 19u, depth + 1u); else { c.pc = 0x00358208u; return; } if (c.pc != 0x003581E8u) [[unlikely]] return; }
L_003581E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581F0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x003581F0u) [[unlikely]] return; }
L_003581F0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358208:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035823Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x0035823Cu) [[unlikely]] return; }
L_0035823C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358244u);  if (depth < kMaxDepth) unit_008D(c, 266u, depth + 1u); else { c.pc = 0x00357D10u; return; } if (c.pc != 0x00358244u) [[unlikely]] return; }
L_00358244:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00358274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358260u);  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003580E8u; return; } if (c.pc != 0x00358260u) [[unlikely]] return; }
L_00358260:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00358278; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358274u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 31u, depth + 1u); else { c.pc = 0x00358348u; return; } if (c.pc != 0x00358274u) [[unlikely]] return; }
L_00358274:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00358278:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035828Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x0035828Cu) [[unlikely]] return; }
L_0035828C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003582A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0035830C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0035830C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 29752u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_003582F8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582F0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008D(c, 124u, depth + 1u); else { c.pc = 0x003566E8u; return; } if (c.pc != 0x003582F0u) [[unlikely]] return; }
L_003582F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 2;
L_003582F8:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00358308u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00358308u) [[unlikely]] return; }
L_00358308:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035830C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035832Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x0035832Cu) [[unlikely]] return; }
L_0035832C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 31u, depth + 1u); else { c.pc = 0x00358348u; return; } if (c.pc != 0x00358334u) [[unlikely]] return; }
L_00358334:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003595D8; }
L_00358348:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358374u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358374u) [[unlikely]] return; }
L_00358374:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003583E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  goto L_00358394; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358390u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 85u, depth + 1u); else { c.pc = 0x00358998u; return; } if (c.pc != 0x00358390u) [[unlikely]] return; }
L_00358390:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00358394:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003583B0; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583A8u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0090(c, 130u, depth + 1u); else { c.pc = 0x00361450u; return; } if (c.pc != 0x003583A8u) [[unlikely]] return; }
L_003583A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 106u, depth + 1u); else { c.pc = 0x003611C8u; return; } if (c.pc != 0x003583B0u) [[unlikely]] return; }
L_003583B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583C0u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003583C0u) [[unlikely]] return; }
L_003583C0:
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356C58u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 177u, depth); }
L_003583E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358410u);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358410u) [[unlikely]] return; }
L_00358410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358418u);  if (depth < kMaxDepth) unit_008E(c, 40u, depth + 1u); else { c.pc = 0x00358428u; return; } if (c.pc != 0x00358418u) [[unlikely]] return; }
L_00358418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003595D8; }
L_00358428:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 27640u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00358450:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00358468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 31u, depth + 1u); else { c.pc = 0x00358348u; return; } if (c.pc != 0x00358464u) [[unlikely]] return; }
L_00358464:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00358468:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358450u | kUnwind; return; } goto L_00358450; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358488:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584B0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 138u, depth + 1u); else { c.pc = 0x003614D8u; return; } if (c.pc != 0x003584B0u) [[unlikely]] return; }
L_003584B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003584C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584C4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 175u, depth + 1u); else { c.pc = 0x003617A8u; return; } if (c.pc != 0x003584C4u) [[unlikely]] return; }
L_003584C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584CCu);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x003584CCu) [[unlikely]] return; }
L_003584CC:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[4].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00358510; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00358564; } }
    c.budget -= 1;
L_00358510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358518u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 186u, depth + 1u); else { c.pc = 0x00361888u; return; } if (c.pc != 0x00358518u) [[unlikely]] return; }
L_00358518:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358524u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 294u, depth + 1u); else { c.pc = 0x00362458u; return; } if (c.pc != 0x00358524u) [[unlikely]] return; }
L_00358524:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358530u); set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0090(c, 251u, depth + 1u); else { c.pc = 0x00362148u; return; } if (c.pc != 0x00358530u) [[unlikely]] return; }
L_00358530:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358548u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 271u, depth + 1u); else { c.pc = 0x00362278u; return; } if (c.pc != 0x00358548u) [[unlikely]] return; }
L_00358548:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358554u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0090(c, 143u, depth + 1u); else { c.pc = 0x00361518u; return; } if (c.pc != 0x00358554u) [[unlikely]] return; }
L_00358554:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358560u); set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0090(c, 162u, depth + 1u); else { c.pc = 0x00361680u; return; } if (c.pc != 0x00358560u) [[unlikely]] return; }
L_00358560:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_00358564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035856Cu);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035856Cu) [[unlikely]] return; }
L_0035856C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358588:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003585ACu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x003585ACu) [[unlikely]] return; }
L_003585AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003585BCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 58u, depth + 1u); else { c.pc = 0x003585E0u; return; } if (c.pc != 0x003585BCu) [[unlikely]] return; }
L_003585BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003585C4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x003585C4u) [[unlikely]] return; }
L_003585C4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003585E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00358608; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 11808u);  if (t) { goto L_00358630; } }
L_00358608:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00358620; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 11768u);  if (t) { goto L_00358630; } }
    c.budget -= 1;
L_00358620:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_00358640; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 11720u);
    c.budget -= 2;
L_00358630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358638u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358638u) [[unlikely]] return; }
L_00358638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0035865C; } }
L_00358640:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035865C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358654u);  if (depth < kMaxDepth) unit_008E(c, 43u, depth + 1u); else { c.pc = 0x00358488u; return; } if (c.pc != 0x00358654u) [[unlikely]] return; }
L_00358654:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035865C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358694u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358694u) [[unlikely]] return; }
L_00358694:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003586A4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 65u, depth + 1u); else { c.pc = 0x003586C8u; return; } if (c.pc != 0x003586A4u) [[unlikely]] return; }
L_003586A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003586ACu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x003586ACu) [[unlikely]] return; }
L_003586AC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003586C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003585E0u | kUnwind; return; } goto L_003585E0; }
L_00358738:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358778u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358778u) [[unlikely]] return; }
L_00358778:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00358788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 11680u);  if (t) { goto L_003587A8; } }
L_00358788:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00358798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 11640u);  if (t) { goto L_003587A8; } }
L_00358798:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_003587B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 11592u);
    c.budget -= 2;
L_003587A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587B0u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x003587B0u) [[unlikely]] return; }
L_003587B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003588A4; } }
L_003587B8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003588A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003587E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587D8u); set32(c.r[4], c.r[4].w[0] - 11552u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x003587D8u) [[unlikely]] return; }
L_003587D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003588A4; } }
L_003587E0:
    set32(c.r[18], c.r[20].w[0] << 11);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x003587F4u) [[unlikely]] return; }
L_003587F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003588A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358808u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00358808u) [[unlikely]] return; }
L_00358808:
    st32((c.r[16].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 29752u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00358830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358830u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 124u, depth + 1u); else { c.pc = 0x003566E8u; return; } if (c.pc != 0x00358830u) [[unlikely]] return; }
L_00358830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358838u);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x00358838u) [[unlikely]] return; }
L_00358838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358848u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 43u, depth + 1u); else { c.pc = 0x00358488u; return; } if (c.pc != 0x00358848u) [[unlikely]] return; }
L_00358848:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] > 0) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00358888; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035885Cu);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035885Cu) [[unlikely]] return; }
L_0035885C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035887C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00358878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00358878u) [[unlikely]] return; }
L_00358878:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0035887C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358884u);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x00358884u) [[unlikely]] return; }
L_00358884:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00358888:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x003588A0u) [[unlikely]] return; }
L_003588A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003588A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003588C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588ECu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x003588ECu) [[unlikely]] return; }
L_003588EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588FCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 83u, depth + 1u); else { c.pc = 0x00358920u; return; } if (c.pc != 0x003588FCu) [[unlikely]] return; }
L_003588FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358904u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358904u) [[unlikely]] return; }
L_00358904:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[6].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00358950; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035893Cu); set32(c.r[4], c.r[4].w[0] - 11504u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x0035893Cu) [[unlikely]] return; }
L_0035893C:
    set32(c.r[2], 0u - 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00358738u | kUnwind; return; } goto L_00358738; }
L_00358998:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003589C4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x003589C4u) [[unlikely]] return; }
L_003589C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 11448u);  if (t) { goto L_003589E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003589D8u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x003589D8u) [[unlikely]] return; }
L_003589D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00358A70; } }
L_003589E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00358A6C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00358A00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00358A6C; } }
L_00358A00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00358A20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A14u); set32(c.r[4], c.r[4].w[0] - 11408u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358A14u) [[unlikely]] return; }
L_00358A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00358A70; } }
    c.budget -= 1;
L_00358A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A28u);  if (depth < kMaxDepth) unit_0090(c, 175u, depth + 1u); else { c.pc = 0x003617A8u; return; } if (c.pc != 0x00358A28u) [[unlikely]] return; }
L_00358A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A30u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00358A30u) [[unlikely]] return; }
L_00358A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A38u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 148u, depth + 1u); else { c.pc = 0x00361580u; return; } if (c.pc != 0x00358A38u) [[unlikely]] return; }
L_00358A38:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A4Cu); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 25u, depth + 1u); else { c.pc = 0x003582A8u; return; } if (c.pc != 0x00358A4Cu) [[unlikely]] return; }
L_00358A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A54u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x00358A54u) [[unlikely]] return; }
L_00358A54:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A6Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358A6Cu) [[unlikely]] return; }
L_00358A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00358A70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358A88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358A9Cu) [[unlikely]] return; }
L_00358A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358AA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 99u, depth + 1u); else { c.pc = 0x00358AC0u; return; } if (c.pc != 0x00358AA4u) [[unlikely]] return; }
L_00358AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358AACu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358AACu) [[unlikely]] return; }
L_00358AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358AECu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358AECu) [[unlikely]] return; }
L_00358AEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 11360u);  if (t) { goto L_00358B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B00u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358B00u) [[unlikely]] return; }
L_00358B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00358B70; } }
L_00358B08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00358B6C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00358B28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00358B6C; } }
L_00358B28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00358B48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B3Cu); set32(c.r[4], c.r[4].w[0] - 11320u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358B3Cu) [[unlikely]] return; }
L_00358B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00358B70; } }
    c.budget -= 1;
L_00358B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B50u);  if (depth < kMaxDepth) unit_0090(c, 170u, depth + 1u); else { c.pc = 0x00361710u; return; } if (c.pc != 0x00358B50u) [[unlikely]] return; }
L_00358B50:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B6Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358B6Cu) [[unlikely]] return; }
L_00358B6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00358B70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358B88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  goto L_00358BF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BB8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 138u, depth + 1u); else { c.pc = 0x003614D8u; return; } if (c.pc != 0x00358BB8u) [[unlikely]] return; }
L_00358BB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BC4u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 148u, depth + 1u); else { c.pc = 0x00361580u; return; } if (c.pc != 0x00358BC4u) [[unlikely]] return; }
L_00358BC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00358BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BF0u); st32((c.r[16].w[0] + 20u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_008E(c, 25u, depth + 1u); else { c.pc = 0x003582A8u; return; } if (c.pc != 0x00358BF0u) [[unlikely]] return; }
L_00358BF0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 1;
L_00358BF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00358C3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C08u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 138u, depth + 1u); else { c.pc = 0x003614D8u; return; } if (c.pc != 0x00358C08u) [[unlikely]] return; }
L_00358C08:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[17].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00358C3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 148u, depth + 1u); else { c.pc = 0x00361580u; return; } if (c.pc != 0x00358C1Cu) [[unlikely]] return; }
L_00358C1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C30u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 25u, depth + 1u); else { c.pc = 0x003582A8u; return; } if (c.pc != 0x00358C30u) [[unlikely]] return; }
L_00358C30:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00358C3C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C60u);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358C60u) [[unlikely]] return; }
L_00358C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C68u);  if (depth < kMaxDepth) unit_008E(c, 115u, depth + 1u); else { c.pc = 0x00358C78u; return; } if (c.pc != 0x00358C68u) [[unlikely]] return; }
L_00358C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003595D8; }
L_00358C78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C98u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x00358C98u) [[unlikely]] return; }
L_00358C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[2].w[0] + 27640u);
    c.budget -= 2;
L_00358CA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00358CB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 105u, depth + 1u); else { c.pc = 0x00358B88u; return; } if (c.pc != 0x00358CB4u) [[unlikely]] return; }
L_00358CB4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00358CB8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358CA0u | kUnwind; return; } goto L_00358CA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00358CD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CFCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358CFCu) [[unlikely]] return; }
L_00358CFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D0Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 123u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00358D0Cu) [[unlikely]] return; }
L_00358D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D14u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358D14u) [[unlikely]] return; }
L_00358D14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
L_00358D54:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D6Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358D6Cu) [[unlikely]] return; }
L_00358D6C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_00358D80; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 11272u);  if (t) { goto L_00358DD4; } }
L_00358D80:
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00358D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 85u, depth + 1u); else { c.pc = 0x00358998u; return; } if (c.pc != 0x00358D94u) [[unlikely]] return; }
L_00358D94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00358DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[18].w[0]);  if (t) { goto L_00358DE8; } }
    c.budget -= 1;
L_00358DA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00358DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00358DC4; } }
L_00358DB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[19].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00358DD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00358DC4:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00358DE8; } }
L_00358DD0:
    set32(c.r[4], c.r[4].w[0] - 11232u);
    c.budget -= 1;
L_00358DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358DDCu);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358DDCu) [[unlikely]] return; }
L_00358DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00358E28; } }
    c.budget -= 1;
L_00358DE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00358E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_00358E0C; } }
    c.budget -= 1;
L_00358E00:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  goto L_00358E0C; }
L_00358E0C:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x00356C58u; return; } if (c.pc != 0x00358E24u) [[unlikely]] return; }
L_00358E24:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00358E28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00358E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358E5Cu) [[unlikely]] return; }
L_00358E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 133u, depth + 1u); else { c.pc = 0x00358E80u; return; } if (c.pc != 0x00358E64u) [[unlikely]] return; }
L_00358E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E6Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358E6Cu) [[unlikely]] return; }
L_00358E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00358EA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E98u); set32(c.r[4], c.r[4].w[0] - 11192u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358E98u) [[unlikely]] return; }
L_00358E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00358EA4; } }
L_00358EA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_00358EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358EC4u) [[unlikely]] return; }
L_00358EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 139u, depth + 1u); else { c.pc = 0x00358EE8u; return; } if (c.pc != 0x00358ECCu) [[unlikely]] return; }
L_00358ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358ED4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358ED4u) [[unlikely]] return; }
L_00358ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358EE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 145u, depth + 1u); else { c.pc = 0x00358F60u; return; } if (c.pc != 0x00358EFCu) [[unlikely]] return; }
L_00358EFC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] + 2047u);
    set32(c.r[3], c.r[3].w[0] + 4094u);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358F28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358F3Cu) [[unlikely]] return; }
L_00358F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 145u, depth + 1u); else { c.pc = 0x00358F60u; return; } if (c.pc != 0x00358F44u) [[unlikely]] return; }
L_00358F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F4Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00358F4Cu) [[unlikely]] return; }
L_00358F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00358F88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F80u); set32(c.r[4], c.r[4].w[0] - 11152u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00358F80u) [[unlikely]] return; }
L_00358F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00358FC8; } }
L_00358F88:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63487ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358FA8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 319u, depth + 1u); else { c.pc = 0x00362648u; return; } if (c.pc != 0x00358FA8u) [[unlikely]] return; }
L_00358FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358FB0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 138u, depth + 1u); else { c.pc = 0x003614D8u; return; } if (c.pc != 0x00358FB0u) [[unlikely]] return; }
L_00358FB0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 5u);  if (t) { goto L_00358FC8; } }
L_00358FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358FC4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0090(c, 256u, depth + 1u); else { c.pc = 0x003621A8u; return; } if (c.pc != 0x00358FC4u) [[unlikely]] return; }
L_00358FC4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_00358FC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358FD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358FF4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00358FF4u) [[unlikely]] return; }
L_00358FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359000u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00359020u; return; } if (c.pc != 0x00359000u) [[unlikely]] return; }
L_00359000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359008u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00359008u) [[unlikely]] return; }
L_00359008:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00359050; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359040u); set32(c.r[4], c.r[4].w[0] - 11104u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00359040u) [[unlikely]] return; }
L_00359040:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0035905C; } }
    c.budget -= 1;
L_00359050:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
L_0035905C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00359084u) [[unlikely]] return; }
L_00359084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035908Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 160u, depth + 1u); else { c.pc = 0x003590A8u; return; } if (c.pc != 0x0035908Cu) [[unlikely]] return; }
L_0035908C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359094u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00359094u) [[unlikely]] return; }
L_00359094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003590A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003590C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590C0u); set32(c.r[4], c.r[4].w[0] - 11056u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x003590C0u) [[unlikely]] return; }
L_003590C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003590CC; } }
L_003590C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_003590CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003590D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x003590ECu) [[unlikely]] return; }
L_003590EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 166u, depth + 1u); else { c.pc = 0x00359110u; return; } if (c.pc != 0x003590F4u) [[unlikely]] return; }
L_003590F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590FCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x003590FCu) [[unlikely]] return; }
L_003590FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00359130; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359128u); set32(c.r[4], c.r[4].w[0] - 11008u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00359128u) [[unlikely]] return; }
L_00359128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00359134; } }
L_00359130:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_00359134:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00359160; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 10968u);  if (t) { goto L_003591A0; } }
L_00359160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28728u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00359180; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 10968u);  if (t) { goto L_003591A0; } }
L_00359180:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_0035919C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003591AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_0035919C:
    set32(c.r[4], c.r[4].w[0] - 10928u);
    c.budget -= 1;
L_003591A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003591A8u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x003591A8u) [[unlikely]] return; }
L_003591A8:
    set32(c.r[2], 0u - 3u);
    c.budget -= 1;
L_003591AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003591B8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003591ECu); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x003591ECu) [[unlikely]] return; }
L_003591EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359204u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 174u, depth + 1u); else { c.pc = 0x00359230u; return; } if (c.pc != 0x00359204u) [[unlikely]] return; }
L_00359204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035920Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x0035920Cu) [[unlikely]] return; }
L_0035920C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035924Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x003592E0u; return; } if (c.pc != 0x0035924Cu) [[unlikely]] return; }
L_0035924C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359258:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359294u); c.r[21].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00359294u) [[unlikely]] return; }
L_00359294:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003592B0u); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x003592E0u; return; } if (c.pc != 0x003592B0u) [[unlikely]] return; }
L_003592B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003592B8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x003592B8u) [[unlikely]] return; }
L_003592B8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003592E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359324u); c.r[23].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 168u, depth + 1u); else { c.pc = 0x00359140u; return; } if (c.pc != 0x00359324u) [[unlikely]] return; }
L_00359324:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_00359348; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0035940C; } }
    c.budget -= 1;
L_00359348:
    set32(c.r[4], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 28728u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 15u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld16((c.r[17].w[0] + 280u));  goto L_003593A8; }
    set32(c.r[16], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], c.r[17].w[0] + 284u);  if (t) { goto L_00359394; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00359378:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359378u | kUnwind; return; } goto L_00359378; } }
L_00359394:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003593E0; } }
    c.budget -= 1;
L_003593A8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], c.r[17].w[0] + 282u);  if (t) { goto L_003593D4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003593B8:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003593B8u | kUnwind; return; } goto L_003593B8; } }
L_003593D4:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
L_003593E0:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593F4u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003593F4u) [[unlikely]] return; }
L_003593F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 276u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0035940C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00359438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035944Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x0035944Cu) [[unlikely]] return; }
L_0035944C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 189u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x00359454u) [[unlikely]] return; }
L_00359454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035945Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x0035945Cu) [[unlikely]] return; }
L_0035945C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359470:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28728u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16u);  c.pc = t; return; }
L_00359498:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003594B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x003594B4u) [[unlikely]] return; }
L_003594B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003594C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 193u, depth + 1u); else { c.pc = 0x003594D8u; return; } if (c.pc != 0x003594C0u) [[unlikely]] return; }
L_003594C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003595D8; }
L_003594D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00359500; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 10888u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00359500:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359524u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00359524u) [[unlikely]] return; }
L_00359524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035952Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 198u, depth + 1u); else { c.pc = 0x00359548u; return; } if (c.pc != 0x0035952Cu) [[unlikely]] return; }
L_0035952C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359534u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x00359534u) [[unlikely]] return; }
L_00359534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00359570; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00359570; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0090(c, 314u, depth); }
L_00359570:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x003595D0u; return; } if (c.pc != 0x00359594u) [[unlikely]] return; }
L_00359594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035959Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 203u, depth + 1u); else { c.pc = 0x003595B8u; return; } if (c.pc != 0x0035959Cu) [[unlikely]] return; }
L_0035959C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 205u, depth + 1u); else { c.pc = 0x003595D8u; return; } if (c.pc != 0x003595A4u) [[unlikely]] return; }
L_003595A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003595B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0090(c, 266u, depth); }
L_003595D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003595D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003595E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595F0u);  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x003595F0u) [[unlikely]] return; }
L_003595F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595F8u);  if (depth < kMaxDepth) unit_008E(c, 209u, depth + 1u); else { c.pc = 0x00359608u; return; } if (c.pc != 0x003595F8u) [[unlikely]] return; }
L_003595F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_00359608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035961Cu);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035961Cu) [[unlikely]] return; }
L_0035961C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[2].w[0] - 26928u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_00359640; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_00359640:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035964Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035964Cu) [[unlikely]] return; }
L_0035964C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359658u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0093(c, 431u, depth + 1u); else { c.pc = 0x0036FFC0u; return; } if (c.pc != 0x00359658u) [[unlikely]] return; }
L_00359658:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359664u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00361F78u; return; } if (c.pc != 0x00359664u) [[unlikely]] return; }
L_00359664:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359670u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 223u, depth + 1u); else { c.pc = 0x00361ED0u; return; } if (c.pc != 0x00359670u) [[unlikely]] return; }
L_00359670:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035967Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 112u, depth + 1u); else { c.pc = 0x00358C50u; return; } if (c.pc != 0x0035967Cu) [[unlikely]] return; }
L_0035967C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359688u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 223u, depth + 1u); else { c.pc = 0x00361ED0u; return; } if (c.pc != 0x00359688u) [[unlikely]] return; }
L_00359688:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359694u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00361F78u; return; } if (c.pc != 0x00359694u) [[unlikely]] return; }
L_00359694:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003596A0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0093(c, 431u, depth + 1u); else { c.pc = 0x0036FFC0u; return; } if (c.pc != 0x003596A0u) [[unlikely]] return; }
L_003596A0:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003596B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003596C8u);  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x003596C8u) [[unlikely]] return; }
L_003596C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003596D0u);  if (depth < kMaxDepth) unit_008E(c, 222u, depth + 1u); else { c.pc = 0x003596E0u; return; } if (c.pc != 0x003596D0u) [[unlikely]] return; }
L_003596D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_003596E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003595E0u | kUnwind; return; } goto L_003595E0; }
L_00359748:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], c.r[5].w[0] >> 8);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00359778:
    set32(c.r[2], c.r[5].w[0] >> 24);
    set32(c.r[3], c.r[5].w[0] >> 16);
    set32(c.r[6], c.r[5].w[0] >> 8);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003597B8:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359878:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359898:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 60;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 16u), c.r[2].w[0]);  c.pc = t; return; }
L_00359988:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 16);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003599C0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003599C0:
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003599E0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003599E0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00359A00; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00359A00:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00359A20; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00359A20:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00359A40; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00359A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359A48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00359A78; } }
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_00359A78:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00359BDC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 4u);  if (t) { goto L_00359BDC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00359AC0; } }
    st32((c.r[6].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00359AC0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00359BDC; } }
    set32(c.r[3], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00359BDC; } }
    set32(c.r[18], c.r[18].w[0] - 6u);
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00359BE0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359AFCu); set32(c.r[18], c.r[18].w[0] - 16u);  if (depth < kMaxDepth) unit_008E(c, 225u, depth + 1u); else { c.pc = 0x003597B8u; return; } if (c.pc != 0x00359AFCu) [[unlikely]] return; }
L_00359AFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_00359B18; } }
    set32(c.r[17], c.r[17].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 12u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
L_00359B18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00359BDC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B30u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 226u, depth + 1u); else { c.pc = 0x00359878u; return; } if (c.pc != 0x00359B30u) [[unlikely]] return; }
L_00359B30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld16((c.r[19].w[0] + 14u));  if (t) { goto L_00359BD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00359B7C; } }
    set32(c.r[16], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_00359B58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B6Cu); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_008E(c, 227u, depth + 1u); else { c.pc = 0x00359898u; return; } if (c.pc != 0x00359B6Cu) [[unlikely]] return; }
L_00359B6C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld16((c.r[19].w[0] + 14u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359B58u | kUnwind; return; } goto L_00359B58; } }
L_00359B7C:
    set32(c.r[2], c.r[4].w[0] << 16);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[18], c.r[18].w[0] - c.r[3].w[0]);  if (t) { goto L_00359BD8; } }
    set32(c.r[16], c.r[19].w[0] + 36u);
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 2;
L_00359BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 12u);  if (t) { goto L_00359BD8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359BC4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_008E(c, 228u, depth + 1u); else { c.pc = 0x00359988u; return; } if (c.pc != 0x00359BC4u) [[unlikely]] return; }
L_00359BC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359BA8u | kUnwind; return; } goto L_00359BA8; } }
L_00359BD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359BDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00359BE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] - 10840u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C64u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008E(c, 224u, depth + 1u); else { c.pc = 0x00359778u; return; } if (c.pc != 0x00359C64u) [[unlikely]] return; }
L_00359C64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C74u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 224u, depth + 1u); else { c.pc = 0x00359778u; return; } if (c.pc != 0x00359C74u) [[unlikely]] return; }
L_00359C74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C84u); set32(c.r[17], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_008E(c, 223u, depth + 1u); else { c.pc = 0x00359748u; return; } if (c.pc != 0x00359C84u) [[unlikely]] return; }
L_00359C84:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    set32(c.r[3], 0u + 9u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 61u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_00359CA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359CA0u | kUnwind; return; } goto L_00359CA0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00359CC0:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359CC0u | kUnwind; return; } goto L_00359CC0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359CF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 2u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;  if (t) { goto L_00359D30; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00359D30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00359D60; } }
    set32(c.r[2], 0u - 128u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D48u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 223u, depth + 1u); else { c.pc = 0x00359748u; return; } if (c.pc != 0x00359D48u) [[unlikely]] return; }
L_00359D48:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 236u, depth + 1u); else { c.pc = 0x00359C00u; return; } if (c.pc != 0x00359D54u) [[unlikely]] return; }
L_00359D54:
    set32(c.r[2], 0u + 36u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00359D60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359D78:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 120u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 144u), c.r[31].d[0]);  if (t) { goto L_00359DA8; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_00359DC0; }
L_00359DA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DB4u); set32(c.r[4], c.r[4].w[0] - 10832u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00359DB4u) [[unlikely]] return; }
L_00359DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00359EC8; } }
    c.budget -= 1;
L_00359DC0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DCCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00359DCCu) [[unlikely]] return; }
L_00359DCC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00359DE0u) [[unlikely]] return; }
L_00359DE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DF4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_008E(c, 229u, depth + 1u); else { c.pc = 0x00359A48u; return; } if (c.pc != 0x00359DF4u) [[unlikely]] return; }
L_00359DF4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00359E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E0Cu); set32(c.r[4], c.r[4].w[0] - 10776u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00359E0Cu) [[unlikely]] return; }
L_00359E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00359EC8; } }
    c.budget -= 1;
L_00359E18:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 92u)));  goto L_00359E38; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E2Cu); set32(c.r[4], c.r[4].w[0] - 10712u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x00359E2Cu) [[unlikely]] return; }
L_00359E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00359EC8; } }
    c.budget -= 1;
L_00359E38:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00359E48; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00359E48:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 35u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 34u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 46u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[8].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[19].w[0] + 7u));
    sdr(c.r[2], (c.r[19].w[0]));
    sdl(c.r[3], (c.r[19].w[0] + 15u));
    sdr(c.r[3], (c.r[19].w[0] + 8u));
    sdl(c.r[4], (c.r[19].w[0] + 23u));
    sdr(c.r[4], (c.r[19].w[0] + 16u));
    sdl(c.r[5], (c.r[19].w[0] + 31u));
    sdr(c.r[5], (c.r[19].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 32;
L_00359EC8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00359EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00359F08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_00359F48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F58u);  if (depth < kMaxDepth) unit_0095(c, 128u, depth + 1u); else { c.pc = 0x003751E8u; return; } if (c.pc != 0x00359F58u) [[unlikely]] return; }
L_00359F58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359F68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 260u, depth + 1u); else { c.pc = 0x00359F98u; return; } if (c.pc != 0x00359F78u) [[unlikely]] return; }
L_00359F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 262u, depth + 1u); else { c.pc = 0x00359FB8u; return; } if (c.pc != 0x00359F80u) [[unlikely]] return; }
L_00359F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F88u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 254u, depth + 1u); else { c.pc = 0x00359F48u; return; } if (c.pc != 0x00359F88u) [[unlikely]] return; }
L_00359F88:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359F98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359FA8u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x00365130u; return; } if (c.pc != 0x00359FA8u) [[unlikely]] return; }
L_00359FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359FB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359FC8u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x003595E0u; return; } if (c.pc != 0x00359FC8u) [[unlikely]] return; }
L_00359FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359FD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[16].w[0] - 26904u)));
    set32(c.r[2], c.r[2].w[0] + 30408u);
    set32(c.r[3], c.r[3].w[0] - 10656u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] - 26904u);  goto L_0035A148; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A010u);  if (depth < kMaxDepth) unit_008D(c, 68u, depth + 1u); else { c.pc = 0x00354F08u; return; } if (c.pc != 0x0035A010u) [[unlikely]] return; }
L_0035A010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A018u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035A018u) [[unlikely]] return; }
L_0035A018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A020u);  if (depth < kMaxDepth) unit_0096(c, 225u, depth + 1u); else { c.pc = 0x0037A948u; return; } if (c.pc != 0x0035A020u) [[unlikely]] return; }
L_0035A020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A028u);  if (depth < kMaxDepth) unit_0096(c, 159u, depth + 1u); else { c.pc = 0x00379D40u; return; } if (c.pc != 0x0035A028u) [[unlikely]] return; }
L_0035A028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A030u);  if (depth < kMaxDepth) unit_0096(c, 91u, depth + 1u); else { c.pc = 0x00379328u; return; } if (c.pc != 0x0035A030u) [[unlikely]] return; }
L_0035A030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A038u);  if (depth < kMaxDepth) unit_008D(c, 102u, depth + 1u); else { c.pc = 0x003563F8u; return; } if (c.pc != 0x0035A038u) [[unlikely]] return; }
L_0035A038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A040u);  if (depth < kMaxDepth) unit_0090(c, 86u, depth + 1u); else { c.pc = 0x00360DE8u; return; } if (c.pc != 0x0035A040u) [[unlikely]] return; }
L_0035A040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A048u);  if (depth < kMaxDepth) unit_008F(c, 98u, depth + 1u); else { c.pc = 0x0035CFD0u; return; } if (c.pc != 0x0035A048u) [[unlikely]] return; }
L_0035A048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A050u);  if (depth < kMaxDepth) unit_008D(c, 125u, depth + 1u); else { c.pc = 0x00356708u; return; } if (c.pc != 0x0035A050u) [[unlikely]] return; }
L_0035A050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A058u);  if (depth < kMaxDepth) unit_008F(c, 69u, depth + 1u); else { c.pc = 0x0035CC48u; return; } if (c.pc != 0x0035A058u) [[unlikely]] return; }
L_0035A058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A060u);  if (depth < kMaxDepth) unit_0095(c, 165u, depth + 1u); else { c.pc = 0x00375740u; return; } if (c.pc != 0x0035A060u) [[unlikely]] return; }
L_0035A060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A068u);  if (depth < kMaxDepth) unit_0097(c, 102u, depth + 1u); else { c.pc = 0x0037CF50u; return; } if (c.pc != 0x0035A068u) [[unlikely]] return; }
L_0035A068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A078u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_008F(c, 71u, depth + 1u); else { c.pc = 0x0035CC78u; return; } if (c.pc != 0x0035A078u) [[unlikely]] return; }
L_0035A078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[4], c.r[4].w[0] - 24824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 159u, depth + 1u); else { c.pc = 0x00375678u; return; } if (c.pc != 0x0035A088u) [[unlikely]] return; }
L_0035A088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - 26872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A09Cu); set32(c.r[6], 0u + 3136u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0035A09Cu) [[unlikely]] return; }
L_0035A09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0A4u);  if (depth < kMaxDepth) unit_008E(c, 453u, depth + 1u); else { c.pc = 0x0035B8D0u; return; } if (c.pc != 0x0035A0A4u) [[unlikely]] return; }
L_0035A0A4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 24728u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0035A110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26892u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0035A110; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0E4u); set32(c.r[6], c.r[6].w[0] - 24680u);  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0037CA38u; return; } if (c.pc != 0x0035A0E4u) [[unlikely]] return; }
L_0035A0E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 24648u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0037C870u; return; } if (c.pc != 0x0035A0F8u) [[unlikely]] return; }
L_0035A0F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 24760u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 26884u), c.r[2].w[0]);
    c.budget -= 6;
L_0035A110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A118u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0037C870u; return; } if (c.pc != 0x0035A118u) [[unlikely]] return; }
L_0035A118:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 26896u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 26880u);
    set32(c.r[4], 0u + 60u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A13Cu); st32((c.r[3].w[0] - 26888u), 0u);  if (depth < kMaxDepth) unit_0091(c, 103u, depth + 1u); else { c.pc = 0x00364A40u; return; } if (c.pc != 0x0035A13Cu) [[unlikely]] return; }
L_0035A13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A144u);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035A144u) [[unlikely]] return; }
L_0035A144:
    set32(c.r[3], c.r[16].w[0] - 26904u);
    c.budget -= 1;
L_0035A148:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 26904u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00359FD8u | kUnwind; return; } goto L_00359FD8; }
L_0035A188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 26904u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0035A258; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[16].w[0] - 15540u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1BCu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0090(c, 432u, depth + 1u); else { c.pc = 0x003634E8u; return; } if (c.pc != 0x0035A1BCu) [[unlikely]] return; }
L_0035A1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1C4u);  if (depth < kMaxDepth) unit_008F(c, 70u, depth + 1u); else { c.pc = 0x0035CC60u; return; } if (c.pc != 0x0035A1C4u) [[unlikely]] return; }
L_0035A1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1CCu);  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003567E0u; return; } if (c.pc != 0x0035A1CCu) [[unlikely]] return; }
L_0035A1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1D4u);  if (depth < kMaxDepth) unit_0090(c, 88u, depth + 1u); else { c.pc = 0x00360E38u; return; } if (c.pc != 0x0035A1D4u) [[unlikely]] return; }
L_0035A1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1DCu);  if (depth < kMaxDepth) unit_0095(c, 171u, depth + 1u); else { c.pc = 0x003757C0u; return; } if (c.pc != 0x0035A1DCu) [[unlikely]] return; }
L_0035A1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1E4u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035A1E4u) [[unlikely]] return; }
L_0035A1E4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 66u, depth + 1u); else { c.pc = 0x0037C978u; return; } if (c.pc != 0x0035A1F0u) [[unlikely]] return; }
L_0035A1F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 26884u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A200u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0097(c, 66u, depth + 1u); else { c.pc = 0x0037C978u; return; } if (c.pc != 0x0035A200u) [[unlikely]] return; }
L_0035A200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 26896u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A210u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 66u, depth + 1u); else { c.pc = 0x0037C978u; return; } if (c.pc != 0x0035A210u) [[unlikely]] return; }
L_0035A210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A218u);  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0037CF90u; return; } if (c.pc != 0x0035A218u) [[unlikely]] return; }
L_0035A218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A220u);  if (depth < kMaxDepth) unit_008F(c, 100u, depth + 1u); else { c.pc = 0x0035D000u; return; } if (c.pc != 0x0035A220u) [[unlikely]] return; }
L_0035A220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A228u);  if (depth < kMaxDepth) unit_008D(c, 104u, depth + 1u); else { c.pc = 0x00356430u; return; } if (c.pc != 0x0035A228u) [[unlikely]] return; }
L_0035A228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A230u);  if (depth < kMaxDepth) unit_0096(c, 97u, depth + 1u); else { c.pc = 0x003793A8u; return; } if (c.pc != 0x0035A230u) [[unlikely]] return; }
L_0035A230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A238u);  if (depth < kMaxDepth) unit_0096(c, 165u, depth + 1u); else { c.pc = 0x00379DC0u; return; } if (c.pc != 0x0035A238u) [[unlikely]] return; }
L_0035A238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A240u);  if (depth < kMaxDepth) unit_0096(c, 231u, depth + 1u); else { c.pc = 0x0037A9C8u; return; } if (c.pc != 0x0035A240u) [[unlikely]] return; }
L_0035A240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A248u);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035A248u) [[unlikely]] return; }
L_0035A248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A250u);  if (depth < kMaxDepth) unit_008D(c, 69u, depth + 1u); else { c.pc = 0x00354F38u; return; } if (c.pc != 0x0035A250u) [[unlikely]] return; }
L_0035A250:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0035A258:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A268:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2A4u); set32(c.r[16], c.r[16].w[0] - 22712u);  if (depth < kMaxDepth) unit_0090(c, 26u, depth + 1u); else { c.pc = 0x00360398u; return; } if (c.pc != 0x0035A2A4u) [[unlikely]] return; }
L_0035A2A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 23736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2B8u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x0035A2B8u) [[unlikely]] return; }
L_0035A2B8:
    set32(c.r[5], 0u + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2C8u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 102u, depth + 1u); else { c.pc = 0x00379428u; return; } if (c.pc != 0x0035A2C8u) [[unlikely]] return; }
L_0035A2C8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2D8u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 102u, depth + 1u); else { c.pc = 0x00379428u; return; } if (c.pc != 0x0035A2D8u) [[unlikely]] return; }
L_0035A2D8:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2F0u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 30u, depth + 1u); else { c.pc = 0x003603F8u; return; } if (c.pc != 0x0035A2F0u) [[unlikely]] return; }
L_0035A2F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 60u, depth + 1u); else { c.pc = 0x003609A8u; return; } if (c.pc != 0x0035A308u) [[unlikely]] return; }
L_0035A308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A310u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 41u, depth + 1u); else { c.pc = 0x00360638u; return; } if (c.pc != 0x0035A310u) [[unlikely]] return; }
L_0035A310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A318u);  if (depth < kMaxDepth) unit_0090(c, 78u, depth + 1u); else { c.pc = 0x00360D00u; return; } if (c.pc != 0x0035A318u) [[unlikely]] return; }
L_0035A318:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[19], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 1024u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A338u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A338u) [[unlikely]] return; }
L_0035A338:
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0035A368; }
    c.budget -= 1;
L_0035A348:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A348u | kUnwind; return; } goto L_0035A348; } }
    c.budget -= 1;
L_0035A368:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A380u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A380u) [[unlikely]] return; }
L_0035A380:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0035A3B8; } }
    c.budget -= 1;
L_0035A398:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A398u | kUnwind; return; } goto L_0035A398; } }
    c.budget -= 1;
L_0035A3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3C0u); set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0035A3C0u) [[unlikely]] return; }
L_0035A3C0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3D8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A3D8u) [[unlikely]] return; }
L_0035A3D8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A3F0u) [[unlikely]] return; }
L_0035A3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 48u, depth + 1u); else { c.pc = 0x00360760u; return; } if (c.pc != 0x0035A3F8u) [[unlikely]] return; }
L_0035A3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 37u, depth + 1u); else { c.pc = 0x003605C8u; return; } if (c.pc != 0x0035A400u) [[unlikely]] return; }
L_0035A400:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A410u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A410u) [[unlikely]] return; }
L_0035A410:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A424u) [[unlikely]] return; }
L_0035A424:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A438u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A438u) [[unlikely]] return; }
L_0035A438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A440u);  if (depth < kMaxDepth) unit_0090(c, 28u, depth + 1u); else { c.pc = 0x003603C8u; return; } if (c.pc != 0x0035A440u) [[unlikely]] return; }
L_0035A440:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0035A468:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A484u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0035A484u) [[unlikely]] return; }
L_0035A484:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A490u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0035A4A8u; return; } if (c.pc != 0x0035A490u) [[unlikely]] return; }
L_0035A490:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_0035A4A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0035A528; }
L_0035A528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_0035A568; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 10576u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_0035A568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A570u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 116u, depth + 1u); else { c.pc = 0x00374EE0u; return; } if (c.pc != 0x0035A570u) [[unlikely]] return; }
L_0035A570:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 10528u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0035A588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A588u);  if (depth < kMaxDepth) unit_008D(c, 110u, depth + 1u); else { c.pc = 0x003564E8u; return; } if (c.pc != 0x0035A588u) [[unlikely]] return; }
L_0035A588:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5BCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0035A5BCu) [[unlikely]] return; }
L_0035A5BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5CCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0035A5E8u; return; } if (c.pc != 0x0035A5CCu) [[unlikely]] return; }
L_0035A5CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_0035A5E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_0035A630; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A624u); set32(c.r[4], c.r[4].w[0] - 10496u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x0035A624u) [[unlikely]] return; }
L_0035A624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035A69C; } }
    c.budget -= 1;
L_0035A630:
    set32(c.r[6], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A644u); set32(c.r[9], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_008E(c, 176u, depth + 1u); else { c.pc = 0x00359258u; return; } if (c.pc != 0x0035A644u) [[unlikely]] return; }
L_0035A644:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 16u);  if (t) { goto L_0035A680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A660u);  if (depth < kMaxDepth) unit_008E(c, 185u, depth + 1u); else { c.pc = 0x00359438u; return; } if (c.pc != 0x0035A660u) [[unlikely]] return; }
L_0035A660:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A678u); set32(c.r[8], ld32((c.r[29].w[0] + 24u)));  if (depth < kMaxDepth) unit_0095(c, 116u, depth + 1u); else { c.pc = 0x00374EE0u; return; } if (c.pc != 0x0035A678u) [[unlikely]] return; }
L_0035A678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035A69C; } }
L_0035A680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A688u);  if (depth < kMaxDepth) unit_008D(c, 118u, depth + 1u); else { c.pc = 0x00356660u; return; } if (c.pc != 0x0035A688u) [[unlikely]] return; }
L_0035A688:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 10448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A698u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 110u, depth + 1u); else { c.pc = 0x003564E8u; return; } if (c.pc != 0x0035A698u) [[unlikely]] return; }
L_0035A698:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0035A69C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035A6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A6C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0035A6C4u) [[unlikely]] return; }
L_0035A6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0035A6E0u; return; } if (c.pc != 0x0035A6CCu) [[unlikely]] return; }
L_0035A6CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_0035A6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_0035A718; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 10408u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_0035A718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A720u);  if (depth < kMaxDepth) unit_0090(c, 465u, depth + 1u); else { c.pc = 0x00363838u; return; } if (c.pc != 0x0035A720u) [[unlikely]] return; }
L_0035A720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A728u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035A728u) [[unlikely]] return; }
L_0035A728:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x003635B0u; return; } if (c.pc != 0x0035A734u) [[unlikely]] return; }
L_0035A734:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035A748u) [[unlikely]] return; }
L_0035A748:
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A760u); set32(c.r[5], c.r[5].w[0] << 11);  if (depth < kMaxDepth) unit_0095(c, 150u, depth + 1u); else { c.pc = 0x00375500u; return; } if (c.pc != 0x0035A760u) [[unlikely]] return; }
L_0035A760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A768u);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035A768u) [[unlikely]] return; }
L_0035A768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 122u, depth + 1u); else { c.pc = 0x003750B8u; return; } if (c.pc != 0x0035A770u) [[unlikely]] return; }
L_0035A770:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0091(c, 270u, depth); }
L_0035A800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A81Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0035A81Cu) [[unlikely]] return; }
L_0035A81C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A828u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 358u, depth + 1u); else { c.pc = 0x0035A840u; return; } if (c.pc != 0x0035A828u) [[unlikely]] return; }
L_0035A828:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_0035A840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0035A8C0; }
L_0035A8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0035A8F8; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 148u)));  goto L_0035A920; }
L_0035A8F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 10312u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_0035A920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 124u, depth + 1u); else { c.pc = 0x00375120u; return; } if (c.pc != 0x0035A928u) [[unlikely]] return; }
L_0035A928:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A93Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 331u, depth + 1u); else { c.pc = 0x0035A528u; return; } if (c.pc != 0x0035A93Cu) [[unlikely]] return; }
L_0035A93C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A948u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 155u, depth + 1u); else { c.pc = 0x00375610u; return; } if (c.pc != 0x0035A948u) [[unlikely]] return; }
L_0035A948:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
L_0035A954:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6E0u | kUnwind; return; } goto L_0035A6E0; }
L_0035A970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A994u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0035A994u) [[unlikely]] return; }
L_0035A994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A9A4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 366u, depth + 1u); else { c.pc = 0x0035A9C0u; return; } if (c.pc != 0x0035A9A4u) [[unlikely]] return; }
L_0035A9A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FA0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 73u, depth); }
L_0035A9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0035AA00; } }
    c.budget -= 2;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_0035AA04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 148u)));  goto L_0035AA28; }
L_0035AA00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_0035AA04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 10256u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00356490u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 107u, depth); }
L_0035AA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 124u, depth + 1u); else { c.pc = 0x00375120u; return; } if (c.pc != 0x0035AA30u) [[unlikely]] return; }
L_0035AA30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0035A5E8u; return; } if (c.pc != 0x0035AA40u) [[unlikely]] return; }
L_0035AA40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 155u, depth + 1u); else { c.pc = 0x00375610u; return; } if (c.pc != 0x0035AA4Cu) [[unlikely]] return; }
L_0035AA4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6E0u | kUnwind; return; } goto L_0035A6E0; }
L_0035AA78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 72u, depth + 1u); else { c.pc = 0x00354F98u; return; } if (c.pc != 0x0035AA8Cu) [[unlikely]] return; }
L_0035AA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 374u, depth + 1u); else { c.pc = 0x0035AAB0u; return; } if (c.pc != 0x0035AA94u) [[unlikely]] return; }
L_0035AA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA9Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 73u, depth + 1u); else { c.pc = 0x00354FA0u; return; } if (c.pc != 0x0035AA9Cu) [[unlikely]] return; }
L_0035AA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035AAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0035AAD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AAC8u); set32(c.r[4], c.r[4].w[0] - 10208u);  if (depth < kMaxDepth) unit_008D(c, 107u, depth + 1u); else { c.pc = 0x00356490u; return; } if (c.pc != 0x0035AAC8u) [[unlikely]] return; }
L_0035AAC8:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035AAD8:
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0095(c, 133u, depth); }
L_0035AB58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] - 22576u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0035ABBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB84u); c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (depth < kMaxDepth) unit_0001(c, 111u, depth + 1u); else { c.pc = 0x00124E50u; return; } if (c.pc != 0x0035AB84u) [[unlikely]] return; }
L_0035AB84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 22624u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB9Cu); set32(c.r[16], c.r[16].w[0] - 22488u);  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035AB9Cu) [[unlikely]] return; }
L_0035AB9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 8384u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABB4u); st32((c.r[5].w[0] + 8388u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035ABB4u) [[unlikely]] return; }
L_0035ABB4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_0035ABBC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035ABE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] - 22576u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0035AC30; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[16].w[0] - 22488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC18u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 430u, depth + 1u); else { c.pc = 0x0035B3B8u; return; } if (c.pc != 0x0035AC18u) [[unlikely]] return; }
L_0035AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC20u); set32(c.r[3], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 111u, depth + 1u); else { c.pc = 0x00124E50u; return; } if (c.pc != 0x0035AC20u) [[unlikely]] return; }
L_0035AC20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8384u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035AC30u) [[unlikely]] return; }
L_0035AC30:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[17].w[0]), 0u);  goto L_0035AC3C; }
L_0035AC3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035AC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0035AD10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 22624u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 22572u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x0BEB0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[18].d[0] | 49663ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACA8u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035ACA8u) [[unlikely]] return; }
L_0035ACA8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035ACB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 423u, depth + 1u); else { c.pc = 0x0035B2E8u; return; } if (c.pc != 0x0035ACB8u) [[unlikely]] return; }
L_0035ACB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035ACC0u) [[unlikely]] return; }
L_0035ACC0:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0035ACE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACB0u | kUnwind; return; } goto L_0035ACB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACE0u); set32(c.r[4], c.r[20].w[0] - 10064u);  if (depth < kMaxDepth) unit_0097(c, 40u, depth + 1u); else { c.pc = 0x0037C608u; return; } if (c.pc != 0x0035ACE0u) [[unlikely]] return; }
L_0035ACE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DF0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 107u, depth); }
L_0035AD10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035AD14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035AD38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 22468u);
    set32(c.r[5], ld32((c.r[3].w[0] - 22600u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
L_0035AD54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AC50u | kUnwind; return; } goto L_0035AC50; }
L_0035AD88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 22544u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
L_0035AD98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[3].w[0]), c.r[2].d[0]);  c.pc = t; return; }
L_0035ADA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22456u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  goto L_0035ADDC; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0035ADC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ADD0u);  if (depth < kMaxDepth) unit_008E(c, 393u, depth + 1u); else { c.pc = 0x0035AD88u; return; } if (c.pc != 0x0035ADD0u) [[unlikely]] return; }
L_0035ADD0:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ADC8u | kUnwind; return; } goto L_0035ADC8; } }
L_0035ADDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 22448u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 103u, depth); }
L_0035AE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[7], c.r[2].w[0] - 22424u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[7].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035AF60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[19], c.r[2].w[0] - 22528u);
    set32(c.r[22], c.r[3].w[0] - 22468u);
    set32(c.r[18], c.r[4].w[0] - 22344u);
    set32(c.r[21], c.r[5].w[0] - 22464u);
    set32(c.r[17], c.r[6].w[0] - 22568u);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
L_0035AEF8:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF0Cu); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_008E(c, 430u, depth + 1u); else { c.pc = 0x0035B3B8u; return; } if (c.pc != 0x0035AF0Cu) [[unlikely]] return; }
L_0035AF0C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035AF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF20u);  if (depth < kMaxDepth) unit_008F(c, 50u, depth + 1u); else { c.pc = 0x0035C880u; return; } if (c.pc != 0x0035AF20u) [[unlikely]] return; }
L_0035AF20:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF2Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 451u, depth + 1u); else { c.pc = 0x0035B7F0u; return; } if (c.pc != 0x0035AF2Cu) [[unlikely]] return; }
L_0035AF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0035AF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF3Cu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_008E(c, 430u, depth + 1u); else { c.pc = 0x0035B3B8u; return; } if (c.pc != 0x0035AF3Cu) [[unlikely]] return; }
L_0035AF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF44u);  if (depth < kMaxDepth) unit_008F(c, 23u, depth + 1u); else { c.pc = 0x0035C2D0u; return; } if (c.pc != 0x0035AF44u) [[unlikely]] return; }
L_0035AF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF4Cu); st32((c.r[17].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0097(c, 91u, depth + 1u); else { c.pc = 0x0037CDF0u; return; } if (c.pc != 0x0035AF4Cu) [[unlikely]] return; }
L_0035AF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF54u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_008E(c, 426u, depth + 1u); else { c.pc = 0x0035B338u; return; } if (c.pc != 0x0035AF54u) [[unlikely]] return; }
L_0035AF54:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AEF8u | kUnwind; return; } goto L_0035AEF8; } }
L_0035AF60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 22416u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 103u, depth); }
L_0035AF98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[21].w[0] - 22408u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035B054; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[20], c.r[2].w[0] - 22520u);
    set32(c.r[19], c.r[3].w[0] - 22560u);
    set32(c.r[17], c.r[4].w[0] - 22348u);
    set32(c.r[22], 0u + 1u);
    c.r[18].d[0] = c.r[18].d[0] | 224ull;
    c.budget -= 10;
L_0035AFF8:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[19].w[0]), c.r[22].w[0]);  if (t) { goto L_0035B018; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.budget -= 2;
L_0035B018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B020u);  if (depth < kMaxDepth) unit_0097(c, 92u, depth + 1u); else { c.pc = 0x0037CE20u; return; } if (c.pc != 0x0035B020u) [[unlikely]] return; }
L_0035B020:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st64((c.r[18].w[0]), 0ull);  goto L_0035B02C; }
L_0035B02C:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[21].w[0] - 22408u);
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  goto L_0035B054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B048u);  if (depth < kMaxDepth) unit_008E(c, 426u, depth + 1u); else { c.pc = 0x0035B338u; return; } if (c.pc != 0x0035B048u) [[unlikely]] return; }
L_0035B048:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AFF8u | kUnwind; return; } goto L_0035AFF8; } }
L_0035B054:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 22400u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 103u, depth); }
L_0035B088:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], c.r[2].w[0] - 22392u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035B188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[20], c.r[2].w[0] - 22512u);
    set32(c.r[19], c.r[3].w[0] - 22556u);
    set32(c.r[18], c.r[4].w[0] - 22572u);
    set32(c.r[23], c.r[5].w[0] - 22344u);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 11;
L_0035B0F0:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B104u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0097(c, 94u, depth + 1u); else { c.pc = 0x0037CE50u; return; } if (c.pc != 0x0035B104u) [[unlikely]] return; }
L_0035B104:
    st32((c.r[19].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0035B120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B120u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_008E(c, 426u, depth + 1u); else { c.pc = 0x0035B338u; return; } if (c.pc != 0x0035B120u) [[unlikely]] return; }
L_0035B120:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0035B17C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B130u);  if (depth < kMaxDepth) unit_008E(c, 451u, depth + 1u); else { c.pc = 0x0035B7F0u; return; } if (c.pc != 0x0035B130u) [[unlikely]] return; }
L_0035B130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[16], c.r[21].w[0] - 22464u);  if (t) { goto L_0035B158; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B144u);  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035B144u) [[unlikely]] return; }
L_0035B144:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0035B158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B158u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 423u, depth + 1u); else { c.pc = 0x0035B2E8u; return; } if (c.pc != 0x0035B158u) [[unlikely]] return; }
L_0035B158:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0035B174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B170u);  if (depth < kMaxDepth) unit_008F(c, 50u, depth + 1u); else { c.pc = 0x0035C880u; return; } if (c.pc != 0x0035B170u) [[unlikely]] return; }
L_0035B170:
    st32((c.r[23].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_0035B174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B17Cu);  if (depth < kMaxDepth) unit_008E(c, 426u, depth + 1u); else { c.pc = 0x0035B338u; return; } if (c.pc != 0x0035B17Cu) [[unlikely]] return; }
L_0035B17C:
    c.r[2].d[0] = ld64((c.r[22].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B0F0u | kUnwind; return; } goto L_0035B0F0; } }
L_0035B188:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 22384u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 103u, depth); }
L_0035B298:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0035B2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2B4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 115u, depth + 1u); else { c.pc = 0x00124E70u; return; } if (c.pc != 0x0035B2B4u) [[unlikely]] return; }
L_0035B2B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_0035B2D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035B2DC; } }
L_0035B2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2D8u);  if (depth < kMaxDepth) unit_0001(c, 265u, depth + 1u); else { c.pc = 0x00125E28u; return; } if (c.pc != 0x0035B2D8u) [[unlikely]] return; }
L_0035B2D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035B2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B2E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0035B328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B304u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 113u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x0035B304u) [[unlikely]] return; }
L_0035B304:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_0035B320; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035B32C; } }
L_0035B320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B328u);  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035B328u) [[unlikely]] return; }
L_0035B328:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035B32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124E80u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 117u, depth); }
L_0035B350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0035B39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B374u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 113u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x0035B374u) [[unlikely]] return; }
L_0035B374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_0035B390; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035B3A0; } }
L_0035B390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B398u);  if (depth < kMaxDepth) unit_0001(c, 127u, depth + 1u); else { c.pc = 0x00124EF0u; return; } if (c.pc != 0x0035B398u) [[unlikely]] return; }
L_0035B398:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035B39C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035B3A0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035B3B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0035B400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3DCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 113u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x0035B3DCu) [[unlikely]] return; }
L_0035B3DC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 12u);  if (t) { goto L_0035B400; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0035B404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 123u, depth + 1u); else { c.pc = 0x00124ED0u; return; } if (c.pc != 0x0035B3FCu) [[unlikely]] return; }
L_0035B3FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035B400:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035B404:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035B418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 21088u);
    set32(c.r[3], c.r[3].w[0] - 22336u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[2], c.r[2].w[0] - 16272u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B464u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 97u, depth + 1u); else { c.pc = 0x00124D60u; return; } if (c.pc != 0x0035B464u) [[unlikely]] return; }
L_0035B464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] - 22488u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B480u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0035B480u) [[unlikely]] return; }
L_0035B480:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035B4A0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B498u);  if (depth < kMaxDepth) unit_008E(c, 430u, depth + 1u); else { c.pc = 0x0035B3B8u; return; } if (c.pc != 0x0035B498u) [[unlikely]] return; }
L_0035B498:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 2;
L_0035B4A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4ACu); set32(c.r[5], ld32((c.r[2].w[0] - 22620u)));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035B4ACu) [[unlikely]] return; }
L_0035B4AC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 16192u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] - 20848u);
    set32(c.r[2], c.r[2].w[0] - 16272u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - 22480u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5CCu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 97u, depth + 1u); else { c.pc = 0x00124D60u; return; } if (c.pc != 0x0035B5CCu) [[unlikely]] return; }
L_0035B5CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5E0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0035B5E0u) [[unlikely]] return; }
L_0035B5E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5F0u); set32(c.r[5], ld32((c.r[2].w[0] - 22612u)));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035B5F0u) [[unlikely]] return; }
L_0035B5F0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 12096u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] - 20584u);
    set32(c.r[2], c.r[2].w[0] - 16272u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - 22476u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B654u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 97u, depth + 1u); else { c.pc = 0x00124D60u; return; } if (c.pc != 0x0035B654u) [[unlikely]] return; }
L_0035B654:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B668u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0035B668u) [[unlikely]] return; }
L_0035B668:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B678u); set32(c.r[5], ld32((c.r[2].w[0] - 22608u)));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035B678u) [[unlikely]] return; }
L_0035B678:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 8000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8192u);
    set32(c.r[5], c.r[5].w[0] - 20344u);
    set32(c.r[2], c.r[2].w[0] - 16272u);
    set32(c.r[16], c.r[16].w[0] - 22468u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B6DCu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 97u, depth + 1u); else { c.pc = 0x00124D60u; return; } if (c.pc != 0x0035B6DCu) [[unlikely]] return; }
L_0035B6DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B6F0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0035B6F0u) [[unlikely]] return; }
L_0035B6F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B700u); set32(c.r[5], ld32((c.r[2].w[0] - 22600u)));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035B700u) [[unlikely]] return; }
L_0035B700:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B70Cu);  if (depth < kMaxDepth) unit_008E(c, 430u, depth + 1u); else { c.pc = 0x0035B3B8u; return; } if (c.pc != 0x0035B70Cu) [[unlikely]] return; }
L_0035B70C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B7F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 22632u)));  c.pc = t; return; }
L_0035B800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 90u, depth); }
L_0035B8D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22636u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0035B8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 79u, depth); }
L_0035B8F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22640u);
    set32(c.r[5], ld32((c.r[18].w[0] - 22636u)));
    set32(c.r[3], c.r[3].w[0] - 22548u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 16;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22636u);  goto L_0035BA64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B940u);  if (depth < kMaxDepth) unit_0097(c, 102u, depth + 1u); else { c.pc = 0x0037CF50u; return; } if (c.pc != 0x0035B940u) [[unlikely]] return; }
L_0035B940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B950u); set32(c.r[4], c.r[4].w[0] - 21672u);  if (depth < kMaxDepth) unit_0097(c, 81u, depth + 1u); else { c.pc = 0x0037CC38u; return; } if (c.pc != 0x0035B950u) [[unlikely]] return; }
L_0035B950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[4], c.r[4].w[0] - 21536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 82u, depth + 1u); else { c.pc = 0x0037CC50u; return; } if (c.pc != 0x0035B960u) [[unlikely]] return; }
L_0035B960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 30416u);
    set32(c.r[3], c.r[3].w[0] + 30424u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_0035B9C0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 25u);
    set32(c.r[4], c.r[17].w[0] - 22624u);
    set32(c.r[3], 0u + 24u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 18u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0035B9F8; } }
L_0035B9C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[17].w[0] - 22624u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
L_0035B9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA00u); c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (depth < kMaxDepth) unit_0001(c, 111u, depth + 1u); else { c.pc = 0x00124E50u; return; } if (c.pc != 0x0035BA00u) [[unlikely]] return; }
L_0035BA00:
    set32(c.r[16], c.r[16].w[0] - 22472u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA14u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 113u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x0035BA14u) [[unlikely]] return; }
L_0035BA14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA24u); st32((c.r[3].w[0] + 8392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 433u, depth + 1u); else { c.pc = 0x0035B418u; return; } if (c.pc != 0x0035BA24u) [[unlikely]] return; }
L_0035BA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA2Cu);  if (depth < kMaxDepth) unit_008E(c, 438u, depth + 1u); else { c.pc = 0x0035B578u; return; } if (c.pc != 0x0035BA2Cu) [[unlikely]] return; }
L_0035BA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA34u);  if (depth < kMaxDepth) unit_008E(c, 442u, depth + 1u); else { c.pc = 0x0035B600u; return; } if (c.pc != 0x0035BA34u) [[unlikely]] return; }
L_0035BA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA3Cu);  if (depth < kMaxDepth) unit_008E(c, 446u, depth + 1u); else { c.pc = 0x0035B688u; return; } if (c.pc != 0x0035BA3Cu) [[unlikely]] return; }
L_0035BA3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] - 22624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA4Cu); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BA4Cu) [[unlikely]] return; }
L_0035BA4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 21192u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0037CB60u; return; } if (c.pc != 0x0035BA60u) [[unlikely]] return; }
L_0035BA60:
    set32(c.r[3], c.r[18].w[0] - 22636u);
    c.budget -= 1;
L_0035BA64:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035BA88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 22456u);
    set32(c.r[4], c.r[4].w[0] - 22440u);
    set32(c.r[5], c.r[5].w[0] - 22424u);
    set32(c.r[6], c.r[6].w[0] - 22408u);
    set32(c.r[7], c.r[7].w[0] - 22392u);
    set32(c.r[8], c.r[8].w[0] - 22376u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st64((c.r[5].w[0]), c.r[2].d[0]);
    st64((c.r[6].w[0]), c.r[2].d[0]);
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[8].w[0]), c.r[2].d[0]);  c.pc = t; return; }
L_0035BAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 22636u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0035BB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB00u);  if (depth < kMaxDepth) unit_008E(c, 467u, depth + 1u); else { c.pc = 0x0035BA88u; return; } if (c.pc != 0x0035BB00u) [[unlikely]] return; }
L_0035BB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB08u);  if (depth < kMaxDepth) unit_008E(c, 482u, depth + 1u); else { c.pc = 0x0035BC40u; return; } if (c.pc != 0x0035BB08u) [[unlikely]] return; }
L_0035BB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB10u);  if (depth < kMaxDepth) unit_008E(c, 492u, depth + 1u); else { c.pc = 0x0035BDE0u; return; } if (c.pc != 0x0035BB10u) [[unlikely]] return; }
L_0035BB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB18u);  if (depth < kMaxDepth) unit_008E(c, 487u, depth + 1u); else { c.pc = 0x0035BD10u; return; } if (c.pc != 0x0035BB18u) [[unlikely]] return; }
L_0035BB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB20u);  if (depth < kMaxDepth) unit_008E(c, 503u, depth + 1u); else { c.pc = 0x0035BFE0u; return; } if (c.pc != 0x0035BB20u) [[unlikely]] return; }
L_0035BB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 22472u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8392u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB38u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BB38u) [[unlikely]] return; }
L_0035BB38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 81u, depth + 1u); else { c.pc = 0x0037CC38u; return; } if (c.pc != 0x0035BB44u) [[unlikely]] return; }
L_0035BB44:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 82u, depth + 1u); else { c.pc = 0x0037CC50u; return; } if (c.pc != 0x0035BB50u) [[unlikely]] return; }
L_0035BB50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 104u, depth); }
L_0035BB60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035BB70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] - 22368u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BBF8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - 22376u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] - 22464u);
    c.budget -= 6;
L_0035BBC0:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBD0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BBD0u) [[unlikely]] return; }
L_0035BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBD8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035BBD8u) [[unlikely]] return; }
L_0035BBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBE0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035BBE0u) [[unlikely]] return; }
L_0035BBE0:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22368u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BBC0u | kUnwind; return; } goto L_0035BBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035BC04; } }
    c.budget -= 1;
L_0035BBF8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[22].w[0] - 22368u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0035BC04:
    set32(c.r[3], c.r[21].w[0] - 22376u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] - 22464u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035BC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] - 22384u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BCC8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - 22392u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] - 22468u);
    c.budget -= 6;
L_0035BC90:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCA0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BCA0u) [[unlikely]] return; }
L_0035BCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCA8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035BCA8u) [[unlikely]] return; }
L_0035BCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCB0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035BCB0u) [[unlikely]] return; }
L_0035BCB0:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BC90u | kUnwind; return; } goto L_0035BC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035BCD4; } }
    c.budget -= 1;
L_0035BCC8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[22].w[0] - 22384u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0035BCD4:
    set32(c.r[3], c.r[21].w[0] - 22392u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] - 22468u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035BD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] - 22416u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BD98; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - 22424u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] - 22480u);
    c.budget -= 6;
L_0035BD60:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD70u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BD70u) [[unlikely]] return; }
L_0035BD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD78u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035BD78u) [[unlikely]] return; }
L_0035BD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD80u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035BD80u) [[unlikely]] return; }
L_0035BD80:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22416u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BD60u | kUnwind; return; } goto L_0035BD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035BDA4; } }
    c.budget -= 1;
L_0035BD98:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[22].w[0] - 22416u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0035BDA4:
    set32(c.r[3], c.r[21].w[0] - 22424u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] - 22480u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035BDE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22560u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BE50; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[21].w[0] - 22400u);
    c.budget -= 2;
L_0035BE28:
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BE28u | kUnwind; return; } goto L_0035BE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BECC; } }
    c.budget -= 1;
L_0035BE50:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 22340u);
    set32(c.r[4], c.r[21].w[0] - 22400u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BEC8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[23].w[0] - 22408u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[22].w[0] - 22476u);
    c.budget -= 7;
L_0035BE88:
    st64((c.r[19].w[0]), c.r[18].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE98u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BE98u) [[unlikely]] return; }
L_0035BE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BEA0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035BEA0u) [[unlikely]] return; }
L_0035BEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BEA8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035BEA8u) [[unlikely]] return; }
L_0035BEA8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] - 22400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BE88u | kUnwind; return; } goto L_0035BE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));  if (t) { goto L_0035BED4; } }
L_0035BEC8:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 1;
L_0035BECC:
    set32(c.r[2], c.r[21].w[0] - 22400u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 2;
L_0035BED4:
    set32(c.r[3], c.r[23].w[0] - 22408u);
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[22].w[0] - 22476u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035BF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] - 22432u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035BF98; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - 22440u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] - 22484u);
    c.budget -= 6;
L_0035BF60:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF70u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035BF70u) [[unlikely]] return; }
L_0035BF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF78u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035BF78u) [[unlikely]] return; }
L_0035BF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF80u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035BF80u) [[unlikely]] return; }
L_0035BF80:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22432u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BF60u | kUnwind; return; } goto L_0035BF60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035BFA4; } }
    c.budget -= 1;
L_0035BF98:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[22].w[0] - 22432u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0035BFA4:
    set32(c.r[3], c.r[21].w[0] - 22440u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] - 22484u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035BFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] - 22448u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    [[clang::musttail]] return unit_008F(c, 1u, depth);
}

}
